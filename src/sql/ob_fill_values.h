/**
 * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * ob_fill_values.cpp
 *
 * Authors:
 *   wjhh2008
 *
 */
#ifndef OBFILLVALUES_H
#define OBFILLVALUES_H

#include "ob_phy_operator.h"
#include "common/ob_ups_row.h"
#include "common/ob_schema.h"
#include "ob_expr_values.h"
#include "ob_values.h"

namespace oceanbase
{
  namespace sql
  {
    using namespace common;

    class ObFillValues : public ObNoChildrenPhyOperator
    {
      public:
        ObFillValues();
        virtual ~ObFillValues();
        virtual void reset();
        virtual void reuse();
        virtual int open();
        virtual int close();
        virtual int get_next_row(const common::ObRow *&row);
        virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
        int set_op(ObPhyOperator *op_from, ObPhyOperator *op_to);
        int set_row_desc(const common::ObRowDesc &row_desc);
        virtual int64_t to_string(char* buf, const int64_t buf_len) const;
        void set_rowkey_info(const common::ObRowkeyInfo &rowkey_info);

        //DECLARE_PHY_OPERATOR_ASSIGN;
        //VIRTUAL_NEED_SERIALIZE_AND_DESERIALIZE;

      protected:
        ObValues *op_from_;
        ObExprValues *op_to_;
        common::ObRowkeyInfo rowkey_info_;
        bool has_data_;

    };
    inline void ObFillValues::set_rowkey_info(const common::ObRowkeyInfo &rowkey_info)
    {
      rowkey_info_ = rowkey_info;
    }

    inline int ObFillValues::get_next_row(const common::ObRow *&row)
    {
      row = NULL;
      return common::OB_ITER_END;
    }
    inline int ObFillValues::get_row_desc(const common::ObRowDesc *&row_desc) const
    {
      row_desc = NULL;
      return common::OB_NOT_SUPPORTED;
    }
  }
}


#endif // OBFILLVALUES_H
