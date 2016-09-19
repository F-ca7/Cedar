/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_phy_operators_test.cpp
 * @brief test physical operators
 * modified by wangjiahao: add fill_values operator test.
 * @version __DaSE_VERSION
 * @author wangjiahao <51151500051@ecnu.edu.cn>
 * @date 2015_12_30
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
 * ob_phy_operators_test.cpp
 *
 * Authors:
 *   Zhifeng YANG <zhuweng.yzf@taobao.com>
 *
 */
#include "ob_fake_table.h"
#include "sql/ob_limit.h"
#include "sql/ob_project.h"
#include "sql/ob_filter.h"
#include "sql/ob_sort.h"
#include "sql/ob_merge_groupby.h"
#include "sql/ob_merge_distinct.h"
#include "sql/ob_table_mem_scan.h"
#include "sql/ob_fill_values.h"

#include <gtest/gtest.h>
using namespace oceanbase::sql;
using namespace oceanbase::common;
class ObPhyOperatorsTest: public ::testing::Test
{
  public:
    ObPhyOperatorsTest();
    virtual ~ObPhyOperatorsTest();
    virtual void SetUp();
    virtual void TearDown();
  private:
    // disallow copy
    ObPhyOperatorsTest(const ObPhyOperatorsTest &other);
    ObPhyOperatorsTest& operator=(const ObPhyOperatorsTest &other);
  private:
    // data members
};

ObPhyOperatorsTest::ObPhyOperatorsTest()
{
}

ObPhyOperatorsTest::~ObPhyOperatorsTest()
{
}

void ObPhyOperatorsTest::SetUp()
{
}

void ObPhyOperatorsTest::TearDown()
{
}

