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
#include "ob_fill_values.h"

#include "common/serialization.h"
#include "common/ob_tsi_factory.h"
#include "ob_raw_expr.h"

using namespace oceanbase::sql;
using namespace oceanbase::common;
using namespace oceanbase::common::serialization;

ObFillValues::ObFillValues()
  : op_from_(NULL), op_to_(NULL)
{
}

ObFillValues::~ObFillValues()
{
}

void ObFillValues::reset()
{
  op_from_ = NULL;
  op_to_ = NULL;
}

void ObFillValues::reuse()
{
  op_from_ = NULL;
  op_to_ = NULL;
}

int ObFillValues::set_op(ObPhyOperator *op_from, ObPhyOperator *op_to)
{
  int ret = OB_SUCCESS;
  if (op_from == NULL || op_to == NULL)
  {
    ret = OB_INVALID_ARGUMENT;
    TBSYS_LOG(ERROR, "invalid operator");
  }
  else if (NULL != op_from_ || NULL != op_to_)
  {
    ret = OB_INIT_TWICE;
    TBSYS_LOG(ERROR, "op_from operator already init");
  }
  else
  {
    op_from_ = dynamic_cast<ObValues*>(op_from);
    op_to_ = dynamic_cast<ObExprValues*>(op_to);
  }
  return ret;
}
int ObFillValues::set_row_desc(const common::ObRowDesc &row_desc)
{
  TBSYS_LOG(DEBUG, "DEBUG ObValues set row desc %s", to_cstring(row_desc));
  row_desc_ = row_desc;
  return OB_SUCCESS;
}
int ObFillValues::open()
{
  int ret = OB_SUCCESS;
  const common::ObRow *cur_row;
  //ObRowDesc cur_row_desc;
  const ObRowDesc *row_desc = NULL;
  const ObRowDesc *row_desc_from = NULL;
  uint64_t cid = OB_INVALID_ID;
  uint64_t tid = OB_INVALID_ID;
  const ObObj *cell = NULL;
  //const ObRowkey *rowkey = NULL;

  //TBSYS_LOG(INFO, "wjh_test before fill ObExprValues is %s\n", to_cstring(*op_to_));
  if (NULL == op_from_ || NULL == op_to_)
  {
    ret = OB_NOT_INIT;
    TBSYS_LOG(ERROR, "ObFillValues has no enough child operator, ret=%d", ret);
  }
  else if (OB_SUCCESS != (ret = op_to_->get_row_desc(row_desc)))
  {
    TBSYS_LOG(WARN, "failed to get row_desc, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = op_from_->get_row_desc(row_desc_from)))
  {
    TBSYS_LOG(WARN, "failed to get row_desc, err=%d", ret);
  }
  else
  {
    //cur_row_desc = *row_desc_from;
    int64_t cell_num = row_desc->get_column_num();
    //cur_row.set_row_desc(cur_row_desc);

    while(OB_SUCCESS == ret)
    {
      ret = op_from_->get_next_row(cur_row);
      TBSYS_LOG(INFO, "wjh_test cur_row is %s", to_cstring(*cur_row));
      if (OB_ITER_END == ret)
      {
        ret = OB_SUCCESS;
        break;
      }
      else if (OB_SUCCESS != ret)
      {
        TBSYS_LOG(WARN, "fail to get next row from rpc scan");
      } 
      else
      {  
        for (int64_t i = 0; i < cell_num; ++i)
        {
          ObConstRawExpr col_expr;
          if (OB_SUCCESS != (ret = cur_row->raw_get_cell(i, cell, tid, cid)))
          {
            TBSYS_LOG(WARN, "failed to get cell, err=%d i=%ld", ret, i);
            break;
          }
          else if (i < rowkey_info_.get_size()) // rowkey column
          {  
            if (OB_SUCCESS != (ret = col_expr.set_value_and_type(*cell)))
            {
              TBSYS_LOG(WARN, "failed to set value, err=%d", ret);
              break;
            }
          }
          else
          {
            ObObj null_obj;
            col_expr.set_value_and_type(null_obj);
          }

          ObSqlRawExpr col_raw_expr(
                common::OB_INVALID_ID,
                tid,
                cid,
                &col_expr);
          ObSqlExpression output_expr;
          if ((ret = col_raw_expr.fill_sql_expression(
                 output_expr,
                 NULL,
                 NULL,
                 NULL)) != OB_SUCCESS)
          {
            TBSYS_LOG(WARN, "Add table output columns failed. err=%d", ret);
            break;
          }
          else if (OB_SUCCESS != (ret = op_to_->add_value(output_expr)))
          {
            TBSYS_LOG(WARN, "Failed to add cell into get param, err=%d", ret);
            break;
          }
        } // end for
      }
    }
    TBSYS_LOG(INFO, "wjh_test %s\n", to_cstring(*op_to_));
  }
  return ret;
}

int ObFillValues::close()
{
  int ret = OB_SUCCESS;
  if (NULL != op_from_ && NULL != op_to_)
  {
    if (OB_SUCCESS != (ret = op_from_->close()) || OB_SUCCESS != (ret = op_to_->close()))
    {
      TBSYS_LOG(WARN, "failed to close child(ren) operator(s), err=%d", ret);
    }
  }
  return ret;
}
int64_t ObFillValues::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "ObFillValues\n");
  if (NULL != op_from_)
  {
    pos += op_from_->to_string(buf+pos, buf_len-pos);
  }
  if (NULL != op_to_)
  {
    pos += op_to_->to_string(buf+pos, buf_len-pos);
  }
  return pos;
}

/*
int ObFillValues::get_row_desc(const common::ObRowDesc *&row_desc) const
{
  return OB_SUCCESS;
}

int ObFillValues::get_next_row(const common::ObRow *&row)
{
  return OB_ITER_END;
}


DEFINE_DESERIALIZE(ObFillValues)
{
  int ret = OB_SUCCESS;
  return ret;
}

DEFINE_GET_SERIALIZE_SIZE(ObFillValues)
{
  int ret = OB_SUCCESS;
  return ret;
}

PHY_OPERATOR_ASSIGN(ObFillValues)
{

}
*/
