/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_ups_modify.h
* @brief for modifying data in update server
*
* modified by maoxiaoxiao:modify functions to update data in index table
*
* @version __DaSE_VERSION
* @author maoxiaoxiao <51151500034@ecnu.edu.cn>
* @date 2016_01_21
*/

/**
 * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * ob_ups_modify.h
 *
 * Authors:
 *   Li Kai <yubai.lk@alipay.com>
 *
 */
#ifndef  OCEANBASE_UPDATESERVER_MEMTABLE_MODIFY_H_
#define  OCEANBASE_UPDATESERVER_MEMTABLE_MODIFY_H_

#include "sql/ob_ups_modify.h"
#include "common/ob_iterator.h"
#include "common/ob_iterator_adaptor.h"
#include "ob_sessionctx_factory.h"
#include "ob_ups_table_mgr.h"
#include "ob_ups_utils.h"
//add maoxx
#include "sql/ob_index_trigger.h"
//add e

namespace oceanbase
{
  namespace updateserver
  {
    template <class T>
    class MemTableModifyTmpl : public T, public RowkeyInfoCache
    {
      public:
        MemTableModifyTmpl(RWSessionCtx &session, ObIUpsTableMgr &host);
        ~MemTableModifyTmpl();
      public:
        int open();
        int close();
        int get_next_row(const common::ObRow *&row);
        int get_row_desc(const common::ObRowDesc *&row_desc) const;
        int get_affected_rows(int64_t& row_count);
        int64_t to_string(char* buf, const int64_t buf_len) const;
      private:
        RWSessionCtx &session_;
        ObIUpsTableMgr &host_;
    };

    template <class T>
    MemTableModifyTmpl<T>::MemTableModifyTmpl(RWSessionCtx &session, ObIUpsTableMgr &host): session_(session),
                                                                                 host_(host)
    {
    }

    template <class T>
    MemTableModifyTmpl<T>::~MemTableModifyTmpl()
    {
    }

    template <class T>
    int MemTableModifyTmpl<T>::open()
    {
      int ret = OB_SUCCESS;
      const ObRowDesc *row_desc = NULL;
      uint64_t table_id = OB_INVALID_ID;
      uint64_t column_id = OB_INVALID_ID;
      const ObRowkeyInfo *rki = NULL;
//add wangjiahao [table lock] 20160616 :b
      if (this->get_dml_type() == OB_DML_REPLACE)
      {
        T::child_op_->get_row_desc(row_desc);
        row_desc->get_tid_cid(0, table_id, column_id);
      }
      else
      {
        table_id = this->get_table_id();
      }
      //TBSYS_LOG(INFO, "##TEST_PRINT## what's' the fuck table_id=%lu", table_id);
      SessionTableLockInfo* stblk_info = NULL;
      if (table_id > 3000 && table_id <= 5048)
      {

        if (NULL == (stblk_info = session_.get_tblock_info()))
        {
          TBSYS_LOG(ERROR, "SessionTableLockInfo is NULL. table_id=%lu err=%d", table_id, ret);
        }
        else
        {
          TableLockMgr& global_tblk_mgr = host_.get_table_lock_mgr();
          uint32_t uid = session_.get_session_descriptor();
          if (OB_SUCCESS != (ret = stblk_info->lock_table(global_tblk_mgr, uid, table_id, IX_LOCK)))
          {
            TBSYS_LOG(WARN, "Lock table failed table_id=%ld err=%d", table_id, ret);
          }
        }

      }
//add :e
      if (OB_SUCCESS != ret)
      {}
      else if (NULL == T::child_op_)
      {
        ret = OB_NOT_INIT;
      }
      else if (OB_SUCCESS != (ret = T::child_op_->open()))
      {
        if (!IS_SQL_ERR(ret))
        {
          TBSYS_LOG(WARN, "child operator open fail ret=%d", ret);
        }
      }
      else if (OB_SUCCESS != (ret = T::child_op_->get_row_desc(row_desc))
              || NULL == row_desc)
      {
        if (OB_ITER_END != ret)
        {
          TBSYS_LOG(WARN, "get_row_desc from child_op=%p type=%d fail ret=%d", T::child_op_, T::child_op_->get_type(), ret);
          ret = (OB_SUCCESS != ret) ? OB_ERROR : ret;
        }
        else
        {
          ret = OB_SUCCESS;
        }
      }
      else if (OB_SUCCESS != (ret = row_desc->get_tid_cid(0, table_id, column_id))
              || OB_INVALID_ID == table_id)
      {
        TBSYS_LOG(WARN, "get_tid_cid from row_desc fail, child_op=%p type=%d %s ret=%d",
                  T::child_op_, T::child_op_->get_type(), to_cstring(*row_desc), ret);
        ret = (OB_SUCCESS != ret) ? OB_ERROR : ret;
      }
      else if (NULL == (rki = get_rowkey_info(host_, table_id)))
      {
        TBSYS_LOG(WARN, "get_rowkey_info fail table_id=%lu", table_id);
        ret = OB_SCHEMA_ERROR;
      }
      else
      {
        UpsSchemaMgrGuard sm_guard;
        const CommonSchemaManager *sm = NULL;
        if (NULL == (sm = host_.get_schema_mgr().get_schema_mgr(sm_guard)))
        {
          TBSYS_LOG(WARN, "get_schema_mgr fail");
          ret = OB_SCHEMA_ERROR;
        }
        else
        {
          //add maoxx
          if(T::child_op_->get_type() == sql::PHY_INDEX_TRIGGER)
          {
            ObIUpsTableMgr* host = &host_;
            sql::ObIndexTrigger *tmp_index_trigger = NULL;
            tmp_index_trigger = static_cast<sql::ObIndexTrigger*>(T::child_op_);
            if(OB_SUCCESS == (ret = (tmp_index_trigger->cons_data_row_store())))
            {
              int sql_type;
              ObRowDesc *row_desc = NULL;
              ObRowStore *pre_row_store = NULL;
              ObRowStore *post_row_store = NULL;
              ObRowCellIterAdaptor cia;
              tmp_index_trigger->get_sql_type(sql_type);
              if(1 == sql_type)
              {
                tmp_index_trigger->get_pre_data_row_desc(row_desc);
                if (OB_SUCCESS != (ret = row_desc->add_column_desc(table_id, OB_ACTION_FLAG_COLUMN_ID)))
                {
                  TBSYS_LOG(ERROR, "Failed to add column desc, ret=%d", ret);
                }
                else
                {
                  tmp_index_trigger->get_pre_data_row_store(pre_row_store);
                  cia.set_row_iter(pre_row_store, row_desc->get_rowkey_cell_count(), sm, *row_desc);
                }
              }
              else if(0 == sql_type || 2 == sql_type || 3 == sql_type)
              {
                tmp_index_trigger->get_post_data_row_desc(row_desc);
                tmp_index_trigger->get_post_data_row_store(post_row_store);
                cia.set_row_iter(post_row_store, row_desc->get_rowkey_cell_count(), sm, *row_desc);
              }
              ret = host->apply(session_, cia, T::get_dml_type());
              session_.inc_dml_count(T::get_dml_type());

              if(OB_SUCCESS == ret && OB_SUCCESS != (ret = tmp_index_trigger->handle_trigger(sm, host, session_)))
              {
                TBSYS_LOG(ERROR, "modify index table fail");
              }
              /*else
                    {
                      index_num = tmp_index_tri->get_index_num();
                    }*/
            }
            else
              TBSYS_LOG(WARN, "index_trigger get_next_data_row fail ret=%d", ret);
          }
          else
          {
            ObCellIterAdaptor cia;
            cia.set_row_iter(T::child_op_, rki->get_size(), sm);
            ret = host_.apply(session_, cia, T::get_dml_type());
            session_.inc_dml_count(T::get_dml_type());
          }
          //add e
        }
      }
      if (OB_SUCCESS != ret)
      {
        if (NULL != T::child_op_)
        {
          T::child_op_->close();
        }
      }
      return ret;
    }