TEST_F(ObPhyOperatorsTest, basic_test)
{
  // Project <- Limit <- Orderby(Sort) <- Distinct <- Sort <- Filter <- MergeGroupBy <- Sort <- TableScan
  //
  // SELECT DISTINCT c1, max(c5), count(c2), sum(c2+c3)
  // FROM fake_table
  // WHERE c5 % 2 = 0
  // GROUP BY c5
  // HAVING sum(c4) % 2 = 0
  // ORDER BY c1 DESC
  // LIMIT 5, 20
  ObPhyOperator *root_op = NULL;
  static const int64_t INPUT_ROW_COUNT = 1200;
  static const int64_t LIMIT_COUNT = 20;
  static const int64_t LIMIT_OFFSET = 5;
  test::ObFakeTable input;
  input.set_row_count(INPUT_ROW_COUNT);
  ObTableMemScan table_scan;
  ASSERT_EQ(OB_SUCCESS, table_scan.set_child(0, input));
  static const uint64_t AS_TID = 1 + test::ObFakeTable::TABLE_ID;
  table_scan.set_table(AS_TID, test::ObFakeTable::TABLE_ID);
  // project c1, c2, c3, c4, c5
  for (int64_t i = 1; i <= 5; ++i)
  {
    ObSqlExpression sexpr;
    sexpr.set_tid_cid(AS_TID, OB_APP_MIN_COLUMN_ID+i);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = OB_APP_MIN_COLUMN_ID+i; // c1
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, table_scan.add_output_column(sexpr));
  }
  static const uint64_t C1 = OB_APP_MIN_COLUMN_ID+1;
  static const uint64_t C2 = OB_APP_MIN_COLUMN_ID+2;
  static const uint64_t C3 = OB_APP_MIN_COLUMN_ID+3;
  static const uint64_t C4 = OB_APP_MIN_COLUMN_ID+4;
  static const uint64_t C5 = OB_APP_MIN_COLUMN_ID+5;
  // filter c5 % 2 = 0
  {
    ObSqlExpression *sexpr = ObSqlExpression::alloc();
    ExprItem expr_item;
    expr_item.type_ = T_INT;
    expr_item.value_.int_ = 0;
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = C5; // c5
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_INT;
    expr_item.value_.int_ = 2;
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_OP_MOD;
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_OP_EQ;
    sexpr->add_expr_item(expr_item);
    sexpr->add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, table_scan.add_filter(sexpr));
  }
  // group by C5
  ObSort sort1;
  char* sort1_run_fname_str = (char *)"sort1_run_file.tmp";
  ObString sort1_run_fname;
  sort1_run_fname.assign_ptr(sort1_run_fname_str, (int32_t)strlen(sort1_run_fname_str));
  ASSERT_EQ(OB_SUCCESS, sort1.add_sort_column(AS_TID, C5, true));
  sort1.set_mem_size_limit(200L*1024*1024);
  ASSERT_EQ(OB_SUCCESS, sort1.set_run_filename(sort1_run_fname));
  ASSERT_EQ(OB_SUCCESS, sort1.set_child(0, table_scan));
  ObMergeGroupBy groupby;
  root_op = &groupby;
  ASSERT_EQ(OB_SUCCESS, groupby.add_group_column(AS_TID, C5));
  // sum(c4) max(c5), sum(c2), avg(c2+c3)
  static const uint64_t SUM_C4_CID = 2001;
  static const uint64_t MAX_C5_CID = 2002;
  static const uint64_t COUNT_C2_CID = 2003;
  static const uint64_t SUM_C2_C3_CID = 2004;
  {
    ObSqlExpression sexpr;
    sexpr.set_aggr_func(T_FUN_SUM, false);
    sexpr.set_tid_cid(OB_INVALID_ID, SUM_C4_CID);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = C4;
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();

    ASSERT_EQ(OB_SUCCESS, groupby.add_aggr_column(sexpr));
  }
  {
    ObSqlExpression sexpr;
    sexpr.set_aggr_func(T_FUN_MAX, false);
    sexpr.set_tid_cid(OB_INVALID_ID, MAX_C5_CID);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = C5;
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, groupby.add_aggr_column(sexpr));
  }
  {
    ObSqlExpression sexpr;
    sexpr.set_aggr_func(T_FUN_COUNT, false);
    sexpr.set_tid_cid(OB_INVALID_ID, COUNT_C2_CID);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = C2;
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, groupby.add_aggr_column(sexpr));
  }
  {
    ObSqlExpression sexpr;
    sexpr.set_aggr_func(T_FUN_SUM, false);
    sexpr.set_tid_cid(OB_INVALID_ID, SUM_C2_C3_CID);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = C2;
    sexpr.add_expr_item(expr_item);
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = C3;
    sexpr.add_expr_item(expr_item);
    expr_item.type_ = T_OP_ADD;
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, groupby.add_aggr_column(sexpr));
  }
  ASSERT_EQ(OB_SUCCESS, groupby.set_child(0, sort1));
  // HAVING sum(c4) % 2 = 0
  ObFilter filter;
  ASSERT_EQ(OB_SUCCESS, filter.set_child(0, *root_op));
  root_op = &filter;
  {
    ObSqlExpression *sexpr = ObSqlExpression::alloc();
    ExprItem expr_item;
    expr_item.type_ = T_INT;
    expr_item.value_.int_ = 0;
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = OB_INVALID_ID;
    expr_item.value_.cell_.cid = SUM_C4_CID;
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_INT;
    expr_item.value_.int_ = 2;
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_OP_MOD;
    sexpr->add_expr_item(expr_item);
    expr_item.type_ = T_OP_EQ;
    sexpr->add_expr_item(expr_item);
    sexpr->add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, filter.add_filter(sexpr));
  }
  // DISTINCT c1, max(c5), count(c2), sum(c2+c3)
  ObSort sort2;
  char* sort2_run_fname_str = (char *)"sort2_run_file.tmp";
  ObString sort2_run_fname;
  sort2_run_fname.assign_ptr(sort2_run_fname_str, (int32_t)strlen(sort2_run_fname_str));
  ASSERT_EQ(OB_SUCCESS, sort2.add_sort_column(AS_TID, C1, true));
  ASSERT_EQ(OB_SUCCESS, sort2.add_sort_column(OB_INVALID_ID, MAX_C5_CID, true));
  ASSERT_EQ(OB_SUCCESS, sort2.add_sort_column(OB_INVALID_ID, COUNT_C2_CID, true));
  ASSERT_EQ(OB_SUCCESS, sort2.add_sort_column(OB_INVALID_ID, SUM_C2_C3_CID, true));
  sort2.set_mem_size_limit(200L*1024*1024);
  ASSERT_EQ(OB_SUCCESS, sort2.set_run_filename(sort2_run_fname));
  ASSERT_EQ(OB_SUCCESS, sort2.set_child(0, *root_op));
  root_op = &sort2;
  ObMergeDistinct distinct;
  ASSERT_EQ(OB_SUCCESS, distinct.set_child(0, *root_op));
  root_op = &distinct;
  ASSERT_EQ(OB_SUCCESS, distinct.add_distinct_column(AS_TID, C1));
  ASSERT_EQ(OB_SUCCESS, distinct.add_distinct_column(OB_INVALID_ID, MAX_C5_CID));
  ASSERT_EQ(OB_SUCCESS, distinct.add_distinct_column(OB_INVALID_ID, COUNT_C2_CID));
  ASSERT_EQ(OB_SUCCESS, distinct.add_distinct_column(OB_INVALID_ID, SUM_C2_C3_CID));
  // ORDER BY c1 DESC
  ObSort orderby;
  ASSERT_EQ(OB_SUCCESS, orderby.set_child(0, *root_op));
  root_op = &orderby;
  char* orderby_run_fname_str = (char *)"orderby_run_file.tmp";
  ObString orderby_run_fname;
  orderby_run_fname.assign_ptr(orderby_run_fname_str, (int32_t)strlen(orderby_run_fname_str));
  ASSERT_EQ(OB_SUCCESS, orderby.add_sort_column(AS_TID, C1, false));
  orderby.set_mem_size_limit(200L*1024*1024);
  ASSERT_EQ(OB_SUCCESS, orderby.set_run_filename(orderby_run_fname));
  // SELECT c1, max(c5), count(c2), sum(c2+c3)
  ObProject project;
  ASSERT_EQ(OB_SUCCESS, project.set_child(0, *root_op));
  root_op = &project;
  {
    ObSqlExpression sexpr;
    sexpr.set_tid_cid(AS_TID, C1);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = AS_TID;
    expr_item.value_.cell_.cid = C1; // c1
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, project.add_output_column(sexpr));
  }
  {
    ObSqlExpression sexpr;
    sexpr.set_tid_cid(OB_INVALID_ID, MAX_C5_CID);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = OB_INVALID_ID;
    expr_item.value_.cell_.cid = MAX_C5_CID;
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, project.add_output_column(sexpr));
  }
  {
    ObSqlExpression sexpr;
    sexpr.set_tid_cid(OB_INVALID_ID, COUNT_C2_CID);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = OB_INVALID_ID;
    expr_item.value_.cell_.cid = COUNT_C2_CID;
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, project.add_output_column(sexpr));
  }
  {
    ObSqlExpression sexpr;
    sexpr.set_tid_cid(OB_INVALID_ID, SUM_C2_C3_CID);
    ExprItem expr_item;
    expr_item.type_ = T_REF_COLUMN;
    expr_item.value_.cell_.tid = OB_INVALID_ID;
    expr_item.value_.cell_.cid = SUM_C2_C3_CID;
    sexpr.add_expr_item(expr_item);
    sexpr.add_expr_item_end();
    ASSERT_EQ(OB_SUCCESS, project.add_output_column(sexpr));
  }
  // Limit 20, 5
  ObLimit limit;
  ASSERT_EQ(OB_SUCCESS, limit.set_child(0, *root_op));
  root_op = &limit;
  ObSqlExpression limit_expr;
  ObSqlExpression offset_expr;
  ExprItem item;
  item.type_ = T_INT;
  item.data_type_ = ObIntType;
  item.value_.int_ = LIMIT_COUNT;
  ASSERT_EQ(OB_SUCCESS, limit_expr.add_expr_item(item));
  ASSERT_EQ(OB_SUCCESS, limit_expr.add_expr_item_end());
  item.value_.int_ = LIMIT_OFFSET;
  ASSERT_EQ(OB_SUCCESS, offset_expr.add_expr_item(item));
  ASSERT_EQ(OB_SUCCESS, offset_expr.add_expr_item_end());
  ASSERT_EQ(OB_SUCCESS, limit.set_limit(limit_expr, offset_expr));
  // verify
  char buff[2048];
  root_op->to_string(buff, 2048);
  printf("%s\n", buff);
  ASSERT_EQ(OB_SUCCESS, root_op->open());
  const ObRow *row = NULL;
  const ObObj *cell = NULL;
  int64_t int_val = 0;
  int64_t row_count = 0;
  int64_t i = LIMIT_OFFSET;
  // expected row count before limit is INPUT_ROW_COUNT / 12
  for (; row_count < LIMIT_COUNT; row_count++, i++)
  {
    printf("row=%ld ", i);
    ASSERT_EQ(OB_SUCCESS, root_op->get_next_row(row));
    ASSERT_EQ(4, row->get_column_num());
    // c1
    ASSERT_EQ(OB_SUCCESS, row->get_cell(AS_TID, C1, cell));
    ASSERT_EQ(OB_SUCCESS, cell->get_int(int_val));
    printf("c1=%ld ", int_val);
    int64_t j = INPUT_ROW_COUNT / 12 - 1 - i;
    int64_t expect = 6 + j * 12;
    ASSERT_TRUE(int_val == expect || int_val == expect + 1 || int_val == expect + 2); // because the sort operator for merge_groupby is not stable
    // max(c5)
    ASSERT_EQ(OB_SUCCESS, row->get_cell(OB_INVALID_ID, MAX_C5_CID, cell));
    ASSERT_EQ(OB_SUCCESS, cell->get_int(int_val));
    printf("max(c5)=%ld ", int_val);
    ASSERT_EQ(2+j*4, int_val);
    // count(c2)
    ASSERT_EQ(OB_SUCCESS, row->get_cell(OB_INVALID_ID, COUNT_C2_CID, cell));
    ASSERT_EQ(OB_SUCCESS, cell->get_int(int_val));
    printf("count(c2)=%ld ", int_val);
    ASSERT_EQ(3, int_val);
    // sum(c2+c3)
    ASSERT_EQ(OB_SUCCESS, row->get_cell(OB_INVALID_ID, SUM_C2_C3_CID, cell));
    ASSERT_EQ(OB_SUCCESS, cell->get_int(int_val));
    printf("sum(c2+c3)=%ld ", int_val);
    ASSERT_EQ(4, int_val);
    printf("\n");
  }
  ASSERT_EQ(OB_ITER_END, root_op->get_next_row(row));
  ASSERT_EQ(OB_ITER_END, root_op->get_next_row(row));
  ASSERT_EQ(OB_SUCCESS, root_op->close());
}
int set_row_desc(ObRowDesc& row_desc, int64_t table_id, int64_t n_col)
{
  for(int64_t col_id = 0; col_id < n_col; col_id++) {
    row_desc.add_column_desc(table_id, col_id + 16);
  }
  row_desc.set_rowkey_cell_count(1);
  return 0;
}
int set_row_desc_ext(ObRowDescExt& row_desc_ext, int64_t table_id, int64_t n_col)
{
  ObObj data_type;
  data_type.set_type(ObIntType);
  for(int64_t col_id = 0; col_id < n_col; col_id++) {
    row_desc_ext.add_column_desc(table_id, col_id + 16, data_type);
  }
  return 0;
}
ObRow& build_row(ObRowDesc& row_desc, ObRow& row) {
  int err = OB_SUCCESS;
  row.set_row_desc(row_desc);
  for (int64_t j = 0; OB_SUCCESS == err && j < row_desc.get_column_num(); j++)
  {
    uint64_t table_id = OB_INVALID_ID;
    uint64_t column_id = OB_INVALID_ID;
    row_desc.get_tid_cid(j, table_id, column_id);
    ObObj obj;
    obj.set_int(j);
    if (OB_SUCCESS != (err = row.set_cell(table_id, column_id, obj)))
    {
      TBSYS_LOG(ERROR, "set_cell()=>%d", err);
    }
  }
  return row;
}
int build_values(ObRowDesc& row_desc, ObValues& values, int64_t row_count) {
  int err = OB_SUCCESS;
  for(int64_t i = 0; OB_SUCCESS == err && i < row_count; i++){
    ObRow row;
    if (OB_SUCCESS != (err = values.add_values(build_row(row_desc, row))))
    {
      TBSYS_LOG(ERROR, "values.add_values()=>%d", err);
    }
  }
  return err;
}
//add wangjiahao [dev_update_more] 20151209 :b
TEST_F(ObPhyOperatorsTest, extra_fill_values_test)
{
  ObFillValues op_fillv;
  ObExprValues op_exprv;
  ObValues op_v;
  ObRowDesc desc;
  ObRowDescExt descExt;
  ObRowkeyInfo rowkeyinfo;
  const ObRow *row;
  ASSERT_EQ(OB_SUCCESS, set_row_desc(desc, 3001, 10));
  ASSERT_EQ(OB_SUCCESS, set_row_desc_ext(descExt, 3001, 10));
  ASSERT_EQ(OB_SUCCESS, build_values(desc, op_v, 1000));
  ASSERT_EQ(OB_SUCCESS, op_v.set_row_desc(desc));
  ASSERT_EQ(OB_SUCCESS, op_fillv.set_op(&op_v, &op_exprv));
  ASSERT_EQ(OB_SUCCESS, op_exprv.set_row_desc(desc, descExt));
  ASSERT_EQ(OB_SUCCESS, op_v.open());
  ASSERT_EQ(OB_SUCCESS, op_fillv.open());
  TBSYS_LOG(INFO, "open done.");
  ASSERT_EQ(OB_ITER_END, op_fillv.get_next_row(row));
  TBSYS_LOG(INFO, "getnextrow done.");
  ASSERT_EQ(OB_SUCCESS, op_fillv.close());
  op_fillv.set_rowkey_info(rowkeyinfo);
  char buf[2000];
  op_fillv.to_string(buf, 2000);
}
//add :e

int main(int argc, char **argv)
{
  ob_init_memory_pool();
  ::testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
