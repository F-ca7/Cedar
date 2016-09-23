/**
* Copyright (C) 2013-2016 DaSE .
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_mem_sstable_scan.h
* @brief for operations of memory sstable scan
*
* modified by maoxiaoxiao:add functions to reset iterator
*
* @version CEDAR 0.2 
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
 * ob_mem_sstable_scan.h
 *
 * Authors:
 *   Junquan Chen <jianming.cjq@alipay.com>
 *
 */

#ifndef _OB_MEM_SSTABLE_SCAN_H
#define _OB_MEM_SSTABLE_SCAN_H 1

#include "common/ob_row.h"
#include "common/ob_row_desc.h"
#include "common/ob_row_store.h"
#include "ob_phy_operator.h"
#include "ob_values.h"
namespace oceanbase
{
  namespace sql
  {
    class ObMemSSTableScan : public ObPhyOperator
    {
      public:
        ObMemSSTableScan();
        virtual ~ObMemSSTableScan();
        virtual void reset();
        virtual void reuse();
        virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
        virtual int64_t to_string(char* buf, const int64_t buf_len) const;
        virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;

        virtual int open();
        virtual int get_next_row(const common::ObRow *&row);
        virtual int close();
        virtual ObPhyOperatorType get_type() const;
        void set_tmp_table(uint64_t subquery_id) {tmp_table_subquery_ = subquery_id;}
        //add maoxx
        /**
         * @brief reset_iterator
         */
        void reset_iterator() { row_store_.reset_iterator();}
        //add e

        DECLARE_PHY_OPERATOR_ASSIGN;
        NEED_SERIALIZE_AND_DESERIALIZE;
      private:
        common::ObRow cur_row_;
        common::ObRowDesc cur_row_desc_;
        common::ObRowStore row_store_;
        bool from_deserialize_;
        uint64_t tmp_table_subquery_;
    };
  }
}

#endif /* _OB_MEM_SSTABLE_SCAN_H */