    template <class T>
    int MemTableModifyTmpl<T>::close()
    {
      int ret = OB_SUCCESS;
      if (NULL == T::child_op_)
      {
        ret = OB_NOT_INIT;
      }
      else
      {
        int tmp_ret = OB_SUCCESS;
        if (OB_SUCCESS != (tmp_ret = T::child_op_->close()))
        {
          TBSYS_LOG(WARN, "child operator close fail ret=%d", tmp_ret);
        }
      }
      return ret;
    }

    template <class T>
    int MemTableModifyTmpl<T>::get_affected_rows(int64_t& row_count)
    {
      int ret = OB_SUCCESS;
      row_count = session_.get_ups_result().get_affected_rows();
      return ret;
    }

    template <class T>
    int MemTableModifyTmpl<T>::get_next_row(const common::ObRow *&row)
    {
      UNUSED(row);
      return OB_ITER_END;
    }

    template <class T>
    int MemTableModifyTmpl<T>::get_row_desc(const common::ObRowDesc *&row_desc) const
    {
      UNUSED(row_desc);
      return OB_ITER_END;
    }

    template <class T>
    int64_t MemTableModifyTmpl<T>::to_string(char* buf, const int64_t buf_len) const
    {
      int64_t pos = 0;
      databuff_printf(buf, buf_len, pos, "MemTableModify(op_type=%d dml_type=%s session=%p[%d:%ld])\n",
                      T::get_type(),
                      str_dml_type(T::get_dml_type()),
                      &session_,
                      session_.get_session_descriptor(),
                      session_.get_session_start_time());
      if (NULL != T::child_op_)
      {
        pos += T::child_op_->to_string(buf+pos, buf_len-pos);
      }
      return pos;
    }

    typedef MemTableModifyTmpl<sql::ObUpsModify> MemTableModify;
    typedef MemTableModifyTmpl<sql::ObUpsModifyWithDmlType> MemTableModifyWithDmlType;
  } // end namespace updateserver
} // end namespace oceanbase

#endif /* OCEANBASE_UPDATESERVER_MEMTABLE_MODIFY_H_ */

