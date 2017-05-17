#include "pull_up_sublink.h"
#include <stdio.h>
#include <string.h>
#include "ob_logical_plan.h"
#include "ob_stmt.h"
#include "ob_select_stmt.h"
#include "ob_result_set.h"
#include "parse_malloc.h"
#include "ob_multi_logic_plan.h"
#include "ob_explain_stmt.h"
#include "ob_basic_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;

#define CREATE_RAW_EXPR(expr, type_name, result_plan)    \
({    \
  ObMultiLogicPlan *multi_logic_plan = NULL; \
  multi_logic_plan = static_cast<ObMultiLogicPlan*>(result_plan->plan_tree_); \
  ObLogicalPlan* logical_plan = multi_logic_plan->at(0); \
  ObStringBuf* name_pool = static_cast<ObStringBuf*>(result_plan->name_pool_);  \
  expr = (type_name*)parse_malloc(sizeof(type_name), name_pool);   \
  if (expr != NULL) \
  { \
    expr = new(expr) type_name();   \
    if (OB_SUCCESS != logical_plan->add_raw_expr(expr))    \
    { \
      expr = NULL;  /* no memory leak, bulk dealloc */ \
    } \
  } \
  if (expr == NULL)  \
  { \
    result_plan->err_stat_.err_code_ = OB_ERR_PARSER_MALLOC_FAILED; \
    TBSYS_LOG(WARN, "out of memory"); \
    snprintf(result_plan->err_stat_.err_msg_, MAX_ERROR_MSG,  \
        "Fail to malloc new raw expression"); \
  } \
  expr; \
})



