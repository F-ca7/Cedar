/**
 * Copyright (C) 2013-2016 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_values.h
 * @brief the value physical plan operator
 *
 * mofied by zhutao:add some content for procedure in ObValues class
 *
 * @version __DaSE_VERSION
 * @author zhutao <zhutao@stu.ecnu.edu.cn>
 * @author wangdonghui <zjnuwangdonghui@163.com>
 *
 * @date 2016_07_30
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
 * ob_values.h
 *
 * Authors:
 *   Zhifeng YANG <zhuweng.yzf@taobao.com>
 *
 */

#ifndef _OB_VALUES_H
#define _OB_VALUES_H 1

#include "sql/ob_single_child_phy_operator.h"
#include "common/ob_row_store.h"
namespace oceanbase
{
  namespace sql
  {
    class ObValues: public ObSingleChildPhyOperator
    {
      public:
        ObValues();
        virtual ~ObValues();
        virtual void reset();
        virtual void reuse();
        int set_row_desc(const common::ObRowDesc &row_desc);
        int add_values(const common::ObRow &value);
        const common::ObRowStore &get_row_store() {return row_store_;};

        virtual int open();
        virtual int close();
        virtual int get_next_row(const common::ObRow *&row);
        virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
        virtual int64_t to_string(char* buf, const int64_t buf_len) const;
        /**
         * @brief get_row_desc_template
         * get next row descriptor
         * @param row_desc row descriptor
         * @return error code
         */
        int get_row_desc_template(const common::ObRowDesc *&row_desc) const; //add by zt 20160114
        /**
         * @brief get_static_data_id
         * get static data id
         * @return static data id
         */
        int64_t get_static_data_id() const { return static_data_id_; }  //add by zt 2016018
        /**
         * @brief set_static_data_id
         * set static data id
         * @param static_data_id static data id
         */
        void set_static_data_id(int64_t static_data_id) { static_data_id_ = static_data_id; } //add by zt 20160118
        //        bool is_opened() const { return is_open_; } // add zt 20151203
        enum ObPhyOperatorType get_type() const{return PHY_VALUES;}
        DECLARE_PHY_OPERATOR_ASSIGN;
        NEED_SERIALIZE_AND_DESERIALIZE;
      private:
        // types and constants
        int load_data();
      private:
        // disallow copy
        ObValues(const ObValues &other);
        ObValues& operator=(const ObValues &other);
        // function members
      private:
        // data members
        common::ObRowDesc row_desc_;
        common::ObRow curr_row_;
        common::ObRowStore row_store_;
        //add by zt 20160118:b
        bool is_open_;  ///<  is open
        int64_t static_data_id_;  ///<  static data id
        //add by zt 20160118:e
    };
  } // end namespace sql
} // end namespace oceanbase

#endif /* _OB_VALUES_H */