int oceanbase::sql::pull_up_sublinks_recurse(
  ResultPlan *result_plan,
  ObLogicalPlan *logic_plan,
  ObRawExpr *raw_expr,
  ObSqlRawExpr *sql_expr
  )
{
  if(!logic_plan && !raw_expr)
    return 1;

  if(raw_expr->get_expr_type() == T_OP_IN || raw_expr->get_expr_type() == T_OP_NOT_IN)
  {
    ObBinaryOpRawExpr *binary_expr = static_cast<ObBinaryOpRawExpr*>(raw_expr);
    ObRawExpr * right_expr = binary_expr->get_second_op_expr();
    ObBinaryRefRawExpr *left_expr = static_cast<ObBinaryRefRawExpr*>(binary_expr->get_first_op_expr());
    // check whether it is a subquery
    if(right_expr->get_expr_type() == T_REF_QUERY)
    {
      // left only has 1 column
      if(left_expr->get_expr_type() == T_REF_COLUMN)
      {
        // generate new table item
        uint64_t subquery_id = static_cast<ObUnaryRefRawExpr*>(binary_expr->get_second_op_expr())->get_ref_id();

        ObBasicStmt *main_stmt = logic_plan->get_main_stmt();
        ObSelectStmt *select_stmt;
        if (main_stmt->get_stmt_type() == ObBasicStmt::T_EXPLAIN)
        {
          ObExplainStmt *explain_stmt = static_cast<ObExplainStmt*>(main_stmt);
          select_stmt = static_cast<ObSelectStmt*>(logic_plan->get_stmt(int32_t(explain_stmt->get_explain_query_id()) - 1));
        }

        else if (main_stmt->get_stmt_type() == ObBasicStmt::T_SELECT)
        {
          select_stmt = static_cast<ObSelectStmt*>(main_stmt);
        }
        else
        {
          // invalid stmt
          // TODO: add support to update, delete, insert
          return 1;
        }

        char generated_name[25];
        sprintf(generated_name, "generated_table%d", select_stmt->get_table_size());
        char *new_name = parse_strdup(generated_name, logic_plan->get_name_pool());
        // TODO: 内存分配方式是否恰当?
        ObString table_name(25, ObString::obstr_size_t(strlen(generated_name)), new_name);
        ObString alias_name;
        uint64_t table_id;
        int ret = select_stmt->add_table_item(
          *result_plan,
          table_name,
          alias_name,
          table_id,
          TableItem::GENERATED_TABLE,
          subquery_id,
          true
          );


        // generate new column item
        int32_t sub_select_stmt_id = (int32_t)subquery_id - 1;
        ObSelectStmt *sub_select_stmt = static_cast<ObSelectStmt*>(logic_plan->get_stmt(sub_select_stmt_id));
        uint64_t  sub_select_expr_id = sub_select_stmt->get_select_item(0).expr_id_;
        ObBinaryRefRawExpr *sub_select_expr = static_cast<ObBinaryRefRawExpr*>(logic_plan->get_expr(sub_select_expr_id)->get_expr());

        uint64_t sub_select_table_id = sub_select_expr->get_first_ref_id();
        uint64_t sub_select_column_id = sub_select_expr->get_second_ref_id();
        ColumnItem *sub_select_column_item = sub_select_stmt->get_column_item_by_id(sub_select_table_id, sub_select_column_id);
        ColumnItem column_item;
        column_item.table_id_ = table_id;
        //there is only one column in sublink's select clause, so it is the min column id
        column_item.column_id_ = OB_APP_MIN_COLUMN_ID;
        column_item.query_id_ = 0;
        column_item.column_name_ = sub_select_column_item->column_name_;
        column_item.data_type_ = sub_select_column_item->data_type_;
        column_item.is_name_unique_ = false;
        column_item.is_group_based_ = sub_select_column_item->is_group_based_;

        ret = select_stmt->add_column_item(column_item);

        // add from item
        ret = select_stmt->add_from_item(table_id);

        // change father select's columnitem.is_name_unique_ to false
        ObVector<ColumnItem>& f_columns = select_stmt->get_column_items();
        for(int i = 0; i < f_columns.size(); ++i)
        {
          if(sub_select_column_id == f_columns.at(i).column_id_)
          {
            f_columns.at(i).is_name_unique_ = false;
            break;
          }
        }

        // change T_OP_IN to T_OP_LEFT_SEMI
        if(raw_expr->get_expr_type() == T_OP_IN)
        {
          raw_expr->set_expr_type(T_OP_LEFT_SEMI);
        }
        else if (raw_expr->get_expr_type() == T_OP_NOT_IN)
        {
          raw_expr->set_expr_type(T_OP_LEFT_ANTI_SEMI);
        }
        raw_expr->set_result_type(ObBoolType);

        ObBinaryRefRawExpr *right_expr = NULL;
        if (CREATE_RAW_EXPR(right_expr, ObBinaryRefRawExpr, result_plan) == NULL)
          return 0;
        right_expr->set_expr_type(T_REF_COLUMN);
        right_expr->set_result_type(column_item.data_type_);
        right_expr->set_first_ref_id(column_item.table_id_);
        right_expr->set_second_ref_id(column_item.column_id_);
        // add new right expr to T_OP_LEFT_SEMI
        binary_expr->set_op_exprs(binary_expr->get_first_op_expr(), right_expr);

        // change sql_expr's tables_sets
        sql_expr->get_tables_set().add_member(select_stmt->get_table_bit_index(table_id));


      }
      else if(left_expr->get_expr_type() == T_REF_QUERY)
      {

      }
      else if(left_expr->get_expr_type() == T_OP_ROW)
      {

      }
      else
      {

      }
    }
  }


  else if (raw_expr->get_expr_type() == T_OP_AND || raw_expr->get_expr_type() == T_OP_OR)
  {
    ObBinaryOpRawExpr * binary_expr = static_cast<ObBinaryOpRawExpr*>(raw_expr);
    pull_up_sublinks_recurse(result_plan, logic_plan, binary_expr->get_first_op_expr(), sql_expr);
    pull_up_sublinks_recurse(result_plan, logic_plan, binary_expr->get_second_op_expr(), sql_expr);
  }
  else
  {

  }

  return 0;
}

int oceanbase::sql::pull_up_sublinks(ResultPlan *result_plan, ObLogicalPlan *logic_plan)
{
  int ret = common::OB_SUCCESS;
  common::ObVector<ObSqlRawExpr*>& sql_exprs = logic_plan->get_exprs();
  int32_t num = sql_exprs.size();
  for (int32_t i = 0; i < num; i++)
  {
    pull_up_sublinks_recurse(result_plan, logic_plan, sql_exprs[i]->get_expr(), sql_exprs[i]);
  }
  return ret;
}
