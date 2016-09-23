﻿/**
 * Copyright (C) 2013-2016 DaSE .
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_transformer.cpp
 * @brief logical plan --transformer--> physical plan
 *
 * modified by longfei：generate physical plan for create, drop, index in select
 * modified by maoxiaoxiao:add and modify some functions to generate a correct physicl plan if a table with index has a insert, delete, update, replace and alter operation
 *                         modify some functions to generate a physicl plan for bloomfilter join
 * modified by fanqiushi: add some functions to create an phsical plan for semijoin
 * modified by wangjiahao: add method to generate physical plan for update_more
 * modified by zhujun: add method to generate physical plan for procedure
 *
 * @version CEDAR 0.2 
 * @author longfei <longfei@stu.ecnu.edu.cn>
 * @author maoxiaoxiao <51151500034@ecnu.edu.cn>
 * @author Qiushi FAN <qsfan@ecnu.cn>
 * @author wangjiahao <51151500051@ecnu.edu.cn>
 * @author zhujun<51141500091@ecnu.edu.cn>
 * @date 2016_07_27
 */

/** * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * ob_transformer.cpp
 *
 * Authors:
 *   Guibin Du <tianguan.dgb@taobao.com>
 *
 */
#include "ob_transformer.h"
#include "ob_table_rpc_scan.h"
#include "ob_table_mem_scan.h"
#include "ob_merge_join.h"
#include "ob_sql_expression.h"
#include "ob_filter.h"
#include "ob_project.h"
#include "ob_set_operator.h"
#include "ob_merge_union.h"
#include "ob_merge_intersect.h"
#include "ob_merge_except.h"
#include "ob_sort.h"
#include "ob_merge_distinct.h"
#include "ob_merge_groupby.h"
#include "ob_merge_join.h"
#include "ob_scalar_aggregate.h"
#include "ob_limit.h"
#include "ob_physical_plan.h"
#include "ob_add_project.h"
#include "ob_insert.h"
#include "ob_update.h"
#include "ob_delete.h"
#include "ob_explain.h"
#include "ob_explain_stmt.h"
#include "ob_delete_stmt.h"
#include "ob_update_stmt.h"
#include "ob_create_table.h"
#include "ob_create_table_stmt.h"
#include "ob_drop_table.h"
#include "ob_drop_table_stmt.h"
#include "common/ob_row_desc_ext.h"
#include "ob_create_user_stmt.h"
#include "ob_prepare.h"
#include "ob_prepare_stmt.h"
#include "ob_variable_set.h"
#include "ob_variable_set_stmt.h"
#include "ob_kill_stmt.h"
#include "ob_execute.h"
#include "ob_execute_stmt.h"
#include "ob_deallocate.h"
#include "ob_deallocate_stmt.h"
#include "tblog.h"
#include "WarningBuffer.h"
#include "common/ob_obj_cast.h"
#include "ob_ups_modify.h"
#include "ob_insert_dbsem_filter.h"
#include "ob_inc_scan.h"
#include "ob_mem_sstable_scan.h"
#include "ob_multiple_scan_merge.h"
#include "ob_multiple_get_merge.h"
#include "ob_start_trans_stmt.h"
#include "ob_start_trans.h"
#include "ob_end_trans_stmt.h"
#include "ob_end_trans.h"
#include "ob_expr_values.h"
#include "ob_ups_executor.h"
#include "ob_lock_filter.h"
#include "common/hash/ob_hashmap.h"
#include "common/ob_privilege.h"
#include "common/ob_privilege_type.h"
#include "common/ob_hint.h"
#include "ob_create_user_stmt.h"
#include "ob_drop_user_stmt.h"
#include "ob_grant_stmt.h"
#include "ob_revoke_stmt.h"
#include "ob_set_password_stmt.h"
#include "ob_lock_user_stmt.h"
#include "ob_rename_user_stmt.h"
#include "sql/ob_priv_executor.h"
#include "ob_dual_table_scan.h"
#include "common/ob_trace_log.h"
#include "ob_empty_row_filter.h"
#include "ob_sql_read_strategy.h"
#include "ob_alter_table_stmt.h"
#include "ob_alter_table.h"
#include "ob_alter_sys_cnf_stmt.h"
#include "ob_alter_sys_cnf.h"
#include "ob_schema_checker.h"
#include "ob_row_count.h"
#include "ob_when_filter.h"
#include "ob_kill_session.h"
#include "ob_get_cur_time_phy_operator.h"
#include "ob_change_obi_stmt.h"
#include "ob_change_obi.h"
#include "mergeserver/ob_merge_server_main.h"
//add maoxx
#include "ob_index_trigger.h"
//add e
//zhounan unmark:b
#include "ob_cursor_declare_stmt.h"
#include "ob_cursor.h"
#include "ob_cursor_fetch_stmt.h"
#include "ob_cursor_fetch_into_stmt.h"
#include "ob_cursor_fetch_fromto_stmt.h"
#include "ob_cursor_fetch_first_stmt.h"
#include "ob_cursor_fetch_first_into_stmt.h"
#include "ob_cursor_fetch_last_stmt.h"
#include "ob_cursor_fetch_last_into_stmt.h"
#include "ob_cursor_fetch_relative_stmt.h"
#include "ob_cursor_fetch_relative_into_stmt.h"
#include "ob_cursor_fetch_absolute_stmt.h"
#include "ob_cursor_fetch_abs_into_stmt.h"
#include "ob_cursor_open_stmt.h"
#include "ob_cursor_close_stmt.h"
#include "ob_cursor_fetch_prior_stmt.h"
#include "ob_cursor_fetch_prior_into_stmt.h"
#include "ob_cursor_fetch.h"
#include "ob_cursor_fetch_into.h"
#include "ob_cursor_declare.h"
#include "ob_cursor_fetch_prior.h"
#include "ob_cursor_fetch_prior_into.h"
#include "ob_cursor_fetch_fromto.h"
#include "ob_cursor_fetch_first.h"
#include "ob_cursor_fetch_first_into.h"
#include "ob_cursor_fetch_last.h"
#include "ob_cursor_fetch_last_into.h"
#include "ob_cursor_fetch_relative.h"
#include "ob_cursor_fetch_relative_into.h"
#include "ob_cursor_fetch_absolute.h"
#include "ob_cursor_fetch_abs_into.h"
#include "ob_cursor_open.h"
#include "ob_cursor_close.h"
//add:e
#include <vector>
#include "ob_fill_values.h"
#include "ob_semi_left_join.h"

//longfei [create index]
#include "ob_create_index_stmt.h"
#include "dml_build_plan.h"
#include "common/ob_schema.h"
//longfei [drop index]
#include "ob_drop_index_stmt.h"
#include "ob_drop_index.h"
// add longfei [secondary index select] 20151101
#include "common/ob_array.h"
#include "common/ob_se_array.h"
#include "common/ob_secondary_index_service.h"
#include "common/ob_secondary_index_service_impl.h"
// add e

//add by zhujun:b
//code_coverage_zhujun
#include "ob_procedure_stmt.h"
#include "ob_procedure.h"
#include "ob_procedure_create_stmt.h"
#include "ob_procedure_create.h"
#include "ob_procedure_drop_stmt.h"
#include "ob_procedure_drop.h"
#include "ob_procedure_execute_stmt.h"
#include "ob_procedure_execute.h"
#include "ob_procedure_declare_stmt.h"
#include "ob_procedure_declare.h"
#include "ob_procedure_if_stmt.h"
#include "ob_procedure_if.h"
#include "ob_procedure_elseif_stmt.h"
#include "ob_procedure_elseif.h"
#include "ob_procedure_else_stmt.h"
#include "ob_procedure_else.h"
#include "ob_procedure_assgin_stmt.h"
#include "ob_procedure_assgin.h"
#include "ob_procedure_while_stmt.h"
#include "ob_procedure_while.h"
#include "ob_procedure_case_stmt.h"
#include "ob_procedure_case.h"
#include "ob_procedure_casewhen_stmt.h"
#include "ob_procedure_casewhen.h"
#include "ob_procedure_select_into_stmt.h"
#include "ob_procedure_select_into.h"
//code_coverage_zhujun
//add:e
/*add maoxx [bloomfilter_join] 20160406*/
#include "ob_bloomfilter_join.h"
/*add e*/
//add wangjiahao [table lock] 20160616 :b
#include "ob_lock_table_stmt.h"
#include "ob_ups_lock_table.h"
//add :e
using namespace oceanbase::common;
using namespace oceanbase::sql;
typedef int ObMySQLSessionKey;
#define TRANS_LOG(...)                                                  \
  do{                                                                   \
    snprintf(err_stat.err_msg_, MAX_ERROR_MSG, __VA_ARGS__);            \
    TBSYS_LOG(WARN, __VA_ARGS__);                                       \
  } while(0)

//为一个物理操作符申请空间
#define CREATE_PHY_OPERRATOR(op, type_name, physical_plan, err_stat)    \
  ({                                                                    \
  op = (type_name*)trans_malloc(sizeof(type_name));   \
  if (op == NULL) \
  { \
    err_stat.err_code_ = OB_ERR_PARSER_MALLOC_FAILED; \
    TRANS_LOG("Can not malloc space for %s", #type_name);  \
  } \
  else\
  {\
    op = new(op) type_name();    \
    op->set_phy_plan(physical_plan);              \
    if ((err_stat.err_code_ = physical_plan->store_phy_operator(op)) != OB_SUCCESS) \
    { \
      TRANS_LOG("Add physical operator failed");  \
    } \
    else                                        \
    {                                           \
      ob_inc_phy_operator_stat(op->get_type()); \
    }                                           \
  } \
  op;})

ObTransformer::ObTransformer(ObSqlContext &context)
{
  mem_pool_ = context.transformer_allocator_;
  OB_ASSERT(mem_pool_);
  sql_context_ = &context;
  group_agg_push_down_param_ = false;
}

ObTransformer::~ObTransformer()
{
}

inline void *ObTransformer::trans_malloc(const size_t nbyte)
{
  OB_ASSERT(mem_pool_);
  return mem_pool_->alloc(nbyte);
}

inline void ObTransformer::trans_free(void* p)
{
  OB_ASSERT(mem_pool_);
  mem_pool_->free(p);
}

int ObTransformer::generate_physical_plans(ObMultiLogicPlan &logical_plans, ObMultiPhyPlan &physical_plans, ErrStat& err_stat)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  // check environment
  if (NULL == sql_context_ || NULL == sql_context_->merger_rpc_proxy_ || NULL == sql_context_->schema_manager_ || NULL == sql_context_->session_info_)
  {
    ret = OB_NOT_INIT;
    TRANS_LOG("sql_context not init");
  }
  else
  {
    // get group_agg_push_down_param_
    ObString param_str = ObString::make_string(OB_GROUP_AGG_PUSH_DOWN_PARAM);
    ObObj val;
    if (sql_context_->session_info_->get_sys_variable_value(param_str, val) != OB_SUCCESS || val.get_bool(group_agg_push_down_param_) != OB_SUCCESS)
    {
      TBSYS_LOG(DEBUG, "Can not get param %s", OB_GROUP_AGG_PUSH_DOWN_PARAM);
      // default off
      group_agg_push_down_param_ = false;
    }
  }
  ObLogicalPlan *logical_plan = NULL;
  ObPhysicalPlan *physical_plan = NULL;
  for (int32_t i = 0; ret == OB_SUCCESS && i < logical_plans.size(); i++)
  {
    logical_plan = logical_plans.at(i);
    if ((ret = generate_physical_plan(logical_plan, physical_plan, err_stat)) == OB_SUCCESS)
    {
      if ((ret = physical_plans.push_back(physical_plan)) != OB_SUCCESS)
      {
        TRANS_LOG("Add physical plan failed");
        break;
      }
    }
  }
  return ret;
}

int ObTransformer::generate_physical_plan(ObLogicalPlan *logical_plan, ObPhysicalPlan*& physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  bool new_generated = false;
  if (logical_plan)
  {
    if (OB_LIKELY(NULL == physical_plan))
    {
      if ((physical_plan = (ObPhysicalPlan*) trans_malloc(sizeof(ObPhysicalPlan))) == NULL)
      {
        ret = OB_ERR_PARSER_MALLOC_FAILED;
        TRANS_LOG("Can not malloc space for ObPhysicalPlan");
      }
      else
      {
        physical_plan = new (physical_plan) ObPhysicalPlan();
        TBSYS_LOG(DEBUG, "new physical plan, addr=%p", physical_plan);
        new_generated = true;
      }
    }
    ObBasicStmt *stmt = NULL;
    if (ret == OB_SUCCESS)
    {
      if (query_id == OB_INVALID_ID)
        stmt = logical_plan->get_main_stmt();
      else
        stmt = logical_plan->get_query(query_id);
      if (stmt == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong query id to find query statement");
      }
    }
    TBSYS_LOG(DEBUG, "generate physical plan for query_id=%lu stmt_type=%d", query_id, stmt->get_stmt_type());
    if (OB_LIKELY(ret == OB_SUCCESS))
    {
      switch (stmt->get_stmt_type())
      {
      case ObBasicStmt::T_SELECT:
        ret = gen_physical_select(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_DELETE:
        ret = gen_physical_delete_new(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_INSERT:
        ret = gen_physical_insert_new(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_REPLACE:
          //modify maoxx
          //ret = gen_physical_replace(logical_plan, physical_plan, err_stat, query_id, index);
          ret = gen_physical_replace_new(logical_plan, physical_plan, err_stat, query_id, index);
          //modify e
        break;
      case ObBasicStmt::T_UPDATE:
        ret = gen_physical_update_new(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_EXPLAIN:
        ret = gen_physical_explain(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_CREATE_TABLE:
        ret = gen_physical_create_table(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_DROP_TABLE:
        ret = gen_physical_drop_table(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_ALTER_TABLE:
        ret = gen_physical_alter_table(logical_plan, physical_plan, err_stat, query_id, index);
        break;

        // longfei [create index]
      case ObBasicStmt::T_CREATE_INDEX:
        ret = gen_physical_create_index(logical_plan, physical_plan, err_stat, query_id, index);
        break;
        // longfei [drop index]
      case ObBasicStmt::T_DROP_INDEX:
        ret = gen_physical_drop_index(logical_plan, physical_plan, err_stat, query_id, index);
        break;

      case ObBasicStmt::T_SHOW_TABLES:
      case ObBasicStmt::T_SHOW_INDEX:
      case ObBasicStmt::T_SHOW_VARIABLES:
      case ObBasicStmt::T_SHOW_COLUMNS:
      case ObBasicStmt::T_SHOW_SCHEMA:
      case ObBasicStmt::T_SHOW_CREATE_TABLE:
      case ObBasicStmt::T_SHOW_TABLE_STATUS:
      case ObBasicStmt::T_SHOW_SERVER_STATUS:
      case ObBasicStmt::T_SHOW_WARNINGS:
      case ObBasicStmt::T_SHOW_GRANTS:
      case ObBasicStmt::T_SHOW_PARAMETERS:
      case ObBasicStmt::T_SHOW_PROCESSLIST:
        ret = gen_physical_show(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_PREPARE:
        ret = gen_physical_prepare(logical_plan, physical_plan, err_stat, query_id, index);
        break;
	//zhounan unmark:b
        case ObBasicStmt::T_CURSOR_DECLARE:
          ret = gen_physical_cursor_declare(logical_plan, physical_plan, err_stat, query_id, index);
          break;
	    case ObBasicStmt::T_CURSOR_OPEN:
          ret = gen_physical_cursor_open(logical_plan, physical_plan, err_stat, query_id, index);
	      break;
	    case ObBasicStmt::T_CURSOR_FETCH:
          ret = gen_physical_cursor_fetch(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_INTO:
	      ret = gen_physical_cursor_fetch_into(logical_plan, physical_plan, err_stat, query_id, index);
	      break;
        case ObBasicStmt::T_CURSOR_FETCH_PRIOR:
          ret = gen_physical_cursor_fetch_prior(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_PRIOR_INTO:
		  ret = gen_physical_cursor_fetch_prior_into(logical_plan, physical_plan, err_stat, query_id, index);
		  break;
        case ObBasicStmt::T_CURSOR_FETCH_FIRST:
          ret = gen_physical_cursor_fetch_first(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_FIRST_INTO:
          ret = gen_physical_cursor_fetch_first_into(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_LAST:
          ret = gen_physical_cursor_fetch_last(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_LAST_INTO:
          ret = gen_physical_cursor_fetch_last_into(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_RELATIVE:
          ret = gen_physical_cursor_fetch_relative(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_RELATIVE_INTO:
          ret = gen_physical_cursor_fetch_relative_into(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_ABSOLUTE:
          ret = gen_physical_cursor_fetch_absolute(logical_plan, physical_plan, err_stat, query_id,index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_ABS_INTO:
          ret = gen_physical_cursor_fetch_absolute_into(logical_plan, physical_plan, err_stat, query_id, index);
          break;
        case ObBasicStmt::T_CURSOR_FETCH_FROMTO:
	      ret = gen_physical_cursor_fetch_fromto(logical_plan, physical_plan, err_stat, query_id, index);
	      break;
        case ObBasicStmt::T_CURSOR_CLOSE:
         ret = gen_physical_cursor_close(logical_plan, physical_plan, err_stat, query_id, index);
         break;
		 //add:e
      case ObBasicStmt::T_VARIABLE_SET:
        ret = gen_physical_variable_set(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_EXECUTE:
        ret = gen_physical_execute(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_DEALLOCATE:
        ret = gen_physical_deallocate(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_START_TRANS:
        ret = gen_physical_start_trans(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_END_TRANS:
        ret = gen_physical_end_trans(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_ALTER_SYSTEM:
        ret = gen_physical_alter_system(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_CREATE_USER:
      case ObBasicStmt::T_DROP_USER:
      case ObBasicStmt::T_SET_PASSWORD:
      case ObBasicStmt::T_LOCK_USER:
      case ObBasicStmt::T_RENAME_USER:
      case ObBasicStmt::T_GRANT:
      case ObBasicStmt::T_REVOKE:
        ret = gen_physical_priv_stmt(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_KILL:
        ret = gen_physical_kill_stmt(logical_plan, physical_plan, err_stat, query_id, index);
        break;
      case ObBasicStmt::T_CHANGE_OBI:
        ret = gen_physical_change_obi_stmt(logical_plan, physical_plan, err_stat, query_id, index);
        break;
	//add by zhujun:b
        //code_coverage_zhujun
        case ObBasicStmt::T_PROCEDURE_CREATE:
        	ret=gen_physical_procedure_create(logical_plan, physical_plan, err_stat, query_id, index);
        	break;
        case ObBasicStmt::T_PROCEDURE_DROP:
			ret=gen_physical_procedure_drop(logical_plan, physical_plan, err_stat, query_id, index);
			break;
        case ObBasicStmt::T_PROCEDURE_EXEC:
			ret=gen_physical_procedure_execute(logical_plan, physical_plan, err_stat, query_id, index);
			break;
        case ObBasicStmt::T_PROCEDURE_IF:
			ret=gen_physical_procedure_if(logical_plan, physical_plan, err_stat, query_id, index);
			break;
        case ObBasicStmt::T_PROCEDURE_DECLARE:
        	ret=gen_physical_procedure_declare(logical_plan, physical_plan, err_stat, query_id, index);
        		break;
        case ObBasicStmt::T_PROCEDURE_ASSGIN:
			ret=gen_physical_procedure_assgin(logical_plan, physical_plan, err_stat, query_id, index);
				break;
        case ObBasicStmt::T_PROCEDURE_WHILE:
			ret=gen_physical_procedure_while(logical_plan, physical_plan, err_stat, query_id, index);
				break;
        case ObBasicStmt::T_PROCEDURE_CASE:
			ret=gen_physical_procedure_case(logical_plan, physical_plan, err_stat, query_id, index);
				break;
        case ObBasicStmt::T_PROCEDURE_SELECT_INTO:
        	ret=gen_physical_procedure_select_into(logical_plan, physical_plan, err_stat, query_id, index);
        	break;          
        //code_coverage_zhujun
		//add:e
//add wangjiahao [table lock] 20160616 :b
      case ObBasicStmt::T_LOCK_TABLE:
        ret = gen_physical_lock_table(logical_plan, physical_plan, err_stat, query_id, index);
        break;
//add :e
      default:
        ret = OB_NOT_SUPPORTED;
        TRANS_LOG("Unknown logical plan, stmt_type=%d", stmt->get_stmt_type());
        break;
      }
    }

    if (OB_SUCCESS == ret && NO_CUR_TIME != logical_plan->get_cur_time_fun_type() && OB_INVALID_ID == query_id)
    {
      ret = add_cur_time_plan(physical_plan, err_stat, logical_plan->get_cur_time_fun_type());
      if (OB_SUCCESS != ret)
      {
        TRANS_LOG("failed to add cur_time_plan: ret=[%d]", ret);
      }
    }

    if (ret != OB_SUCCESS && new_generated && physical_plan != NULL)
    {
      physical_plan->~ObPhysicalPlan();
      trans_free(physical_plan);
      physical_plan = NULL;
    }
  }
  return ret;
}

int ObTransformer::add_cur_time_plan(ObPhysicalPlan *physical_plan, ErrStat& err_stat, const ObCurTimeType& type)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObGetCurTimePhyOperator *get_cur_time_op = NULL;

  if (NULL == physical_plan)
  {
    ret = OB_ERR_UNEXPECTED;
    TBSYS_LOG(ERROR, "physical_plan must not be NULL");
  }

  if (OB_SUCCESS == ret)
  {
    CREATE_PHY_OPERRATOR(get_cur_time_op, ObGetCurTimePhyOperator, physical_plan, err_stat);
    if (OB_SUCCESS == ret)
    {
      get_cur_time_op->set_cur_time_fun_type(type);
      if (OB_SUCCESS != (ret = physical_plan->set_pre_phy_query(get_cur_time_op)))
      {
        TRANS_LOG("Add physical operator(get_cur_time_op) failed, err=%d", ret);
      }
    }
  }

  if (CUR_TIME_UPS == type && OB_SUCCESS == ret)
  {
    get_cur_time_op->set_rpc_stub(sql_context_->merger_rpc_proxy_);
    // physical plan to be done on ups
    if (OB_SUCCESS == ret)
    {
      ObPhysicalPlan *ups_physical_plan = NULL;
      if (NULL == (ups_physical_plan = (ObPhysicalPlan*) trans_malloc(sizeof(ObPhysicalPlan))))
      {
        ret = OB_ERR_PARSER_MALLOC_FAILED;
        TRANS_LOG("Can not malloc space for ObPhysicalPlan");
      }
      else
      { // result set of ups_physical_plan will be set in get_cur_time_op.open
        ups_physical_plan = new (ups_physical_plan) ObPhysicalPlan();
        TBSYS_LOG(DEBUG, "new physical plan, addr=%p", ups_physical_plan);
      }

      if (OB_SUCCESS == ret)
      {
        int32_t idx = 0;
        ObProject *project = NULL;
        CREATE_PHY_OPERRATOR(project, ObProject, ups_physical_plan, err_stat);
        if (OB_SUCCESS == ret && OB_SUCCESS != (ret = ups_physical_plan->add_phy_query(project, &idx, true)))
        {
          TRANS_LOG("Add physical operator(cur_time_op) failed, err=%d", ret);
        }

        if (OB_SUCCESS == ret)
        {
          ObSqlExpression expr;
          ExprItem item;

          expr.set_tid_cid(OB_INVALID_ID, OB_MAX_TMP_COLUMN_ID);
          item.type_ = T_CUR_TIME_OP;

          if (OB_SUCCESS != (ret = expr.add_expr_item(item)))
          {
            TRANS_LOG("add expr item failed, ret=%d", ret);
          }
          else if (OB_SUCCESS != (ret = expr.add_expr_item_end()))
          {
            TRANS_LOG("add expr end failed, ret=%d", ret);
          }
          else if (OB_SUCCESS != (ret = project->add_output_column(expr)))
          {
            TRANS_LOG("add expr item failed, ret=%d", ret);
          }
        }

        if (OB_SUCCESS == ret)
        {
          ObDualTableScan *dual_table_op = NULL;
          CREATE_PHY_OPERRATOR(dual_table_op, ObDualTableScan, physical_plan, err_stat);
          if (OB_SUCCESS == ret && OB_SUCCESS != (ret = project->set_child(0, *dual_table_op)))
          {
            TRANS_LOG("add ObDualTableScan on ObProject failed, ret=%d", ret);
          }
        }
      }

      if (OB_SUCCESS == ret)
      {
        get_cur_time_op->set_ups_plan(ups_physical_plan);
      }
    }
  }

  return ret;
}

template<class T>
int ObTransformer::get_stmt(ObLogicalPlan *logical_plan, ErrStat& err_stat, const uint64_t& query_id, T *& stmt)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  /* get statement */
  if (query_id == OB_INVALID_ID)
    stmt = dynamic_cast<T*>(logical_plan->get_main_stmt());
  else
    stmt = dynamic_cast<T*>(logical_plan->get_query(query_id));
  if (stmt == NULL)
  {
    err_stat.err_code_ = OB_ERR_PARSER_SYNTAX;
    TRANS_LOG("Get Stmt error");
  }
  return ret;
}

template<class T>
int ObTransformer::add_phy_query(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, T * stmt, ObPhyOperator *phy_op, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  if (query_id == OB_INVALID_ID || stmt == dynamic_cast<T*>(logical_plan->get_main_stmt()))
    ret = physical_plan->add_phy_query(phy_op, index, true);
  else
    ret = physical_plan->add_phy_query(phy_op, index);
  if (ret != OB_SUCCESS)
    TRANS_LOG("Add query of physical plan failed");
  return ret;
}
//add by zhujun:b
//code_coverage_zhujun
int ObTransformer::gen_physical_procedure(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedure*result_op = NULL;
	ObProcedureStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedure, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		 if(result_op->set_proc_name(stmt->get_proc_name())!=OB_SUCCESS)
		 {
			 TBSYS_LOG(WARN, "result_op set proc_name error");
		 }
		 else
		 {
			 TBSYS_LOG(INFO, "result_op set proc_name %.*s",stmt->get_proc_name().length(),stmt->get_proc_name().ptr());
			 for(int64_t i=0;ret==OB_SUCCESS&&i<stmt->get_param_size();++i)
			 {
				 if((ret=result_op->add_param(*stmt->get_param(i)))!=OB_SUCCESS)
				 {
					 TBSYS_LOG(WARN, "result_op set params error");
				 }
				 else
				 {
					 TBSYS_LOG(INFO, "result_op set params %.*s",stmt->get_param(i)->param_name_->length(),stmt->get_param(i)->param_name_->ptr());
				 }
			 }
			 //复制声明的变量
			 for(int64_t i=0;i<stmt->get_declare_var_size();++i)
			 {
				 if((ret=result_op->add_declare_var(stmt->get_declare_var(i)))!=OB_SUCCESS)
				 {
					 TBSYS_LOG(WARN, "result_op add_declare_var error");
					 break;
				 }
				 else
				 {
					 TBSYS_LOG(INFO, "result_op add_declare_var %.*s",stmt->get_declare_var(i).length(),stmt->get_declare_var(i).ptr());
				 }
			 }

			 TBSYS_LOG(INFO, "procedure block stmt size =%ld",stmt->get_stmt_size());
			 for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_stmt_size(); i++)
			 {
				uint64_t stmt_id=stmt->get_stmt(i);
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*这里应该过滤一些类型的语句*/
				if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child((int32_t)i, *op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
				}
			 }
		 }

		 TBSYS_LOG(INFO, "procedure Operator parameter size: %ld declare variable size = %ld",result_op->get_param_num(),result_op->get_declare_var_num());
	}
	return ret;

 }

int ObTransformer::gen_physical_procedure_create(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureCreate*result_op = NULL;
	ObProcedureCreateStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	//add execute insert operator
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureCreate, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		 if((ret=result_op->set_proc_name(stmt->get_proc_name()))!=OB_SUCCESS)
		 {
			 TBSYS_LOG(WARN, "result_op set proc_name error");
		 }
		 else
		 {
			 /*重新生成一个操作符*/
			 int32_t idx = OB_INVALID_INDEX;
			 ObPhyOperator* proc_op = NULL;
			 if ((ret = gen_physical_procedure(logical_plan,physical_plan,err_stat,stmt->get_proc_id(),&idx)) != OB_SUCCESS)
			 {
				 TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
			 }
			 else if ((proc_op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *proc_op)) != OB_SUCCESS)
			 {
				 ret = OB_ERR_ILLEGAL_INDEX;
				 TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
			 }
			 else
			 {
				 /*生成存储过程插入数据表的insert操作符*/
				 int32_t insert_idx = OB_INVALID_INDEX;
				 ObPhyOperator* insert_op = NULL;
				 /*这里应该过滤一些类型的语句*/
				 if ((ret = gen_physical_insert_new(logical_plan,physical_plan,err_stat,stmt->get_proc_insert_id(),&insert_idx)) != OB_SUCCESS)
				 {
					 TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
				 }
				 else if ((insert_op = physical_plan->get_phy_query(insert_idx)) == NULL|| (ret = result_op->set_insert_op(*insert_op)) != OB_SUCCESS)
				 {
					 ret = OB_ERR_ILLEGAL_INDEX;
					 TBSYS_LOG(ERROR,"Set child of insert failed");
				 }
			 }
		 }
	}
	return ret;

 }

int ObTransformer::gen_physical_procedure_drop(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureDrop*result_op = NULL;
	ObProcedureDropStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树

	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureDrop, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		 if((ret=result_op->set_proc_name(stmt->get_proc_name()))!=OB_SUCCESS)
		 {
			 TBSYS_LOG(WARN, "result_op set proc_name error");
		 }
		 else
		 {
			 int32_t delete_idx = OB_INVALID_INDEX;
			 ObPhyOperator* delete_op = NULL;
			 /*这里应该过滤一些类型的语句*/
			 if ((ret = gen_physical_delete_new(logical_plan,physical_plan,err_stat,stmt->get_proc_delete_id(),&delete_idx)) != OB_SUCCESS)
			 {
				 TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
			 }
			 else if ((delete_op = physical_plan->get_phy_query(delete_idx)) == NULL|| (ret = result_op->set_delete_op(*delete_op)) != OB_SUCCESS)
			 {
				 ret = OB_ERR_ILLEGAL_INDEX;
				 TBSYS_LOG(ERROR,"Set child of delete failed");
			 }

		 }
		 //设置标志位
		 result_op->set_if_exists(stmt->if_exists());
	}
	return ret;

 }

int ObTransformer::gen_physical_procedure_execute(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureExecute*result_op = NULL;
	ObProcedureExecuteStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureExecute, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		 if((ret=result_op->set_proc_name(stmt->get_proc_name()))!=OB_SUCCESS)
		 {
			 TBSYS_LOG(WARN, "result_op set proc_name error");
		 }
		 else
		 {
			ObSQLSessionInfo *session_info = NULL;
			if ((sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
			{
				ret = OB_NOT_INIT;
				TBSYS_LOG(WARN,"Session info is not initiated");
			}
			if (ret == OB_SUCCESS)
			{
				uint64_t stmt_id = OB_INVALID_ID;
				if (session_info->plan_exists(stmt->get_proc_name(), &stmt_id) == false)
				{
					TBSYS_LOG(WARN,"Can not find stmt %.*s from session_info", stmt->get_proc_name().length(), stmt->get_proc_name().ptr());
					/*重新生成该存储过程的物理计划*/
					int32_t idx = OB_INVALID_INDEX;
					ObPhyOperator* proc_op = NULL;
					if(stmt->get_proc_stmt_id()!=common::OB_INVALID_ID)
					{
						if ((ret = gen_physical_procedure(logical_plan,physical_plan,err_stat,stmt->get_proc_stmt_id(),&idx)) != OB_SUCCESS)
						{
							TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
						}
						else if ((proc_op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *proc_op)) != OB_SUCCESS)
						{
							ret = OB_ERR_ILLEGAL_INDEX;
							TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
						}
						else
						{
							TBSYS_LOG(INFO,"rebuild procedure operator success! %s",to_cstring(*proc_op));
						}
					}
					else
					{
						ret = OB_ERR_ILLEGAL_ID;
					}
				}
				else
				{
					result_op->set_stmt_id(stmt_id);
					TBSYS_LOG(INFO,"plan_exists set_stmt_id=%ld",stmt_id);
				}
			}
			ObProcedureStmt *proc_stmt = NULL;
			if((ret=get_stmt(logical_plan, err_stat, stmt->get_proc_stmt_id(), proc_stmt))!=OB_SUCCESS)
			{
				TBSYS_LOG(ERROR,"Can not find stmt ,stmt_id=%lu",stmt->get_proc_stmt_id());
			}
			else if(stmt->get_param_size()!=proc_stmt->get_param_size())
			{
				//TOTO check the parameters input equal defination
				ret=OB_ERR_PARAM_SIZE;
				TBSYS_LOG(ERROR,"Incorrect number of arguments");
			}
			else
			{
				TBSYS_LOG(INFO,"argument size =%ld",stmt->get_param_size());
				for (int64_t i = 0;i < stmt->get_param_size(); i++)
				{
					uint64_t expr_id = stmt->get_param_expr(i);
					ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
					ObSqlExpression *expr=ObSqlExpression::alloc();
					if (OB_UNLIKELY(raw_expr == NULL))
					{
						ret = OB_ERR_ILLEGAL_ID;
						TBSYS_LOG(ERROR,"Wrong id = %lu to get expression, ret=%d", expr_id, ret);
					}
					else if ((ret = raw_expr->fill_sql_expression(
														 *expr,
														 this,
														 logical_plan,
														 physical_plan)
														 ) != OB_SUCCESS)
					{
						TBSYS_LOG(ERROR,"Generate ObSqlExpression failed, ret=%d", ret);
					}
					else
					{
						ret=result_op->add_param_expr(*expr);
					}
					  /*
					  ObString var_name = stmt->get_variable_name(i);
					  TBSYS_LOG(INFO,"i=%ld name= %s",i,var_name.ptr());
					  if (session_info->variable_exists(var_name))
					  {
						 if ( (ret = result_op->add_param_name(var_name)) != OB_SUCCESS)
						 {
							 TBSYS_LOG(WARN,"add variable %.*s failed", var_name.length(), var_name.ptr());
						 }
						 else
						 {
							 TBSYS_LOG(INFO,"add_param_name %s",var_name.ptr());
						 }
					  }
					  else
					  {
						  ret = OB_ERR_VARIABLE_UNKNOWN;
						  TBSYS_LOG(ERROR,"Variable %.*s Unknown", var_name.length(), var_name.ptr());
					  }
				     */
				}

				//add by zhujun 2015-7-10
				for (int64_t i = 0;i < stmt->get_variable_size(); i++)
				{
					result_op->add_param_name(stmt->get_variable_name(i));
					TBSYS_LOG(INFO,"add_param_name %.*s",stmt->get_variable_name(i).length(),stmt->get_variable_name(i).ptr());
				}

			}
		 }
	}
	return ret;

 }


int ObTransformer::gen_physical_procedure_case(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureCase*result_op = NULL;
	ObProcedureCaseStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureCase, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		/*获取表达式的值*/
		uint64_t expr_id = stmt->get_expr_id();
		ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
		ObSqlExpression *expr=ObSqlExpression::alloc();
		if (OB_UNLIKELY(raw_expr == NULL))
		{
			ret = OB_ERR_ILLEGAL_ID;
			TBSYS_LOG(WARN,"Wrong id = %lu to get expression, ret=%d", expr_id, ret);
		}
		else if ((ret = raw_expr->fill_sql_expression(
											 *expr,
											 this,
											 logical_plan,
											 physical_plan)
											 ) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN,"Generate ObSqlExpression failed, ret=%d", ret);
		}
		else
		{
			ret = result_op->set_expr(*expr);
		}
		if (ret == OB_SUCCESS)
		{
			TBSYS_LOG(INFO, "case when stmt size= %ld",stmt->get_case_when_stmt_size());
			//-----------------------------case when 语句的物理计划生成---------------------------
			for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_case_when_stmt_size(); i++)
			{
				uint64_t stmt_id=stmt->get_case_when_stmt(i);
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*这里应该过滤一些类型的语句*/
				if ((ret = gen_physical_procedure_casewhen(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(WARN, "gen_physical_procedure_casewhen wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child((int32_t)i, *op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(WARN,"Set child of Prepare Operator failed");
				}
			}
			//----------------------------------else 语句的物理计划生成--------------------------
			if(ret==OB_SUCCESS&&stmt->have_else())
			{
				uint64_t stmt_id=stmt->get_else_stmt();
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*生成else语法的物理执行计划*/
				if ((ret = gen_physical_procedure_else(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(WARN, "gen_physical_procedure_case wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_else_op(*op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(WARN,"Set child of Prepare Operator failed");
				}
				else if((ret=result_op->set_have_else(true))!=OB_SUCCESS)
				{
					TBSYS_LOG(WARN, "set_have_else wrong!");
				}
			}
		}

	}
	return ret;

 }


int ObTransformer::gen_physical_procedure_casewhen(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureCaseWhen*result_op = NULL;
	ObProcedureCaseWhenStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureCaseWhen, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		/*获取表达式的值*/
		uint64_t expr_id = stmt->get_expr_id();
		ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
		ObSqlExpression *expr=ObSqlExpression::alloc();

		/*case 表达式的值*/
		uint64_t case_expr_id = stmt->get_case_value_expr();
		ObSqlRawExpr *case_raw_expr = logical_plan->get_expr(case_expr_id);
		ObSqlExpression *case_expr=ObSqlExpression::alloc();

		uint64_t compare_expr_id = stmt->get_compare_expr_id();
		ObSqlRawExpr *compare_raw_expr = logical_plan->get_expr(compare_expr_id);
		ObSqlExpression *compare_expr=ObSqlExpression::alloc();
		if (OB_UNLIKELY(raw_expr == NULL))
		{
			ret = OB_ERR_ILLEGAL_ID;
			TBSYS_LOG(WARN,"Wrong id = %lu to get expression, ret=%d", expr_id, ret);
		}
		else if ((ret = raw_expr->fill_sql_expression(
											 *expr,
											 this,
											 logical_plan,
											 physical_plan)
											 ) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN,"Generate ObSqlExpression failed, ret=%d", ret);
		}
		else if ((ret = case_raw_expr->fill_sql_expression(
													 *case_expr,
													 this,
													 logical_plan,
													 physical_plan)
													 ) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN,"Generate ObSqlExpression failed, ret=%d", ret);
		}
		else if ((ret = compare_raw_expr->fill_sql_expression(
															 *compare_expr,
															 this,
															 logical_plan,
															 physical_plan)
															 ) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN,"Generate ObSqlExpression failed, ret=%d", ret);
		}
		else
		{
			ret = result_op->set_expr(*expr);
			ret = result_op->set_case_expr(*case_expr);
			ret=result_op->set_compare_expr(*compare_expr);
		}
		if (ret == OB_SUCCESS)
		{
			TBSYS_LOG(INFO, "when then stmt size=%ld",stmt->get_then_stmt_size());
			//-----------------------------else if then 语句的物理计划生成---------------------------
			for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_then_stmt_size(); i++)
			{
				uint64_t stmt_id=stmt->get_then_stmt(i);
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*这里应该过滤一些类型的语句*/
				if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(WARN, "generate_physical_plan wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child((int32_t)i, *op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(WARN,"Set child of Prepare Operator failed");
				}
			}
		}

	}
	return ret;
 }


int ObTransformer::gen_physical_procedure_if(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureIf*result_op = NULL;
	ObProcedureIfStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureIf, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		/*获取表达式的值*/
		uint64_t expr_id = stmt->get_expr_id();
		ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
		ObSqlExpression *expr=ObSqlExpression::alloc();
		if (OB_UNLIKELY(raw_expr == NULL))
		{
			ret = OB_ERR_ILLEGAL_ID;
			TBSYS_LOG(ERROR,"Wrong id = %lu to get expression, ret=%d", expr_id, ret);
		}
		else if ((ret = raw_expr->fill_sql_expression(
											 *expr,
											 this,
											 logical_plan,
											 physical_plan)
											 ) != OB_SUCCESS)
		{
			TBSYS_LOG(ERROR,"Generate ObSqlExpression failed, ret=%d", ret);
		}
		else
		{
			ret = result_op->set_expr(*expr);
		}

		if (ret == OB_SUCCESS)
		{
			TBSYS_LOG(INFO, "if then stmt size= %ld",stmt->get_then_stmt_size());
			//-----------------------------if then 语句的物理计划生成---------------------------
			for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_then_stmt_size(); i++)
			{
				uint64_t stmt_id=stmt->get_then_stmt(i);
				TBSYS_LOG(INFO, "foreach then stmt i=%ld stmt_id=%ld ret=%d",i,stmt_id,ret);
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*这里应该过滤一些类型的语句*/
				if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child((int32_t)i, *op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
				}
			}
			//----------------------------------else if 语句的物理计划生成--------------------------
			if(stmt->have_elseif())
			{
				TBSYS_LOG(INFO, "else if stmt size= %ld",stmt->get_elseif_stmt_size());
				for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_elseif_stmt_size(); i++)
				{
					uint64_t stmt_id=stmt->get_elseif_stmt(i);
					int32_t idx = OB_INVALID_INDEX;
					ObPhyOperator* op = NULL;
					/*循环生成elseif语句的物理执行计划*/
					if ((ret = gen_physical_procedure_elseif(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
					{
						TBSYS_LOG(ERROR, "gen_physical_procedure_elseif wrong!");
					}
					else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->add_elseif_op(*op)) != OB_SUCCESS)
					{
						ret = OB_ERR_ILLEGAL_INDEX;
						TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
					}
					else if((ret=result_op->set_have_elseif(true))!=OB_SUCCESS)
					{
						TBSYS_LOG(ERROR, "set_have_elseif wrong!");
					}
				}
			}
			//----------------------------------else 语句的物理计划生成--------------------------
			if(stmt->have_else())
			{
				uint64_t stmt_id=stmt->get_else_stmt();
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*生成else语法的物理执行计划*/
				if ((ret = gen_physical_procedure_else(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(ERROR, "gen_physical_procedure_else wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_else_op(*op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
				}
				else if((ret=result_op->set_have_else(true))!=OB_SUCCESS)
				{
					TBSYS_LOG(ERROR, "set_have_else wrong!");
				}
			}
		}

	}
	return ret;

 }



int ObTransformer::gen_physical_procedure_elseif(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureElseIf*result_op = NULL;
	ObProcedureElseIfStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureElseIf, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		/*获取表达式的值*/
		uint64_t expr_id = stmt->get_expr_id();
		ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
		ObSqlExpression *expr=ObSqlExpression::alloc();
		if (OB_UNLIKELY(raw_expr == NULL))
		{
			ret = OB_ERR_ILLEGAL_ID;
			TBSYS_LOG(ERROR,"Wrong id = %lu to get expression, ret=%d", expr_id, ret);
		}
		else if ((ret = raw_expr->fill_sql_expression(
											 *expr,
											 this,
											 logical_plan,
											 physical_plan)
											 ) != OB_SUCCESS)
		{
			TBSYS_LOG(ERROR,"Generate ObSqlExpression failed, ret=%d", ret);
		}
		else
		{
			ret = result_op->set_expr(*expr);
			TBSYS_LOG(INFO,"set else if expr success!");
		}

		if (ret == OB_SUCCESS)
		{
			TBSYS_LOG(INFO, "else if then stmt size=%ld",stmt->get_then_stmt_size());
			//-----------------------------else if then 语句的物理计划生成---------------------------
			for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_then_stmt_size(); i++)
			{
				uint64_t stmt_id=stmt->get_then_stmt(i);
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*这里应该过滤一些类型的语句*/
				if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child((int32_t)i, *op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
				}
			}
		}

	}
	return ret;

 }

int ObTransformer::gen_physical_procedure_while(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureWhile*result_op = NULL;
	ObProcedureWhileStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureWhile, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		/*获取表达式的值*/
		uint64_t expr_id = stmt->get_expr_id();
		ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
		ObSqlExpression *expr=ObSqlExpression::alloc();
		if (OB_UNLIKELY(raw_expr == NULL))
		{
			ret = OB_ERR_ILLEGAL_ID;
			TBSYS_LOG(ERROR,"Wrong id = %lu to get expression, ret=%d", expr_id, ret);
		}
		else if ((ret = raw_expr->fill_sql_expression(
											 *expr,
											 this,
											 logical_plan,
											 physical_plan)
											 ) != OB_SUCCESS)
		{
			TBSYS_LOG(ERROR,"Generate ObSqlExpression failed, ret=%d", ret);
		}
		else
		{
			ret = result_op->set_expr(*expr);
			TBSYS_LOG(INFO,"set while expr success!");
		}

		if (ret == OB_SUCCESS)
		{
			TBSYS_LOG(INFO, "while then stmt size=%ld",stmt->get_then_stmt_size());
			//-----------------------------while then 语句的物理计划生成---------------------------
			for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_then_stmt_size(); i++)
			{
				uint64_t stmt_id=stmt->get_then_stmt(i);
				int32_t idx = OB_INVALID_INDEX;
				ObPhyOperator* op = NULL;
				/*这里应该过滤一些类型的语句*/
				if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
				{
					TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
				}
				else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child((int32_t)i, *op)) != OB_SUCCESS)
				{
					ret = OB_ERR_ILLEGAL_INDEX;
					TBSYS_LOG(ERROR,"Set child of Prepare Operator failed");
				}
				else
				{
					TBSYS_LOG(INFO, "while generate_physical_plan success! stmt_id=%ld set_child i=%ld",stmt_id,i);
				}
			}
		}

	}
	return ret;

 }


int ObTransformer::gen_physical_procedure_else(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureElse*result_op = NULL;
	ObProcedureElseStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个Stmt语句和逻辑执行计划树
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureElse, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		 for(int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_else_stmt_size(); i++)
		 {
			uint64_t stmt_id=stmt->get_else_stmt(i);
			int32_t idx = OB_INVALID_INDEX;
			ObPhyOperator* op = NULL;
			/*这里应该过滤一些类型的语句*/
			if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt_id,&idx)) != OB_SUCCESS)
			{
				TBSYS_LOG(ERROR, "generate_physical_plan wrong!");
			}
			else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child((int32_t)i, *op)) != OB_SUCCESS)
			{
				ret = OB_ERR_ILLEGAL_INDEX;
				TRANS_LOG("Set child of Prepare Operator failed");
			}
		 }
	}
	return ret;

 }



int ObTransformer::gen_physical_procedure_declare(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureDeclare*result_op = NULL;
	ObProcedureDeclareStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个ExecuteStmt语句和逻辑执行计划树

	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureDeclare, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
		{
			 ObVariableDef var=stmt->get_variable(i);
			 if((ret = result_op->add_proc_var(var)) != OB_SUCCESS)
			 {
				 TRANS_LOG("add ObVariableDef failed, ret=%d", ret);
			 }
		}
	}
	return ret;

 }

int ObTransformer::gen_physical_procedure_select_into(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureSelectInto*result_op = NULL;
	ObProcedureSelectIntoStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);

	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureSelectInto, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
		{
			 ObString var=stmt->get_variable(i);
			 if((ret = result_op->add_variable(var)) != OB_SUCCESS)
			 {
				 TRANS_LOG("add variable failed, ret=%d", ret);
			 }
		}

		int32_t idx = OB_INVALID_INDEX;
		ObPhyOperator* op = NULL;
		if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt->get_declare_id(),&idx)) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
		}
		else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
		{
			ret = OB_ERR_ILLEGAL_INDEX;
			TRANS_LOG("Set child of Prepare Operator failed");
		}

	}
	return ret;

 }
int ObTransformer::gen_physical_procedure_assgin(
		  ObLogicalPlan *logical_plan,
		  ObPhysicalPlan *physical_plan,
		  ErrStat& err_stat,
		  const uint64_t& query_id,
		  int32_t* index)
 {
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	ObProcedureAssgin*result_op = NULL;
	ObProcedureAssginStmt *stmt = NULL;
	get_stmt(logical_plan, err_stat, query_id, stmt);//拿到整个ExecuteStmt语句和逻辑执行计划树
	TBSYS_LOG(INFO,"enter gen_physical_procedure_assgin");
	if (ret == OB_SUCCESS)
	{
	   CREATE_PHY_OPERRATOR(result_op, ObProcedureAssgin, physical_plan, err_stat);
	   if (ret == OB_SUCCESS)
	   {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	   }
	}
	if (ret == OB_SUCCESS)
	{
		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_var_val_size(); i++)
		{
			ObVariableSetVal var_val=stmt->get_var_val(i);

			//TODO var_val-.variable_name_ 判断这个变量是否被定义了

			 /*获取表达式的值*/
			uint64_t expr_id = var_val.var_expr_id_;
			ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
			ObSqlExpression *expr=ObSqlExpression::alloc();
			expr->set_owner_op(result_op);
			if (OB_UNLIKELY(raw_expr == NULL))
			{
				ret = OB_ERR_ILLEGAL_ID;
				TBSYS_LOG(ERROR,"Wrong id = %lu to get expression, ret=%d", expr_id, ret);
			}
			else if ((ret = raw_expr->fill_sql_expression(
												 *expr,
												 this,
												 logical_plan,
												 physical_plan)
												 ) != OB_SUCCESS)
			{
				TBSYS_LOG(ERROR,"Generate ObSqlExpression failed, ret=%d", ret);
			}
			else
			{
				var_val.var_value_=*expr;
			}
			if((ret = result_op->add_var_val(var_val)) != OB_SUCCESS)
			{
				TRANS_LOG("add ObVariableDef failed, ret=%d", ret);
			}

		}
	}
	return ret;

 }
//code_coverage_zhujun
//add:e

int ObTransformer::gen_physical_select(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObSelectStmt *select_stmt = NULL;
  ObPhyOperator *result_op = NULL;

  /* get statement */
  if ((ret = get_stmt(logical_plan, err_stat, query_id, select_stmt)) != OB_SUCCESS)
  {
  }
  else if (select_stmt->is_for_update())
  {
    if ((ret = gen_phy_select_for_update(logical_plan, physical_plan, err_stat, query_id, index)) != OB_SUCCESS)
    {
      //TRANS_LOG("Transform select for update statement failed");
    }
  }
  else
  {
    ObSelectStmt::SetOperator set_type = select_stmt->get_set_op();
    if (set_type != ObSelectStmt::NONE)
    {
      ObSetOperator *set_op = NULL;
      if (ret == OB_SUCCESS)
      {
        switch (set_type)
        {
        case ObSelectStmt::UNION:
        {
          ObMergeUnion *union_op = NULL;
          CREATE_PHY_OPERRATOR(union_op, ObMergeUnion, physical_plan, err_stat);
          set_op = union_op;
          break;
        }
        case ObSelectStmt::INTERSECT:
        {
          ObMergeIntersect *intersect_op = NULL;
          CREATE_PHY_OPERRATOR(intersect_op, ObMergeIntersect, physical_plan, err_stat);
          set_op = intersect_op;
          break;
        }
        case ObSelectStmt::EXCEPT:
        {
          ObMergeExcept *except_op = NULL;
          CREATE_PHY_OPERRATOR(except_op, ObMergeExcept, physical_plan, err_stat);
          set_op = except_op;
          break;
        }
        default:
          break;
        }
        if (OB_SUCCESS == ret)  // ret is a reference to err_stat.err_code_
        {
          set_op->set_distinct(select_stmt->is_set_distinct() ? true : false);
        }
      }
      int32_t lidx = OB_INVALID_INDEX;
      int32_t ridx = OB_INVALID_INDEX;
      if (ret == OB_SUCCESS)
      {
        ret = gen_physical_select(logical_plan, physical_plan, err_stat, select_stmt->get_left_query_id(), &lidx);
      }
      if (ret == OB_SUCCESS)
      {
        ret = gen_physical_select(logical_plan, physical_plan, err_stat, select_stmt->get_right_query_id(), &ridx);
      }

      if (ret == OB_SUCCESS)
      {
        ObPhyOperator *left_op = physical_plan->get_phy_query(lidx);
        ObPhyOperator *right_op = physical_plan->get_phy_query(ridx);
        ObSelectStmt *lselect = dynamic_cast<ObSelectStmt*>(logical_plan->get_query(select_stmt->get_left_query_id()));
        ObSelectStmt *rselect = dynamic_cast<ObSelectStmt*>(logical_plan->get_query(select_stmt->get_right_query_id()));
        if (set_type != ObSelectStmt::UNION || select_stmt->is_set_distinct())
        {
          // 1
          // select c1+c2 from tbl
          // union
          // select c3+c4 rom tbl
          // order by 1;

          // 2
          // select c1+c2 as cc from tbl
          // union
          // select c3+c4 from tbl
          // order by cc;

          // there must be a Project operator on union part,
          // so do not worry non-column expr appear in sot operator

          //CREATE sort operators
          /* Create first sort operator */
          ObSort *left_sort = NULL;
          if (CREATE_PHY_OPERRATOR(left_sort, ObSort, physical_plan,
              err_stat) == NULL)
          {
          }
          else if (ret == OB_SUCCESS && (ret = left_sort->set_child(0, *left_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Set child of sort operator failed");
          }
          ObSqlRawExpr *sort_expr = NULL;
          for (int32_t i = 0; ret == OB_SUCCESS && i < lselect->get_select_item_size(); i++)
          {
            sort_expr = logical_plan->get_expr(lselect->get_select_item(i).expr_id_);
            if (sort_expr == NULL || sort_expr->get_expr() == NULL)
            {
              ret = OB_ERR_ILLEGAL_ID;
              TRANS_LOG("Get internal expression failed");
              break;
            }
            ret = left_sort->add_sort_column(sort_expr->get_table_id(), sort_expr->get_column_id(), true);
            if (ret != OB_SUCCESS)
            {
              TRANS_LOG("Add sort column failed");
            }
          }

          /* Create second sort operator */
          ObSort *right_sort = NULL;
          if (ret == OB_SUCCESS)
            CREATE_PHY_OPERRATOR(right_sort, ObSort, physical_plan, err_stat);
          if (ret == OB_SUCCESS && (ret = right_sort->set_child(0 /* first child */, *right_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Set child of sort operator failed");
          }
          for (int32_t i = 0; ret == OB_SUCCESS && i < rselect->get_select_item_size(); i++)
          {
            sort_expr = logical_plan->get_expr(rselect->get_select_item(i).expr_id_);
            if (sort_expr == NULL || sort_expr->get_expr() == NULL)
            {
              ret = OB_ERR_ILLEGAL_ID;
              TRANS_LOG("Get internal expression failed");
              break;
            }
            ret = right_sort->add_sort_column(sort_expr->get_table_id(), sort_expr->get_column_id(), true);
            if (ret != OB_SUCCESS)
            {
              TRANS_LOG("Add sort column failed");
              break;
            }
          }
          left_op = left_sort;
          right_op = right_sort;
        }
        OB_ASSERT(NULL != set_op);
        set_op->set_child(0 /* first child */, *left_op);
        set_op->set_child(1 /* second child */, *right_op);
      }
      result_op = set_op;

      // generate physical plan for order by
      if (ret == OB_SUCCESS && select_stmt->get_order_item_size() > 0)
        ret = gen_phy_order_by(logical_plan, physical_plan, err_stat, select_stmt, result_op, result_op, true);

      // generate physical plan for limit
      if (ret == OB_SUCCESS && select_stmt->has_limit())
      {
        ret = gen_phy_limit(logical_plan, physical_plan, err_stat, select_stmt, result_op, result_op);
      }

      if (ret == OB_SUCCESS)
      {
        ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, select_stmt, result_op, index);
      }
    }
    else
    {
      /* Normal Select Statement */
      bool group_agg_pushed_down = false;
      bool limit_pushed_down = false;

      // 1. generate physical plan for base-table/outer-join-table/temporary table
      ObList<ObPhyOperator*> phy_table_list;
      ObList<ObBitSet<> > bitset_list;
      ObList<ObSqlRawExpr*> remainder_cnd_list;
      ObList<ObSqlRawExpr*> none_columnlize_alias;
      if (ret == OB_SUCCESS)
        ret = gen_phy_tables(logical_plan, physical_plan, err_stat, select_stmt, group_agg_pushed_down, limit_pushed_down, phy_table_list, bitset_list,
            remainder_cnd_list, none_columnlize_alias);

      // 2. Join all tables
      if (ret == OB_SUCCESS && phy_table_list.size() > 1)
        ret = gen_phy_joins(logical_plan, physical_plan, err_stat, select_stmt,
                            ObJoin::INNER_JOIN, //add maoxx [bloomfilter_join] 20160417
                            phy_table_list, bitset_list, remainder_cnd_list, none_columnlize_alias);
      if (ret == OB_SUCCESS)
        phy_table_list.pop_front(result_op);

      // 3. add filter(s) to the join-op/table-scan-op result
      if (ret == OB_SUCCESS && remainder_cnd_list.size() >= 1)
      {
        ObFilter *filter_op = NULL;
        CREATE_PHY_OPERRATOR(filter_op, ObFilter, physical_plan, err_stat);
        if (ret == OB_SUCCESS && (ret = filter_op->set_child(0, *result_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Set child of filter plan failed");
        }
        oceanbase::common::ObList<ObSqlRawExpr*>::iterator cnd_it;
        for (cnd_it = remainder_cnd_list.begin(); ret == OB_SUCCESS && cnd_it != remainder_cnd_list.end(); cnd_it++)
        {
          ObSqlExpression *filter = ObSqlExpression::alloc();
          if (NULL == filter || (ret = (*cnd_it)->fill_sql_expression(*filter, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = filter_op->add_filter(filter)) != OB_SUCCESS)
          {
            TRANS_LOG("Add filters to filter plan failed");
            break;
          }
        }
        if (ret == OB_SUCCESS)
          result_op = filter_op;
      }

      // 4. generate physical plan for group by/aggregate
      if (ret == OB_SUCCESS && (select_stmt->get_group_expr_size() > 0 || select_stmt->get_agg_fun_size() > 0))
      {
        if (group_agg_pushed_down == false)
        {
          if (select_stmt->get_group_expr_size() > 0)
            ret = gen_phy_group_by(logical_plan, physical_plan, err_stat, select_stmt, result_op, result_op);
          else if (select_stmt->get_agg_fun_size() > 0)
            ret = gen_phy_scalar_aggregate(logical_plan, physical_plan, err_stat, select_stmt, result_op, result_op);
        }
        if (ret == OB_SUCCESS && none_columnlize_alias.size() > 0)
        {
          // compute complex expressions that contain aggreate functions
          ObAddProject *project_op = NULL;
          oceanbase::common::ObList<ObSqlRawExpr*>::iterator alias_it;
          for (alias_it = none_columnlize_alias.begin(); ret == OB_SUCCESS && alias_it != none_columnlize_alias.end();)
          {
            if ((*alias_it)->is_columnlized() == false && (*alias_it)->is_contain_aggr() && (*alias_it)->get_expr()->get_expr_type() != T_REF_COLUMN)
            {
              if (project_op == NULL)
              {
                CREATE_PHY_OPERRATOR(project_op, ObAddProject, physical_plan, err_stat);
                if (ret == OB_SUCCESS && (ret = project_op->set_child(0, *result_op)) != OB_SUCCESS)
                {
                  TRANS_LOG("Set child of filter plan failed");
                  break;
                }
              }
              (*alias_it)->set_columnlized(true);
              ObSqlExpression alias_expr;
              if ((ret = (*alias_it)->fill_sql_expression(alias_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = project_op->add_output_column(alias_expr)) != OB_SUCCESS)
              {
                TRANS_LOG("Add project on aggregate plan failed");
                break;
              }
            }
            common::ObList<ObSqlRawExpr*>::iterator del_alias = alias_it;
            alias_it++;
            if ((ret = none_columnlize_alias.erase(del_alias)) != OB_SUCCESS)
            {
              TRANS_LOG("Add project on aggregate plan failed");
              break;
            }
          }
          if (ret == OB_SUCCESS && project_op != NULL)
            result_op = project_op;
        }
      }

      // 5. generate physical plan for having
      if (ret == OB_SUCCESS && select_stmt->get_having_expr_size() > 0)
      {
        ObFilter *having_op = NULL;
        CREATE_PHY_OPERRATOR(having_op, ObFilter, physical_plan, err_stat);
        ObSqlRawExpr *having_expr;
        int32_t num = select_stmt->get_having_expr_size();
        for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
        {
          having_expr = logical_plan->get_expr(select_stmt->get_having_expr_id(i));
          OB_ASSERT(NULL != having_expr);
          ObSqlExpression *having_filter = ObSqlExpression::alloc();
          if (NULL == having_filter || (ret = having_expr->fill_sql_expression(*having_filter, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = having_op->add_filter(having_filter)) != OB_SUCCESS)
          {
            TRANS_LOG("Add filters to having plan failed");
            break;
          }
        }
        if (ret == OB_SUCCESS)
        {
          if ((ret = having_op->set_child(0, *result_op)) == OB_SUCCESS)
          {
            result_op = having_op;
          }
          else
          {
            TRANS_LOG("Add child of having plan failed");
          }
        }
      }

      // 6. generate physical plan for distinct
      if (ret == OB_SUCCESS && select_stmt->is_distinct())
        ret = gen_phy_distinct(logical_plan, physical_plan, err_stat, select_stmt, result_op, result_op);

      // 7. generate physical plan for order by
      if (ret == OB_SUCCESS && select_stmt->get_order_item_size() > 0)
        ret = gen_phy_order_by(logical_plan, physical_plan, err_stat, select_stmt, result_op, result_op);

      // 8. generate physical plan for limit
      if (ret == OB_SUCCESS && limit_pushed_down == false && select_stmt->has_limit())
      {
        ret = gen_phy_limit(logical_plan, physical_plan, err_stat, select_stmt, result_op, result_op);
      }

      // 8. generate physical plan for select clause
      if (ret == OB_SUCCESS && select_stmt->get_select_item_size() > 0)
      {
        ObProject *project_op = NULL;
        CREATE_PHY_OPERRATOR(project_op, ObProject, physical_plan, err_stat);
        if (ret == OB_SUCCESS && (ret = project_op->set_child(0, *result_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of project plan failed");
        }

        ObSqlRawExpr *select_expr;
        int32_t num = select_stmt->get_select_item_size();
        for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
        {
          const SelectItem& select_item = select_stmt->get_select_item(i);
          select_expr = logical_plan->get_expr(select_item.expr_id_);
          OB_ASSERT(NULL != select_expr);
          if (select_item.is_real_alias_ && select_expr->is_columnlized())
          {
            ObBinaryRefRawExpr col_raw(OB_INVALID_ID, select_expr->get_column_id(), T_REF_COLUMN);
            ObSqlRawExpr col_sql_raw(*select_expr);
            col_sql_raw.set_expr(&col_raw);
            ObSqlExpression col_expr;
            if ((ret = col_sql_raw.fill_sql_expression(col_expr)) != OB_SUCCESS || (ret = project_op->add_output_column(col_expr)) != OB_SUCCESS)
            {
              TRANS_LOG("Add output column to project plan failed");
              break;
            }
          }
          else
          {
            ObSqlExpression col_expr;
            if ((ret = select_expr->fill_sql_expression(col_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = project_op->add_output_column(col_expr)) != OB_SUCCESS)
            {
              TRANS_LOG("Add output column to project plan failed");
              break;
            }
          }
          select_expr->set_columnlized(true);
        }
        if (ret == OB_SUCCESS)
          result_op = project_op;
      }

      if (ret == OB_SUCCESS)
      {
        ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, select_stmt, result_op, index);
      }
    }
  }
  return ret;
}

int ObTransformer::gen_phy_limit(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObSelectStmt *select_stmt, ObPhyOperator *in_op, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObLimit *limit_op = NULL;
  if (!select_stmt->has_limit())
  {
    /* skip */
  }
  else if (CREATE_PHY_OPERRATOR(limit_op, ObLimit, physical_plan,
      err_stat) == NULL)
  {
  }
  else if ((ret = limit_op->set_child(0, *in_op)) != OB_SUCCESS)
  {
    TRANS_LOG("Add child of limit plan failed");
  }
  else
  {
    ObSqlExpression limit_count;
    ObSqlExpression limit_offset;
    ObSqlExpression *ptr = &limit_count;
    uint64_t id = select_stmt->get_limit_expr_id();
    int64_t i = 0;
    for (; ret == OB_SUCCESS && i < 2; i++, id = select_stmt->get_offset_expr_id(), ptr = &limit_offset)
    {
      ObSqlRawExpr *raw_expr = NULL;
      if (id == OB_INVALID_ID)
      {
        continue;
      }
      else if ((raw_expr = logical_plan->get_expr(id)) == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong internal expression id = %lu, ret=%d", id, ret);
        break;
      }
      else if ((ret = raw_expr->fill_sql_expression(*ptr, this, logical_plan, physical_plan)) != OB_SUCCESS)
      {
        TRANS_LOG("Add limit/offset faild");
        break;
      }
    }
    if (ret == OB_SUCCESS && (ret = limit_op->set_limit(limit_count, limit_offset)) != OB_SUCCESS)
    {
      TRANS_LOG("Set limit/offset failed, ret=%d", ret);
    }
  }
  if (ret == OB_SUCCESS)
    out_op = limit_op;
  return ret;
}

int ObTransformer::gen_phy_order_by(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObSelectStmt *select_stmt, ObPhyOperator *in_op, ObPhyOperator *&out_op, bool use_generated_id)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObSort *sort_op = NULL;
  ObProject *project_op = NULL;
  CREATE_PHY_OPERRATOR(sort_op, ObSort, physical_plan, err_stat);

  ObSqlRawExpr *order_expr;
  int32_t num = select_stmt->get_order_item_size();
  for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
  {
    const OrderItem& order_item = select_stmt->get_order_item(i);
    order_expr = logical_plan->get_expr(order_item.expr_id_);
    if (order_expr->get_expr()->is_const())
    {
      // do nothing, const column is of no usage for sorting
    }
    else if (order_expr->get_expr()->get_expr_type() == T_REF_COLUMN)
    {
      ObBinaryRefRawExpr *col_expr = dynamic_cast<ObBinaryRefRawExpr*>(order_expr->get_expr());
      if ((ret = sort_op->add_sort_column(use_generated_id ? order_expr->get_table_id() : col_expr->get_first_ref_id(), use_generated_id ? order_expr->get_column_id() : col_expr->get_second_ref_id(), order_item.order_type_ == OrderItem::ASC ? true : false)) != OB_SUCCESS)
      {
        TRANS_LOG("Add sort column to sort plan failed");
        break;
      }
    }
    else
    {
      if (!project_op)
      {
        CREATE_PHY_OPERRATOR(project_op, ObAddProject, physical_plan, err_stat);
        if (ret != OB_SUCCESS)
          break;
        if ((ret = project_op->set_child(0, *in_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of project plan failed");
          break;
        }
      }
      ObSqlExpression col_expr;
      if ((ret = order_expr->fill_sql_expression(col_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = project_op->add_output_column(col_expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add output column to project plan failed");
        break;
      }
      if ((ret = sort_op->add_sort_column(order_expr->get_table_id(), order_expr->get_column_id(), order_item.order_type_ == OrderItem::ASC ? true : false)) != OB_SUCCESS)
      {
        TRANS_LOG("Add sort column to sort plan failed");
        break;
      }
    }
  }
  if (ret == OB_SUCCESS)
  {
    if (project_op)
      ret = sort_op->set_child(0, *project_op);
    else
      ret = sort_op->set_child(0, *in_op);
    if (ret != OB_SUCCESS)
    {
      TRANS_LOG("Add child of sort plan failed");
    }
  }
  if (ret == OB_SUCCESS)
  {
    if (sort_op->get_sort_column_size() > 0)
      out_op = sort_op;
    else
      out_op = in_op;
  }

  return ret;
}

int ObTransformer::gen_phy_distinct(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObSelectStmt *select_stmt, ObPhyOperator *in_op, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObMergeDistinct *distinct_op = NULL;
  ObSort *sort_op = NULL;
  ObProject *project_op = NULL;
  if (ret == OB_SUCCESS)
    CREATE_PHY_OPERRATOR(sort_op, ObSort, physical_plan, err_stat);
  if (ret == OB_SUCCESS)
    CREATE_PHY_OPERRATOR(distinct_op, ObMergeDistinct, physical_plan, err_stat);
  if (ret == OB_SUCCESS && (ret = distinct_op->set_child(0, *sort_op)) != OB_SUCCESS)
  {
    TRANS_LOG("Add child of distinct plan failed");
  }

  ObSqlRawExpr *select_expr;
  int32_t num = select_stmt->get_select_item_size();
  for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
  {
    const SelectItem& select_item = select_stmt->get_select_item(i);
    select_expr = logical_plan->get_expr(select_item.expr_id_);
    if (select_expr->get_expr()->is_const())
    {
      // do nothing, const column is of no usage for sorting
    }
    else if (select_item.is_real_alias_)
    {
      ret = sort_op->add_sort_column(select_expr->get_table_id(), select_expr->get_column_id(), true);
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add sort column of sort plan failed");
        break;
      }
      ret = distinct_op->add_distinct_column(select_expr->get_table_id(), select_expr->get_column_id());
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add distinct column of distinct plan failed");
        break;
      }
    }
    else if (select_expr->get_expr()->get_expr_type() == T_REF_COLUMN)
    {
      ObBinaryRefRawExpr *col_expr = dynamic_cast<ObBinaryRefRawExpr*>(select_expr->get_expr());
      ret = sort_op->add_sort_column(col_expr->get_first_ref_id(), col_expr->get_second_ref_id(), true);
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add sort column to sort plan failed");
        break;
      }
      ret = distinct_op->add_distinct_column(col_expr->get_first_ref_id(), col_expr->get_second_ref_id());
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add distinct column to distinct plan failed");
        break;
      }
    }
    else
    {
      if (!project_op)
      {
        CREATE_PHY_OPERRATOR(project_op, ObAddProject, physical_plan, err_stat);
        if (ret != OB_SUCCESS)
          break;
        if ((ret = project_op->set_child(0, *in_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of project plan failed");
          break;
        }
      }
      ObSqlExpression col_expr;
      if ((ret = select_expr->fill_sql_expression(col_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = project_op->add_output_column(col_expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add output column to project plan failed");
        break;
      }
      if ((ret = sort_op->add_sort_column(select_expr->get_table_id(), select_expr->get_column_id(), true)) != OB_SUCCESS)
      {
        TRANS_LOG("Add sort column to sort plan failed");
        break;
      }
      if ((ret = distinct_op->add_distinct_column(select_expr->get_table_id(), select_expr->get_column_id())) != OB_SUCCESS)
      {
        TRANS_LOG("Add distinct column to distinct plan failed");
        break;
      }
    }
  }
  if (ret == OB_SUCCESS)
  {
    if (project_op)
      ret = sort_op->set_child(0, *project_op);
    else
      ret = sort_op->set_child(0, *in_op);
    if (ret != OB_SUCCESS)
    {
      TRANS_LOG("Add child to sort plan failed");
    }
  }
  if (ret == OB_SUCCESS)
  {
    out_op = distinct_op;
  }

  return ret;
}

int ObTransformer::gen_phy_group_by(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObSelectStmt *select_stmt, ObPhyOperator *in_op, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObMergeGroupBy *group_op = NULL;
  ObSort *sort_op = NULL;
  ObProject *project_op = NULL;
  if (ret == OB_SUCCESS)
    CREATE_PHY_OPERRATOR(sort_op, ObSort, physical_plan, err_stat);
  if (ret == OB_SUCCESS)
    CREATE_PHY_OPERRATOR(group_op, ObMergeGroupBy, physical_plan, err_stat);
  if (ret == OB_SUCCESS && (ret = group_op->set_child(0, *sort_op)) != OB_SUCCESS)
  {
    TRANS_LOG("Add child of group by plan faild");
  }

  ObSqlRawExpr *group_expr;
  int32_t num = select_stmt->get_group_expr_size();
  for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
  {
    group_expr = logical_plan->get_expr(select_stmt->get_group_expr_id(i));
    OB_ASSERT(NULL != group_expr);
    if (group_expr->get_expr()->get_expr_type() == T_REF_COLUMN)
    {
      ObBinaryRefRawExpr *col_expr = dynamic_cast<ObBinaryRefRawExpr*>(group_expr->get_expr());
      OB_ASSERT(NULL != col_expr);
      ret = sort_op->add_sort_column(col_expr->get_first_ref_id(), col_expr->get_second_ref_id(), true);
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add sort column faild, table_id=%lu, column_id=%lu", col_expr->get_first_ref_id(), col_expr->get_second_ref_id());
        break;
      }
      ret = group_op->add_group_column(col_expr->get_first_ref_id(), col_expr->get_second_ref_id());
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add group column faild, table_id=%lu, column_id=%lu", col_expr->get_first_ref_id(), col_expr->get_second_ref_id());
        break;
      }
    }
    else if (group_expr->get_expr()->is_const())
    {
      // do nothing, const column is of no usage for sorting
    }
    else
    {
      if (!project_op)
      {
        CREATE_PHY_OPERRATOR(project_op, ObAddProject, physical_plan, err_stat);
        if (ret != OB_SUCCESS)
          break;
        if ((ret = project_op->set_child(0, *in_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of project plan faild");
          break;
        }
      }
      ObSqlExpression col_expr;
      if ((ret = group_expr->fill_sql_expression(col_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = project_op->add_output_column(col_expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add output column to project plan faild");
        break;
      }
      if ((ret = sort_op->add_sort_column(group_expr->get_table_id(), group_expr->get_column_id(), true)) != OB_SUCCESS)
      {
        TRANS_LOG("Add sort column to sort plan faild");
        break;
      }
      if ((ret = group_op->add_group_column(group_expr->get_table_id(), group_expr->get_column_id())) != OB_SUCCESS)
      {
        TRANS_LOG("Add group column to group plan faild");
        break;
      }
    }
  }
  if (ret == OB_SUCCESS)
  {
    if (project_op)
      ret = sort_op->set_child(0, *project_op);
    else
      ret = sort_op->set_child(0, *in_op);
    if (ret != OB_SUCCESS)
    {
      TRANS_LOG("Add child to sort plan faild");
    }
  }

  num = select_stmt->get_agg_fun_size();
  ObSqlRawExpr *agg_expr = NULL;
  for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
  {
    agg_expr = logical_plan->get_expr(select_stmt->get_agg_expr_id(i));
    OB_ASSERT(NULL != agg_expr);
    if (agg_expr->get_expr()->is_aggr_fun())
    {
      ObSqlExpression new_agg_expr;
      if ((ret = agg_expr->fill_sql_expression(new_agg_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = group_op->add_aggr_column(new_agg_expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add aggregate function to group plan faild");
        break;
      }
    }
    else
    {
      TRANS_LOG("Wrong aggregate function, exp_id = %lu", agg_expr->get_expr_id());
      break;
    }
    agg_expr->set_columnlized(true);
  }
  if (ret == OB_SUCCESS)
    out_op = group_op;

  return ret;
}

int ObTransformer::gen_phy_scalar_aggregate(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObSelectStmt *select_stmt, ObPhyOperator *in_op, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObScalarAggregate *scalar_agg_op = NULL;
  CREATE_PHY_OPERRATOR(scalar_agg_op, ObScalarAggregate, physical_plan, err_stat);
  if (ret == OB_SUCCESS && (ret = scalar_agg_op->set_child(0, *in_op)) != OB_SUCCESS)
  {
    TRANS_LOG("Add child of scalar aggregate plan failed");
  }

  int32_t num = select_stmt->get_agg_fun_size();
  ObSqlRawExpr *agg_expr = NULL;
  for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
  {
    agg_expr = logical_plan->get_expr(select_stmt->get_agg_expr_id(i));
    OB_ASSERT(NULL != agg_expr);
    if (agg_expr->get_expr()->is_aggr_fun())
    {
      ObSqlExpression new_agg_expr;
      if ((ret = agg_expr->fill_sql_expression(new_agg_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = scalar_agg_op->add_aggr_column(new_agg_expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add aggregate function to scalar aggregate plan failed");
        break;
      }
    }
    else
    {
      TRANS_LOG("wrong aggregate function, exp_id = %ld", agg_expr->get_expr_id());
      break;
    }
    agg_expr->set_columnlized(true);
  }
  if (ret == OB_SUCCESS)
    out_op = scalar_agg_op;

  return ret;
}

//add fanqiushi [semi_join] [0.1] 20150826:b
int ObTransformer::gen_phy_semi_join(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    ObSelectStmt *select_stmt,
    oceanbase::common::ObList<ObPhyOperator*>& phy_table_list,
    oceanbase::common::ObList<ObBitSet<> >& bitset_list,
    oceanbase::common::ObList<ObSqlRawExpr*>& remainder_cnd_list,
    oceanbase::common::ObList<ObSqlRawExpr*>& none_columnlize_alias)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  while (ret == OB_SUCCESS && phy_table_list.size() > 1)   //刚开始的时候phy_table_list.size()为2.while内的代码执行完之后，phy_table_list.size()为1
  {
    ObAddProject *project_op = NULL;   //只跟none_columnlize_alias有关
    ObMergeJoin *join_op = NULL;
    CREATE_PHY_OPERRATOR(join_op, ObMergeJoin, physical_plan, err_stat);
    if (ret != OB_SUCCESS)
      break;
    join_op->set_join_type(ObJoin::INNER_JOIN);

    ObBitSet<> join_table_bitset;
    ObBitSet<> left_table_bitset;
    ObBitSet<> right_table_bitset;
    ObSort *left_sort = NULL;
    ObSort *right_sort = NULL;
    //add fanqiushi [semi_join] [0.1] 20150826:b
    ObSemiLeftJoin *semi_left_join = NULL;
    CREATE_PHY_OPERRATOR(semi_left_join, ObSemiLeftJoin, physical_plan, err_stat);
    //add:e
    oceanbase::common::ObList<ObSqlRawExpr*>::iterator cnd_it;
    oceanbase::common::ObList<ObSqlRawExpr*>::iterator del_it;
    for (cnd_it = remainder_cnd_list.begin(); ret == OB_SUCCESS && cnd_it != remainder_cnd_list.end(); )
    {
      if ((*cnd_it)->get_expr()->is_join_cond() && join_table_bitset.is_empty())  //处理on表达式的只走这个分支
      {
        ObBinaryOpRawExpr *join_cnd = dynamic_cast<ObBinaryOpRawExpr*>((*cnd_it)->get_expr());
        ObBinaryRefRawExpr *lexpr = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_first_op_expr());
        ObBinaryRefRawExpr *rexpr = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_second_op_expr());
        int32_t left_bit_idx = select_stmt->get_table_bit_index(lexpr->get_first_ref_id());
        int32_t right_bit_idx = select_stmt->get_table_bit_index(rexpr->get_first_ref_id());
        CREATE_PHY_OPERRATOR(left_sort, ObSort, physical_plan, err_stat);
        if (ret != OB_SUCCESS)
          break;
        ret = left_sort->add_sort_column(lexpr->get_first_ref_id(), lexpr->get_second_ref_id(), true);
        //add fanqiushi [semi_join] [0.1] 20150826:b
        ret = semi_left_join->set_sort_columns(lexpr->get_first_ref_id(), lexpr->get_second_ref_id());
        //add:e
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu",
              lexpr->get_first_ref_id(), lexpr->get_second_ref_id());
          break;
        }
        CREATE_PHY_OPERRATOR(right_sort, ObSort, physical_plan, err_stat);
        if (ret != OB_SUCCESS)
          break;
        ret = right_sort->add_sort_column(rexpr->get_first_ref_id(), rexpr->get_second_ref_id(), true);
        //add fanqiushi [semi_join] [0.1] 20150826:b
        join_op->set_is_semi_join(true,rexpr->get_first_ref_id(),rexpr->get_second_ref_id());
        //add:e
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu",
              lexpr->get_first_ref_id(), lexpr->get_second_ref_id());
          break;
        }

        oceanbase::common::ObList<ObPhyOperator*>::iterator table_it = phy_table_list.begin();
        oceanbase::common::ObList<ObPhyOperator*>::iterator del_table_it;
        oceanbase::common::ObList<ObBitSet<> >::iterator bitset_it = bitset_list.begin();
        oceanbase::common::ObList<ObBitSet<> >::iterator del_bitset_it;
        ObPhyOperator *left_table_op = NULL;
        ObPhyOperator *right_table_op = NULL;
        while (ret == OB_SUCCESS
            && (!left_table_op || !right_table_op)
            && table_it != phy_table_list.end()
            && bitset_it != bitset_list.end())
        {
          if (bitset_it->has_member(left_bit_idx))
          {
            left_table_op = *table_it;
            left_table_bitset = *bitset_it;
            del_table_it = table_it;
            del_bitset_it = bitset_it;
            table_it++;
            bitset_it++;
            if ((ret = phy_table_list.erase(del_table_it)) != OB_SUCCESS)
              break;
            if ((ret = bitset_list.erase(del_bitset_it)) != OB_SUCCESS)
              break;
          }
          else if (bitset_it->has_member(right_bit_idx))
          {
            right_table_op = *table_it;
            right_table_bitset = *bitset_it;
            del_table_it = table_it;
            del_bitset_it = bitset_it;
            table_it++;
            bitset_it++;
            if ((ret = phy_table_list.erase(del_table_it)) != OB_SUCCESS)
            {
              TRANS_LOG("Generate join plan faild");
              break;
            }
            if ((ret = bitset_list.erase(del_bitset_it)) != OB_SUCCESS)
            {
              TRANS_LOG("Generate join plan faild");
              break;
            }
          }
          else
          {
            table_it++;
            bitset_it++;
          }
        }
        if (ret != OB_SUCCESS)
          break;

        // Two columns must from different table, that expression from one table has been erased in gen_phy_table()
        //add fanqiushi [semi_join] [0.1] 20150826:b
        OB_ASSERT(left_table_op && right_table_op);
        if ((ret = semi_left_join->set_child(0, *left_table_op)) != OB_SUCCESS )
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
        OB_ASSERT(semi_left_join);
        if ((ret = left_sort->set_child(0, *semi_left_join)) != OB_SUCCESS )
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
        if ((ret = right_sort->set_child(0, *right_table_op)) != OB_SUCCESS )
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
        //add:e
        ObSqlExpression join_op_cnd;
        if ((ret = (*cnd_it)->fill_sql_expression(
                                  join_op_cnd,
                                  this,
                                  logical_plan,
                                  physical_plan)) != OB_SUCCESS)
          break;
        if ((ret = join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
        {
          TRANS_LOG("Add condition of join plan faild");
          break;
        }
        join_table_bitset.add_members(left_table_bitset);
        join_table_bitset.add_members(right_table_bitset);

        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else if ((*cnd_it)->get_expr()->is_join_cond()
        && (*cnd_it)->get_tables_set().is_subset(join_table_bitset))   //这个if分支里面不知道它干什么
      {
        ObBinaryOpRawExpr *join_cnd = dynamic_cast<ObBinaryOpRawExpr*>((*cnd_it)->get_expr());
        ObBinaryRefRawExpr *expr1 = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_first_op_expr());
        ObBinaryRefRawExpr *expr2 = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_second_op_expr());
        int32_t bit_idx1 = select_stmt->get_table_bit_index(expr1->get_first_ref_id());
        int32_t bit_idx2 = select_stmt->get_table_bit_index(expr2->get_first_ref_id());
        if (left_table_bitset.has_member(bit_idx1))
          ret = left_sort->add_sort_column(expr1->get_first_ref_id(), expr1->get_second_ref_id(), true);
        else
          ret = right_sort->add_sort_column(expr1->get_first_ref_id(), expr1->get_second_ref_id(), true);
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu",
              expr1->get_first_ref_id(), expr1->get_second_ref_id());
          break;
        }
        if (right_table_bitset.has_member(bit_idx2))
          ret = right_sort->add_sort_column(expr2->get_first_ref_id(), expr2->get_second_ref_id(), true);
        else
          ret = left_sort->add_sort_column(expr2->get_first_ref_id(), expr2->get_second_ref_id(), true);
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu",
              expr2->get_first_ref_id(), expr2->get_second_ref_id());
          break;
        }
        ObSqlExpression join_op_cnd;
        if ((ret = ((*cnd_it)->fill_sql_expression(
                                  join_op_cnd,
                                  this,
                                  logical_plan,
                                  physical_plan))) != OB_SUCCESS
          || (ret = join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
        {
          TRANS_LOG("Add condition of join plan faild");
          break;
        }
        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else if ((*cnd_it)->get_tables_set().is_subset(join_table_bitset)
        && !((*cnd_it)->is_contain_alias()
        && (*cnd_it)->get_tables_set().overlap(left_table_bitset)
        && (*cnd_it)->get_tables_set().overlap(right_table_bitset)))
      {
        ObSqlExpression join_other_cnd;
        if ((ret = ((*cnd_it)->fill_sql_expression(
                                  join_other_cnd,
                                  this,
                                  logical_plan,
                                  physical_plan))) != OB_SUCCESS
          || (ret = join_op->add_other_join_condition(join_other_cnd)) != OB_SUCCESS)
        {
          TRANS_LOG("Add condition of join plan faild");
          break;
        }
        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else
      {
        cnd_it++;
      }
    }

    if (ret == OB_SUCCESS)
    {
      if (join_table_bitset.is_empty() == false)
      {
        // find a join condition, a merge join will be used here
        OB_ASSERT(left_sort != NULL);
        OB_ASSERT(right_sort != NULL);
        if ((ret = join_op->set_child(0, *left_sort)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
        if ((ret = join_op->set_child(1, *right_sort)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
      }
      else
      {
        // Can not find a join condition, a product join will be used here
        // FIX me, should be ObJoin, it will be fixed when Join is supported
        ObPhyOperator *op = NULL;
        if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
        if ((ret = join_op->set_child(0, *op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
        if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
        if ((ret = join_op->set_child(1, *op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }

        bitset_list.pop_front(left_table_bitset);
        join_table_bitset.add_members(left_table_bitset);
        bitset_list.pop_front(right_table_bitset);
        join_table_bitset.add_members(right_table_bitset);
      }
    }

    // add other join conditions
    for (cnd_it = remainder_cnd_list.begin(); ret == OB_SUCCESS && cnd_it != remainder_cnd_list.end(); )
    {
      if ((*cnd_it)->is_contain_alias()
        && (*cnd_it)->get_tables_set().overlap(left_table_bitset)
        && (*cnd_it)->get_tables_set().overlap(right_table_bitset))
      {
        cnd_it++;
      }
      else if ((*cnd_it)->get_tables_set().is_subset(join_table_bitset))
      {
        ObSqlExpression other_cnd;
        if ((ret = (*cnd_it)->fill_sql_expression(
                                  other_cnd,
                                  this,
                                  logical_plan,
                                  physical_plan)) != OB_SUCCESS
          || (ret = join_op->add_other_join_condition(other_cnd)) != OB_SUCCESS)
        {
          TRANS_LOG("Add condition of join plan faild");
          break;
        }
        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else
      {
        cnd_it++;
      }
    }

    // columnlize the alias expression
    oceanbase::common::ObList<ObSqlRawExpr*>::iterator alias_it;
    for (alias_it = none_columnlize_alias.begin(); ret == OB_SUCCESS && alias_it != none_columnlize_alias.end(); )
    {
      if ((*alias_it)->is_columnlized())
      {
        common::ObList<ObSqlRawExpr*>::iterator del_alias = alias_it;
        alias_it++;
        if ((ret = none_columnlize_alias.erase(del_alias)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else if ((*alias_it)->get_tables_set().is_subset(join_table_bitset))
      {
        (*alias_it)->set_columnlized(true);
        if (project_op == NULL)
        {
          CREATE_PHY_OPERRATOR(project_op, ObAddProject, physical_plan, err_stat);
          if (ret != OB_SUCCESS)
            break;
          if ((ret = project_op->set_child(0, *join_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Generate project operator on join plan faild");
            break;
          }
        }
        ObSqlExpression alias_expr;
        if ((ret = (*alias_it)->fill_sql_expression(
                                  alias_expr,
                                  this,
                                  logical_plan,
                                  physical_plan)) != OB_SUCCESS
          || (ret = project_op->add_output_column(alias_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add project column on join plan faild");
          break;
        }
        common::ObList<ObSqlRawExpr*>::iterator del_alias = alias_it;
        alias_it++;
        if ((ret = none_columnlize_alias.erase(del_alias)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else
      {
        alias_it++;
      }
    }

    if (ret == OB_SUCCESS)
    {
      ObPhyOperator *result_op = NULL;
      if (project_op == NULL)
        result_op = join_op;
      else
        result_op = project_op;
      if ((ret = phy_table_list.push_back(result_op)) != OB_SUCCESS
        || (ret = bitset_list.push_back(join_table_bitset)) != OB_SUCCESS)
      {
        TRANS_LOG("Generate join plan failed");
        break;
      }
      join_table_bitset.clear();
    }
  }

  return ret;
}
//add:e

int ObTransformer::gen_phy_joins(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    ObSelectStmt *select_stmt,
    /*add maoxx [bloomfilter_join] 20160417*/
    ObJoin::JoinType join_type,
    /*add e*/
    oceanbase::common::ObList<ObPhyOperator*>& phy_table_list,
    oceanbase::common::ObList<ObBitSet<> >& bitset_list,
    oceanbase::common::ObList<ObSqlRawExpr*>& remainder_cnd_list,
    oceanbase::common::ObList<ObSqlRawExpr*>& none_columnlize_alias){
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  while (ret == OB_SUCCESS && phy_table_list.size() > 1)   //刚开始的时候phy_table_list.size()为2.while内的代码执行完之后，phy_table_list.size()为1
  {
    ObAddProject *project_op = NULL;   //只跟none_columnlize_alias有关
    ObMergeJoin *join_op = NULL;
    /*add maoxx [bloomfilter_join] 20160415*/
    ObBloomFilterJoin *bloomfilter_join_op = NULL;
    bool use_bloomfilter_join_op = false;
    if(select_stmt->get_query_hint().join_op_type_array_.size() > 0)
    {
      ObJoinOPTypeArray tmp = select_stmt->get_query_hint().join_op_type_array_.at(0);
      if(tmp.join_op_type_ == T_BLOOMFILTER_JOIN && (join_type == ObJoin::INNER_JOIN || join_type == ObJoin::LEFT_OUTER_JOIN))
        use_bloomfilter_join_op = true;
    }
    if(use_bloomfilter_join_op)
    {
      CREATE_PHY_OPERRATOR(bloomfilter_join_op, ObBloomFilterJoin, physical_plan, err_stat);
      bloomfilter_join_op->set_join_type(join_type);
    }
    else
    {
      CREATE_PHY_OPERRATOR(join_op, ObMergeJoin, physical_plan, err_stat);
      join_op->set_join_type(join_type);
    }
    /*add e*/
    /*modify maoxx [bloomfilter_join] 20160415*/
    //CREATE_PHY_OPERRATOR(join_op, ObMergeJoin, physical_plan, err_stat);
    if (ret != OB_SUCCESS)
      break;
    //join_op->set_join_type(ObJoin::INNER_JOIN);
    /*modify e*/

    ObBitSet<> join_table_bitset;
    ObBitSet<> left_table_bitset;
    ObBitSet<> right_table_bitset;
    ObSort *left_sort = NULL;
    ObSort *right_sort = NULL;
    oceanbase::common::ObList<ObSqlRawExpr*>::iterator cnd_it;
    oceanbase::common::ObList<ObSqlRawExpr*>::iterator del_it;
    for (cnd_it = remainder_cnd_list.begin(); ret == OB_SUCCESS && cnd_it != remainder_cnd_list.end();)
    {
      if ((*cnd_it)->get_expr()->is_join_cond() && join_table_bitset.is_empty())  //处理on表达式的只走这个分支
      {
        ObBinaryOpRawExpr *join_cnd = dynamic_cast<ObBinaryOpRawExpr*>((*cnd_it)->get_expr());
        ObBinaryRefRawExpr *lexpr = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_first_op_expr());
        ObBinaryRefRawExpr *rexpr = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_second_op_expr());
        int32_t left_bit_idx = select_stmt->get_table_bit_index(lexpr->get_first_ref_id());
        int32_t right_bit_idx = select_stmt->get_table_bit_index(rexpr->get_first_ref_id());
        CREATE_PHY_OPERRATOR(left_sort, ObSort, physical_plan, err_stat);
        if (ret != OB_SUCCESS)
          break;
        ret = left_sort->add_sort_column(lexpr->get_first_ref_id(), lexpr->get_second_ref_id(), true);
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu", lexpr->get_first_ref_id(), lexpr->get_second_ref_id());
          break;
        }
        CREATE_PHY_OPERRATOR(right_sort, ObSort, physical_plan, err_stat);
        if (ret != OB_SUCCESS)
          break;
        ret = right_sort->add_sort_column(rexpr->get_first_ref_id(), rexpr->get_second_ref_id(), true);
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu", lexpr->get_first_ref_id(), lexpr->get_second_ref_id());
          break;
        }

        oceanbase::common::ObList<ObPhyOperator*>::iterator table_it = phy_table_list.begin();
        oceanbase::common::ObList<ObPhyOperator*>::iterator del_table_it;
        oceanbase::common::ObList<ObBitSet<> >::iterator bitset_it = bitset_list.begin();
        oceanbase::common::ObList<ObBitSet<> >::iterator del_bitset_it;
        ObPhyOperator *left_table_op = NULL;
        ObPhyOperator *right_table_op = NULL;
        while (ret == OB_SUCCESS && (!left_table_op || !right_table_op) && table_it != phy_table_list.end() && bitset_it != bitset_list.end())
        {
          if (bitset_it->has_member(left_bit_idx))
          {
            left_table_op = *table_it;
            left_table_bitset = *bitset_it;
            del_table_it = table_it;
            del_bitset_it = bitset_it;
            table_it++;
            bitset_it++;
            if ((ret = phy_table_list.erase(del_table_it)) != OB_SUCCESS)
              break;
            if ((ret = bitset_list.erase(del_bitset_it)) != OB_SUCCESS)
              break;
          }
          else if (bitset_it->has_member(right_bit_idx))
          {
            right_table_op = *table_it;
            right_table_bitset = *bitset_it;
            del_table_it = table_it;
            del_bitset_it = bitset_it;
            table_it++;
            bitset_it++;
            if ((ret = phy_table_list.erase(del_table_it)) != OB_SUCCESS)
            {
              TRANS_LOG("Generate join plan faild");
              break;
            }
            if ((ret = bitset_list.erase(del_bitset_it)) != OB_SUCCESS)
            {
              TRANS_LOG("Generate join plan faild");
              break;
            }
          }
          else
          {
            table_it++;
            bitset_it++;
          }
        }
        if (ret != OB_SUCCESS)
          break;

        // Two columns must from different table, that expression from one table has been erased in gen_phy_table()
        OB_ASSERT(left_table_op && right_table_op);
        if ((ret = left_sort->set_child(0, *left_table_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
        if ((ret = right_sort->set_child(0, *right_table_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Add child of join plan faild");
          break;
        }
        ObSqlExpression join_op_cnd;
        if ((ret = (*cnd_it)->fill_sql_expression(join_op_cnd, this, logical_plan, physical_plan)) != OB_SUCCESS)
          break;
        /*modify maoxx [bloomfilter_join] 20160417*/
//        if ((ret = join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add condition of join plan faild");
//          break;
//        }
        if(use_bloomfilter_join_op)
        {
          if ((ret = bloomfilter_join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        else
        {
          if ((ret = join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        /*modify e*/
        join_table_bitset.add_members(left_table_bitset);
        join_table_bitset.add_members(right_table_bitset);

        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else if ((*cnd_it)->get_expr()->is_join_cond() && (*cnd_it)->get_tables_set().is_subset(join_table_bitset))
      {
        ObBinaryOpRawExpr *join_cnd = dynamic_cast<ObBinaryOpRawExpr*>((*cnd_it)->get_expr());
        ObBinaryRefRawExpr *expr1 = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_first_op_expr());
        ObBinaryRefRawExpr *expr2 = dynamic_cast<ObBinaryRefRawExpr*>(join_cnd->get_second_op_expr());
        int32_t bit_idx1 = select_stmt->get_table_bit_index(expr1->get_first_ref_id());
        int32_t bit_idx2 = select_stmt->get_table_bit_index(expr2->get_first_ref_id());
        if (left_table_bitset.has_member(bit_idx1))
          ret = left_sort->add_sort_column(expr1->get_first_ref_id(), expr1->get_second_ref_id(), true);
        else
          ret = right_sort->add_sort_column(expr1->get_first_ref_id(), expr1->get_second_ref_id(), true);
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu", expr1->get_first_ref_id(), expr1->get_second_ref_id());
          break;
        }
        if (right_table_bitset.has_member(bit_idx2))
          ret = right_sort->add_sort_column(expr2->get_first_ref_id(), expr2->get_second_ref_id(), true);
        else
          ret = left_sort->add_sort_column(expr2->get_first_ref_id(), expr2->get_second_ref_id(), true);
        if (ret != OB_SUCCESS)
        {
          TRANS_LOG("Add sort column faild table_id=%lu, column_id =%lu", expr2->get_first_ref_id(), expr2->get_second_ref_id());
          break;
        }
        ObSqlExpression join_op_cnd;
        /*modify maoxx [bloomfilter_join] 20160417*/
//        if ((ret = ((*cnd_it)->fill_sql_expression(join_op_cnd, this, logical_plan, physical_plan))) != OB_SUCCESS || (ret = join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add condition of join plan faild");
//          break;
//        }
        if ((ret = (*cnd_it)->fill_sql_expression(join_op_cnd, this, logical_plan, physical_plan)) != OB_SUCCESS)
          break;
        if(use_bloomfilter_join_op)
        {
          if ((ret = bloomfilter_join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        else
        {
          if ((ret = join_op->add_equijoin_condition(join_op_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        /*modify e*/
        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else if ((*cnd_it)->get_tables_set().is_subset(join_table_bitset) && !((*cnd_it)->is_contain_alias() && (*cnd_it)->get_tables_set().overlap(left_table_bitset) && (*cnd_it)->get_tables_set().overlap(right_table_bitset)))
      {
        ObSqlExpression join_other_cnd;
        /*modify maoxx [bloomfilter_join] 20160417*/
//        if ((ret = ((*cnd_it)->fill_sql_expression(join_other_cnd, this, logical_plan, physical_plan))) != OB_SUCCESS || (ret = join_op->add_other_join_condition(join_other_cnd)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add condition of join plan faild");
//          break;
//        }
        if ((ret = (*cnd_it)->fill_sql_expression(join_other_cnd, this, logical_plan, physical_plan)) != OB_SUCCESS)
          break;
        if(use_bloomfilter_join_op)
        {
          if ((ret = bloomfilter_join_op->add_other_join_condition(join_other_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        else
        {
          if ((ret = join_op->add_other_join_condition(join_other_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        /*modify e*/
        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else
      {
        cnd_it++;
      }
    }

    if (ret == OB_SUCCESS)
    {
      if (join_table_bitset.is_empty() == false)
      {
        // find a join condition, a merge join will be used here
        OB_ASSERT(left_sort != NULL);
        OB_ASSERT(right_sort != NULL);
        /*modify maoxx [bloomfilter_join] 20160417*/
//        if ((ret = join_op->set_child(0, *left_sort)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add child of join plan faild");
//          break;
//        }
//        if ((ret = join_op->set_child(1, *right_sort)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add child of join plan faild");
//          break;
//        }
        if(use_bloomfilter_join_op)
        {
          if ((ret = bloomfilter_join_op->set_child(0, *left_sort)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
          if ((ret = bloomfilter_join_op->set_child(1, *right_sort)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
        }
        else
        {
          if ((ret = join_op->set_child(0, *left_sort)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
          if ((ret = join_op->set_child(1, *right_sort)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
        }
        /*modify e*/
      }
      else
      {
        // Can not find a join condition, a product join will be used here
        // FIX me, should be ObJoin, it will be fixed when Join is supported
        ObPhyOperator *op = NULL;
        /*modify maoxx [bloomfilter_join] 20160417*/
//        if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Generate join plan faild");
//          break;
//        }
//        if ((ret = join_op->set_child(0, *op)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add child of join plan faild");
//          break;
//        }
//        if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Generate join plan faild");
//          break;
//        }
//        if ((ret = join_op->set_child(1, *op)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add child of join plan faild");
//          break;
//        }
        if(use_bloomfilter_join_op)
        {
          if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
          {
            TRANS_LOG("Generate join plan faild");
            break;
          }
          if ((ret = bloomfilter_join_op->set_child(0, *op)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
          if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
          {
            TRANS_LOG("Generate join plan faild");
            break;
          }
          if ((ret = bloomfilter_join_op->set_child(1, *op)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
        }
        else
        {
          if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
          {
            TRANS_LOG("Generate join plan faild");
            break;
          }
          if ((ret = join_op->set_child(0, *op)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
          if ((ret = phy_table_list.pop_front(op)) != OB_SUCCESS)
          {
            TRANS_LOG("Generate join plan faild");
            break;
          }
          if ((ret = join_op->set_child(1, *op)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of join plan faild");
            break;
          }
        }
        /*modify e*/

        bitset_list.pop_front(left_table_bitset);
        join_table_bitset.add_members(left_table_bitset);
        bitset_list.pop_front(right_table_bitset);
        join_table_bitset.add_members(right_table_bitset);
      }
    }

    // add other join conditions
    for (cnd_it = remainder_cnd_list.begin(); ret == OB_SUCCESS && cnd_it != remainder_cnd_list.end();)
    {
      if ((*cnd_it)->is_contain_alias() && (*cnd_it)->get_tables_set().overlap(left_table_bitset) && (*cnd_it)->get_tables_set().overlap(right_table_bitset))
      {
        cnd_it++;
      }
      else if ((*cnd_it)->get_tables_set().is_subset(join_table_bitset))
      {
        ObSqlExpression other_cnd;
        /*modify maoxx [bloomfilter_join] 20160417*/
//        if ((ret = (*cnd_it)->fill_sql_expression(other_cnd, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = join_op->add_other_join_condition(other_cnd)) != OB_SUCCESS)
//        {
//          TRANS_LOG("Add condition of join plan faild");
//          break;
//        }
        if ((ret = (*cnd_it)->fill_sql_expression(other_cnd, this, logical_plan, physical_plan)) != OB_SUCCESS)
          break;
        if(use_bloomfilter_join_op)
        {
          if ((ret = bloomfilter_join_op->add_other_join_condition(other_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        else
        {
          if ((ret = join_op->add_other_join_condition(other_cnd)) != OB_SUCCESS)
          {
            TRANS_LOG("Add condition of join plan faild");
            break;
          }
        }
        /*modify e*/
        del_it = cnd_it;
        cnd_it++;
        if ((ret = remainder_cnd_list.erase(del_it)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else
      {
        cnd_it++;
      }
    }

    // columnlize the alias expression
    oceanbase::common::ObList<ObSqlRawExpr*>::iterator alias_it;
    for (alias_it = none_columnlize_alias.begin(); ret == OB_SUCCESS && alias_it != none_columnlize_alias.end();)
    {
      if ((*alias_it)->is_columnlized())
      {
        common::ObList<ObSqlRawExpr*>::iterator del_alias = alias_it;
        alias_it++;
        if ((ret = none_columnlize_alias.erase(del_alias)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else if ((*alias_it)->get_tables_set().is_subset(join_table_bitset))
      {
        (*alias_it)->set_columnlized(true);
        if (project_op == NULL)
        {
          CREATE_PHY_OPERRATOR(project_op, ObAddProject, physical_plan, err_stat);
          if (ret != OB_SUCCESS)
            break;
          /*modify maoxx [bloomfilter_join] 20160417*/
//          if ((ret = project_op->set_child(0, *join_op)) != OB_SUCCESS)
//          {
//            TRANS_LOG("Generate project operator on join plan faild");
//            break;
//          }
          if(use_bloomfilter_join_op)
          {
            if ((ret = project_op->set_child(0, *bloomfilter_join_op)) != OB_SUCCESS)
            {
              TRANS_LOG("Generate project operator on join plan faild");
              break;
            }
          }
          else
          {
            if ((ret = project_op->set_child(0, *join_op)) != OB_SUCCESS)
            {
              TRANS_LOG("Generate project operator on join plan faild");
              break;
            }
          }
          /*modify e*/
        }
        ObSqlExpression alias_expr;
        if ((ret = (*alias_it)->fill_sql_expression(alias_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = project_op->add_output_column(alias_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add project column on join plan faild");
          break;
        }
        common::ObList<ObSqlRawExpr*>::iterator del_alias = alias_it;
        alias_it++;
        if ((ret = none_columnlize_alias.erase(del_alias)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate join plan faild");
          break;
        }
      }
      else
      {
        alias_it++;
      }
    }

    if (ret == OB_SUCCESS)
    {
      ObPhyOperator *result_op = NULL;
      if (project_op == NULL)
        /*modify maoxx [bloomfilter_join] 20160417*/
//        result_op = join_op;
      {
        if(use_bloomfilter_join_op)
          result_op = bloomfilter_join_op;
        else
          result_op = join_op;
      }
      /*modify e*/
      else
        result_op = project_op;
      if ((ret = phy_table_list.push_back(result_op)) != OB_SUCCESS || (ret = bitset_list.push_back(join_table_bitset)) != OB_SUCCESS)
      {
        TRANS_LOG("Generate join plan failed");
        break;
      }
      join_table_bitset.clear();
    }
  }
  /*add maoxx [bloomfilter_join] 20160417*/
  select_stmt->get_query_hint().join_op_type_array_.remove(0);
  /*add e*/

  return ret;
}

int ObTransformer::gen_phy_tables(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObSelectStmt *select_stmt,
    bool& group_agg_pushed_down, bool& limit_pushed_down, oceanbase::common::ObList<ObPhyOperator*>& phy_table_list,
    oceanbase::common::ObList<ObBitSet<> >& bitset_list, oceanbase::common::ObList<ObSqlRawExpr*>& remainder_cnd_list,
    oceanbase::common::ObList<ObSqlRawExpr*>& none_columnlize_alias)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObPhyOperator *table_op = NULL;
  ObBitSet<> bit_set;

  int32_t num = select_stmt->get_select_item_size();
  for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
  {
    const SelectItem& select_item = select_stmt->get_select_item(i);
    if (select_item.is_real_alias_)
    {
      ObSqlRawExpr *alias_expr = logical_plan->get_expr(select_item.expr_id_);
      if (alias_expr == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Add alias to internal list failed");
        break;
      }
      else if (alias_expr->is_columnlized() == false && (ret = none_columnlize_alias.push_back(alias_expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add alias to internal list failed");
        break;
      }
    }
  }

  int32_t num_table = select_stmt->get_from_item_size();
  // no from clause of from DUAL
  if (ret == OB_SUCCESS && num_table <= 0)
  {
    ObDualTableScan *dual_table_op = NULL;
    if (CREATE_PHY_OPERRATOR(dual_table_op, ObDualTableScan, physical_plan,
        err_stat) == NULL)
    {
      TRANS_LOG("Generate dual table operator failed, ret=%d", ret);
    }
    else if ((ret = phy_table_list.push_back(dual_table_op)) != OB_SUCCESS)
    {
      TRANS_LOG("Add table to internal list failed");
    }
    // add empty bit set
    else if ((ret = bitset_list.push_back(bit_set)) != OB_SUCCESS)
    {
      TRANS_LOG("Add bitset to internal list failed");
    }
  }
  for (int32_t i = 0; ret == OB_SUCCESS && i < num_table; i++)
  {
    const FromItem& from_item = select_stmt->get_from_item(i);
    if (from_item.is_joined_ == false)
    {
      /* base-table or temporary table */
      if ((ret = gen_phy_table(logical_plan, physical_plan, err_stat, select_stmt, from_item.table_id_, table_op, &group_agg_pushed_down, &limit_pushed_down)) != OB_SUCCESS)
        break;
      bit_set.add_member(select_stmt->get_table_bit_index(from_item.table_id_));
    }
    else
    {
      /* Outer Join */
      JoinedTable *joined_table = select_stmt->get_joined_table(from_item.table_id_);
      if (joined_table == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong joined table id '%lu'", from_item.table_id_);
        break;
      }
      OB_ASSERT(joined_table->table_ids_.count() >= 2);
      OB_ASSERT(joined_table->table_ids_.count() - 1 == joined_table->join_types_.count());
      OB_ASSERT(joined_table->join_types_.count() == joined_table->expr_ids_.count());

      if ((ret = gen_phy_table(logical_plan, physical_plan, err_stat, select_stmt, joined_table->table_ids_.at(0), table_op)) != OB_SUCCESS)
      {
        break;
      }
      bit_set.add_member(select_stmt->get_table_bit_index(joined_table->table_ids_.at(0)));

      ObPhyOperator *right_op = NULL;
      ObJoin *join_op = NULL;
      ObSqlRawExpr *join_expr = NULL;
      for (int32_t j = 1; ret == OB_SUCCESS && j < joined_table->table_ids_.count(); j++)
      {
        if ((ret = gen_phy_table(logical_plan, physical_plan, err_stat, select_stmt, joined_table->table_ids_.at(j), right_op)) != OB_SUCCESS)
        {
          break;
        }
        ObList<ObPhyOperator*> outer_join_tabs;
        ObList<ObBitSet<> > outer_join_bitsets;
        ObList<ObSqlRawExpr*> outer_join_cnds;
        if (OB_SUCCESS != (ret = outer_join_tabs.push_back(table_op)) || OB_SUCCESS != (ret = outer_join_tabs.push_back(right_op)) || OB_SUCCESS != (ret = outer_join_bitsets.push_back(bit_set)))
        {
          TBSYS_LOG(WARN, "fail to push op to outer_join tabs. ret=%d", ret);
          break;
        }
        ObBitSet<> right_table_bitset;
        int32_t right_table_bit_index = select_stmt->get_table_bit_index(joined_table->table_ids_.at(j));
        right_table_bitset.add_member(right_table_bit_index);
        bit_set.add_member(right_table_bit_index);
        if (OB_SUCCESS != (ret = outer_join_bitsets.push_back(right_table_bitset)))
        {
          TBSYS_LOG(WARN, "fail to push bitset to list. ret=%d", ret);
          break;
        }
        join_expr = logical_plan->get_expr(joined_table->expr_ids_.at(j - 1));
        if (join_expr == NULL)
        {
          ret = OB_ERR_ILLEGAL_INDEX;
          TRANS_LOG("Add outer join condition faild");
          break;
        }
        else if (OB_SUCCESS != (ret = outer_join_cnds.push_back(join_expr)))
        {
          TBSYS_LOG(WARN, "fail to push bitset to list. ret=%d", ret);
          break;
        }
        // Now we don't optimize outer join
        // outer_join_cnds is empty, we will do something when optimizing.

        /*add maoxx [bloomfilter_join] 20160417*/
        ObJoin::JoinType join_type = ObJoin::INNER_JOIN;
        if(OB_SUCCESS == ret)
        {
          switch (joined_table->join_types_.at(j - 1))
          {
          case JoinedTable::T_FULL:
            join_type = ObJoin::FULL_OUTER_JOIN;
            break;
          case JoinedTable::T_LEFT:
            join_type = ObJoin::LEFT_OUTER_JOIN;
            break;
          case JoinedTable::T_RIGHT:
            join_type = ObJoin::RIGHT_OUTER_JOIN;
            break;
          case JoinedTable::T_INNER:
            join_type = ObJoin::INNER_JOIN;
            break;
          default:
            /* won't be here */
            join_type = ObJoin::INNER_JOIN;
            break;
          }
        }
        /*add e*/

        //add fanqiushi [semi_join] [0.1] 20150826:b
        bool is_do_semi_join = 0;
        //add fanqiushi [semi_join] [0.1] 20150829:b
       // TBSYS_LOG(ERROR,"test::fanqs,,enter gen_phy_tables");
        //add:e
        if(j == 1)        {
          uint64_t left_tid = joined_table->table_ids_.at(0);
          uint64_t right_tid = joined_table->table_ids_.at(1);
          //add fanqiushi [semi_join] [0.1] 20150829:b
          //TBSYS_LOG(ERROR,"test::fanqs,,select_stmt->get_query_hint().has_semi_join_hint()=%d",select_stmt->get_query_hint().has_semi_join_hint());
          //add:e
          if(select_stmt->get_query_hint().has_semi_join_hint())
          {
            ObSemiTableList tmp= select_stmt->get_query_hint().use_join_array_.at(0);
            //add fanqiushi [semi_join] [0.1] 20150829:b
            //TBSYS_LOG(ERROR,"test::fanqs,, tmp.left_table_id_ =%ld,tmp.right_table_id_ =%ld,left_tid=%ld,right_tid=%ld,joined_table->join_types_.at(0)=%ld", tmp.left_table_id_,tmp.right_table_id_ ,left_tid, right_tid,joined_table->join_types_.at(0));
            //add:e
            if(left_tid == tmp.left_table_id_ && right_tid == tmp.right_table_id_ && joined_table->join_types_.at(0) == JoinedTable::T_INNER)
            {
              is_do_semi_join = 1;
            }
          }
        }
         if(is_do_semi_join)
        {
            if ((ret = gen_phy_semi_join(
                            logical_plan,
                            physical_plan,
                            err_stat,
                            select_stmt,
                            outer_join_tabs,
                            outer_join_bitsets,
                            outer_join_cnds,
                            none_columnlize_alias)) != OB_SUCCESS)
            {
              break;
            }
        }
        else
        {
            if ((ret = gen_phy_joins(
                            logical_plan,
                            physical_plan,
                            err_stat,
                            select_stmt,
                            /*add maoxx [bloomfilter_join] 20160417*/
                            join_type,
                            /*add e*/
                            outer_join_tabs,
                            outer_join_bitsets,
                            outer_join_cnds,
                            none_columnlize_alias)) != OB_SUCCESS)
            {
              break;
            }
        }
        //add:e
        if ((ret = outer_join_tabs.pop_front(table_op)) != OB_SUCCESS
          || (join_op = dynamic_cast<ObJoin*>(table_op)) == NULL)        {
          ret = OB_ERR_OPERATOR_UNKNOWN;
          TRANS_LOG("Generate outer join operator failed");
          break;
        }
        switch (joined_table->join_types_.at(j - 1))
        {
        case JoinedTable::T_FULL:
          ret = join_op->set_join_type(ObJoin::FULL_OUTER_JOIN);
          break;
        case JoinedTable::T_LEFT:
          ret = join_op->set_join_type(ObJoin::LEFT_OUTER_JOIN);
          break;
        case JoinedTable::T_RIGHT:
          ret = join_op->set_join_type(ObJoin::RIGHT_OUTER_JOIN);
          break;
        case JoinedTable::T_INNER:
          ret = join_op->set_join_type(ObJoin::INNER_JOIN);
          break;
        default:
          /* won't be here */
          ret = join_op->set_join_type(ObJoin::INNER_JOIN);
          break;
        }
      }
    }
    if (ret == OB_SUCCESS && (ret = phy_table_list.push_back(table_op)) != OB_SUCCESS)
    {
      TRANS_LOG("Add table to internal list failed");
      break;
    }
    if (ret == OB_SUCCESS && (ret = bitset_list.push_back(bit_set)) != OB_SUCCESS)
    {
      TRANS_LOG("Add bitset to internal list failed");
      break;
    }
    bit_set.clear();
  }

  num = select_stmt->get_condition_size();
  for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
  {
    uint64_t expr_id = select_stmt->get_condition_id(i);
    ObSqlRawExpr *where_expr = logical_plan->get_expr(expr_id);
    if (where_expr && where_expr->is_apply() == false && (ret = remainder_cnd_list.push_back(where_expr)) != OB_SUCCESS)
    {
      TRANS_LOG("Add condition to internal list failed");
      break;
    }
  }

  return ret;
}

//add longfei [secondary index select] 20151101
int ObTransformer::gen_phy_table_not_back(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    ObStmt *stmt,
    uint64_t table_id,
    ObPhyOperator*& table_op,
    bool* group_agg_pushed_down,
    bool* limit_pushed_down,
    bool is_use_storing_column,
    uint64_t index_tid,
    Expr_Array *filter_array,
    Expr_Array *project_array)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  TableItem* table_item = NULL;
  ObSqlReadStrategy sql_read_strategy;

  ObSecondaryIndexServiceImpl sec_idx_ser_impl;
  ObSecondaryIndexService* sec_idx_ser = &sec_idx_ser_impl;
  if (NULL == sec_idx_ser)
  {
    TBSYS_LOG(ERROR, "alloc mem failed");
    ret = OB_ERROR;
  }
  sec_idx_ser->init(sql_context_->schema_manager_);
  int64_t num = 0;
//  int64_t sub_query_num = 0;
  bool is_ailias_table = false;
  ObRpcScanHint hint;
  uint64_t source_tid = OB_INVALID_ID;
  ObTableScan *table_scan_op = NULL;
  UNUSED(logical_plan);

  if (table_id == OB_INVALID_ID || (table_item = stmt->get_table_item_by_id(table_id)) == NULL)
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Wrong table id");
  }
  else if (filter_array == NULL || project_array == NULL)
  {
    ret = OB_ERROR;
    TBSYS_LOG(ERROR, "filter_array==NULL or project_array == NULL");
  }
  else
  {
    source_tid = table_item->ref_id_;
    TBSYS_LOG(INFO,"ref_tid = %d, table_id = %ld, type = %d, table name = %.*s",
              (int)source_tid, table_item->table_id_, (int)table_item->type_, table_item->table_name_.length(), table_item->table_name_.ptr());
    if (table_item->type_ == TableItem::ALIAS_TABLE)
    {
      is_ailias_table = true;
    }
    if (is_use_storing_column)
    {
      table_item->ref_id_ = index_tid;
    }
  }

  TBSYS_LOG(INFO,"ref_tid = %d, table_id = %ld, type = %d, table name = %.*s",
            (int)source_tid, table_item->table_id_, (int)table_item->type_, table_item->table_name_.length(), table_item->table_name_.ptr());
  if (ret == OB_SUCCESS)
  {
    switch (table_item->type_)
    {
    case TableItem::BASE_TABLE:
      /* get through */
    case TableItem::ALIAS_TABLE:
    {
      ObTableRpcScan *table_rpc_scan_op = NULL;
      CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat);
      if (is_ailias_table == false)
      {
        if (ret == OB_SUCCESS && (ret = table_rpc_scan_op->set_table(table_item->ref_id_, table_item->ref_id_)) != OB_SUCCESS)
        {
          TRANS_LOG("ObTableRpcScan set table faild");
        }
      }
      else
      {
        if (ret == OB_SUCCESS && (ret = table_rpc_scan_op->set_table(table_item->table_id_, table_item->ref_id_)) != OB_SUCCESS)
        {
          TRANS_LOG("ObTableRpcScan set table faild");
        }
      }
      table_rpc_scan_op->set_is_index_for_storing(true, index_tid);

      num = project_array->count();
      ObRowDesc desc_for_storing;
      for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
      {
        ObSqlExpression output_expr = project_array->at(i);
        if (OB_SUCCESS != (ret = desc_for_storing.add_column_desc(output_expr.get_table_id(), output_expr.get_column_id())))
        {
          TBSYS_LOG(WARN, "fail to add column desc:ret[%d]", ret);
        }
      }
      if (OB_SUCCESS == ret)
      {
        table_rpc_scan_op->set_is_use_index_for_storing(source_tid, desc_for_storing);
      }
      //determin request type: scan/get
      if (OB_SUCCESS == ret)
      {
        const ObTableSchema *table_schema = NULL;
        if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_item->ref_id_)))
        {
          ret = OB_ERROR;
          TRANS_LOG("Fail to get table schema for table[%ld]", table_item->ref_id_);
        }
        else
        {
          sql_read_strategy.set_rowkey_info(table_schema->get_rowkey_info());
          if ((ret = physical_plan->add_base_table_version(table_item->ref_id_, table_schema->get_schema_version())) != OB_SUCCESS)
          {
            TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_item->ref_id_, ret);
          }
        }
      }
      if (OB_SUCCESS == ret)
      {
        int32_t read_method = ObSqlReadStrategy::USE_SCAN;
        hint.read_method_ = read_method;
      }

      if (ret == OB_SUCCESS)
      {
        ObSelectStmt *select_stmt = dynamic_cast<ObSelectStmt*>(stmt);
        if (select_stmt && select_stmt->get_group_expr_size() <= 0 && select_stmt->get_having_expr_size() <= 0 && select_stmt->get_order_item_size() <= 0
            && hint.read_method_ != ObSqlReadStrategy::USE_GET)
        {
          hint.max_parallel_count = 1;
        }
        if ((ret = table_rpc_scan_op->init(sql_context_, &hint)) != OB_SUCCESS)
        {
          TRANS_LOG("ObTableRpcScan init faild");
        }
      }
      if (ret == OB_SUCCESS)
      {
        table_scan_op = table_rpc_scan_op;
      }
      break;
    }
    default:
      // won't be here
      OB_ASSERT(0);
      break;
    }
  }

  if (OB_SUCCESS == ret)
  {
    num = filter_array->count();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      ObSqlExpression *filter = ObSqlExpression::alloc();
      if (NULL == filter)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TRANS_LOG("no memory");
        break;
      }
      else
      {
        *filter = filter_array->at(i);
        if (is_use_storing_column == true && is_ailias_table == false)
        {
          ObPostfixExpression& ops = filter->get_decoded_expression_v2();
          uint64_t index_of_expr_array = OB_INVALID_ID;
          if (OB_SUCCESS != (ret = sec_idx_ser->change_tid(filter, index_of_expr_array)))
          {
            TBSYS_LOG(ERROR, "faild to change tid,filter=%s", to_cstring(*filter));

          }
          ObObj& obj = ops.get_expr_by_index(index_of_expr_array);
          if (obj.get_type() == ObIntType)
            obj.set_int(index_tid);
        }
        if ((ret = table_scan_op->add_filter(filter)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table filter condition faild");
          break;
        }
      }
    }
    // add output columns
    num = project_array->count();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {

      ObSqlExpression output_expr = project_array->at(i);
      if (is_use_storing_column)
      {
        if (is_ailias_table == false)
        {
          ObArray<uint64_t> index_column_array;
          if (OB_SUCCESS == sec_idx_ser->get_all_cloumn(output_expr, index_column_array))
          {
            for (int32_t i = 0; i < index_column_array.count(); i++)
            {
              ObPostfixExpression& ops = output_expr.get_decoded_expression_v2();
              ObObj& obj = ops.get_expr_by_index(index_column_array.at(i));
              if (obj.get_type() == ObIntType)
                obj.set_int(index_tid);
            }
          }
        }
        //output_expr.set_tid_cid();
        if (output_expr.get_table_id() == source_tid)
        {
          output_expr.set_table_id(index_tid);
        }
        if ((ret = table_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }

      }
    }
  }
  if (ret == OB_SUCCESS)
  {
    table_op = table_scan_op;
  }
  *group_agg_pushed_down = false;
  *limit_pushed_down = false;

  return ret;
}

//add longfei
int ObTransformer::gen_phy_table_back(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObStmt *stmt, uint64_t table_id,
    ObPhyOperator*& table_op, bool* group_agg_pushed_down, bool* limit_pushed_down, uint64_t index_tid_without_storing, Expr_Array * filter_array,
    Expr_Array * project_array)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  TableItem* table_item = NULL;
  ObSecondaryIndexServiceImpl sec_idx_ser_impl;
  ObSecondaryIndexService* sec_idx_ser = &sec_idx_ser_impl;
  if (NULL == sec_idx_ser)
  {
    TBSYS_LOG(ERROR, "alloc mem failed");
    ret = OB_ERROR;
  }
  sec_idx_ser->init(sql_context_->schema_manager_);
  ObSqlReadStrategy sql_read_strategy;
  int64_t num = 0;
  ObRpcScanHint hint;
  ObTableScan *table_scan_op = NULL;

  if (table_id == OB_INVALID_ID || (table_item = stmt->get_table_item_by_id(table_id)) == NULL)
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Wrong table id");
  }

  if (ret == OB_SUCCESS)
  {
    switch (table_item->type_)
    {
    case TableItem::BASE_TABLE:
      /* get through */
    case TableItem::ALIAS_TABLE:
    {
      ObTableRpcScan *table_rpc_scan_op = NULL;
      CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat);
      if (ret == OB_SUCCESS && (ret = table_rpc_scan_op->set_table(table_item->table_id_, index_tid_without_storing)) != OB_SUCCESS)
      {
        TRANS_LOG("ObTableRpcScan set table faild");
      }

      table_rpc_scan_op->set_main_tid(table_item->ref_id_);
      table_rpc_scan_op->set_is_use_index_without_storing();
      table_rpc_scan_op->set_is_index_without_storing(true, index_tid_without_storing);

      const ObTableSchema *main_table_schema = NULL;
      if (NULL == (main_table_schema = sql_context_->schema_manager_->get_table_schema(table_item->ref_id_)))
      {
        ret = OB_ERROR;
        TRANS_LOG("Fail to get table schema for table[%ld]", index_tid_without_storing);
      }
      else
      {
        table_rpc_scan_op->set_main_rowkey_info(main_table_schema->get_rowkey_info());
      }

      //determin request type: scan/get
      if (OB_SUCCESS == ret)
      {
        const ObTableSchema *table_schema = NULL;
        if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(index_tid_without_storing)))
        {
          ret = OB_ERROR;
          TRANS_LOG("Fail to get table schema for table[%ld]", index_tid_without_storing);
        }
        else
        {
          sql_read_strategy.set_rowkey_info(table_schema->get_rowkey_info());
          if ((ret = physical_plan->add_base_table_version(index_tid_without_storing, table_schema->get_schema_version())) != OB_SUCCESS)
          {
            TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", index_tid_without_storing, ret);
          }
        }
      }
      if (OB_SUCCESS == ret)
      {
        int32_t read_method = ObSqlReadStrategy::USE_SCAN;
        hint.read_method_ = read_method;
      }

      if (ret == OB_SUCCESS)
      {
        ObSelectStmt *select_stmt = dynamic_cast<ObSelectStmt*>(stmt);
        if (select_stmt && select_stmt->get_group_expr_size() <= 0 && select_stmt->get_having_expr_size() <= 0 && select_stmt->get_order_item_size() <= 0
            && hint.read_method_ != ObSqlReadStrategy::USE_GET)
        {
          hint.max_parallel_count = 1;
        }
        if ((ret = table_rpc_scan_op->init(sql_context_, &hint)) != OB_SUCCESS)
        {
          TRANS_LOG("ObTableRpcScan init faild");
        }
      }
      if (ret == OB_SUCCESS)
        table_scan_op = table_rpc_scan_op;
      break;
    }
    default:
      // won't be here
      OB_ASSERT(0);
      break;
    }
  }

  if (OB_SUCCESS == ret && filter_array != NULL && project_array != NULL)
  {
    num = filter_array->count();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      ObSqlExpression *filter = ObSqlExpression::alloc();
      *filter = filter_array->at(i);
      //因为要回表，第一次scan索引表，第二次get原表。这里我把filter先存起来，在第二次get的时候生成get_param的时候会用到
      if ((ret = table_scan_op->add_main_filter(filter)) != OB_SUCCESS)
      {
        TRANS_LOG("Add table filter condition faild");
        break;
      }
      uint64_t f_cid = OB_INVALID_ID;
      if (OB_SUCCESS == (ret = sec_idx_ser->get_cid(filter, f_cid)))
      {
        int64_t bool_result = sec_idx_ser->is_cid_in_index_table(f_cid, index_tid_without_storing);//0 表示索引表没有这一列 1 表示索引表主键有这一列  2表示索引表非主键有这一列
        if (bool_result != 0)  //如果该filter可以作为索引表的filter
        {
          ObPostfixExpression& ops = filter->get_decoded_expression_v2();
          uint64_t index_of_expr_array = OB_INVALID_ID;
          if (OB_SUCCESS != (ret = sec_idx_ser->change_tid(filter, index_of_expr_array)))
          {
            TBSYS_LOG(ERROR, "faild to change tid,filter=%s", to_cstring(*filter));
          }
          ObObj& obj = ops.get_expr_by_index(index_of_expr_array);
          if (obj.get_type() == ObIntType)
            obj.set_int(index_tid_without_storing);
          if ((ret = table_scan_op->add_filter(filter)) != OB_SUCCESS)
          {
            TRANS_LOG("Add table filter condition faild");
            break;
          }
        }
      }
    }

    // add output columns
    num = project_array->count();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      ObSqlExpression output_expr = project_array->at(i);
      if ((ret = table_scan_op->add_main_output_column(output_expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add table output columns faild");
        break;
      }

    }

    if (OB_SUCCESS == ret)
    {
      ObRowDesc row_desc;
      if (OB_SUCCESS != (ret = table_scan_op->cons_second_row_desc(row_desc)))
      {
        TBSYS_LOG(WARN, "faild to cons_second_row_desc,ret=%d", ret);
      }
      else if (OB_SUCCESS != (ret = table_scan_op->set_second_row_desc(&row_desc)))
      {
        TBSYS_LOG(WARN, "faild to set_second_row_desc,ret=%d", ret);
      }
    }
    if (OB_SUCCESS == ret)
    {
      const ObTableSchema *index_table_schema = NULL;
      if (NULL == (index_table_schema = sql_context_->schema_manager_->get_table_schema(index_tid_without_storing)))
      {
        ret = OB_ERROR;
        TRANS_LOG("Fail to get table schema for table[%ld]", index_tid_without_storing);
      }
      else
      {
        uint64_t cid = OB_INVALID_ID;
        int64_t rowkey_column = index_table_schema->get_rowkey_info().get_size();
        for (int64_t j = 0; j < rowkey_column; j++)
        {
          if (OB_SUCCESS != (ret = index_table_schema->get_rowkey_info().get_column_id(j, cid)))
          {
            TBSYS_LOG(ERROR, "get column schema failed,cid[%ld]", cid);
            ret = OB_SCHEMA_ERROR;
          }
          else
          {
            ObBinaryRefRawExpr col_expr(index_tid_without_storing, cid, T_REF_COLUMN);
            ObSqlRawExpr col_raw_expr(common::OB_INVALID_ID, index_tid_without_storing, cid, &col_expr);
            ObSqlExpression output_expr;
            if ((ret = col_raw_expr.fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS)

            {
              TRANS_LOG("Add table output columns faild");
              break;
            }
            else if ((ret = table_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
            {
              TRANS_LOG("Add table output columns faild");
              break;
            }
          }
        }
      }
    }

    num = filter_array->count();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      ObSqlExpression *filter = ObSqlExpression::alloc();
      *filter = filter_array->at(i);

      uint64_t cid = OB_INVALID_ID;
      if (OB_SUCCESS == (ret = sec_idx_ser->get_cid(filter, cid)))
      {
        int64_t bool_result = sec_idx_ser->is_cid_in_index_table(cid, index_tid_without_storing);
        if (bool_result == 2)
        {
          ObBinaryRefRawExpr col_expr(index_tid_without_storing, cid, T_REF_COLUMN);
          ObSqlRawExpr col_raw_expr(common::OB_INVALID_ID, index_tid_without_storing, cid, &col_expr);
          ObSqlExpression output_expr;
          if ((ret = col_raw_expr.fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS)

          {
            TRANS_LOG("Add table output columns faild");
            break;
          }
          else if ((ret = table_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
          {
            TRANS_LOG("Add table output columns faild");
            break;
          }
        }
        else if (bool_result == 0)
        {
          if ((ret = table_scan_op->add_index_filter(filter)) != OB_SUCCESS)
          {
            TBSYS_LOG(WARN, "faild to add index_filter,ret=%d", ret);
          }
        }
      }
    }
  }
  if (ret == OB_SUCCESS)
    table_op = table_scan_op;
  *group_agg_pushed_down = false;
  *limit_pushed_down = false;
  return ret;
}

bool ObTransformer::
handle_index_for_one_table(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    ObStmt *stmt,
    uint64_t table_id,
    ObPhyOperator*& table_op,
    bool* group_agg_pushed_down,
    bool* limit_pushed_down)
{
  Expr_Array filter_array;
  Expr_Array project_array;
  ObArray<uint64_t> alias_exprs;
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  bool return_ret = false;
  bool is_gen_table = false;
  TableItem* table_item = NULL;
  ObBitSet<> table_bitset;
  int32_t num = 0;
  UNUSED(group_agg_pushed_down);
  UNUSED(limit_pushed_down);

  if (NULL == stmt)
  {
    TBSYS_LOG(ERROR, "enter this  stmt=NULL");
  }
  else
  {
    table_item = stmt->get_table_item_by_id(table_id);
  }
  if (table_item != NULL)
  {
    if (table_item->type_ != TableItem::BASE_TABLE && table_item->type_ != TableItem::ALIAS_TABLE)
    {
      ret = OB_NOT_SUPPORTED;
      //add BUG
      is_gen_table = true;
      //add:e
      TBSYS_LOG(WARN, " not support this type, table_item->type_=%d", table_item->type_);
    }
  }
  else
  {
    TBSYS_LOG(WARN, "  table_item=NULL");
    ret = OB_NOT_SUPPORTED;
  }

  if (OB_SUCCESS == ret)    //很据table_bitset，把sql语句中与该表有关的filter和输出列都存到相应的数组里面
  {
    int32_t bit_index = stmt->get_table_bit_index(table_item->table_id_);
    table_bitset.add_member(bit_index);

    //add filter
    num = stmt->get_condition_size();
    //TBSYS_LOG(WARN,"test::longfei>>>condition num = %d",num);
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      ObSqlRawExpr *cnd_expr = logical_plan->get_expr(stmt->get_condition_id(i));
      if (cnd_expr && table_bitset.is_superset(cnd_expr->get_tables_set()))
      {
        cnd_expr->set_applied(true);
        ObSqlExpression *filter = ObSqlExpression::alloc();
        if (NULL == filter)
        {
          ret = OB_ALLOCATE_MEMORY_FAILED;
          TRANS_LOG("no memory");
          break;
        }
        else if ((ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table filter condition faild");
          break;
        }
        else
        {
          //TBSYS_LOG(WARN,"test::longfei>>>filter[%d] is %s", i, to_cstring(*filter));
          if(OB_SUCCESS != (ret = filter_array.push_back(*filter)))
          {
            TBSYS_LOG(ERROR, "OBArray push back failed");
            ret = OB_ERROR;
          }
          //add longfei 2016-03-23 15:24:28:b
          //fixbug 释放filter指针指向的内存空间
          //TBSYS_LOG(WARN, "debug::longfei>>>free filter memory, count[%ld], filter[%s]", filter_array.count(), to_cstring(*filter));
          ObSqlExpression::free(filter);
          //adde
        }
      }
    }

    // add output columns
    num = stmt->get_column_size();
    //TBSYS_LOG(WARN,"test::longfei>>>column num = %d",num);
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      const ColumnItem *col_item = stmt->get_column_item(i);
      if (col_item && col_item->table_id_ == table_item->table_id_)
      {
        ObBinaryRefRawExpr col_expr(col_item->table_id_, col_item->column_id_, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(common::OB_INVALID_ID, col_item->table_id_, col_item->column_id_, &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
        else
        {
          //TBSYS_LOG(WARN,"test::longfei>>>project1[%d] is %s", i, to_cstring(output_expr));
          project_array.push_back(output_expr);
        }
      }
    }
    ObSelectStmt *select_stmt = dynamic_cast<ObSelectStmt*>(stmt);
    if(NULL == select_stmt)
    {
      TBSYS_LOG(WARN, "  select_item=NULL");
      ret = OB_ERROR;
    }
    if (ret == OB_SUCCESS)
    {
      num = select_stmt->get_select_item_size();
      //TBSYS_LOG(WARN,"test::longfei>>>select num = %d",num);
      for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
      {
        const SelectItem& select_item = select_stmt->get_select_item(i);
        if (select_item.is_real_alias_)
        {
          ObSqlRawExpr *alias_expr = logical_plan->get_expr(select_item.expr_id_);
          if (alias_expr && alias_expr->is_columnlized() == false && table_bitset.is_superset(alias_expr->get_tables_set()))
          {
            ObSqlExpression output_expr;
            if ((ret = alias_expr->fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS)
            {
              TRANS_LOG("Add table output columns faild");
              break;
            }
            else
            {
              //TBSYS_LOG(WARN,"test::longfei>>>project2[%d] is %s", i, to_cstring(output_expr));
              project_array.push_back(output_expr);
            }
            alias_exprs.push_back(select_item.expr_id_);
            alias_expr->set_columnlized(true);
          }
        }
      }
    }
  }

  if (OB_SUCCESS == ret)
  {
    //TBSYS_LOG(INFO,"begin judge use index table or not.");
    ObSecondaryIndexServiceImpl sec_idx_ser_impl;
    ObSecondaryIndexService* sec_idx_ser = &sec_idx_ser_impl;
    if (NULL == sec_idx_ser)
    {
      TBSYS_LOG(ERROR, "alloc mem failed");
      ret = OB_ERROR;
    }
    sec_idx_ser->init(sql_context_->schema_manager_);
    //sec_idx_ser->setSchemaManager(sql_context_->schema_manager_);
    bool is_use_hint = false;    //判断是否使用用户输入的hint
    uint64_t hint_tid = OB_INVALID_ID;     //用户输入的hint中的索引表的tid
    bool use_hint_for_storing = false;     //判断hint中的索引表能否使用不回表的索引
    bool use_hint_without_storing = false;  //判断hint中的索引表能否使用回表的索引

    bool is_use_storing_column = false;   //判断是否使用不回表的索引
    bool is_use_index_without_storing = false;  //判断是否使用回表的索引的变量
    uint64_t index_id = OB_INVALID_ID;       //如果用不回表的索引，索引表的tid
    uint64_t index_id_without_storing = OB_INVALID_ID; //如果用回表的索引，索引表的tid

    //TBSYS_LOG(INFO,"has_index_hint = %s", stmt->get_query_hint().has_index_hint() ? "yes" : "no");
    if (stmt->get_query_hint().has_index_hint())
    {
      IndexTableNamePair tmp = stmt->get_query_hint().use_index_array_.at(0);

      hint_tid = tmp.index_table_id_;
      if (tmp.src_table_id_ == table_item->ref_id_)
      {
        is_use_hint = true;
        use_hint_for_storing = sec_idx_ser->is_can_use_hint_for_storing_V2(&filter_array, &project_array, tmp.index_table_id_); //判断hint中的索引表能否使用不回表的索引的函数
        if (!use_hint_for_storing)
        {
          use_hint_without_storing = sec_idx_ser->is_can_use_hint_index_V2(&filter_array, tmp.index_table_id_);   //判断hint中的索引表能否使用回表的索引的函��?
        }
      }
      if (use_hint_for_storing == false && use_hint_without_storing == false)
      {
        is_use_hint = false;
      }
    }
    if (!is_use_hint)      //如果没有hint
    {
      //如果用户没有输入hint，根据简单的规则判断是否能够使用不回表的索引
      is_use_storing_column = sec_idx_ser->decide_is_use_storing_or_not_V2(&filter_array, &project_array, index_id, table_item->ref_id_);
      if(is_use_storing_column == true)
      {
      }
      if (is_use_storing_column == false)  //如果不能使用不回表的索引，再判断是否能使用回表的索引
      {
        const ObTableSchema *mian_table_schema = NULL;
        if (NULL == (mian_table_schema = sql_context_->schema_manager_->get_table_schema(table_item->ref_id_)))
        {
          TBSYS_LOG(WARN, "Fail to get table schema for table[%ld]", table_item->ref_id_);
        }
        else
        {
          const ObRowkeyInfo *rowkey_info = &mian_table_schema->get_rowkey_info();
          uint64_t main_cid = OB_INVALID_ID;
          rowkey_info->get_column_id(0, main_cid);
          if (!sec_idx_ser->is_wherecondition_have_main_cid_V2(&filter_array, main_cid))
          {
            int64_t c_num = filter_array.count();
            for (int32_t j = 0; j < c_num; j++)
            {
              ObSqlExpression c_filter = filter_array.at(j);
              if (sec_idx_ser->is_this_expr_can_use_index(c_filter, index_id_without_storing, table_item->ref_id_, sql_context_->schema_manager_))
              {
                is_use_index_without_storing = true;
                break;
              }
              else
              {
                break;
              }
            }
          }
        }
      }
    }
    else   //如果用户使用了hint，根据传进来的参数判断是使用回表的还是不回表的索引
    {
      if (use_hint_for_storing)
      {
        is_use_storing_column = true;
        index_id = hint_tid;
        //return_ret=true;
      }
      else if (use_hint_without_storing)
      {
        is_use_index_without_storing = true;
        index_id_without_storing = hint_tid;
      }
    }
    if (is_use_storing_column == true || is_use_index_without_storing == true)
      return_ret = true;
    bool group_down = false;
    bool limit_down = false;
    if (is_use_storing_column)
    {
      ret = gen_phy_table_not_back(
              logical_plan,
              physical_plan,
              err_stat, stmt,
              table_id,
              table_op,
              &group_down,
              &limit_down,
              is_use_storing_column,
              index_id,
              &filter_array,
              &project_array);
    }
    else if (is_use_index_without_storing)
    {
      //longfei 暂时不做子查询
      int64_t sub_query_num = 0;
      int64_t num = 0;
      num = filter_array.count();
      for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
      {
        //@todo(longfei):if the filter in sub query
        //sub_query_num = sub_query_num + filter_array.at(i).get_sub_query_num();
      }
      if (sub_query_num == 0)
      {
        ret = gen_phy_table_back(
                logical_plan,
                physical_plan,
                err_stat, stmt,
                table_id,
                table_op,
                &group_down,
                &limit_down,
                //is_use_storing_column,
                index_id_without_storing,
                &filter_array,
                &project_array);
      }
      else
        return_ret = false;
      //add:e
    }

    if (OB_SUCCESS != ret)
      return_ret = false;

    //如果不用索引，这里要把相应的alias改成原样，这样gen_phy_table在处理没有索引的情况下才不会报错
    if ((is_use_index_without_storing == false && is_use_storing_column == false) || (OB_SUCCESS != ret))
    {
      for (int32_t i = 0; i < alias_exprs.count(); i++)
      {
        ObSqlRawExpr *alias_expr = logical_plan->get_expr(alias_exprs.at(i));
        if (alias_expr)
        {
          alias_expr->set_columnlized(false);
        }
      }
    }
  }
  //add BUG
  if (OB_SUCCESS != ret && is_gen_table == true)
  {
    ret = OB_SUCCESS;
  }
  //add:e
  return return_ret;
}
//add:e

int ObTransformer::gen_phy_table(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObStmt *stmt, uint64_t table_id, ObPhyOperator*& table_op, bool* group_agg_pushed_down, bool* limit_pushed_down)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  //add longfei
  bool handle_index_ret = false;
  ObPhyOperator* tmp_table_op = NULL;
  handle_index_ret = handle_index_for_one_table(
                       logical_plan,
                       physical_plan,
                       err_stat, stmt,
                       table_id,
                       tmp_table_op,
                       group_agg_pushed_down,
                       limit_pushed_down);
  //TBSYS_LOG(WARN, "test::longfei>>>return value of handle_index_for_one_table[%s]",handle_index_ret ? "true" : "false");
  if (!handle_index_ret)
  //add:e
  {
    TableItem* table_item = NULL;
    ObSqlReadStrategy sql_read_strategy;
    ObBitSet<> table_bitset;
    int32_t num = 0;

    if (table_id == OB_INVALID_ID || (table_item = stmt->get_table_item_by_id(table_id)) == NULL)
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("Wrong table id");
    }

    ObRpcScanHint hint;
    if (OB_SUCCESS == ret)
    {
      const ObTableSchema *table_schema = NULL;
      if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_item->ref_id_)))
      {
        ret = OB_ERROR;
        TRANS_LOG("Fail to get table schema for table[%ld]", table_item->ref_id_);
      }
      else
      {
        if (stmt->get_query_hint().read_consistency_ != NO_CONSISTENCY)
        {
          hint.read_consistency_ = stmt->get_query_hint().read_consistency_;
        }
        else
        {
          // no hint
          //hint.read_consistency_ = table_schema->get_consistency_level();
          if (table_schema->is_merge_dynamic_data())
          {
            hint.read_consistency_ = NO_CONSISTENCY;
          }
          else
          {
            hint.read_consistency_ = STATIC;
          }
          if (hint.read_consistency_ == NO_CONSISTENCY)
          {
            ObString name = ObString::make_string(OB_READ_CONSISTENCY);
            ObObj value;
            int64_t read_consistency_level_val = 0;
            hint.read_consistency_ = common::STRONG;
            if (OB_SUCCESS != (ret = sql_context_->session_info_->get_sys_variable_value(name, value)))
            {
              TBSYS_LOG(WARN, "get system variable %.*s failed, ret=%d", name.length(), name.ptr(), ret);
              ret = OB_SUCCESS;
            }
            else if (OB_SUCCESS != (ret = value.get_int(read_consistency_level_val)))
            {
              TBSYS_LOG(WARN, "get int failed, ret=%d", ret);
              ret = OB_SUCCESS;
            }
            else
            {
              hint.read_consistency_ = static_cast<ObConsistencyLevel>(read_consistency_level_val);
            }
          }
        }
      }
    }

    ObTableScan *table_scan_op = NULL;
    if (ret == OB_SUCCESS)
    {
      switch (table_item->type_)
      {
      case TableItem::BASE_TABLE:
        /* get through */
      case TableItem::ALIAS_TABLE:
      {
        ObTableRpcScan *table_rpc_scan_op = NULL;
        CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat);
        if (ret == OB_SUCCESS && (ret = table_rpc_scan_op->set_table(table_item->table_id_, table_item->ref_id_)) != OB_SUCCESS)
        {
          TRANS_LOG("ObTableRpcScan set table faild");
        }

        //determin request type: scan/get
        if (ret == OB_SUCCESS)
        {
          int32_t bit_index = stmt->get_table_bit_index(table_item->table_id_);
          table_bitset.add_member(bit_index);
        }
        if (OB_SUCCESS == ret)
        {
          const ObTableSchema *table_schema = NULL;
          if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_item->ref_id_)))
          {
            ret = OB_ERROR;
            TRANS_LOG("Fail to get table schema for table[%ld]", table_item->ref_id_);
          }
          else
          {
            sql_read_strategy.set_rowkey_info(table_schema->get_rowkey_info());
            if ((ret = physical_plan->add_base_table_version(table_item->ref_id_, table_schema->get_schema_version())) != OB_SUCCESS)
            {
              TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_item->ref_id_, ret);
            }
          }
        }
        num = stmt->get_condition_size();
        for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
        {
          ObSqlRawExpr *cnd_expr = logical_plan->get_expr(stmt->get_condition_id(i));
          if (cnd_expr && table_bitset.is_superset(cnd_expr->get_tables_set()))
          {
            cnd_expr->set_applied(true);
            ObSqlExpression filter;
            if ((ret = cnd_expr->fill_sql_expression(filter, this, logical_plan, physical_plan)) != OB_SUCCESS)
            {
              TRANS_LOG("Add table filter condition faild");
              break;
            }
            filter.set_owner_op(table_rpc_scan_op);
            if (OB_SUCCESS != (ret = sql_read_strategy.add_filter(filter)))
            {
              TBSYS_LOG(WARN, "fail to add filter:ret[%d]", ret);
              break;
            }
          }
        }
        if (OB_SUCCESS == ret)
        {
          int32_t read_method = ObSqlReadStrategy::USE_SCAN;
          // Determine Scan or Get?
          ObArray<ObRowkey> rowkey_array;
          // TODO: rowkey obj storage needed. varchar use orginal buffer, will be copied later
          PageArena<ObObj, ModulePageAllocator> rowkey_objs_allocator(PageArena<ObObj, ModulePageAllocator>::DEFAULT_PAGE_SIZE, ModulePageAllocator(ObModIds::OB_SQL_TRANSFORMER));
          // ObObj rowkey_objs[OB_MAX_ROWKEY_COLUMN_NUMBER];

          if (OB_SUCCESS != (ret = sql_read_strategy.get_read_method(rowkey_array, rowkey_objs_allocator, read_method)))
          {
            TBSYS_LOG(WARN, "fail to get read method:ret[%d]", ret);
          }
          else
          {
            TBSYS_LOG(DEBUG, "use [%s] method", read_method == ObSqlReadStrategy::USE_SCAN ? "SCAN" : "GET");
          }
          hint.read_method_ = read_method;
        }

        if (ret == OB_SUCCESS)
        {
          ObSelectStmt *select_stmt = dynamic_cast<ObSelectStmt*>(stmt);
          if (select_stmt && select_stmt->get_group_expr_size() <= 0 && select_stmt->get_having_expr_size() <= 0 && select_stmt->get_order_item_size() <= 0 && hint.read_method_ != ObSqlReadStrategy::USE_GET)
          {
            hint.max_parallel_count = 1;
          }
          if ((ret = table_rpc_scan_op->init(sql_context_, &hint)) != OB_SUCCESS)
          {
            TRANS_LOG("ObTableRpcScan init faild");
          }
        }
        if (ret == OB_SUCCESS)
          table_scan_op = table_rpc_scan_op;
        break;
      }
      case TableItem::GENERATED_TABLE:
      {
        ObTableMemScan *table_mem_scan_op = NULL;
        int32_t idx = OB_INVALID_INDEX;
        ret = gen_physical_select(logical_plan, physical_plan, err_stat, table_item->ref_id_, &idx);
        if (ret == OB_SUCCESS)
          CREATE_PHY_OPERRATOR(table_mem_scan_op, ObTableMemScan, physical_plan, err_stat);
        // the sub-query's physical plan is set directly, so base_table_id is no need to set
        if (ret == OB_SUCCESS && (ret = table_mem_scan_op->set_table(table_item->table_id_, OB_INVALID_ID)) != OB_SUCCESS)
        {
          TRANS_LOG("ObTableMemScan set table faild,ret=%d", ret);
        }
        if (ret == OB_SUCCESS && (ret = table_mem_scan_op->set_child(0, *(physical_plan->get_phy_query(idx)))) != OB_SUCCESS)
        {
          TRANS_LOG("Set child of ObTableMemScan operator faild,ret=%d", ret);
        }
        if (ret == OB_SUCCESS)
          table_scan_op = table_mem_scan_op;
        break;
      }
      default:
        // won't be here
        OB_ASSERT(0);
        break;
      }
    }

    num = stmt->get_condition_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      ObSqlRawExpr *cnd_expr = logical_plan->get_expr(stmt->get_condition_id(i));
      if (cnd_expr && table_bitset.is_superset(cnd_expr->get_tables_set()))
      {
        cnd_expr->set_applied(true);
        ObSqlExpression *filter = ObSqlExpression::alloc();
        if (NULL == filter)
        {
          ret = OB_ALLOCATE_MEMORY_FAILED;
          TRANS_LOG("no memory");
          break;
        }
        else if ((ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_scan_op->add_filter(filter)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table filter condition faild");
          break;
        }
      }
      //add fanqiushi [semi_join] [0.1] 20151109:b
      /*else
      {
          TBSYS_LOG(ERROR,"test::fanqs,,filter=%s",to_cstring(*filter));
      }*/
      //add:e
    }

    // add output columns
    num = stmt->get_column_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      const ColumnItem *col_item = stmt->get_column_item(i);
      if (col_item && col_item->table_id_ == table_item->table_id_)
      {
        ObBinaryRefRawExpr col_expr(col_item->table_id_, col_item->column_id_, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(common::OB_INVALID_ID, col_item->table_id_, col_item->column_id_, &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
      }
    }
    ObSelectStmt *select_stmt = dynamic_cast<ObSelectStmt*>(stmt);
    if (ret == OB_SUCCESS && select_stmt)
    {
      num = select_stmt->get_select_item_size();
      for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
      {
        const SelectItem& select_item = select_stmt->get_select_item(i);
        if (select_item.is_real_alias_)
        {
          ObSqlRawExpr *alias_expr = logical_plan->get_expr(select_item.expr_id_);
          if (alias_expr && alias_expr->is_columnlized() == false && table_bitset.is_superset(alias_expr->get_tables_set()))
          {
            ObSqlExpression output_expr;
            if ((ret = alias_expr->fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
            {
              TRANS_LOG("Add table output columns faild");
              break;
            }
            alias_expr->set_columnlized(true);
          }
        }
      }
    }

    if (ret == OB_SUCCESS)
      table_op = table_scan_op;

    bool group_down = false;
    bool limit_down = false;

    if (hint.read_method_ == ObSqlReadStrategy::USE_SCAN)
    {
      /* Try to push down aggregations */
      if (ret == OB_SUCCESS && group_agg_push_down_param_ && select_stmt)
      {
        ret = try_push_down_group_agg(logical_plan, physical_plan, err_stat, select_stmt, group_down, table_op);
        if (group_agg_pushed_down)
          *group_agg_pushed_down = group_down;
      }
      /* Try to push down limit */
      if (ret == OB_SUCCESS && select_stmt)
      {
        ret = try_push_down_limit(logical_plan, physical_plan, err_stat, select_stmt, limit_down, table_op);
        if (limit_pushed_down)
          *limit_pushed_down = limit_down;
      }
    }
    else
    {
      if (group_agg_pushed_down)
        *group_agg_pushed_down = false;
      if (limit_pushed_down)
        *limit_pushed_down = false;
    }
  }
  //add longfei
  else
  {
    table_op = tmp_table_op;
  }
  // add e

  return ret;
}

int ObTransformer::try_push_down_group_agg(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const ObSelectStmt *select_stmt, bool& group_agg_pushed_down, ObPhyOperator *& scan_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObTableRpcScan *table_rpc_scan_op = dynamic_cast<ObTableRpcScan*>(scan_op);
  ObAddProject *project_op = NULL;

  if (table_rpc_scan_op == NULL)
  {
    // ignore
  }
  // 1. normal select statement, not UNION/EXCEPT/INTERSECT
  // 2. only one table, whose type is BASE_TABLE or ALIAS_TABLE
  // 3. can not be joined table.
  // 4. has group clause or aggregate function(s)
  // 6. no distinct aggregate function(s)
  else if (select_stmt->get_from_item_size() == 1 && select_stmt->get_from_item(0).is_joined_ == false && select_stmt->get_table_size() == 1 && (select_stmt->get_table_item(0).type_ == TableItem::BASE_TABLE || select_stmt->get_table_item(0).type_ == TableItem::ALIAS_TABLE) && (select_stmt->get_group_expr_size() > 0 || select_stmt->get_agg_fun_size() > 0))
  {
    ObSqlRawExpr *expr = NULL;
    ObAggFunRawExpr *agg_expr = NULL;
    int32_t agg_num = select_stmt->get_agg_fun_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < agg_num; i++)
    {
      if ((expr = logical_plan->get_expr(select_stmt->get_agg_expr_id(i))) == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong expression id of aggregate function");
        break;
      }
      else if ((agg_expr = dynamic_cast<ObAggFunRawExpr*>(expr->get_expr())) == NULL)
      {
        // agg(*), skip
        continue;
      }
      else if (agg_expr->is_param_distinct())
      {
        break;
      }
      else if (i == agg_num - 1)
      {
        group_agg_pushed_down = true;
      }
    }
  }

  // push down aggregate function(s)
  if (ret == OB_SUCCESS && group_agg_pushed_down)
  {
    // push down group column(s)
    ObSqlRawExpr *group_expr = NULL;
    int32_t num = select_stmt->get_group_expr_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      if ((group_expr = logical_plan->get_expr(select_stmt->get_group_expr_id(i))) == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong expression id  of group column");
      }
      else if (group_expr->get_expr()->get_expr_type() == T_REF_COLUMN)
      {
        ObBinaryRefRawExpr *col_expr = dynamic_cast<ObBinaryRefRawExpr*>(group_expr->get_expr());
        if ((ret = table_rpc_scan_op->add_group_column(col_expr->get_first_ref_id(), col_expr->get_second_ref_id())) != OB_SUCCESS)
        {
          TRANS_LOG("Add group column faild, table_id=%lu, column_id=%lu", col_expr->get_first_ref_id(), col_expr->get_second_ref_id());
        }
      }
      else if (group_expr->get_expr()->is_const())
      {
        // do nothing, const column is of no usage for sorting
        continue;
      }
      else
      {
        ObSqlExpression col_expr;
        if ((ret = group_expr->fill_sql_expression(col_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_rpc_scan_op->add_output_column(col_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add complex group column to project plan faild");
        }
        else if ((ret = table_rpc_scan_op->add_group_column(group_expr->get_table_id(), group_expr->get_column_id())) != OB_SUCCESS)
        {
          TRANS_LOG("Add group column to group plan faild");
        }
      }
    }

    // push down function(s)
    num = select_stmt->get_agg_fun_size();
    ObSqlRawExpr *agg_expr = NULL;
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      if ((agg_expr = logical_plan->get_expr(select_stmt->get_agg_expr_id(i))) == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong expression id  of aggregate function");
        break;
      }
      else if (agg_expr->get_expr()->get_expr_type() == T_FUN_AVG)
      {
        // avg() ==> sum() / count()
        ObAggFunRawExpr *avg_expr = NULL;
        if ((avg_expr = dynamic_cast<ObAggFunRawExpr*>(agg_expr->get_expr())) == NULL)
        {
          ret = OB_ERR_RESOLVE_SQL;
          TRANS_LOG("Wrong aggregate function, exp_id = %lu", agg_expr->get_expr_id());
          break;
        }

        // add sum(), count() to TableRpcScan
        uint64_t table_id = agg_expr->get_table_id();
        uint64_t sum_cid = logical_plan->generate_range_column_id();
        uint64_t count_cid = logical_plan->generate_range_column_id();
        ObAggFunRawExpr sum_node;
        ObAggFunRawExpr count_node;
        sum_node.set_expr_type(T_FUN_SUM);
        sum_node.set_param_expr(avg_expr->get_param_expr());
        count_node.set_expr_type(T_FUN_COUNT);
        count_node.set_param_expr(avg_expr->get_param_expr());
        ObSqlRawExpr raw_sum_expr(OB_INVALID_ID, table_id, sum_cid, &sum_node);
        ObSqlRawExpr raw_count_expr(OB_INVALID_ID, table_id, count_cid, &count_node);
        ObSqlExpression sum_expr;
        ObSqlExpression count_expr;
        if ((ret = raw_sum_expr.fill_sql_expression(sum_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_rpc_scan_op->add_aggr_column(sum_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add sum aggregate function failed, ret = %d", ret);
          break;
        }
        else if ((ret = raw_count_expr.fill_sql_expression(count_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_rpc_scan_op->add_aggr_column(count_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add count aggregate function failed, ret = %d", ret);
          break;
        }

        // add a '/' expression
        ObBinaryRefRawExpr sum_col_node(table_id, sum_cid, T_REF_COLUMN);
        ObBinaryRefRawExpr count_col_node(table_id, count_cid, T_REF_COLUMN);
        ObBinaryOpRawExpr div_node(&sum_col_node, &count_col_node, T_OP_DIV);
        ObSqlRawExpr div_raw_expr(OB_INVALID_ID, table_id, agg_expr->get_column_id(), &div_node);
        ObSqlExpression div_expr;
        if (project_op == NULL)
        {
          if (CREATE_PHY_OPERRATOR(project_op, ObAddProject, physical_plan,
              err_stat) == NULL || (ret = project_op->set_child(0, *table_rpc_scan_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Add ObAddProject on ObTableRpcScan failed, ret = %d", ret);
            break;
          }
          else
          {
            scan_op = project_op;
          }
        }
        if ((ret = div_raw_expr.fill_sql_expression(div_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate div expr for avg() function failed, ret = %d", ret);
        }
        else if ((ret = project_op->add_output_column(div_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add column to ObAddProject operator failed, ret = %d", ret);
        }
      }
      else if (agg_expr->get_expr()->is_aggr_fun())
      {
        ObSqlExpression new_agg_expr;
        if ((ret = agg_expr->fill_sql_expression(new_agg_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_rpc_scan_op->add_aggr_column(new_agg_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add aggregate function to group plan faild");
          break;
        }
      }
      else
      {
        ret = OB_ERR_RESOLVE_SQL;
        TRANS_LOG("Wrong aggregate function, exp_id = %lu", agg_expr->get_expr_id());
        break;
      }
      agg_expr->set_columnlized(true);
    }
  }
  return ret;
}

int ObTransformer::try_push_down_limit(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const ObSelectStmt *select_stmt, bool& limit_pushed_down, ObPhyOperator *scan_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObTableRpcScan *table_rpc_scan_op = dynamic_cast<ObTableRpcScan*>(scan_op);

  if (table_rpc_scan_op == NULL)
  {
    // ignore
  }
  // 1. normal select statement, not UNION/EXCEPT/INTERSECT
  // 2. only one table, whose type is BASE_TABLE or ALIAS_TABLE
  // 3. can not be joined table.
  // 4. does not have group clause or aggregate function(s)
  // 5. does not have order by caluse
  // 6. limit is initialed
  else if (select_stmt->get_from_item_size() == 1 && select_stmt->get_from_item(0).is_joined_ == false && select_stmt->get_table_size() == 1 && (select_stmt->get_table_item(0).type_ == TableItem::BASE_TABLE || select_stmt->get_table_item(0).type_ == TableItem::ALIAS_TABLE) && select_stmt->get_group_expr_size() == 0 && select_stmt->get_agg_fun_size() == 0 && select_stmt->get_order_item_size() == 0)
  {
    limit_pushed_down = true;
    ObSqlExpression limit_count;
    ObSqlExpression limit_offset;
    ObSqlExpression *ptr = &limit_count;
    uint64_t id = select_stmt->get_limit_expr_id();
    int64_t i = 0;
    for (; ret == OB_SUCCESS && i < 2; i++, id = select_stmt->get_offset_expr_id(), ptr = &limit_offset)
    {
      ObSqlRawExpr *raw_expr = NULL;
      if (id == OB_INVALID_ID)
      {
        continue;
      }
      else if ((raw_expr = logical_plan->get_expr(id)) == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong internal expression id = %lu, ret=%d", id, ret);
        break;
      }
      else if ((ret = raw_expr->fill_sql_expression(*ptr, this, logical_plan, physical_plan)) != OB_SUCCESS)
      {
        TRANS_LOG("Add limit/offset faild");
        break;
      }
    }
    if (ret == OB_SUCCESS && (ret = table_rpc_scan_op->set_limit(limit_count, limit_offset)) != OB_SUCCESS)
    {
      TRANS_LOG("Set limit/offset failed, ret=%d", ret);
    }
  }
  return ret;
}

int ObTransformer::gen_phy_values(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const ObInsertStmt *insert_stmt, const ObRowDesc& row_desc, const ObRowDescExt& row_desc_ext, const ObSEArray<int64_t, 64> *row_desc_map, ObExprValues& value_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(insert_stmt);
  value_op.set_row_desc(row_desc, row_desc_ext);
  int64_t num = insert_stmt->get_value_row_size();
  for (int64_t i = 0; ret == OB_SUCCESS && i < num; i++) // for each row
  {
    const ObArray<uint64_t>& value_row = insert_stmt->get_value_row(i);
    if (OB_UNLIKELY(0 == i))
    {
      value_op.reserve_values(num * value_row.count());
      FILL_TRACE_LOG("expr_values_count=%ld", num * value_row.count());
    }
    for (int64_t j = 0; ret == OB_SUCCESS && j < value_row.count(); j++)
    {
      ObSqlExpression val_expr;
      int64_t expr_idx = OB_INVALID_INDEX;
      if (NULL != row_desc_map)
      {
        OB_ASSERT(value_row.count() == row_desc_map->count());
        expr_idx = value_row.at(row_desc_map->at(j));
      }
      else
      {
        expr_idx = value_row.at(j);
      }
      ObSqlRawExpr *value_expr = logical_plan->get_expr(expr_idx);
      OB_ASSERT(NULL != value_expr);
      if (OB_SUCCESS != (ret = value_expr->fill_sql_expression(val_expr, this, logical_plan, physical_plan)))
      {
        TRANS_LOG("Failed to fill expr, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = value_op.add_value(val_expr)))
      {
        TRANS_LOG("Failed to add value into expr_values, err=%d", ret);
      }
    } // end for
  } // end for
  return ret;
}

//add maoxx
int ObTransformer::gen_phy_values_for_replace(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const ObInsertStmt *insert_stmt,
    const ObRowDesc& row_desc,
    const ObRowDescExt& row_desc_ext,
    const ObSEArray<int64_t, 64> *row_desc_map,
    ObExprValues& value_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(insert_stmt);
  value_op.set_row_desc(row_desc, row_desc_ext);
  int64_t num = insert_stmt->get_value_row_size();
  for (int64_t i = 0; ret == OB_SUCCESS && i < num; i++) // for each row
  {
    const ObArray<uint64_t>& value_row = insert_stmt->get_value_row(i);
    if (OB_UNLIKELY(0 == i))
    {
      value_op.reserve_values(num * value_row.count());
      FILL_TRACE_LOG("expr_values_count=%ld", num * value_row.count());
    }
    for (int64_t j = 0; ret == OB_SUCCESS && j < value_row.count(); j++)
    {
      ObSqlExpression val_expr;
      int64_t expr_idx = OB_INVALID_INDEX;
      if (NULL != row_desc_map)
      {
        OB_ASSERT(value_row.count() == row_desc_map->count());
        expr_idx = value_row.at(row_desc_map->at(j));
      }
      else
      {
        expr_idx = value_row.at(j);
      }
      ObSqlRawExpr *value_expr = logical_plan->get_expr(expr_idx);
      OB_ASSERT(NULL != value_expr);
      if (OB_SUCCESS != (ret = value_expr->fill_sql_expression(val_expr, this, logical_plan, physical_plan)))
      {
        TRANS_LOG("Failed to fill expr, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = value_op.add_value(val_expr)))
      {
        TRANS_LOG("Failed to add value into expr_values, err=%d", ret);
      }
    } // end for
    for(int64_t k = value_row.count(); k < row_desc.get_column_num(); k++)
    {
      uint64_t table_id = OB_INVALID_ID;
      uint64_t column_id = OB_INVALID_ID;
      if(OB_SUCCESS != (ret = row_desc.get_tid_cid(k, table_id, column_id)))
      {
        TBSYS_LOG(WARN, "get tid cid falied!ret = %d, cid_idx = %ld", ret, k);
        break;
      }
      else
      {
        ObBinaryRefRawExpr col_expr(table_id, column_id, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(
          common::OB_INVALID_ID,
          table_id,
          column_id,
          &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(
               output_expr,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns failed");
          break;
        }
        else if (OB_SUCCESS != (ret = value_op.add_value(output_expr)))
        {
          TRANS_LOG("Failed to add cell into get param, err=%d", ret);
          break;
        }
      }
    }
  } // end for
  return ret;
}
//add e

// merge tables' versions from inner physical plan to outer plan
int ObTransformer::merge_tables_version(ObPhysicalPlan & outer_plan, ObPhysicalPlan & inner_plan)
{
  int ret = OB_SUCCESS;
  if (&outer_plan != &inner_plan)
  {
    for (int64_t i = 0; i < inner_plan.get_base_table_version_count(); i++)
    {
      if ((ret = outer_plan.add_base_table_version(inner_plan.get_base_table_version(i))) != OB_SUCCESS)
      {
        TBSYS_LOG(WARN, "Failed to add %ldth base tables version, err=%d", i, ret);
        break;
      }
    }
  }
  return ret;
}

int ObTransformer::gen_physical_replace(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObInsertStmt *insert_stmt = NULL;
  ObPhysicalPlan* inner_plan = NULL;
  ObUpsModify *ups_modify = NULL;
  ObSEArray<int64_t, 64> row_desc_map;
  ObRowDesc row_desc;
  ObRowDescExt row_desc_ext;
  const ObRowkeyInfo *rowkey_info = NULL;

  if (OB_SUCCESS != (ret = wrap_ups_executor(physical_plan, query_id, inner_plan, index, err_stat)))
  {
    TBSYS_LOG(WARN, "err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, insert_stmt)))
  {
    TRANS_LOG("Fail to get statement");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(ups_modify, ObUpsModify, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(ups_modify, physical_plan == inner_plan ? index : NULL, physical_plan != inner_plan)))
  {
    TRANS_LOG("Failed to add phy query, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = cons_row_desc(insert_stmt->get_table_id(), insert_stmt, row_desc_ext, row_desc, rowkey_info, row_desc_map, err_stat)))
  {
    TRANS_LOG("Failed to cons row desc, err=%d", ret);
  }
  else
  {
    uint64_t tid = insert_stmt->get_table_id();
    // check primary key columns
    uint64_t cid = OB_INVALID_ID;
    for (int64_t i = 0; OB_SUCCESS == ret && i < rowkey_info->get_size(); ++i)
    {
      if (OB_SUCCESS != (ret = rowkey_info->get_column_id(i, cid)))
      {
        TBSYS_LOG(USER_ERROR, "primary key can not be empty");
        ret = OB_ERR_INSERT_NULL_ROWKEY;
        break;
      }
      else if (OB_INVALID_INDEX == row_desc.get_idx(tid, cid))
      {
        TBSYS_LOG(USER_ERROR, "primary key can not be empty");
        ret = OB_ERR_INSERT_NULL_ROWKEY;
        break;
      }
    } // end for

    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      // check column data type
      ObObj data_type;
      for (int i = 0; i < row_desc_ext.get_column_num(); ++i)
      {
        if (OB_SUCCESS != (ret = row_desc_ext.get_by_idx(i, tid, cid, data_type)))
        {
          TBSYS_LOG(ERROR, "failed to get type, err=%d", ret);
          ret = OB_ERR_UNEXPECTED;
          break;
        }
        else if (data_type.get_type() == ObCreateTimeType || data_type.get_type() == ObModifyTimeType)
        {
          ret = OB_ERR_CREAT_MODIFY_TIME_COLUMN;
          TRANS_LOG("Column of type ObCreateTimeType/ObModifyTimeType can not be inserted");
          break;
        }
      } // end for
    }
  }
  FILL_TRACE_LOG("cons_row_desc");
  ObExprValues *value_op = NULL;
  if (ret == OB_SUCCESS)
  {
    if (OB_LIKELY(insert_stmt->get_insert_query_id() == OB_INVALID_ID))
    {
      CREATE_PHY_OPERRATOR(value_op, ObExprValues, inner_plan, err_stat);
      if (OB_SUCCESS != ret)
      {
      }
      else if ((ret = value_op->set_row_desc(row_desc, row_desc_ext)) != OB_SUCCESS)
      {
        TRANS_LOG("Set descriptor of value operator failed");
      }
      else if (OB_SUCCESS != (ret = gen_phy_values(logical_plan, inner_plan, err_stat, insert_stmt, row_desc, row_desc_ext, &row_desc_map, *value_op)))
      {
        TRANS_LOG("Failed to gen expr values, err=%d", ret);
      }
      else
      {
        value_op->set_do_eval_when_serialize(true);
      }
      FILL_TRACE_LOG("gen_phy_values");
    }
    else
    {
      // replace ... select
      TRANS_LOG("REPLACE INTO ... SELECT is not supported yet");
      ret = OB_NOT_SUPPORTED;
    }
  }
  if (OB_SUCCESS == ret)
  {
    ObWhenFilter *when_filter_op = NULL;
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      if (insert_stmt->get_when_expr_size() > 0)
      {
        if ((ret = gen_phy_when(logical_plan, inner_plan, err_stat, query_id, *value_op, when_filter_op)) != OB_SUCCESS)
        {
        }
        else if ((ret = ups_modify->set_child(0, *when_filter_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
        }
      }
      else if ((ret = ups_modify->set_child(0, *value_op)) != OB_SUCCESS)
      {
        TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
      }
    }
  }
  if (OB_SUCCESS == ret)
  {
    // record table's schema version
    uint64_t tid = insert_stmt->get_table_id();
    const ObTableSchema *table_schema = NULL;
    if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(tid)))
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("fail to get table schema for table[%ld]", tid);
    }
    else if ((ret = physical_plan->add_base_table_version(tid, table_schema->get_schema_version())) != OB_SUCCESS)
    {
      TRANS_LOG("Failed to add table version into physical_plan, err=%d", ret);
    }
  }
  if (ret == OB_SUCCESS)
  {
    if ((ret = merge_tables_version(*physical_plan, *inner_plan)) != OB_SUCCESS)
    {
      TRANS_LOG("Failed to add base tables version, err=%d", ret);
    }
  }
  return ret;
}

int ObTransformer::gen_physical_delete(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObDeleteStmt *delete_stmt = NULL;
  ObDelete *delete_op = NULL;

  /* get statement */
  if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, delete_stmt)))
  {
    TRANS_LOG("Fail to get statement");
  }

  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(delete_op, ObDelete, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, delete_stmt, delete_op, index);
    }
  }

  ObRowDescExt row_desc_ext;
  const ObTableSchema *table_schema = NULL;
  if (OB_SUCCESS == ret)
  {
    if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(delete_stmt->get_delete_table_id())))
    {
      ret = OB_ERROR;
      TRANS_LOG("Fail to get table schema for table[%ld]", delete_stmt->get_delete_table_id());
    }
  }
  if (ret == OB_SUCCESS)
  {
    delete_op->set_table_id(delete_stmt->get_delete_table_id());
    delete_op->set_rpc_stub(sql_context_->merger_rpc_proxy_);
    delete_op->set_rowkey_info(table_schema->get_rowkey_info());
    int32_t num = delete_stmt->get_column_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      const ColumnItem* column_item = delete_stmt->get_column_item(i);
      if (column_item == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Get column item failed");
        break;
      }
      const ObColumnSchemaV2* column_schema = sql_context_->schema_manager_->get_column_schema(column_item->table_id_, column_item->column_id_);
      if (NULL == column_schema)
      {
        ret = OB_ERR_COLUMN_NOT_FOUND;
        TRANS_LOG("Get column item failed");
        break;
      }
      ObObj data_type;
      data_type.set_type(column_schema->get_type());
      ret = row_desc_ext.add_column_desc(column_item->table_id_, column_item->column_id_, data_type);
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add column '%.*s' to descriptor failed", column_item->column_name_.length(), column_item->column_name_.ptr());
        break;
      }
    }
    if (ret == OB_SUCCESS && (ret = delete_op->set_columns_desc(row_desc_ext)) != OB_SUCCESS)
    {
      TRANS_LOG("Set descriptor of delete operator failed");
    }
  }

  if (ret == OB_SUCCESS)
  {
    if (OB_UNLIKELY(delete_stmt->get_delete_table_id() == OB_INVALID_ID))
    {
      ret = OB_NOT_INIT;
      TRANS_LOG("table is not given in delete statment. check syntax");
    }
    else
    {
      ObPhyOperator *table_op = NULL;
      if ((ret = gen_phy_table(logical_plan, physical_plan, err_stat, delete_stmt, delete_stmt->get_delete_table_id(), table_op)) == OB_SUCCESS && NULL != table_op && (ret = delete_op->set_child(0, *table_op)) == OB_SUCCESS)
      {
        // success
      }
      else
      {
        TRANS_LOG("Set child of delete operator failed");
      }
    }
  }

  return ret;
}

int ObTransformer::gen_physical_update(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObUpdateStmt *update_stmt = NULL;
  ObUpdate *update_op = NULL;
  uint64_t table_id = OB_INVALID_ID;
  int64_t column_idx = 0;
  uint64_t column_id = OB_INVALID_ID;
  uint64_t expr_id = OB_INVALID_ID;
  ObSqlExpression expr;
  ObSqlRawExpr *raw_expr = NULL;
  const ObTableSchema *table_schema = NULL;
  const ObColumnSchemaV2* column_schema = NULL;
  ObObj data_type;
  ObRowDescExt row_desc_ext;

  /* get statement */
  if (ret == OB_SUCCESS)
  {
    get_stmt(logical_plan, err_stat, query_id, update_stmt);
  }
  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(update_op, ObUpdate, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, update_stmt, update_op, index);
    }
  }

  /* init update op param */
  /* set table id and other stuff, only support update single table now */
  if (ret == OB_SUCCESS)
  {
    if (OB_INVALID_ID == (table_id = update_stmt->get_update_table_id()))
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("Get update statement table ID error");
    }
    else if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("Fail to get table schema for table[%ld]", table_id);
    }
  }

  if (ret == OB_SUCCESS)
  {
    update_op->set_table_id(table_id);
    update_op->set_rpc_stub(sql_context_->merger_rpc_proxy_);
    update_op->set_rowkey_info(table_schema->get_rowkey_info());
  }
  if (ret == OB_SUCCESS)
  {
    // construct row desc ext
    int32_t num = update_stmt->get_column_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      const ColumnItem* column_item = update_stmt->get_column_item(i);
      if (column_item == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Get column item failed");
        break;
      }
      const ObColumnSchemaV2* column_schema = sql_context_->schema_manager_->get_column_schema(column_item->table_id_, column_item->column_id_);
      if (NULL == column_schema)
      {
        ret = OB_ERR_COLUMN_NOT_FOUND;
        TRANS_LOG("Get column item failed");
        break;
      }
      else if (column_schema->get_type() == ObCreateTimeType || column_schema->get_type() == ObModifyTimeType)
      {
        ret = OB_ERR_CREAT_MODIFY_TIME_COLUMN;
        TRANS_LOG("Column '%s' of type ObCreateTimeType/ObModifyTimeType can not be updated", column_schema->get_name());
        break;
      }
      data_type.set_type(column_schema->get_type());
      ret = row_desc_ext.add_column_desc(column_item->table_id_, column_item->column_id_, data_type);
      if (ret != OB_SUCCESS)
      {
        TRANS_LOG("Add column '%.*s' to descriptor faild", column_item->column_name_.length(), column_item->column_name_.ptr());
        break;
      }
    }
    if (ret == OB_SUCCESS && (ret = update_op->set_columns_desc(row_desc_ext)) != OB_SUCCESS)
    {
      TRANS_LOG("Set ext descriptor of update operator failed");
    }
  }
  /* fill column=expr pairs to update operator */
  if (OB_SUCCESS == ret)
  {
    for (column_idx = 0; column_idx < update_stmt->get_update_column_count(); column_idx++)
    {
      expr.reset();
      // valid check
      // 1. rowkey can't be updated
      // 2. joined column can't be updated
      if (OB_SUCCESS != (ret = update_stmt->get_update_column_id(column_idx, column_id)))
      {
        TBSYS_LOG(WARN, "fail to get update column id for table %lu column_idx=%lu", table_id, column_idx);
        break;
      }
      else if (NULL == (column_schema = sql_context_->schema_manager_->get_column_schema(table_id, column_id)))
      {
        ret = OB_ERR_COLUMN_NOT_FOUND;
        TRANS_LOG("Get column item failed");
        break;
      }
      else if (true == column_schema->is_join_column())
      {
        ret = OB_ERR_UPDATE_JOIN_COLUMN;
        TRANS_LOG("join column '%s' can not be updated", column_schema->get_name());
        break;
      }
      else if (table_schema->get_rowkey_info().is_rowkey_column(column_id))
      {
        ret = OB_ERR_UPDATE_ROWKEY_COLUMN;
        TRANS_LOG("rowkey column '%s' can not be updated", column_schema->get_name());
        break;
      }

      // get expression
      if ((OB_SUCCESS == ret) && (OB_SUCCESS != (ret = update_stmt->get_update_expr_id(column_idx, expr_id))))
      {
        TBSYS_LOG(WARN, "fail to get update expr for table %lu column %lu. column_idx=%ld", table_id, column_id, column_idx);
        break;
      }
      else if (NULL == (raw_expr = logical_plan->get_expr(expr_id)))
      {
        TBSYS_LOG(WARN, "fail to get expr from logical plan for table %lu column %lu. column_idx=%ld", table_id, column_id, column_idx);
        ret = OB_ERR_UNEXPECTED;
        break;
      }
      else if (OB_SUCCESS != (ret = raw_expr->fill_sql_expression(expr, this, logical_plan, physical_plan)))
      {
        TBSYS_LOG(WARN, "fail to fill sql expression. ret=%d", ret);
        break;
      }
      // add <column_id, expression> to update operator
      else if (OB_SUCCESS != (ret = update_op->add_update_expr(column_id, expr)))
      {
        TBSYS_LOG(WARN, "fail to add update expr to update operator");
        break;
      }
    }
  }
  if (OB_SUCCESS == ret)
  {
    ObPhyOperator *table_op = NULL;
    if ((ret = gen_phy_table(logical_plan, physical_plan, err_stat, update_stmt, table_id, table_op)) == OB_SUCCESS && NULL != table_op && (ret = update_op->set_child(0, *table_op)) == OB_SUCCESS)
    {
      // success
    }
    else
    {
      TRANS_LOG("Set child of update operator failed");
    }
  }

  return ret;
}

int ObTransformer::gen_physical_explain(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObExplainStmt *explain_stmt = NULL;
  ObExplain *explain_op = NULL;

  if (ret == OB_SUCCESS)
  {
    get_stmt(logical_plan, err_stat, query_id, explain_stmt);
  }
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(explain_op, ObExplain, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, explain_stmt, explain_op, index);
    }
  }

  int32_t idx = OB_INVALID_INDEX;
  if (ret == OB_SUCCESS)
  {
    ret = generate_physical_plan(logical_plan, physical_plan, err_stat, explain_stmt->get_explain_query_id(), &idx);
  }
  if (ret == OB_SUCCESS)
  {
    ObPhyOperator* op = physical_plan->get_phy_query(idx);
    if ((ret = explain_op->set_child(0, *op)) != OB_SUCCESS)
      TRANS_LOG("Set child of Explain Operator failed");
  }

  return ret;
}

bool ObTransformer::check_join_column(const int32_t column_index, const char* column_name, const char* join_column_name, TableSchema& schema, const ObTableSchema& join_table_schema)
{
  bool parse_ok = true;
  uint64_t join_column_id = 0;

  const ColumnSchema* cs = schema.get_column_schema(column_name);
  const ObColumnSchemaV2* jcs = sql_context_->schema_manager_->get_column_schema(join_table_schema.get_table_name(), join_column_name);

  if (NULL == cs || NULL == jcs)
  {
    TBSYS_LOG(ERROR, "column(%s,%s) not a valid column.", column_name, join_column_name);
    parse_ok = false;
  }
  else if (cs->data_type_ != jcs->get_type())
  {
    //the join should be happen between too columns have the same type
    TBSYS_LOG(ERROR, "join column have different types (%s,%d), (%s,%d) ", column_name, cs->data_type_, join_column_name, jcs->get_type());
    parse_ok = false;
  }
  else if (OB_SUCCESS != join_table_schema.get_rowkey_info().get_column_id(column_index, join_column_id))
  {
    TBSYS_LOG(ERROR, "join table (%s) has not rowkey column on index(%d)", join_table_schema.get_table_name(), column_index);
    parse_ok = false;
  }
  else if (join_column_id != jcs->get_id())
  {
    TBSYS_LOG(ERROR, "join column(%s,%ld) not match join table rowkey column(%ld)", join_table_schema.get_table_name(), jcs->get_id(), join_column_id);
    parse_ok = false;
  }

  if (parse_ok)
  {
    int64_t rowkey_idx = -1;
    if (OB_SUCCESS == schema.get_column_rowkey_index(cs->column_id_, rowkey_idx))
    {
      if (-1 == rowkey_idx)
      {
        TBSYS_LOG(ERROR, "left column (%s,%lu) not a rowkey column of left table(%s)", column_name, cs->column_id_, schema.table_name_);
        parse_ok = false;
      }
    }
    else
    {
      TBSYS_LOG(WARN, "fail to get column rowkey index");
      parse_ok = false;
    }
  }
  return parse_ok;
}
//zhounan unmark:b
int ObTransformer::gen_physical_cursor_declare(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObCursorDeclare*result_op = NULL;
  ObCursorDeclareStmt *stmt = NULL;
  /* get declare statement */
	   get_stmt(logical_plan, err_stat, query_id, stmt);//鎷垮埌鏁翠釜Declare璇彞鍜岄�昏緫鎵ц璁″垝鏍�
	   /* add declare operator */
	   if (ret == OB_SUCCESS)
	   {
	     CREATE_PHY_OPERRATOR(result_op, ObCursorDeclare, physical_plan, err_stat);
	     if (ret == OB_SUCCESS)
	     {
	       ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	     }
	   }
	   ObCursor *cursor_op = NULL;
	   CREATE_PHY_OPERRATOR(cursor_op, ObCursor, physical_plan, err_stat);
	   ret = result_op->set_child(0,*cursor_op);
	   if (ret == OB_SUCCESS)
	   {
	     ObPhyOperator* op = NULL;
	     ObString cursor_name;
	     int32_t idx = OB_INVALID_INDEX;
	     if ((ret = ob_write_string(*mem_pool_, stmt->get_cursor_name(), cursor_name)) != OB_SUCCESS)//鎷垮埌cursor_name
	     {
	       TRANS_LOG("Add prepare plan for stmt %.*s faild",
	       stmt->get_cursor_name().length(), stmt->get_cursor_name().ptr());
	     }
	     else
	     {
	    	 char filename_buf_[512];
	    	 ObString filename;

	    	 if (cursor_name.length() >= 64)
		   	  {
		   	    TBSYS_LOG(ERROR, "cursor name is too long, filename=%.*s", filename.length(), filename.ptr());
		   	     ret = OB_ERR_ILLEGAL_INDEX;
		   	  }
	          else
	          {
	    	    time_t tt = time(NULL);
	    	    uint64_t si = sql_context_->session_info_->get_session_id();
	    	    int64_t pos = snprintf(filename_buf_, 512,"%s%ld%s%ld","data/cursor/", tt, cursor_name.ptr(),si);
	            filename.assign_ptr(filename_buf_, static_cast<int32_t>(pos));

	       cursor_op->set_run_filename(filename);
	       result_op->set_cursor_name(cursor_name);//瀛榗ursor name
	       if ((ret = generate_physical_plan(
	                           logical_plan,
	                           physical_plan,
	                           err_stat,
	                           stmt->get_declare_query_id(),
	                           &idx)) != OB_SUCCESS)
	       {
	         TBSYS_LOG(WARN, "Create physical plan for query statement failed, err=%d", ret);
	       }
	       else if ((op = physical_plan->get_phy_query(idx)) == NULL
	         || (ret = cursor_op->set_child(0, *op)) != OB_SUCCESS)
	       {
	         ret = OB_ERR_ILLEGAL_INDEX;
	         TRANS_LOG("Set child of Prepare Operator failed");
	       }
	     }
	    }
	   }
	   return ret;
}

int ObTransformer::gen_physical_cursor_open(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
int &ret = err_stat.err_code_ = OB_SUCCESS;
 ObCursorOpen *result_op = NULL;
 ObCursorOpenStmt *stmt = NULL;
 /* get open statement */
 get_stmt(logical_plan, err_stat, query_id, stmt);
 /* generate operator */
 if (ret == OB_SUCCESS)
 {
   CREATE_PHY_OPERRATOR(result_op, ObCursorOpen, physical_plan, err_stat);
   if (ret == OB_SUCCESS)
   {
     ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
   }
 }
 ObSQLSessionInfo *session_info = NULL;
 if (ret == OB_SUCCESS
   && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
 {
   ret = OB_NOT_INIT;
   TRANS_LOG("Session info is not initiated");
 }

 if (ret == OB_SUCCESS)
 {
     result_op->set_cursor_name(stmt->get_cursor_name());
 }
 return ret;
}

int ObTransformer::gen_physical_cursor_fetch(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObCursorFetch *result_op = NULL;
	  ObCursorFetchStmt *stmt = NULL;
	  /* get fetch statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObCursorFetch, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }

	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());
	  }
	  return ret;
}

int ObTransformer::gen_physical_cursor_fetch_prior(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObFetchPrior *result_op = NULL;
	  ObFetchPriorStmt *stmt = NULL;
	  /* get fetch statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObFetchPrior, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }

	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());
	  }
	  return ret;
}

int ObTransformer::gen_physical_cursor_fetch_prior_into(
      ObLogicalPlan *logical_plan,
      ObPhysicalPlan *physical_plan,
      ErrStat& err_stat,
      const uint64_t& query_id,
      int32_t* index)
  {
  	int &ret = err_stat.err_code_ = OB_SUCCESS;
  	  ObCursorFetchPriorInto *result_op = NULL;
  	  ObCursorFetchPriorIntoStmt *stmt = NULL;
  	TBSYS_LOG(INFO, "enter gen_physical_cursor_fetch_prior_into");
  	  /* get fetch statement */
  	  get_stmt(logical_plan, err_stat, query_id, stmt);
  	  /* generate operator */
  	  if (ret == OB_SUCCESS)
  	  {
  	    CREATE_PHY_OPERRATOR(result_op, ObCursorFetchPriorInto, physical_plan, err_stat);
  	    if (ret == OB_SUCCESS)
  	    {
  	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
  	    }
  	  }
  	  if (ret == OB_SUCCESS)
  	  {

  		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
		{
			 ObString var=stmt->get_variable(i);
			 if((ret = result_op->add_variable(var)) != OB_SUCCESS)
			 {
				 TRANS_LOG("add variable failed, ret=%d", ret);
			 }
		}

		int32_t idx = OB_INVALID_INDEX;
		ObPhyOperator* op = NULL;
		/*
		if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx,root_query_id)) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
		}
		*/
		if ((ret = gen_physical_cursor_fetch_prior(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx)) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
		}
		else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
		{
			ret = OB_ERR_ILLEGAL_INDEX;
			TRANS_LOG("Set child of Prepare Operator failed");
		}


  	  }
  	  return ret;
  }

int ObTransformer::gen_physical_cursor_fetch_first(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObFetchFirst *result_op = NULL;
	  ObFetchFirstStmt *stmt = NULL;
	  /* get fetch statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObFetchFirst, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }

	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());
	  }
	  return ret;
}
int ObTransformer::gen_physical_cursor_fetch_last(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObFetchLast *result_op = NULL;
	  ObFetchLastStmt *stmt = NULL;
	  /* get fetch statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObFetchLast, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }
	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());

	  }
	  return ret;
}

int ObTransformer::gen_physical_cursor_fetch_relative(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObFetchRelative *result_op = NULL;
	  ObFetchRelativeStmt *stmt = NULL;
	  /* get fetch statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObFetchRelative, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }

	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());
	      result_op->set_is_next(stmt->get_is_next());
	      result_op->set_fetch_count(stmt->get_fetch_count());

	  }
	  return ret;
}

int ObTransformer::gen_physical_cursor_fetch_absolute(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObFetchAbsolute *result_op = NULL;
	  ObFetchAbsoluteStmt *stmt = NULL;
	  /* get fetch statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObFetchAbsolute, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }

	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());
	      result_op->set_fetch_count(stmt->get_fetch_count());


	  }
	  return ret;
}

int ObTransformer::gen_physical_cursor_fetch_fromto(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObFetchFromto *result_op = NULL;
	  ObFetchFromtoStmt *stmt = NULL;
	  /* get fetch statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObFetchFromto, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }

	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());

	      result_op->set_count_f(stmt->get_count_f());
	      result_op->set_count_t(stmt->get_count_t());
	      result_op->set_count(0);

	  }

	  return ret;
}
int ObTransformer::gen_physical_cursor_close(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
	int &ret = err_stat.err_code_ = OB_SUCCESS;
	  ObCursorClose *result_op = NULL;
	  ObCursorCloseStmt *stmt = NULL;
	  /* get close statement */
	  get_stmt(logical_plan, err_stat, query_id, stmt);
	  /* generate operator */
	  if (ret == OB_SUCCESS)
	  {
	    CREATE_PHY_OPERRATOR(result_op, ObCursorClose, physical_plan, err_stat);
	    if (ret == OB_SUCCESS)
	    {
	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
	    }
	  }

	  ObSQLSessionInfo *session_info = NULL;
	  if (ret == OB_SUCCESS
	    && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
	  {
	    ret = OB_NOT_INIT;
	    TRANS_LOG("Session info is not initiated");
	  }

	  if (ret == OB_SUCCESS)
	  {
		 result_op->set_cursor_name(stmt->get_cursor_name());
	  }
	  return ret;
}

 int ObTransformer::gen_physical_cursor_fetch_into(
      ObLogicalPlan *logical_plan,
      ObPhysicalPlan *physical_plan,
      ErrStat& err_stat,
      const uint64_t& query_id,
      int32_t* index)
  {
  	int &ret = err_stat.err_code_ = OB_SUCCESS;
  	  ObCursorFetchInto *result_op = NULL;
  	  ObCursorFetchIntoStmt *stmt = NULL;
  	TBSYS_LOG(INFO, "enter gen_physical_cursor_fetch_into");
  	  /* get fetch statement */
  	  get_stmt(logical_plan, err_stat, query_id, stmt);
  	  /* generate operator */
  	  if (ret == OB_SUCCESS)
  	  {
  	    CREATE_PHY_OPERRATOR(result_op, ObCursorFetchInto, physical_plan, err_stat);
  	    if (ret == OB_SUCCESS)
  	    {
  	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
  	    }
  	  }
  	  if (ret == OB_SUCCESS)
  	  {

  		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
		{
			 ObString var=stmt->get_variable(i);
			 if((ret = result_op->add_variable(var)) != OB_SUCCESS)
			 {
				 TRANS_LOG("add variable failed, ret=%d", ret);
			 }
		}

		int32_t idx = OB_INVALID_INDEX;
		ObPhyOperator* op = NULL;
		/*
		if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx,root_query_id)) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
		}
		*/
		if ((ret = gen_physical_cursor_fetch(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx)) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
		}
		else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
		{
			ret = OB_ERR_ILLEGAL_INDEX;
			TRANS_LOG("Set child of Prepare Operator failed");
		}


  	  }
  	  return ret;
  }


 int ObTransformer::gen_physical_cursor_fetch_first_into(
       ObLogicalPlan *logical_plan,
       ObPhysicalPlan *physical_plan,
       ErrStat& err_stat,
       const uint64_t& query_id,
       int32_t* index)
   {
   	int &ret = err_stat.err_code_ = OB_SUCCESS;
   	  ObCursorFetchFirstInto *result_op = NULL;
   	  ObCursorFetchFirstIntoStmt *stmt = NULL;
   	TBSYS_LOG(INFO, "enter gen_physical_cursor_first_into");
   	  /* get fetch statement */
   	  get_stmt(logical_plan, err_stat, query_id, stmt);
   	  /* generate operator */
   	  if (ret == OB_SUCCESS)
   	  {
   	    CREATE_PHY_OPERRATOR(result_op, ObCursorFetchFirstInto, physical_plan, err_stat);
   	    if (ret == OB_SUCCESS)
   	    {
   	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
   	    }
   	  }
   	  if (ret == OB_SUCCESS)
   	  {

   		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
 		{
 			 ObString var=stmt->get_variable(i);
 			 if((ret = result_op->add_variable(var)) != OB_SUCCESS)
 			 {
 				 TRANS_LOG("add variable failed, ret=%d", ret);
 			 }
 		}

 		int32_t idx = OB_INVALID_INDEX;
 		ObPhyOperator* op = NULL;
 		/*if ((ret = generate_physical_plan(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx,root_query_id)) != OB_SUCCESS)
 		{
 			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
 		}*/
 		if ((ret = gen_physical_cursor_fetch_first(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx)) != OB_SUCCESS)
 		{
 		 	TBSYS_LOG(WARN, "generate_physical_plan wrong!");
 		}
 		else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
 		{
 			ret = OB_ERR_ILLEGAL_INDEX;
 			TRANS_LOG("Set child of Prepare Operator failed");
 		}


   	  }
   	  return ret;
   }





 int ObTransformer::gen_physical_cursor_fetch_last_into(
        ObLogicalPlan *logical_plan,
        ObPhysicalPlan *physical_plan,
        ErrStat& err_stat,
        const uint64_t& query_id,
        int32_t* index)
    {
    	int &ret = err_stat.err_code_ = OB_SUCCESS;
    	  ObCursorFetchLastInto *result_op = NULL;
    	  ObCursorFetchLastIntoStmt *stmt = NULL;
    	TBSYS_LOG(INFO, "enter gen_physical_cursor_last_into");
    	  /* get fetch statement */
    	  get_stmt(logical_plan, err_stat, query_id, stmt);
    	  /* generate operator */
    	  if (ret == OB_SUCCESS)
    	  {
    	    CREATE_PHY_OPERRATOR(result_op, ObCursorFetchLastInto, physical_plan, err_stat);
    	    if (ret == OB_SUCCESS)
    	    {
    	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
    	    }
    	  }
    	  if (ret == OB_SUCCESS)
    	  {

    		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
  		{
  			 ObString var=stmt->get_variable(i);
  			 if((ret = result_op->add_variable(var)) != OB_SUCCESS)
  			 {
  				 TRANS_LOG("add variable failed, ret=%d", ret);
  			 }
  		}

  		int32_t idx = OB_INVALID_INDEX;
  		ObPhyOperator* op = NULL;
  		if ((ret = gen_physical_cursor_fetch_last(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx)) != OB_SUCCESS)
  		{
  			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
  		}
  		else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
  		{
  			ret = OB_ERR_ILLEGAL_INDEX;
  			TRANS_LOG("Set child of Prepare Operator failed");
  		}


    	  }
    	  return ret;
    }



 int ObTransformer::gen_physical_cursor_fetch_relative_into(
          ObLogicalPlan *logical_plan,
          ObPhysicalPlan *physical_plan,
          ErrStat& err_stat,
          const uint64_t& query_id,
          int32_t* index)
      {
      	int &ret = err_stat.err_code_ = OB_SUCCESS;
      	  ObCursorFetchRelativeInto *result_op = NULL;
      	  ObCursorFetchRelativeIntoStmt *stmt = NULL;
      	TBSYS_LOG(INFO, "enter gen_physical_cursor_relative_into");
      	  /* get fetch statement */
      	  get_stmt(logical_plan, err_stat, query_id, stmt);
      	  /* generate operator */
      	  if (ret == OB_SUCCESS)
      	  {
      	    CREATE_PHY_OPERRATOR(result_op, ObCursorFetchRelativeInto, physical_plan, err_stat);
      	    if (ret == OB_SUCCESS)
      	    {
      	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
      	    }
      	  }
      	  if (ret == OB_SUCCESS)
      	  {

      		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
    		{
    			 ObString var=stmt->get_variable(i);
    			 if((ret = result_op->add_variable(var)) != OB_SUCCESS)
    			 {
    				 TRANS_LOG("add variable failed, ret=%d", ret);
    			 }
    		}

    		int32_t idx = OB_INVALID_INDEX;
    		ObPhyOperator* op = NULL;
    		if ((ret = gen_physical_cursor_fetch_relative(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx)) != OB_SUCCESS)
    		{
    			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
    		}
    		else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
    		{
    			ret = OB_ERR_ILLEGAL_INDEX;
    			TRANS_LOG("Set child of Prepare Operator failed");
    		}


      	  }
      	  return ret;
      }




 int ObTransformer::gen_physical_cursor_fetch_absolute_into(
         ObLogicalPlan *logical_plan,
         ObPhysicalPlan *physical_plan,
         ErrStat& err_stat,
         const uint64_t& query_id,
         int32_t* index)
     {
     	int &ret = err_stat.err_code_ = OB_SUCCESS;
     	  ObCursorFetchAbsInto *result_op = NULL;
     	  ObCursorFetchAbsIntoStmt *stmt = NULL;
     	TBSYS_LOG(INFO, "enter gen_physical_cursor_absolute_into");
     	  /* get fetch statement */
     	  get_stmt(logical_plan, err_stat, query_id, stmt);
     	  /* generate operator */
     	  if (ret == OB_SUCCESS)
     	  {
     	    CREATE_PHY_OPERRATOR(result_op, ObCursorFetchAbsInto, physical_plan, err_stat);
     	    if (ret == OB_SUCCESS)
     	    {
     	      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
     	    }
     	  }
     	  if (ret == OB_SUCCESS)
     	  {

     		for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
   		{
   			 ObString var=stmt->get_variable(i);
   			 if((ret = result_op->add_variable(var)) != OB_SUCCESS)
   			 {
   				 TRANS_LOG("add variable failed, ret=%d", ret);
   			 }
   		}

   		int32_t idx = OB_INVALID_INDEX;
   		ObPhyOperator* op = NULL;
   		if ((ret = gen_physical_cursor_fetch_absolute(logical_plan,physical_plan,err_stat,stmt->get_cursor_id(),&idx)) != OB_SUCCESS)
   		{
   			TBSYS_LOG(WARN, "generate_physical_plan wrong!");
   		}
   		else if ((op = physical_plan->get_phy_query(idx)) == NULL|| (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
   		{
   			ret = OB_ERR_ILLEGAL_INDEX;
   			TRANS_LOG("Set child of Prepare Operator failed");
   		}


     	  }
     	  return ret;
     }
//add:e



bool ObTransformer::parse_join_info(const ObString &join_info_str, TableSchema &table_schema)
{
  bool parse_ok = true;
  char *str = NULL;
  std::vector<char*> node_list;
  const ObTableSchema *table_joined = NULL;
  uint64_t table_id_joined = OB_INVALID_ID;

  char *s = NULL;
  int len = 0;
  char *p = NULL;
  str = strndup(join_info_str.ptr(), join_info_str.length());
  s = str;
  len = static_cast<int32_t>(strlen(s));

  // str like [r1$jr1,r2$jr2]%joined_table_name:f1$jf1,f2$jf2,...
  if (*s != '[')
  {
    TBSYS_LOG(ERROR, "join info (%s) incorrect, first character must be [", str);
    parse_ok = false;
  }
  else
  {
    ++s;
  }

  if (parse_ok)
  {
    // find another bracket
    p = strchr(s, ']');
    if (NULL == p)
    {
      TBSYS_LOG(ERROR, "join info (%s) incorrect, cannot found ]", str);
      parse_ok = false;
    }
    else
    {
      // s now be the join rowkey columns array.
      *p = '\0';
    }
  }

  if (parse_ok)
  {
    node_list.clear();
    s = str_trim(s);
    tbsys::CStringUtil::split(s, ",", node_list);
    if (node_list.empty())
    {
      TBSYS_LOG(ERROR, "join info (%s) incorrect, left join columns not exist.", str);
      parse_ok = false;
    }
    else
    {
      // skip join rowkey columns string, now s -> %joined_table_name:f1$jf1...
      s = p + 1;
    }
  }

  if (parse_ok && *s != '%')
  {
    TBSYS_LOG(ERROR, "%s format error, should be rowkey", str);
    parse_ok = false;
  }

  if (parse_ok)
  {
    // skip '%', find join table name.
    s++;
    p = strchr(s, ':');
    if (NULL == p)
    {
      TBSYS_LOG(ERROR, "%s format error, could not find ':'", str);
      parse_ok = false;
    }
    else
    {
      // now s is the joined table name.
      *p = '\0';
    }
  }

  if (parse_ok)
  {
    table_joined = sql_context_->schema_manager_->get_table_schema(s);
    if (NULL != table_joined)
    {
      table_id_joined = table_joined->get_table_id();
    }

    if (NULL == table_joined || table_id_joined == OB_INVALID_ID)
    {
      TBSYS_LOG(ERROR, "%s table not exist ", s);
      parse_ok = false;
    }
  }

  // parse join rowkey columns.
  if (parse_ok)
  {
    char* cp = NULL;
    for (uint32_t i = 0; parse_ok && i < node_list.size(); ++i)
    {
      cp = strchr(node_list[i], '$');
      if (NULL == cp)
      {
        TBSYS_LOG(ERROR, "error can not find '$' (%s) ", node_list[i]);
        parse_ok = false;
        break;
      }
      else
      {
        *cp = '\0';
        ++cp;
        // now node_list[i] is left column, cp is join table rowkey column;
        parse_ok = check_join_column(i, node_list[i], cp, table_schema, *table_joined);
        if (parse_ok)
        {
          JoinInfo join_info;

          strncpy(join_info.left_table_name_, table_schema.table_name_, OB_MAX_TABLE_NAME_LENGTH);
          join_info.left_table_name_[OB_MAX_TABLE_NAME_LENGTH - 1] = '\0';
          join_info.left_table_id_ = table_schema.table_id_;

          strncpy(join_info.left_column_name_, node_list[i], OB_MAX_COLUMN_NAME_LENGTH);
          join_info.left_column_name_[OB_MAX_COLUMN_NAME_LENGTH - 1] = '\0';
          join_info.left_column_id_ = table_schema.get_column_schema(node_list[i])->column_id_;

          strncpy(join_info.right_table_name_, table_joined->get_table_name(), OB_MAX_TABLE_NAME_LENGTH);
          join_info.right_table_name_[OB_MAX_TABLE_NAME_LENGTH - 1] = '\0';
          join_info.right_table_id_ = table_joined->get_table_id();

          strncpy(join_info.right_column_name_, cp, OB_MAX_COLUMN_NAME_LENGTH);
          join_info.right_column_name_[OB_MAX_COLUMN_NAME_LENGTH - 1] = '\0';
          join_info.right_column_id_ = sql_context_->schema_manager_->get_column_schema(table_joined->get_table_name(), cp)->get_id();
          if (OB_SUCCESS != table_schema.join_info_.push_back(join_info))
          {
            parse_ok = false;
            TBSYS_LOG(WARN, "fail to push join info");
          }
          else
          {
            TBSYS_LOG(DEBUG, "add join info [%s]", to_cstring(join_info));
          }
        }
      }
    }
  }

  // parse join columns
  if (parse_ok)
  {
    s = p + 1;
    s = str_trim(s);
    node_list.clear();
    tbsys::CStringUtil::split(s, ",", node_list);
    if (node_list.empty())
    {
      TBSYS_LOG(ERROR, "%s can not find correct info", str);
      parse_ok = false;
    }
  }

  uint64_t ltable_id = OB_INVALID_ID;

  if (parse_ok)
  {
    ltable_id = table_schema.table_id_;
    char *fp = NULL;
    for (uint32_t i = 0; parse_ok && i < node_list.size(); ++i)
    {
      fp = strchr(node_list[i], '$');
      if (NULL == fp)
      {
        TBSYS_LOG(ERROR, "error can not find '$' %s ", node_list[i]);
        parse_ok = false;
        break;
      }
      *fp = '\0';
      fp++;

      const ObColumnSchemaV2 * right_column_schema = NULL;
      ColumnSchema *column_schema = table_schema.get_column_schema(node_list[i]);
      if (NULL == column_schema)
      {
        TBSYS_LOG(WARN, "column %s is not valid", node_list[i]);
        parse_ok = false;
      }
      else if (NULL == (right_column_schema = sql_context_->schema_manager_->get_column_schema(table_joined->get_table_name(), fp)))
      {
        TBSYS_LOG(WARN, "column %s is not valid", fp);
        parse_ok = false;
      }
      else
      {
        column_schema->join_table_id_ = table_id_joined;
        column_schema->join_column_id_ = right_column_schema->get_id();
        TBSYS_LOG(DEBUG, "column schema join_table_id[%lu], join_column_id[%lu]", column_schema->join_table_id_, column_schema->join_column_id_);
      }
    }
  }
  free(str);
  str = NULL;
  return parse_ok;
}

//add longfei [create index]
int ObTransformer::gen_physical_create_index(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObCreateIndexStmt *crt_idx_stmt = NULL;
  ObCreateTable *crt_tab_op = NULL;
  // uint64_t magic_cid=OB_APP_MIN_COLUMN_ID;
  uint64_t max_col_id = 0;
  bool rowkey_will_add_in = true;
  int64_t column_num = 0;
  int64_t this_index_col_num = 0;
  ObStrings expire_col;	  //for expire infomation
  ObString val;	  //for expire infomation
  /*get create index statement*/
  if (OB_SUCCESS == ret)
  {
    get_stmt(logical_plan, err_stat, query_id, crt_idx_stmt);
  }
  /*generate operator to create index table*/
  if (OB_SUCCESS == ret)
  {
    CREATE_PHY_OPERRATOR(crt_tab_op, ObCreateTable, physical_plan, err_stat);
    if (OB_SUCCESS == ret)
    {
      crt_tab_op->set_sql_context(*sql_context_);
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, crt_idx_stmt, crt_tab_op, index);
    }
  }
  /*if(ret==OB_SUCCESS)
   {
   if(crt_idx_stmt->get_index_colums_count()>OB_MAX_INDEX_COLUMNS)
   {
   TRANS_LOG("Too many columns in index!(max allowed is %ld).",
   OB_MAX_USER_DEFINED_COLUMNS_COUNT);
   ret = OB_ERR_INVALID_COLUMN_NUM;
   }
   }
   */
  /*set table schema for phy_oprator*/
  if (OB_SUCCESS == ret)
  {
    int buf_len = 0;
    int len = 0;
    TableSchema& table_schema = crt_tab_op->get_table_schema();
    const ObTableSchema* idxed_tab_schema = NULL;
    const ObString& index_name = crt_idx_stmt->get_table_name();
    // buf_len = sizeof(table_schema.table_name_);
    if (index_name.length() < OB_MAX_TABLE_NAME_LENGTH)
    {
      len = index_name.length();
    }
    else
    {
      len = OB_MAX_TABLE_NAME_LENGTH - 1;
      TRANS_LOG("Index Table Name is truncated to '%.*s'", len, index_name.ptr());
    }
    memcpy(table_schema.table_name_, index_name.ptr(), len);
    table_schema.table_name_[len] = '\0';
    if (OB_INVALID_ID != crt_idx_stmt->get_table_id())
    {
      table_schema.table_id_ = crt_idx_stmt->get_table_id();
    }
    else
    {
      table_schema.table_id_ = OB_INVALID_ID;
    }
    /*Now We Must take source table's schema to fix index schema*/
    const ObString& idxed_tab_name = crt_idx_stmt->get_original_table_name();
    char str_tname[common::OB_MAX_COLUMN_NAME_LENGTH], str_cname[common::OB_MAX_COLUMN_NAME_LENGTH];
    memset(str_tname, 0, common::OB_MAX_COLUMN_NAME_LENGTH);
    memcpy(str_tname, idxed_tab_name.ptr(), idxed_tab_name.length());
    if (NULL == (idxed_tab_schema = sql_context_->schema_manager_->get_table_schema(str_tname)))
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("Fail to get table schema for table[%s]", str_tname);
    }
    if (OB_SUCCESS == ret)
    {
      /* refresh expior condition of index schema*/
      ObString expire_info;
      expire_info.assign_ptr((char*) idxed_tab_schema->get_expire_condition(), static_cast<int32_t>(strlen(idxed_tab_schema->get_expire_condition())));
      if (expire_info.length() < OB_MAX_EXPIRE_CONDITION_LENGTH)
      {
        len = expire_info.length();
      }
      else
      {
        len = OB_MAX_EXPIRE_CONDITION_LENGTH - 1;
        TRANS_LOG("Expire_info is truncated to '%.*s'", len, expire_info.ptr());
      }
      memcpy(table_schema.expire_condition_, expire_info.ptr(), len);
      table_schema.expire_condition_[len] = '\0';
      if (idxed_tab_schema->get_expire_condition()[0] != '\0')
      {
        /*如果超时信息当中的列没有在索引列当中，那么就要在索引表里的冗余列种添加超时信息涉及到的列*/
        const ObColumnSchemaV2* oc_expire = NULL;
        if (OB_SUCCESS != (ret = crt_idx_stmt->generate_expire_col_list(expire_info, expire_col)))
        {
          TBSYS_LOG(WARN, "generate expire col list error");
        }
        else
        {
          for (int64_t i = 0; i < expire_col.count(); i++)
          {
            val.reset();
            if (OB_SUCCESS != (ret = expire_col.get_string(i, val)))
            {
              TBSYS_LOG(WARN, "get expire error");
              break;
            }
            else if (NULL == (oc_expire = sql_context_->schema_manager_->get_column_schema(idxed_tab_name, val)))
            {
              TBSYS_LOG(WARN, "get expire column schema error,col [%.*s]", val.length(), val.ptr());
            }
            else if (!crt_idx_stmt->is_expire_col_in_storing(val) && !idxed_tab_schema->get_rowkey_info().is_rowkey_column(oc_expire->get_id()))
            {
              crt_idx_stmt->set_storing_columns_simple(val);
            }
          }
        }
      }
      /* refresh comment_str condition of index schema*/
      ObString comment_str;
      comment_str.assign_ptr((char*) idxed_tab_schema->get_comment_str(), static_cast<int32_t>(strlen(idxed_tab_schema->get_comment_str())));
      //buf_len = sizeof(table_schema.comment_str_);
      if (comment_str.length() < OB_MAX_TABLE_COMMENT_LENGTH)
      {
        len = comment_str.length();
      }
      else
      {
        len = OB_MAX_TABLE_COMMENT_LENGTH - 1;
        TRANS_LOG("Comment_str is truncated to '%.*s'", len, comment_str.ptr());
      }
      memcpy(table_schema.comment_str_, comment_str.ptr(), len);
      table_schema.comment_str_[len] = '\0';
      /*refresh other infomation*/
      crt_tab_op->set_if_not_exists(crt_idx_stmt->get_if_not_exists());
      //if (crt_tab_stmt->get_tablet_max_size() > 0)
      //we set some paramer with default value
      table_schema.tablet_max_size_ = crt_idx_stmt->get_tablet_max_size();
      table_schema.tablet_block_size_ = crt_idx_stmt->get_tablet_block_size();
      table_schema.replica_num_ = (int32_t) crt_idx_stmt->get_replica_num();
      table_schema.is_use_bloomfilter_ = crt_idx_stmt->use_bloom_filter();
      table_schema.consistency_level_ = crt_idx_stmt->get_consistency_level();
      table_schema.rowkey_column_num_ = (int32_t) idxed_tab_schema->get_rowkey_info().get_size() + (int32_t) crt_idx_stmt->get_index_columns_count();
      table_schema.max_used_column_id_ = OB_ALL_MAX_COLUMN_ID;

      ObString compress_method;
      char* compress_name_ = const_cast<char*>(crt_idx_stmt->get_compress_method().ptr());
      compress_method.assign_ptr(compress_name_, crt_idx_stmt->get_compress_method().length());
      //buf_len = sizeof(table_schema.compress_func_name_);
      const char *func_name = compress_method.ptr();
      len = compress_method.length();
      if (len <= 0)
      {
        func_name = OB_DEFAULT_COMPRESS_FUNC_NAME;
        len = static_cast<int>(strlen(OB_DEFAULT_COMPRESS_FUNC_NAME));
      }
      if (len >= OB_MAX_TABLE_NAME_LENGTH)
      {
        len = OB_MAX_TABLE_NAME_LENGTH - 1;
        TRANS_LOG("Compress method name is truncated to '%.*s'", len, func_name);
      }
      memcpy(table_schema.compress_func_name_, func_name, len);
      table_schema.compress_func_name_[len] = '\0';
      /* Now We Refresh Columns Info of index*/
      //ObString idxed_tname=crt_idx_stmt->get_idxed_name();
      uint64_t tid = idxed_tab_schema->get_table_id();
      ObRowkeyInfo ori = idxed_tab_schema->get_rowkey_info();
      table_schema.original_table_id_ = tid;
      table_schema.index_status_ = INDEX_INIT;

      int64_t rowkey_id = 0;
      for (int64_t i = 0; OB_SUCCESS == ret && i < crt_idx_stmt->get_index_columns_count() + ori.get_size(); i++)
      {
        ColumnSchema col;
        ObString col_name;
        uint64_t cid;
        const ObColumnSchemaV2* ocs2 = NULL;
        if (i < crt_idx_stmt->get_index_columns_count())
        {
          col_name.reset();
          col_name = crt_idx_stmt->get_index_columns(i);
          memset(str_cname, 0, common::OB_MAX_COLUMN_NAME_LENGTH);
          memcpy(str_cname, col_name.ptr(), col_name.length());
          ocs2 = sql_context_->schema_manager_->get_column_schema(str_tname, str_cname);
          if (NULL == ocs2)
          {
            ret = OB_ERR_INVALID_SCHEMA;
            TBSYS_LOG(ERROR, "get source table column schema error,t_name=%s,col_name=%s", str_tname, str_cname);
          }
          else
          {
            cid = ocs2->get_id();
            if (idxed_tab_schema->get_rowkey_info().is_rowkey_column(cid))
            {
              if (OB_SUCCESS != (ret = crt_idx_stmt->push_hit_rowkey(cid)))
              {
                ret = OB_ERROR;
                TBSYS_LOG(WARN, "push rowkey in hit array failed");
              }
              else
              {
                table_schema.rowkey_column_num_--;
              }
            }
            rowkey_will_add_in = true;
            rowkey_id++;
            //column_num++;
          }
        }
        else
        {
          col_name.reset();
          int64_t rowkey_seq = i - crt_idx_stmt->get_index_columns_count();
          ori.get_column_id(rowkey_seq, cid);
          ocs2 = sql_context_->schema_manager_->get_column_schema(tid, cid);
          if (NULL == ocs2)
          {
            ret = OB_ERR_INVALID_SCHEMA;
            TBSYS_LOG(ERROR, "get source table column schema error,t_name=%s,col_name=%s", str_tname, str_cname);
          }
          else
          {
            col_name.assign_ptr((char*) ocs2->get_name(), static_cast<int32_t>(strlen(ocs2->get_name())));
            if (crt_idx_stmt->is_rowkey_hit(cid))
            {
              rowkey_will_add_in = false;
            }
            else
            {
              rowkey_will_add_in = true;
              rowkey_id++;
              //column_num++;
            }
          }
        }
        if (OB_SUCCESS == ret && rowkey_will_add_in)
        {
          col.column_id_ = ocs2->get_id();

          if (col.column_id_ > max_col_id)
          {
            max_col_id = col.column_id_;
          }

          buf_len = sizeof(col.column_name_);
          if (col_name.length() < buf_len)
          {
            len = col_name.length();
          }
          else
          {
            len = buf_len - 1;
            TRANS_LOG("Column name is truncated to '%s'", str_cname);
          }
          memcpy(col.column_name_, col_name.ptr(), len);
          col.column_name_[len] = '\0';
          col.data_type_ = ocs2->get_type();
          col.data_length_ = ocs2->get_default_value().get_val_len();
          if (col.data_type_ == ObVarcharType && 0 > col.data_length_)
          {
            col.data_length_ = OB_MAX_VARCHAR_LENGTH;
          }
          col.length_in_rowkey_ = ocs2->get_default_value().get_val_len();
          col.nullable_ = ocs2->is_nullable();
          col.rowkey_id_ = rowkey_id;
          col.column_group_id_ = ocs2->get_column_group_id();
          col.join_table_id_ = OB_INVALID_ID;
          col.join_column_id_ = OB_INVALID_ID;
          // col.column_id_=cid;
          this_index_col_num++;
          if (OB_SUCCESS != (ret = table_schema.add_column(col)))
          {
            TRANS_LOG("Add column definition of '%s' failed", table_schema.table_name_);
            break;
          }

          if (OB_SUCCESS == ret)
          {
            /*if (OB_SUCCESS != (ret = allocate_column_id(table_schema)))
             {
             TBSYS_LOG(WARN, "fail to allocate column id:ret[%d]", ret);
             }
             */
            //column_num++;
          }
        }
      }
      if (OB_SUCCESS == ret)
      {
        if (crt_idx_stmt->get_storing_columns_count() > 0)
        {
          crt_idx_stmt->set_has_storing(true);
        }
        for (int64_t i = 0; OB_SUCCESS == ret && i < crt_idx_stmt->get_storing_columns_count(); i++)
        {
          const ObColumnSchemaV2* ocs2 = NULL;
          ColumnSchema col;
          ObString col_name = crt_idx_stmt->get_storing_columns(i);
          //ObString storing_col=crt_idx_stmt->get_storing_columns(i);
          memset(str_cname, 0, common::OB_MAX_COLUMN_NAME_LENGTH);
          memcpy(str_cname, col_name.ptr(), col_name.length());
          ocs2 = sql_context_->schema_manager_->get_column_schema(str_tname, str_cname);
          if (NULL == ocs2)
          {
            ret = OB_ERR_INVALID_SCHEMA;
            TBSYS_LOG(ERROR, "get source table column schema error,t_name=%s,col_name=%s,i=[%ld]", str_tname, str_cname, i);
          }
          else
          {
            col.column_id_ = ocs2->get_id();

            if (col.column_id_ > max_col_id)
            {
              max_col_id = col.column_id_;
            }

            buf_len = sizeof(col.column_name_);
            if (col_name.length() < buf_len)
            {
              len = col_name.length();
            }
            else
            {
              len = buf_len - 1;
              TRANS_LOG("Column name is truncated to '%s'", str_cname);
            }
            memcpy(col.column_name_, col_name.ptr(), len);
            col.column_name_[len] = '\0';
            col.data_type_ = ocs2->get_type();
            col.data_length_ = ocs2->get_default_value().get_val_len();
            if (col.data_type_ == ObVarcharType && 0 > col.data_length_)
            {
              col.data_length_ = OB_MAX_VARCHAR_LENGTH;
            }
            col.length_in_rowkey_ = ocs2->get_default_value().get_val_len();
            col.nullable_ = ocs2->is_nullable();
            col.rowkey_id_ = 0;
            col.column_group_id_ = ocs2->get_column_group_id();
            col.join_table_id_ = OB_INVALID_ID;
            col.join_column_id_ = OB_INVALID_ID;
            this_index_col_num++;
            // @todo default_value_;
            if (OB_SUCCESS != (ret = table_schema.add_column(col)))
            {
              TRANS_LOG("Add column definition of '%s' failed", table_schema.table_name_);
            }
            if (OB_SUCCESS == ret)
            {
              /*
               if (OB_SUCCESS != (ret = allocate_column_id(table_schema)))
               {
               TBSYS_LOG(WARN, "fail to allocate column id:ret[%d]", ret);
               }
               */
              //column_num++;
            }
          }
        }
      }

      if (OB_SUCCESS == ret && !crt_idx_stmt->has_storing())
      {
        ColumnSchema col;
        col.rowkey_id_ = 0;
        //col.column_id_ = idxed_tab_schema->get_max_column_id()+1;
        col.column_id_ = OB_INDEX_VIRTUAL_COLUMN_ID;
        col.data_type_ = ObIntType;
        memcpy(col.column_name_, OB_INDEX_VIRTUAL_COL_NAME, strlen(OB_INDEX_VIRTUAL_COL_NAME));
        col.column_name_[strlen(OB_INDEX_VIRTUAL_COL_NAME)] = '\0';
        col.column_group_id_ = OB_DEFAULT_COLUMN_GROUP_ID;
        //max_col_id = col.column_id_;
        if (OB_SUCCESS != (ret = table_schema.add_column(col)))
        {
          TRANS_LOG("Add column definition of '%s' failed", table_schema.table_name_);
        }
      }
      UNUSED(column_num);


      //索引列加上冗余列不能超过100
      if(OB_SUCCESS == ret)
      {
        TableSchema& table_schema = crt_tab_op->get_table_schema();
        //table_schema.is_index=true;


        table_schema.max_used_column_id_ = max_col_id;
        if(table_schema.rowkey_column_num_ > OB_MAX_ROWKEY_COLUMN_NUMBER)
        {
          TRANS_LOG("index's rowkey column num cannot be greater than 16");
          ret = OB_ERR_COLUMN_SIZE;
        }
        if(OB_SUCCESS == ret)
        {
          if(OB_SUCCESS != (ret = sql_context_->schema_manager_->get_index_column_num(tid,column_num)))
          {
            TBSYS_LOG(ERROR, "failed get index column num.");
            ret = OB_ERROR;
          }
          else if(column_num +  this_index_col_num > OB_MAX_INDEX_COLUMNS)
          {
            TRANS_LOG("All index's column num cannot be greater than 100");
            ret = OB_ERR_INVALID_COLUMN_NUM;
          }
        }
      }

      if (OB_SUCCESS == ret && 0 < expire_info.length())
      {
        TableSchema& table_schema = crt_tab_op->get_table_schema();
        // check expire condition
        void *ptr = ob_malloc(sizeof(ObSchemaManagerV2), ObModIds::OB_SCHEMA);
        if (NULL == ptr)
        {
          TRANS_LOG("no memory");
          ret = OB_ALLOCATE_MEMORY_FAILED;
        }
        else
        {
          ObSchemaManagerV2 *tmp_schema_mgr = new (ptr) ObSchemaManagerV2();
          table_schema.table_id_ = OB_NOT_EXIST_TABLE_TID;
          if (OB_SUCCESS != (ret = tmp_schema_mgr->add_new_table_schema(table_schema)))
          {
            TRANS_LOG("failed to add new table, err=%d", ret);
          }
          else if (OB_SUCCESS != (ret = tmp_schema_mgr->sort_column()))
          {
            TRANS_LOG("failed to sort column for schema manager, err=%d", ret);
          }
          else if (!tmp_schema_mgr->check_table_expire_condition())
          {
            ret = OB_ERR_INVALID_SCHEMA;
            TRANS_LOG("invalid expire info `%.*s'", expire_info.length(), expire_info.ptr());
          }
          tmp_schema_mgr->~ObSchemaManagerV2();
          ob_free(tmp_schema_mgr);
          tmp_schema_mgr = NULL;
          table_schema.table_id_ = OB_INVALID_ID;
        }
      }
    }
  }
  TBSYS_LOG(INFO, "gen create index phy plan succ");
  return ret;
}

//add longfei [drop index] 20151026
int ObTransformer::gen_physical_drop_index(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat &err_stat, const uint64_t &query_id, int32_t *index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObDropIndexStmt *drp_idx_stmt = NULL;
  ObDropIndex *drp_idx_op = NULL;
  /* get statement */
  if (OB_SUCCESS == ret)
  {
    get_stmt(logical_plan, err_stat, query_id, drp_idx_stmt);
  }
  /* generate operator */
  if (OB_SUCCESS == ret)
  {
    CREATE_PHY_OPERRATOR(drp_idx_op, ObDropIndex, physical_plan, err_stat);
    if (OB_SUCCESS == ret)
    {
      drp_idx_op->set_rpc_stub(sql_context_->rs_rpc_proxy_);
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, drp_idx_stmt, drp_idx_op, index);
    }
  }
  if (drp_idx_stmt->get_if_exists())
  {
    drp_idx_op->set_if_exists(true);
  }
  if (drp_idx_stmt->isDrpAll())
  {
    IndexList idx_list;
    ObString ori_tab_name = drp_idx_stmt->getOriTabName();
    const ObTableSchema *table = sql_context_->schema_manager_->get_table_schema(ori_tab_name);
    const uint64_t ori_tid = table->get_table_id();
    if (ori_tid == OB_INVALID_ID || (ret = sql_context_->schema_manager_->get_index_list(ori_tid, idx_list)) != OB_SUCCESS)
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("get index table list error, err=%d", ret);
    }
    int64_t idx_num = idx_list.get_count();
    uint64_t idx_tid = OB_INVALID_ID;
    for (int64_t i = 0; ret == OB_SUCCESS && i < idx_num; i++)
    {
      char str[OB_MAX_TABLE_NAME_LENGTH];
      memset(str, 0, OB_MAX_TABLE_NAME_LENGTH);
      //int64_t str_len = 0;
      idx_list.get_idx_id(i, idx_tid);
      const ObTableSchema *idx_tschema = sql_context_->schema_manager_->get_table_schema(idx_tid);
      int32_t len = static_cast<int32_t>(strlen(idx_tschema->get_table_name()));
      ObString idx_name(len, len, idx_tschema->get_table_name());
      /*
       if (OB_SUCCESS != (ret = drp_idx_stmt->generate_inner_index_table_name(idx_name, ori_tab_name, str, str_len)))
       {
       TBSYS_LOG(ERROR,"generate inner index table name failed.idx_name = %s",str);
       }
       idx_name.assign_ptr(str,static_cast<int32_t>(str_len));
       */
      if (OB_SUCCESS != (ret = drp_idx_op->add_index_name(idx_name)))
      {
        TRANS_LOG("Add drop index %.*s failed", idx_name.length(), idx_name.ptr());
        break;
      }
    }

  }
  else
  {
    for (int64_t i = 0; OB_SUCCESS == ret && i < drp_idx_stmt->get_table_size(); i++)
    {
      const ObString& table_name = drp_idx_stmt->get_table_name(i);
      if (OB_SUCCESS != (ret = drp_idx_op->add_index_name(table_name)))
      {
        TRANS_LOG("Add drop index %.*s failed", table_name.length(), table_name.ptr());
        break;
      }
    }
  }
  return ret;
}
//add e

int ObTransformer::gen_physical_create_table(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObCreateTableStmt *crt_tab_stmt = NULL;
  ObCreateTable *crt_tab_op = NULL;

  /* get statement */
  if (ret == OB_SUCCESS)
  {
    get_stmt(logical_plan, err_stat, query_id, crt_tab_stmt);
  }

  if (OB_SUCCESS == ret)
  {
    const ObString& table_name = crt_tab_stmt->get_table_name();
    if (TableSchema::is_system_table(table_name) && sql_context_->session_info_->is_create_sys_table_disabled())
    {
      ret = OB_ERR_NO_PRIVILEGE;
      TBSYS_LOG(USER_ERROR, "invalid table name to create, table_name=%.*s", table_name.length(), table_name.ptr());
    }
  }

  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(crt_tab_op, ObCreateTable, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      crt_tab_op->set_sql_context(*sql_context_);
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, crt_tab_stmt, crt_tab_op, index);
    }
  }

  if (OB_SUCCESS == ret)
  {
    if (crt_tab_stmt->get_column_size() > OB_MAX_USER_DEFINED_COLUMNS_COUNT)
    {
      TRANS_LOG("Too many columns (max allowed is %ld).", OB_MAX_USER_DEFINED_COLUMNS_COUNT);
      ret = OB_ERR_INVALID_COLUMN_NUM;
    }
  }

  if (ret == OB_SUCCESS)
  {
    int buf_len = 0;
    int len = 0;
    TableSchema& table_schema = crt_tab_op->get_table_schema();
    const ObString& table_name = crt_tab_stmt->get_table_name();
    buf_len = sizeof(table_schema.table_name_);
    if (table_name.length() < buf_len)
    {
      len = table_name.length();
    }
    else
    {
      len = buf_len - 1;
      TRANS_LOG("Table name is truncated to '%.*s'", len, table_name.ptr());
    }
    memcpy(table_schema.table_name_, table_name.ptr(), len);
    table_schema.table_name_[len] = '\0';
    const ObString& expire_info = crt_tab_stmt->get_expire_info();
    buf_len = sizeof(table_schema.expire_condition_);
    if (expire_info.length() < buf_len)
    {
      len = expire_info.length();
    }
    else
    {
      len = buf_len - 1;
      TRANS_LOG("Expire_info is truncated to '%.*s'", len, expire_info.ptr());
    }
    memcpy(table_schema.expire_condition_, expire_info.ptr(), len);
    table_schema.expire_condition_[len] = '\0';
    const ObString& comment_str = crt_tab_stmt->get_comment_str();
    buf_len = sizeof(table_schema.comment_str_);
    if (comment_str.length() < buf_len)
    {
      len = comment_str.length();
    }
    else
    {
      len = buf_len - 1;
      TRANS_LOG("Comment_str is truncated to '%.*s'", len, comment_str.ptr());
    }
    memcpy(table_schema.comment_str_, comment_str.ptr(), len);
    table_schema.comment_str_[len] = '\0';
    crt_tab_op->set_if_not_exists(crt_tab_stmt->get_if_not_exists());
    if (crt_tab_stmt->get_tablet_max_size() > 0)
      table_schema.tablet_max_size_ = crt_tab_stmt->get_tablet_max_size();
    if (crt_tab_stmt->get_tablet_block_size() > 0)
      table_schema.tablet_block_size_ = crt_tab_stmt->get_tablet_block_size();
    if (crt_tab_stmt->get_table_id() != OB_INVALID_ID)
      table_schema.table_id_ = crt_tab_stmt->get_table_id();
    table_schema.replica_num_ = crt_tab_stmt->get_replica_num();
    table_schema.is_use_bloomfilter_ = crt_tab_stmt->use_bloom_filter();
    table_schema.consistency_level_ = crt_tab_stmt->get_consistency_level();
    table_schema.rowkey_column_num_ = static_cast<int32_t>(crt_tab_stmt->get_primary_key_size());
    const ObString& compress_method = crt_tab_stmt->get_compress_method();
    buf_len = sizeof(table_schema.compress_func_name_);
    const char *func_name = compress_method.ptr();
    len = compress_method.length();
    if (len <= 0)
    {
      func_name = OB_DEFAULT_COMPRESS_FUNC_NAME;
      len = static_cast<int>(strlen(OB_DEFAULT_COMPRESS_FUNC_NAME));
    }
    if (len >= buf_len)
    {
      len = buf_len - 1;
      TRANS_LOG("Compress method name is truncated to '%.*s'", len, func_name);
    }
    memcpy(table_schema.compress_func_name_, func_name, len);
    table_schema.compress_func_name_[len] = '\0';

    for (int64_t i = 0; ret == OB_SUCCESS && i < crt_tab_stmt->get_column_size(); i++)
    {
      const ObColumnDef& col_def = crt_tab_stmt->get_column_def(i);
      ColumnSchema col;
      col.column_id_ = col_def.column_id_;
      if (static_cast<int64_t>(col.column_id_) > table_schema.max_used_column_id_)
      {
        table_schema.max_used_column_id_ = col.column_id_;
      }
      buf_len = sizeof(col.column_name_);
      if (col_def.column_name_.length() < buf_len)
      {
        len = col_def.column_name_.length();
      }
      else
      {
        len = buf_len - 1;
        TRANS_LOG("Column name is truncated to '%.*s'", len, col_def.column_name_.ptr());
      }
      memcpy(col.column_name_, col_def.column_name_.ptr(), len);
      col.column_name_[len] = '\0';
      col.data_type_ = col_def.data_type_;
      col.data_length_ = col_def.type_length_;
      if (col.data_type_ == ObVarcharType && 0 > col_def.type_length_)
      {
        col.data_length_ = OB_MAX_VARCHAR_LENGTH;
      }
      col.length_in_rowkey_ = col_def.type_length_;
      col.data_precision_ = col_def.precision_;
      col.data_scale_ = col_def.scale_;
      col.nullable_ = !col_def.not_null_;
      col.rowkey_id_ = col_def.primary_key_id_;
      col.column_group_id_ = 0;
      col.join_table_id_ = OB_INVALID_ID;
      col.join_column_id_ = OB_INVALID_ID;

      // @todo default_value_;
      if ((ret = table_schema.add_column(col)) != OB_SUCCESS)
      {
        TRANS_LOG("Add column definition of '%s' failed", table_schema.table_name_);
        break;
      }

      if (OB_SUCCESS == ret)
      {
        if (OB_SUCCESS != (ret = allocate_column_id(table_schema)))
        {
          TBSYS_LOG(WARN, "fail to allocate column id:ret[%d]", ret);
        }
      }
    }
  }

  if (OB_SUCCESS == ret && 0 < crt_tab_stmt->get_join_info().length())
  {
    const ObString &join_info_str = crt_tab_stmt->get_join_info();
    TBSYS_LOG(DEBUG, "create table join info[%.*s]", join_info_str.length(), join_info_str.ptr());
    if (!parse_join_info(join_info_str, crt_tab_op->get_table_schema()))
    {
      ret = OB_ERR_PARSE_JOIN_INFO;
      TRANS_LOG("Wrong join info, please check join info");
    }
  }

  if (OB_SUCCESS == ret && 0 < crt_tab_stmt->get_expire_info().length())
  {
    TableSchema& table_schema = crt_tab_op->get_table_schema();
    // check expire condition
    void *ptr = ob_malloc(sizeof(ObSchemaManagerV2), ObModIds::OB_SCHEMA);
    if (NULL == ptr)
    {
      TRANS_LOG("no memory");
      ret = OB_ALLOCATE_MEMORY_FAILED;
    }
    else
    {
      ObSchemaManagerV2 *tmp_schema_mgr = new (ptr) ObSchemaManagerV2();
      table_schema.table_id_ = OB_NOT_EXIST_TABLE_TID;
      if (OB_SUCCESS != (ret = tmp_schema_mgr->add_new_table_schema(table_schema)))
      {
        TRANS_LOG("failed to add new table, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = tmp_schema_mgr->sort_column()))
      {
        TRANS_LOG("failed to sort column for schema manager, err=%d", ret);
      }
      else if (!tmp_schema_mgr->check_table_expire_condition())
      {
        ret = OB_ERR_INVALID_SCHEMA;
        TRANS_LOG("invalid expire info `%.*s'", crt_tab_stmt->get_expire_info().length(), crt_tab_stmt->get_expire_info().ptr());
      }
      tmp_schema_mgr->~ObSchemaManagerV2();
      ob_free(tmp_schema_mgr);
      tmp_schema_mgr = NULL;
      table_schema.table_id_ = OB_INVALID_ID;
    }
  }
  return ret;
}

//TODO: not allocate column group id
int ObTransformer::allocate_column_id(TableSchema & table_schema)
{
  int ret = OB_SUCCESS;
  bool has_got_create_time_type = false;
  bool has_got_modify_time_type = false;
  ColumnSchema * column = NULL;
  uint64_t column_id = OB_APP_MIN_COLUMN_ID;

  table_schema.max_used_column_id_ = column_id;
  for (int64_t i = 0; i < table_schema.get_column_count(); ++i)
  {
    column = table_schema.get_column_schema(i);
    if (NULL == column)
    {
      ret = OB_INPUT_PARAM_ERROR;
      TBSYS_LOG(WARN, "check column schema failed:table_name[%s], index[%ld]", table_schema.table_name_, i);
      break;
    }
    else if (ObCreateTimeType == column->data_type_) // create time
    {
      column->column_id_ = OB_CREATE_TIME_COLUMN_ID;
      if (has_got_create_time_type)
      {
        // duplication case checked by parser, double check
        ret = OB_INPUT_PARAM_ERROR;
        TBSYS_LOG(WARN, "find duplicated create time column:table_name[%s], index[%ld]", table_schema.table_name_, i);
        break;
      }
      else
      {
        has_got_create_time_type = true;
      }
    }
    else if (ObModifyTimeType == column->data_type_) // last_modify time
    {
      column->column_id_ = OB_MODIFY_TIME_COLUMN_ID;
      if (has_got_modify_time_type)
      {
        // duplication case checked by parser, double check
        ret = OB_INPUT_PARAM_ERROR;
        TBSYS_LOG(WARN, "find duplicated modify time column:table_name[%s], index[%ld]", table_schema.table_name_, i);
        break;
      }
      else
      {
        has_got_modify_time_type = true;
      }
    }
    else
    {
      table_schema.max_used_column_id_ = column_id;
      column->column_id_ = column_id++;
    }
  }
  return ret;
}

int ObTransformer::gen_physical_alter_table(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObAlterTableStmt *alt_tab_stmt = NULL;
  ObAlterTable *alt_tab_op = NULL;

  /* get statement */
  if (ret == OB_SUCCESS)
  {
    get_stmt(logical_plan, err_stat, query_id, alt_tab_stmt);
  }

  if (OB_SUCCESS == ret)
  {
    const ObString& table_name = alt_tab_stmt->get_table_name();
    if (TableSchema::is_system_table(table_name) && sql_context_->session_info_->is_create_sys_table_disabled())
    {
      ret = OB_ERR_NO_PRIVILEGE;
      TBSYS_LOG(USER_ERROR, "invalid table name to alter, table_name=%.*s", table_name.length(), table_name.ptr());
    }
  }

  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(alt_tab_op, ObAlterTable, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      alt_tab_op->set_sql_context(*sql_context_);
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, alt_tab_stmt, alt_tab_op, index);
    }
  }

  if (ret == OB_SUCCESS)
  {
    AlterTableSchema& alter_schema = alt_tab_op->get_alter_table_schema();
    const ObString& table_name = alt_tab_stmt->get_table_name();
    memcpy(alter_schema.table_name_, table_name.ptr(), table_name.length());
    alter_schema.table_name_[table_name.length()] = '\0';
    alter_schema.table_id_ = alt_tab_stmt->get_table_id();

    hash::ObHashMap<common::ObString, ObColumnDef>::iterator iter;
    for (iter = alt_tab_stmt->column_begin(); ret == OB_SUCCESS && iter != alt_tab_stmt->column_end(); iter++)
    {
      AlterTableSchema::AlterColumnSchema alt_col;
      ObColumnDef& col_def = iter->second;
      alt_col.column_.column_id_ = col_def.column_id_;
      memcpy(alt_col.column_.column_name_, col_def.column_name_.ptr(), col_def.column_name_.length());
      alt_col.column_.column_name_[col_def.column_name_.length()] = '\0';
      switch (col_def.action_)
      {
      case ADD_ACTION:
        alt_col.type_ = AlterTableSchema::ADD_COLUMN;
        alt_col.column_.data_type_ = col_def.data_type_;
        alt_col.column_.data_length_ = col_def.type_length_;
        alt_col.column_.data_precision_ = col_def.precision_;
        alt_col.column_.data_scale_ = col_def.scale_;
        alt_col.column_.nullable_ = !col_def.not_null_;
        alt_col.column_.rowkey_id_ = col_def.primary_key_id_;
        alt_col.column_.column_group_id_ = 0;
        alt_col.column_.join_table_id_ = OB_INVALID_ID;
        alt_col.column_.join_column_id_ = OB_INVALID_ID;
        break;
      case DROP_ACTION:
      {
        alt_col.type_ = AlterTableSchema::DEL_COLUMN;
        //add maoxx
        bool column_hit_index_flag = false;
        if(OB_SUCCESS != (ret = sql_context_->schema_manager_->column_hit_index(alter_schema.table_id_, alt_col.column_.column_id_, column_hit_index_flag)))
        {
          TBSYS_LOG(WARN,"failed to get alt_col_hit_index[%d] ", ret);
        }
        else if(column_hit_index_flag)
        {
          TRANS_LOG("column [%ld] cannot be deleted,there is a index use it!", alt_col.column_.column_id_);
          ret = OB_ERROR;
        }
        //add e
      }
        break;
      case ALTER_ACTION:
      {
        alt_col.type_ = AlterTableSchema::MOD_COLUMN;
        alt_col.column_.nullable_ = !col_def.not_null_;
        /* default value doesn't exist in ColumnSchema */
        /* FIX ME, get other attributs from schema */
        const ObColumnSchemaV2 *col_schema = NULL;
        if ((col_schema = sql_context_->schema_manager_->get_column_schema(alter_schema.table_id_, col_def.column_id_)) == NULL)
        {
          ret = OB_ERR_TABLE_UNKNOWN;
          TRANS_LOG("Can not find schema of table '%s'", alter_schema.table_name_);
          break;
        }
        else
        {
          alt_col.column_.data_type_ = col_schema->get_type();
          // alt_col.column_.data_length_ = iter->type_length_;
          // alt_col.column_.data_precision_ = iter->precision_;
          // alt_col.column_.data_scale_ = iter->scale_;
          // alt_col.column_.rowkey_id_ = iter->primary_key_id_;
          alt_col.column_.column_group_id_ = col_schema->get_column_group_id();
          alt_col.column_.join_table_id_ = col_schema->get_join_info()->join_table_;
          alt_col.column_.join_column_id_ = col_schema->get_join_info()->correlated_column_;
        }
        break;
      }
      default:
        ret = OB_ERR_GEN_PLAN;
        TRANS_LOG("Alter action '%d' is not supported", col_def.action_);
        break;
      }
      if (ret == OB_SUCCESS && (ret = alter_schema.add_column(alt_col.type_, alt_col.column_)) != OB_SUCCESS)
      {
        TRANS_LOG("Add alter column '%s' failed", alt_col.column_.column_name_);
        break;
      }
    }
  }
  //add maoxx
  const ObTableSchema* table_schema = NULL;
  if(NULL == (table_schema = (sql_context_->schema_manager_->get_table_schema(alt_tab_stmt->get_table_id()))))
  {
    TBSYS_LOG(WARN,"failed to get table[%ld] schema", alt_tab_stmt->get_table_id());
    ret = OB_SCHEMA_ERROR;
  }
  else if(OB_INVALID_ID != table_schema->get_original_table_id())
  {
    TRANS_LOG("can not alter an index table[%ld]", alt_tab_stmt->get_table_id());
    ret = OB_ERROR;
  }
  //add e
  return ret;
}

int ObTransformer::gen_physical_drop_table(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObDropTableStmt *drp_tab_stmt = NULL;
  ObDropTable *drp_tab_op = NULL;

  /* get statement */
  if (ret == OB_SUCCESS)
  {
    get_stmt(logical_plan, err_stat, query_id, drp_tab_stmt);
  }
  bool disallow_drop_sys_table = sql_context_->session_info_->is_create_sys_table_disabled();
  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(drp_tab_op, ObDropTable, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      drp_tab_op->set_rpc_stub(sql_context_->rs_rpc_proxy_);
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, drp_tab_stmt, drp_tab_op, index);
    }
  }

  if (ret == OB_SUCCESS)
  {
    drp_tab_op->set_if_exists(drp_tab_stmt->get_if_exists());
    for (int64_t i = 0; ret == OB_SUCCESS && i < drp_tab_stmt->get_table_size(); i++)
    {
      const ObString& table_name = drp_tab_stmt->get_table_name(i);
      if (TableSchema::is_system_table(table_name) && disallow_drop_sys_table)
      {
        ret = OB_ERR_NO_PRIVILEGE;
        TBSYS_LOG(USER_ERROR, "system table can not be dropped, table_name=%.*s", table_name.length(), table_name.ptr());
        break;
      }
      if ((ret = drp_tab_op->add_table_name(table_name)) != OB_SUCCESS)
      {
        TRANS_LOG("Add drop table %.*s failed", table_name.length(), table_name.ptr());
        break;
      }
      // add longfei [drop index] 20151028
      const ObTableSchema* table = sql_context_->schema_manager_->get_table_schema(table_name);
      if (table == NULL && !drp_tab_op->get_if_exists())
      {
        ret = OB_ERR_TABLE_UNKNOWN;
        TBSYS_LOG(ERROR, "table not exists.");
      }
      else if (OB_SUCCESS == ret && table != NULL)
      {
        uint64_t tid = table->get_table_id();
        IndexList tmp_idxlist;
        ret = sql_context_->schema_manager_->get_index_list(tid, tmp_idxlist);
        int64_t idx_num = tmp_idxlist.get_count();
        uint64_t idx_tid = OB_INVALID_ID;
        for (int64_t i = 0; ret == OB_SUCCESS && i < idx_num; i++)
        {
          char str[OB_MAX_TABLE_NAME_LENGTH];
          memset(str, 0, OB_MAX_TABLE_NAME_LENGTH);
          //int64_t str_len = 0;
          tmp_idxlist.get_idx_id(i, idx_tid);
          const ObTableSchema *idx_tschema = sql_context_->schema_manager_->get_table_schema(idx_tid);
          int32_t len = static_cast<int32_t>(strlen(idx_tschema->get_table_name()));
          const ObString idx_name(len, len, idx_tschema->get_table_name());
          if (OB_SUCCESS != (ret = drp_tab_op->add_all_indexs(idx_name)))
          {
            TRANS_LOG("Add drop index %.*s failed", idx_name.length(), idx_name.ptr());
            break;
          }
        }
      }
    }
    if (OB_SUCCESS == ret)
    {
      if (!drp_tab_op->is_all_indexs_empty())
      {
        drp_tab_op->setHasIndexs(true);
      }
    }
    //add e
  }

  return ret;
}

int ObTransformer::gen_phy_show_tables(ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObRowDesc row_desc;
  uint64_t table_id = OB_INVALID_ID;
  uint64_t column_id = OB_INVALID_ID;
  ObValues *values_op = NULL;
  CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan, err_stat);

  if (show_stmt->get_column_size() != 1)
  {
    TBSYS_LOG(WARN, "wrong columns' number of %s", OB_TABLES_SHOW_TABLE_NAME);
    ret = OB_ERR_COLUMN_SIZE;
    TRANS_LOG("wrong columns' number of %s", OB_TABLES_SHOW_TABLE_NAME);
  }
  else
  {
    const ColumnItem* column_item = show_stmt->get_column_item(0);
    table_id = column_item->table_id_;
    column_id = column_item->column_id_;
    if ((ret = row_desc.add_column_desc(table_id, column_id)) != OB_SUCCESS || (ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
    {
      TRANS_LOG("add row desc error, err=%d", ret);
    }
  }
  const ObTableSchema* it = sql_context_->schema_manager_->table_begin();
  for (; ret == OB_SUCCESS && it != sql_context_->schema_manager_->table_end(); it++)
  {
    ObRow val_row;
    int32_t len = static_cast<int32_t>(strlen(it->get_table_name()));
    ObString val(len, len, it->get_table_name());
    ObObj value;
    value.set_varchar(val);
    val_row.set_row_desc(row_desc);

    //mod longfei [debug] 20160127:b
    //if (it->get_table_id() >= OB_TABLES_SHOW_TID && it->get_table_id() <= OB_SERVER_STATUS_SHOW_TID)
    if ((it->get_table_id() >= OB_TABLES_SHOW_TID
        && it->get_table_id() <= OB_SERVER_STATUS_SHOW_TID)
        || it->get_table_id() == OB_INDEX_SHOW_TID)
    //mod e
    {
      /* skip local show tables */
      continue;
    }
    // add longfei
    else if (it->get_original_table_id() != OB_INVALID_ID)
    {
      /* skip index tables */
      continue;
    }
    //add:e
    else if ((ret = val_row.set_cell(table_id, column_id, value)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value to ObRow failed");
      break;
    }
    else if (ret == OB_SUCCESS && (ret = values_op->add_values(val_row)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value row failed");
      break;
    }
  }

  if (ret == OB_SUCCESS)
  {
    out_op = values_op;
  }

  return ret;
}

//add longfei [show index] 20151019 :b
int ObTransformer::gen_phy_show_index(ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObRowDesc row_desc;
  ObValues *values_op = NULL;
  IndexList idx_list;
  uint64_t show_tid = OB_INVALID_ID;
  uint64_t sys_tid = OB_INVALID_ID;
  uint64_t idx_tid = OB_INVALID_ID;
  int64_t idx_num = 0;
  CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan, err_stat);

  if (show_stmt->get_column_size() != 3)
  {
    ret = OB_ERR_COLUMN_SIZE;
    TRANS_LOG("wrong columns' number[%d] of %s", show_stmt->get_column_size(), OB_INDEX_SHOW_TABLE_NAME);
  }
  else
  {
    for (int32_t i = 0; i < show_stmt->get_column_size(); i++)
    {
      const ColumnItem* column_item = show_stmt->get_column_item(i);
      if ((ret = row_desc.add_column_desc(column_item->table_id_, column_item->column_id_)) != OB_SUCCESS)
      {
        TRANS_LOG("add row desc error, err=%d", ret);
      }
    }
    if ((ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
    {
      TRANS_LOG("add row desc error, err=%d", ret);
    }
  }

  show_tid = show_stmt->get_show_table_id();
  // TBSYS_LOG(WARN,"original table id = %d",static_cast<int>(show_tid));
  sys_tid = show_stmt->get_sys_table_id();

  //const ObTableSchema* tschema;
  //tschema = sql_context_->schema_manager_->get_table_schema(3002);
  //TBSYS_LOG(WARN,"LONGFEI:student's index table name: %s,",tschema->get_table_name());
  //TBSYS_LOG(WARN,"LONGFEI:is_id_index_hash_map_init_ = %d",sql_context_->schema_manager_->isIsIdIndexHashMapInit());

  if (show_tid == OB_INVALID_ID || (ret = sql_context_->schema_manager_->get_index_list(show_tid, idx_list)) != OB_SUCCESS)
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("get index table list error, err=%d", ret);
  }
  idx_num = idx_list.get_count();
  //TBSYS_LOG(INFO,"in gen show, idx_num of original table:%d",(int)idx_num);
  //TBSYS_LOG(WARN,"sys table id = %d",static_cast<int>(sys_tid));
  for (int64_t i = 0; ret == OB_SUCCESS && i < idx_num; i++)
  {
    ObRow val_row;
    val_row.set_row_desc(row_desc);
    //construct index table name_obj
    idx_list.get_idx_id(i, idx_tid);
    const ObTableSchema *idx_tschema = sql_context_->schema_manager_->get_table_schema(idx_tid);
    int32_t len = static_cast<int32_t>(strlen(idx_tschema->get_table_name()));
    ObString name(len, len, idx_tschema->get_table_name());
    ObObj name_obj;
    name_obj.set_varchar(name);
    ObObj status_obj;
    ObString tmp;
    switch (idx_tschema->get_index_status())
    {
    case 0:
      status_obj.set_varchar(tmp.make_string("NOT AVALIABLE"));
      break;
    case 1:
      status_obj.set_varchar(tmp.make_string("AVALIABLE"));
      break;
    case 2:
      status_obj.set_varchar(tmp.make_string("ERROR"));
      break;
    case 3:
      status_obj.set_varchar(tmp.make_string("WRITE_ONLY"));
      break;
    case 4:
      status_obj.set_varchar(tmp.make_string("INDEX_INIT"));
      break;
    default:
      break;
    }

    ObObj IndexCol_obj;
    char idx_rowkey_buf[OB_MAX_INDEX_COLUMNS * OB_MAX_COLUMN_NAME_LENGTH];
    int buf_size = sizeof(char) * OB_MAX_INDEX_COLUMNS * OB_MAX_COLUMN_NAME_LENGTH;
    memset(idx_rowkey_buf, 0, buf_size);
    ObString IndexCol_str(buf_size, 0, idx_rowkey_buf);
    const ObRowkeyInfo& idx_rowkey_info = idx_tschema->get_rowkey_info();
    uint64_t table_id = idx_tschema->get_table_id();
    int64_t size = idx_rowkey_info.get_size();
    const ObColumnSchemaV2* tmp_col_schema;

    uint64_t col_id;
    for (int64_t i = 0; i < size; i++)
    {
      if ((ret = idx_rowkey_info.get_column_id(i, col_id)) != OB_SUCCESS)
      {
        TRANS_LOG("get index table rowkey column id failed");
        break;
      }
      tmp_col_schema = sql_context_->schema_manager_->get_column_schema(table_id, col_id);
      if (tmp_col_schema != NULL)
      {
        const char* col_name = tmp_col_schema->get_name();
        IndexCol_str.add_string(col_name, 10); //10 need to be change to an mirco
      }
      else
      {
        TBSYS_LOG(WARN, "column schema not exits");
        break;
      }
    }  //end for
    IndexCol_obj.set_varchar(IndexCol_str);

    uint64_t column_id = OB_APP_MIN_COLUMN_ID;
    if ((ret = val_row.set_cell(sys_tid, column_id++, name_obj)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value to ObRow failed");
      break;
    }
    else if ((ret = val_row.set_cell(sys_tid, column_id++, status_obj)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value to ObRow failed");
      break;
    }
    else if ((ret = val_row.set_cell(sys_tid, column_id++, IndexCol_obj)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value to ObRow failed");
      break;
    }
    else if (ret == OB_SUCCESS && (ret = values_op->add_values(val_row)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value row failed");
      break;
    }
  } // end for

  if (ret == OB_SUCCESS)
  {
    out_op = values_op;
  }

  return ret;
}
//add:e

int ObTransformer::gen_phy_show_columns(ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObRowDesc row_desc;
  ObValues *values_op = NULL;
  CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan, err_stat);

  int32_t num = show_stmt->get_column_size();
  if (OB_UNLIKELY(num < 1))
  {
    TBSYS_LOG(WARN, "wrong columns' number of %s", OB_COLUMNS_SHOW_TABLE_NAME);
    ret = OB_ERR_COLUMN_SIZE;
    TRANS_LOG("wrong columns' number of %s", OB_COLUMNS_SHOW_TABLE_NAME);
  }
  else
  {
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      const ColumnItem* column_item = show_stmt->get_column_item(i);
      if ((ret = row_desc.add_column_desc(column_item->table_id_, column_item->column_id_)) != OB_SUCCESS)
      {
        TRANS_LOG("add row desc error, err=%d", ret);
      }
    }
    if (ret == OB_SUCCESS && (ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
    {
      TRANS_LOG("set row desc error, err=%d", ret);
    }
  }

  if (ret == OB_SUCCESS)
  {
    const ObColumnSchemaV2* columns = NULL;
    int32_t column_size = 0;
    ObRowkeyColumn rowkey_column;
    const ObRowkeyInfo& rowkey_info = sql_context_->schema_manager_->get_table_schema(show_stmt->get_show_table_id())->get_rowkey_info();
    columns = sql_context_->schema_manager_->get_table_schema(show_stmt->get_show_table_id(), column_size);
    if (NULL != columns && column_size > 0)
    {
      for (int64_t i = 0; ret == OB_SUCCESS && i < column_size; i++)
      {
        uint64_t table_id = OB_INVALID_ID;
        uint64_t column_id = OB_INVALID_ID;
        ObRow val_row;
        val_row.set_row_desc(row_desc);

        // add name
        if ((ret = row_desc.get_tid_cid(0, table_id, column_id)) != OB_SUCCESS)
        {
          TRANS_LOG("Get row desc failed");
          break;
        }
        int32_t name_len = static_cast<int32_t>(strlen(columns[i].get_name()));
        ObString name_val(name_len, name_len, columns[i].get_name());
        ObObj name;
        name.set_varchar(name_val);
        if ((ret = val_row.set_cell(table_id, column_id, name)) != OB_SUCCESS)
        {
          TRANS_LOG("Add name to ObRow failed");
          break;
        }

        // add type
        if ((ret = row_desc.get_tid_cid(1, table_id, column_id)) != OB_SUCCESS)
        {
          TRANS_LOG("Get row desc failed");
          break;
        }
        char type_str[OB_MAX_SYS_PARAM_NAME_LENGTH];
        int32_t type_len = OB_MAX_SYS_PARAM_NAME_LENGTH;
        switch (columns[i].get_type())
        {
        case ObNullType:
          type_len = snprintf(type_str, type_len, "null");
          break;
        case ObIntType:
          type_len = snprintf(type_str, type_len, "int");
          break;
        case ObFloatType:
          type_len = snprintf(type_str, type_len, "float");
          break;
        case ObDoubleType:
          type_len = snprintf(type_str, type_len, "double");
          break;
        case ObDateTimeType:
          type_len = snprintf(type_str, type_len, "datetime");
          break;
        case ObPreciseDateTimeType:
          type_len = snprintf(type_str, type_len, "timestamp");
          break;
        case ObVarcharType:
          type_len = snprintf(type_str, type_len, "varchar(%ld)", columns[i].get_size());
          break;
        case ObSeqType:
          type_len = snprintf(type_str, type_len, "seq");
          break;
        case ObCreateTimeType:
          type_len = snprintf(type_str, type_len, "createtime");
          break;
        case ObModifyTimeType:
          type_len = snprintf(type_str, type_len, "modifytime");
          break;
        case ObExtendType:
          type_len = snprintf(type_str, type_len, "extend");
          break;
        case ObBoolType:
          type_len = snprintf(type_str, type_len, "bool");
          break;
        case ObDecimalType:
          type_len = snprintf(type_str, type_len, "decimal");
          break;
        default:
          type_len = snprintf(type_str, type_len, "unknown");
          break;
        }
        ObString type_val(type_len, type_len, type_str);
        ObObj type;
        type.set_varchar(type_val);
        if ((ret = val_row.set_cell(table_id, column_id, type)) != OB_SUCCESS)
        {
          TRANS_LOG("Add type to ObRow failed");
          break;
        }

        // add nullable
        if ((ret = row_desc.get_tid_cid(2, table_id, column_id)) != OB_SUCCESS)
        {
          TRANS_LOG("Get row desc failed");
          break;
        }
        ObString nullable_val;
        ObObj nullable;
        nullable.set_varchar(nullable_val);
        if ((ret = val_row.set_cell(table_id, column_id, nullable)) != OB_SUCCESS)
        {
          TRANS_LOG("Add nullable to ObRow failed");
          break;
        }

        // add key_id
        if ((ret = row_desc.get_tid_cid(3, table_id, column_id) != OB_SUCCESS))
        {
          TRANS_LOG("Get row desc failed");
          break;
        }
        int64_t index = -1;
        rowkey_info.get_index(columns[i].get_id(), index, rowkey_column);
        ObObj key_id;
        key_id.set_int(index + 1); /* rowkey id is rowkey index plus 1 */
        if ((ret = val_row.set_cell(table_id, column_id, key_id)) != OB_SUCCESS)
        {
          TRANS_LOG("Add key_id to ObRow failed");
          break;
        }

        // add default
        if ((ret = row_desc.get_tid_cid(4, table_id, column_id) != OB_SUCCESS))
        {
          TRANS_LOG("Get row desc failed");
          break;
        }
        ObObj def;
        def.set_null();
        if ((ret = val_row.set_cell(table_id, column_id, def)) != OB_SUCCESS)
        {
          TRANS_LOG("Add default to ObRow failed");
          break;
        }

        // add extra
        if ((ret = row_desc.get_tid_cid(5, table_id, column_id) != OB_SUCCESS))
        {
          TRANS_LOG("Get row desc failed");
          break;
        }
        ObString extra_val;
        ObObj extra;
        extra.set_varchar(extra_val);
        if ((ret = val_row.set_cell(table_id, column_id, extra)) != OB_SUCCESS)
        {
          TRANS_LOG("Add extra to ObRow failed");
          break;
        }

        if (ret == OB_SUCCESS && (ret = values_op->add_values(val_row)) != OB_SUCCESS)
        {
          TRANS_LOG("Add value row failed");
          break;
        }
      }
    }
  }

  if (ret == OB_SUCCESS)
  {
    out_op = values_op;
  }

  return ret;
}

int ObTransformer::gen_phy_show_variables(ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  if (!show_stmt->is_global_scope())
  {
    ObRowDesc row_desc;
    ObValues *values_op = NULL;
    CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan, err_stat);
    for (int32_t i = 0; ret == OB_SUCCESS && i < show_stmt->get_column_size(); i++)
    {
      const ColumnItem* column_item = show_stmt->get_column_item(i);
      if ((ret = row_desc.add_column_desc(column_item->table_id_, column_item->column_id_)) != OB_SUCCESS)
      {
        TRANS_LOG("Add row desc error, err=%d", ret);
      }
    }
    if (ret == OB_SUCCESS && (ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
    {
      TRANS_LOG("Set row desc error, err=%d", ret);
    }
    uint64_t table_id = OB_INVALID_ID;
    uint64_t column_id = OB_INVALID_ID;
    ObSQLSessionInfo::SysVarNameValMap::const_iterator it_begin;
    ObSQLSessionInfo::SysVarNameValMap::const_iterator it_end;
    it_begin = sql_context_->session_info_->get_sys_var_val_map().begin();
    it_end = sql_context_->session_info_->get_sys_var_val_map().end();
    for (; ret == OB_SUCCESS && it_begin != it_end; it_begin++)
    {
      ObRow val_row;
      val_row.set_row_desc(row_desc);
      ObObj var_name;
      var_name.set_varchar(it_begin->first);
      // add Variable_name
      if ((ret = row_desc.get_tid_cid(0, table_id, column_id)) != OB_SUCCESS)
      {
        TRANS_LOG("Get row desc failed");
      }
      else if ((ret = val_row.set_cell(table_id, column_id, var_name)) != OB_SUCCESS)
      {
        TRANS_LOG("Add variable name to ObRow failed");
      }
      // add Value
      else if ((ret = row_desc.get_tid_cid(1, table_id, column_id)) != OB_SUCCESS)
      {
        TRANS_LOG("Get row desc failed");
      }
      else if ((ret = val_row.set_cell(table_id, column_id, *((it_begin->second).first))) != OB_SUCCESS)
      {
        TRANS_LOG("Add value to ObRow failed");
      }
      else if ((ret = values_op->add_values(val_row)) != OB_SUCCESS)
      {
        TRANS_LOG("Add value row failed");
      }
    }
    if (ret == OB_SUCCESS)
    {
      out_op = values_op;
    }
  }
  else
  {
    ObProject *project_op = NULL;
    ObTableRpcScan *rpc_scan_op = NULL;
    ObRpcScanHint hint;
    hint.read_method_ = ObSqlReadStrategy::USE_SCAN;
    if (CREATE_PHY_OPERRATOR(project_op, ObProject, physical_plan,
        err_stat) == NULL)
    {
      ret = OB_ERR_PARSER_MALLOC_FAILED;
      TRANS_LOG("Generate Project operator failed");
    }
    else if (CREATE_PHY_OPERRATOR(rpc_scan_op, ObTableRpcScan, physical_plan,
        err_stat) == NULL)
    {
      ret = OB_ERR_PARSER_MALLOC_FAILED;
      TRANS_LOG("Generate TableScan operator failed");
    }
    if ((ret = rpc_scan_op->set_table(OB_ALL_SYS_PARAM_TID, OB_ALL_SYS_PARAM_TID)) != OB_SUCCESS)
    {
      TRANS_LOG("ObTableRpcScan set table faild");
    }
    else if ((ret = rpc_scan_op->init(sql_context_, &hint)) != OB_SUCCESS)
    {
      TRANS_LOG("ObTableRpcScan init faild");
    }
    else if ((ret = project_op->set_child(0, *rpc_scan_op)) != OB_SUCCESS)
    {
      TRANS_LOG("Set child of Project operator faild");
    }
    else if ((ret = physical_plan->add_base_table_version(OB_ALL_SYS_PARAM_TID, 0)) != OB_SUCCESS)
    {
      TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", OB_ALL_SYS_PARAM_TID, ret);
    }
    else
    {
      const ObSchemaManagerV2 *schema = sql_context_->schema_manager_;
      const ObColumnSchemaV2* none_concern_keys[1];
      const ObColumnSchemaV2 *name_column = NULL;
      const ObColumnSchemaV2 *value_column = NULL;
      if ((none_concern_keys[0] = schema->get_column_schema(OB_ALL_SYS_PARAM_TABLE_NAME, "cluster_id")) == NULL || (name_column = schema->get_column_schema(OB_ALL_SYS_PARAM_TABLE_NAME, "name")) == NULL || (value_column = schema->get_column_schema(OB_ALL_SYS_PARAM_TABLE_NAME, "value")) == NULL)
      {
        ret = OB_ERR_COLUMN_UNKNOWN;
        TRANS_LOG("Get column of %s faild, ret = %d", OB_ALL_SYS_PARAM_TABLE_NAME, ret);
      }
      for (int32_t i = 0; ret == OB_SUCCESS && i < 1; i++)
      {
        ObObj val;
        val.set_int(0);
        ObConstRawExpr value(val, T_INT);
        ObBinaryRefRawExpr col(OB_ALL_SYS_PARAM_TID, none_concern_keys[i]->get_id(), T_REF_COLUMN);
        ObBinaryOpRawExpr equal_op(&col, &value, T_OP_EQ);
        ObSqlRawExpr col_expr(OB_INVALID_ID, OB_ALL_SYS_PARAM_TID, none_concern_keys[i]->get_id(), &col);
        ObSqlRawExpr equal_expr(OB_INVALID_ID, OB_ALL_SYS_PARAM_TID, none_concern_keys[i]->get_id(), &equal_op);
        ObSqlExpression output_col;
        ObSqlExpression *filter = ObSqlExpression::alloc();
        if (NULL == filter)
        {
          ret = OB_ALLOCATE_MEMORY_FAILED;
          TRANS_LOG("no memory");
        }
        else if ((ret = col_expr.fill_sql_expression(output_col)) != OB_SUCCESS)
        {
          ObSqlExpression::free(filter);
          TRANS_LOG("Generate output column of TableScan faild, ret = %d", ret);
        }
        else if ((ret = rpc_scan_op->add_output_column(output_col)) != OB_SUCCESS)
        {
          ObSqlExpression::free(filter);
          TRANS_LOG("Add output column to TableScan faild, ret = %d", ret);
        }
        else if ((ret = equal_expr.fill_sql_expression(*filter)) != OB_SUCCESS)
        {
          ObSqlExpression::free(filter);
          TRANS_LOG("Generate filter faild, ret = %d", ret);
        }
        else if ((ret = rpc_scan_op->add_filter(filter)) != OB_SUCCESS)
        {
          TRANS_LOG("Add filter to TableScan faild, ret = %d", ret);
        }
      }
      if (ret == OB_SUCCESS)
      {
        ObBinaryRefRawExpr col(OB_ALL_SYS_PARAM_TID, name_column->get_id(), T_REF_COLUMN);
        ObSqlRawExpr expr(OB_INVALID_ID, OB_ALL_SYS_PARAM_TID, name_column->get_id(), &col);
        ObSqlExpression output_expr;
        const ColumnItem* column_item = NULL;
        if ((ret = expr.fill_sql_expression(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate output column faild, ret = %d", ret);
        }
        else if ((ret = rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add output column to TableScan faild, ret = %d", ret);
        }
        else if ((column_item = show_stmt->get_column_item(0)) == NULL)
        {
          TRANS_LOG("Can not get column item of 'name'");
        }
        else
        {
          output_expr.set_tid_cid(column_item->table_id_, column_item->column_id_);
          if ((ret = project_op->add_output_column(output_expr)) != OB_SUCCESS)
          {
            TRANS_LOG("Add output column to Project faild, ret = %d", ret);
          }
        }
      }
      if (ret == OB_SUCCESS)
      {
        ObBinaryRefRawExpr col(OB_ALL_SYS_PARAM_TID, value_column->get_id(), T_REF_COLUMN);
        ObSqlRawExpr expr(OB_INVALID_ID, OB_ALL_SYS_PARAM_TID, value_column->get_id(), &col);
        ObSqlExpression output_expr;
        const ColumnItem* column_item = NULL;
        if ((ret = expr.fill_sql_expression(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Generate output column faild, ret = %d", ret);
        }
        else if ((ret = rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add output column to TableScan faild, ret = %d", ret);
        }
        else if ((column_item = show_stmt->get_column_item(1)) == NULL)
        {
          TRANS_LOG("Can not get column item of 'value'");
        }
        else
        {
          output_expr.set_tid_cid(column_item->table_id_, column_item->column_id_);
          if ((ret = project_op->add_output_column(output_expr)) != OB_SUCCESS)
          {
            TRANS_LOG("Add output column to Project faild, ret = %d", ret);
          }
        }
      }
    }
    if (ret == OB_SUCCESS)
    {
      out_op = project_op;
    }
  }
  return ret;
}

int ObTransformer::gen_phy_show_warnings(ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObRowDesc row_desc;
  ObValues *values_op = NULL;
  CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan, err_stat);

  if (sql_context_->session_info_ == NULL)
  {
    ret = OB_ERR_GEN_PLAN;
    TRANS_LOG("can not get current session info, err=%d", ret);
  }
  else
  {
    const tbsys::WarningBuffer& warnings_buf = sql_context_->session_info_->get_warnings_buffer();
    if (show_stmt->is_count_warnings())
    {
      /* show COUNT(*) warnings */
      if ((ret = row_desc.add_column_desc(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID)) != OB_SUCCESS)
      {
        TRANS_LOG("add row desc error, err=%d", ret);
      }
      else if (ret == OB_SUCCESS && (ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
      {
        TRANS_LOG("set row desc error, err=%d", ret);
      }
      else
      {
        ObRow val_row;
        val_row.set_row_desc(row_desc);
        ObObj num;
        num.set_int(warnings_buf.get_readable_warning_count());
        if ((ret = val_row.set_cell(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID, num)) != OB_SUCCESS)
        {
          TRANS_LOG("Add 'code' to ObRow failed");
        }
        else if ((ret = values_op->add_values(val_row)) != OB_SUCCESS)
        {
          TRANS_LOG("Add value row failed");
        }
      }
    }
    else
    {
      /* show warnings [limit] */
      // add descriptor
      for (int32_t i = 0; ret == OB_SUCCESS && i < 3; i++)
      {
        if ((ret = row_desc.add_column_desc(OB_INVALID_ID, i + OB_APP_MIN_COLUMN_ID)) != OB_SUCCESS)
        {
          TRANS_LOG("add row desc error, err=%d", ret);
          break;
        }
      }
      if (ret == OB_SUCCESS && (ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
      {
        TRANS_LOG("set row desc error, err=%d", ret);
      }
      // add values
      else
      {
        uint32_t j = 0;
        int64_t k = 0;
        for (; ret == OB_SUCCESS && j < warnings_buf.get_readable_warning_count() && (k < show_stmt->get_warnings_count() || show_stmt->get_warnings_count() < 0); j++, k++)
        {
          ObRow val_row;
          val_row.set_row_desc(row_desc);
          // can not get level, get it from string
          const char* warning_ptr = warnings_buf.get_warning(j);
          if (warning_ptr == NULL)
            continue;
          const char* separator = strchr(warning_ptr, ' ');
          if (separator == NULL)
          {
            TBSYS_LOG(WARN, "Wrong message in warnings buffer: %s", warning_ptr);
            continue;
          }
          ObObj level;
          level.set_varchar(ObString::make_string("Warning"));
          if ((ret = val_row.set_cell(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID, level)) != OB_SUCCESS)
          {
            TRANS_LOG("Add 'level' to ObRow failed");
            break;
          }
          // code, can not get it
          ObObj code;
          code.set_int(99999);
          if ((ret = val_row.set_cell(OB_INVALID_ID, 1 + OB_APP_MIN_COLUMN_ID, code)) != OB_SUCCESS)
          {
            TRANS_LOG("Add 'code' to ObRow failed");
            break;
          }
          // message
          // pls see the warning format
          int32_t msg_len = static_cast<int32_t>(strlen(warning_ptr));
          ObString msg_str(msg_len, msg_len, warning_ptr);
          ObObj message;
          message.set_varchar(msg_str);
          if ((ret = val_row.set_cell(OB_INVALID_ID, 2 + OB_APP_MIN_COLUMN_ID, message)) != OB_SUCCESS)
          {
            TRANS_LOG("Add 'message' to ObRow failed");
            break;
          }
          else if ((ret = values_op->add_values(val_row)) != OB_SUCCESS)
          {
            TRANS_LOG("Add value row failed");
            break;
          }
        }
      }
    }
  }
  if (ret == OB_SUCCESS)
  {
    out_op = values_op;
  }
  return ret;
}

int ObTransformer::gen_phy_show_grants(ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObRowDesc row_desc;
  ObValues *values_op = NULL;
  CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan, err_stat);
  if ((ret = row_desc.add_column_desc(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID)) != OB_SUCCESS)
  {
    TRANS_LOG("add row desc error, err=%d", ret);
  }
  else if ((ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
  {
    TRANS_LOG("set row desc error, err=%d", ret);
  }
  else
  {
    out_op = values_op;
    const ObPrivilege **pp_privilege = sql_context_->pp_privilege_;
    ObString user_name = show_stmt->get_user_name();
    int64_t pos = 0;
    char buf[512];
    if (show_stmt->get_user_name().length() == 0)
    {
      user_name = sql_context_->session_info_->get_user_name();
    }
    const common::ObSchemaManagerV2 *schema_manager = sql_context_->schema_manager_;
    const ObTableSchema* table_schema = NULL;
    ObPrivilege::NameUserMap *username_map = (const_cast<ObPrivilege*>(*pp_privilege))->get_username_map();
    ObPrivilege::UserPrivMap *user_table_map = (const_cast<ObPrivilege*>(*pp_privilege))->get_user_table_map();
    ObPrivilege::User user;
    ret = username_map->get(user_name, user);
    if (-1 == ret || hash::HASH_NOT_EXIST == ret)
    {
      TBSYS_LOG(WARN, "username:%.*s 's not exist, ret=%d", user_name.length(), user_name.ptr(), ret);
      ret = OB_ERR_USER_NOT_EXIST;
    }
    else
    {
      ret = OB_SUCCESS;
      const ObBitSet<> &privileges = user.privileges_;
      if (privileges.is_empty())
      {
      }
      else
      {
        databuff_printf(buf, 512, pos, "GRANT ");
        if (privileges.has_member(OB_PRIV_ALL))
        {
          databuff_printf(buf, 512, pos, "ALL PRIVILEGES ");
          if (privileges.has_member(OB_PRIV_GRANT_OPTION))
          {
            databuff_printf(buf, 512, pos, ",GRANT OPTION ON * TO '%.*s'", user_name.length(), user_name.ptr());
          }
          else
          {
            databuff_printf(buf, 512, pos, "ON * TO '%.*s'", user_name.length(), user_name.ptr());
          }
        }
        else
        {
          ObPrivilege::privilege_to_string(privileges, buf, 512, pos);
          pos = pos - 1;
          databuff_printf(buf, 512, pos, " ON * TO '%.*s'", user_name.length(), user_name.ptr());
        }
        ObRow val_row;
        val_row.set_row_desc(row_desc);
        ObString grant_str;
        if (pos >= 511)
        {
          // overflow
          ret = OB_BUF_NOT_ENOUGH;
          TBSYS_LOG(WARN, "privilege buffer not enough, ret=%d", ret);
        }
        else
        {
          grant_str.assign_ptr(buf, static_cast<int32_t>(pos));
          ObObj grant_val;
          grant_val.set_varchar(grant_str);
          if (OB_SUCCESS != (ret = val_row.set_cell(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID, grant_val)))
          {
            TBSYS_LOG(WARN, "set cell fail:ret[%d]", ret);
          }
          else if (OB_SUCCESS != (ret = values_op->add_values(val_row)))
          {
            TRANS_LOG("add value row failed");
          }
        }
      }
    }
    if (OB_SUCCESS == ret)
    {
      uint64_t user_id = user.user_id_;
      ObPrivilege::UserPrivMap::iterator iter = user_table_map->begin();
      for (; iter != user_table_map->end(); ++iter)
      {
        pos = 0;
        databuff_printf(buf, 512, pos, "GRANT ");
        const ObPrivilege::UserIdTableId &user_id_table_id = iter->first;
        if (user_id_table_id.user_id_ == user_id)
        {
          const ObBitSet<> &privileges = (iter->second).table_privilege_.privileges_;
          if (privileges.is_empty())
          {
            continue;
          }
          else
          {
            ObPrivilege::privilege_to_string(privileges, buf, 512, pos);
            table_schema = schema_manager->get_table_schema(user_id_table_id.table_id_);
            if (NULL == table_schema)
            {
              TBSYS_LOG(WARN, "table id=%lu not exist in schema manager", user_id_table_id.table_id_);
            }
            else
            {
              const char *table_name = table_schema->get_table_name();
              pos = pos - 1;
              databuff_printf(buf, 512, pos, " ON %s TO '%.*s'", table_name, user_name.length(), user_name.ptr());
              ObRow val_row;
              val_row.set_row_desc(row_desc);
              ObString grant_str;
              if (pos >= 511)
              {
                // overflow
                ret = OB_BUF_NOT_ENOUGH;
                TBSYS_LOG(WARN, "privilege buffer not enough, ret=%d", ret);
              }
              else
              {
                grant_str.assign_ptr(buf, static_cast<int32_t>(pos));
                ObObj grant_val;
                grant_val.set_varchar(grant_str);
                if (OB_SUCCESS != (ret = val_row.set_cell(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID, grant_val)))
                {
                  TBSYS_LOG(WARN, "set cell fail:ret[%d]", ret);
                }
                else if (OB_SUCCESS != (ret = values_op->add_values(val_row)))
                {
                  TRANS_LOG("add value row failed");
                }
              }
            }
          }
        }
        else
        {
          continue;
        }
      }
    }
  }
  return ret;
}

int ObTransformer::gen_phy_show_table_status(ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  UNUSED(show_stmt);
  ObValues *values_op = NULL;
  if (NULL == CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else
  {
    // @todo empty
    out_op = values_op;
  }
  return ret;
}

int ObTransformer::gen_phy_show_processlist(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, ObShowStmt *show_stmt, ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  UNUSED(show_stmt);
  ObTableScan *table_scan_op = NULL;
  if (ret == OB_SUCCESS)
  {
    ObTableRpcScan *table_rpc_scan_op = NULL;
    ObRpcScanHint hint;
    hint.read_method_ = ObSqlReadStrategy::USE_SCAN;
    CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat);
    if (ret == OB_SUCCESS && (ret = table_rpc_scan_op->set_table(OB_ALL_SERVER_SESSION_TID, OB_ALL_SERVER_SESSION_TID)) != OB_SUCCESS)
    {
      TRANS_LOG("ObTableRpcScan set table faild");
    }
    if (ret == OB_SUCCESS && (ret = table_rpc_scan_op->init(sql_context_, &hint)) != OB_SUCCESS)
    {
      TRANS_LOG("ObTableRpcScan init faild");
    }
    if (ret == OB_SUCCESS && (ret = physical_plan->add_base_table_version(OB_ALL_SERVER_SESSION_TID, 0)) != OB_SUCCESS)
    {
      TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", OB_ALL_SERVER_SESSION_TID, ret);
    }
    if (ret == OB_SUCCESS)
    {
      table_scan_op = table_rpc_scan_op;
    }
  }

  // add output columns
  int32_t num = 10; //column num of show processlist
  for (int32_t i = 1; ret == OB_SUCCESS && i <= num; i++)
  {
    ObBinaryRefRawExpr col_expr(OB_ALL_SERVER_SESSION_TID, OB_APP_MIN_COLUMN_ID + i, T_REF_COLUMN);
    ObSqlRawExpr col_raw_expr(common::OB_INVALID_ID, OB_ALL_SERVER_SESSION_TID, OB_APP_MIN_COLUMN_ID + i, &col_expr);
    ObSqlExpression output_expr;
    if ((ret = col_raw_expr.fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
    {
      TRANS_LOG("Add table output columns faild");
      break;
    }
  }

  if (ret == OB_SUCCESS)
  {
    out_op = table_scan_op;
  }
  return ret;
}

int ObTransformer::gen_physical_show(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObShowStmt *show_stmt = NULL;
  ObPhyOperator *result_op = NULL;

  /* get statement */
  if (ret == OB_SUCCESS)
  {
    get_stmt(logical_plan, err_stat, query_id, show_stmt);
  }

  if (ret == OB_SUCCESS)
  {
    switch (show_stmt->get_stmt_type())
    {
    case ObBasicStmt::T_SHOW_TABLES:
      ret = gen_phy_show_tables(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_INDEX:
      ret = gen_phy_show_index(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_COLUMNS:
      ret = gen_phy_show_columns(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_VARIABLES:
      ret = gen_phy_show_variables(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_TABLE_STATUS:
      ret = gen_phy_show_table_status(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_SCHEMA:
    case ObBasicStmt::T_SHOW_SERVER_STATUS:
      TRANS_LOG("This statment not support now!");
      break;
    case ObBasicStmt::T_SHOW_CREATE_TABLE:
      ret = gen_phy_show_create_table(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_WARNINGS:
      ret = gen_phy_show_warnings(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_GRANTS:
      ret = gen_phy_show_grants(physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_PARAMETERS:
      ret = gen_phy_show_parameters(logical_plan, physical_plan, err_stat, show_stmt, result_op);
      break;
    case ObBasicStmt::T_SHOW_PROCESSLIST:
      ret = gen_phy_show_processlist(logical_plan, physical_plan, err_stat, show_stmt, result_op);
      break;
    default:
      ret = OB_ERR_GEN_PLAN;
      TRANS_LOG("Unknown show statment!");
      break;
    }
  }
  if (ret == OB_SUCCESS)
  {
    ObFilter *filter_op = NULL;
    if (show_stmt->get_like_pattern().length() > 0)
    {
      ObObj pattern_val;
      pattern_val.set_varchar(show_stmt->get_like_pattern());
      ObConstRawExpr pattern_expr(pattern_val, T_STRING);
      pattern_expr.set_result_type(ObVarcharType);
      ObBinaryRefRawExpr col_expr(show_stmt->get_sys_table_id(), OB_INVALID_ID, T_REF_COLUMN);
      const ObColumnSchemaV2* name_col = NULL;
      const ObColumnSchemaV2* columns = NULL;
      int32_t column_size = 0;
      ObSchemaChecker schema_checker;
      schema_checker.set_schema(*sql_context_->schema_manager_);
      if (show_stmt->get_stmt_type() == ObBasicStmt::T_SHOW_PARAMETERS)
      {
        if ((name_col = schema_checker.get_column_schema(show_stmt->get_table_item(0).table_name_, ObString::make_string("name"))) == NULL)
        {
        }
        else
        {
          col_expr.set_second_ref_id(name_col->get_id());
          col_expr.set_result_type(name_col->get_type());
        }
      }
      else
      {
        if ((columns = schema_checker.get_table_columns(show_stmt->get_sys_table_id(), column_size)) == NULL || column_size <= 0)
        {
          ret = OB_ERR_GEN_PLAN;
          TRANS_LOG("Get show table schema error!");
        }
        else
        {
          col_expr.set_second_ref_id(columns[0].get_id());
          col_expr.set_result_type(columns[0].get_type());
        }
      }
      if (ret == OB_SUCCESS)
      {
        ObBinaryOpRawExpr like_op_expr(&col_expr, &pattern_expr, T_OP_LIKE);
        like_op_expr.set_result_type(ObBoolType);
        ObSqlRawExpr raw_like_expr(OB_INVALID_ID, col_expr.get_first_ref_id(), col_expr.get_second_ref_id(), &like_op_expr);
        ObSqlExpression *like_expr = ObSqlExpression::alloc();
        if (NULL == like_expr || (ret = raw_like_expr.fill_sql_expression(*like_expr, this, logical_plan, physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Gen like filter failed!");
        }
        else if (CREATE_PHY_OPERRATOR(filter_op, ObFilter, physical_plan,
            err_stat) == NULL)
        {
          ObSqlExpression::free(like_expr);
        }
        else if ((ret = filter_op->set_child(0, *result_op)) != OB_SUCCESS)
        {
          ObSqlExpression::free(like_expr);
          TRANS_LOG("Add child of filter plan failed");
        }
        else if ((ret = filter_op->add_filter(like_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add filter expression failed");
        }
      }
    }
    else if (show_stmt->get_condition_size() > 0)
    {
      CREATE_PHY_OPERRATOR(filter_op, ObFilter, physical_plan, err_stat);
      for (int32_t i = 0; ret == OB_SUCCESS && i < show_stmt->get_condition_size(); i++)
      {
        ObSqlRawExpr *cnd_expr = logical_plan->get_expr(show_stmt->get_condition_id(i));
        if (cnd_expr->is_apply() == true)
        {
          continue;
        }
        else
        {
          ObSqlExpression *filter = ObSqlExpression::alloc();
          if (NULL == filter)
          {
            ret = OB_ALLOCATE_MEMORY_FAILED;
            TBSYS_LOG(ERROR, "no memory");
            break;
          }
          else if ((ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = filter_op->add_filter(filter)) != OB_SUCCESS)
          {
            ObSqlExpression::free(filter);
            TRANS_LOG("Add table filter condition faild");
            break;
          }
        }
      } // end for
      if (ret == OB_SUCCESS && (ret = filter_op->set_child(0, *result_op)) != OB_SUCCESS)
      {
        TRANS_LOG("Add child of filter plan failed");
      }
    }
    if (ret == OB_SUCCESS && filter_op != NULL)
    {
      result_op = filter_op;
    }
  }
  if (ret == OB_SUCCESS)
  {
    ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, show_stmt, result_op, index);
  }

  return ret;
}

//add wangjiahao [table lock] 20160616 :b
int ObTransformer::gen_physical_lock_table(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObLockTableStmt *lock_table_stmt = NULL;
  ObPhysicalPlan* inner_plan = NULL;
  ObUpsLockTable *ups_lock_table = NULL;
  int64_t table_id = 0;
  //ObPhyOperator *result_op = NULL;

  if (OB_SUCCESS != (ret = wrap_ups_executor(physical_plan, query_id, inner_plan, index, err_stat)))
  {
    TBSYS_LOG(WARN, "err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, lock_table_stmt)))
  {
    TRANS_LOG("Fail to get statement");
  }
  else if (0 == (table_id = lock_table_stmt->get_lock_table_id()))
  {
    TRANS_LOG("Invalid table_id in lock table stmt.");
    ret = OB_INVALID_ARGUMENT;
  }
  else if (NULL == CREATE_PHY_OPERRATOR(ups_lock_table, ObUpsLockTable, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if (OB_SUCCESS != (ret = ups_lock_table->set_lock_table_id(table_id)))
  {
    TRANS_LOG("Set table_id ERROR.");
  }
  else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(
                                                ups_lock_table,
                                                physical_plan == inner_plan ? index : NULL,
                                                physical_plan != inner_plan)))
  {
    TRANS_LOG("Failed to add phy query, err=%d", ret);
  }
  else
  {

  }
  return OB_SUCCESS;
}
//add :e

int ObTransformer::gen_physical_prepare(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObPrepare *result_op = NULL;
  ObPrepareStmt *stmt = NULL;
  /* get prepare statement */
  get_stmt(logical_plan, err_stat, query_id, stmt);
  /* add prepare operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(result_op, ObPrepare, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
    }
  }

  if (ret == OB_SUCCESS)
  {
    ObPhyOperator* op = NULL;
    ObString stmt_name;
    int32_t idx = OB_INVALID_INDEX;
    if ((ret = ob_write_string(*mem_pool_, stmt->get_stmt_name(), stmt_name)) != OB_SUCCESS)
    {
      TRANS_LOG("Add prepare plan for stmt %.*s faild", stmt->get_stmt_name().length(), stmt->get_stmt_name().ptr());
    }
    else
    {
      result_op->set_stmt_name(stmt_name);

      if ((ret = generate_physical_plan(logical_plan, physical_plan, err_stat, stmt->get_prepare_query_id(), &idx)) != OB_SUCCESS)
      {
        TBSYS_LOG(WARN, "Create physical plan for query statement failed, err=%d", ret);
      }
      else if ((op = physical_plan->get_phy_query(idx)) == NULL || (ret = result_op->set_child(0, *op)) != OB_SUCCESS)
      {
        ret = OB_ERR_ILLEGAL_INDEX;
        TRANS_LOG("Set child of Prepare Operator failed");
      }
    }
  }

  return ret;
}

int ObTransformer::gen_physical_variable_set(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObVariableSet *result_op = NULL;
  ObVariableSetStmt *stmt = NULL;
  /* get variable set statement */
  get_stmt(logical_plan, err_stat, query_id, stmt);
  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(result_op, ObVariableSet, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
    }
  }
  if (ret == OB_SUCCESS)
  {
    const ObTableSchema *table_schema = NULL;
    const ObColumnSchemaV2* name_column = NULL;
    const ObColumnSchemaV2* type_column = NULL;
    const ObColumnSchemaV2* value_column = NULL;
    if ((table_schema = sql_context_->schema_manager_->get_table_schema(OB_ALL_SYS_PARAM_TID)) == NULL)
    {
      ret = OB_ERR_TABLE_UNKNOWN;
      TRANS_LOG("Fail to get table schema for table[%ld]", OB_ALL_SYS_PARAM_TID);
    }
    else if ((name_column = sql_context_->schema_manager_->get_column_schema(OB_ALL_SYS_PARAM_TABLE_NAME, "name")) == NULL)
    {
      ret = OB_ERR_COLUMN_NOT_FOUND;
      TRANS_LOG("Column name not found");
    }
    else if ((type_column = sql_context_->schema_manager_->get_column_schema(OB_ALL_SYS_PARAM_TABLE_NAME, "data_type")) == NULL)
    {
      ret = OB_ERR_COLUMN_NOT_FOUND;
      TRANS_LOG("Column type not found");
    }
    else if ((value_column = sql_context_->schema_manager_->get_column_schema(OB_ALL_SYS_PARAM_TABLE_NAME, "value")) == NULL)
    {
      ret = OB_ERR_COLUMN_NOT_FOUND;
      TRANS_LOG("Column value not found");
    }
    else
    {
      result_op->set_rpc_stub(sql_context_->merger_rpc_proxy_);
      result_op->set_table_id(OB_ALL_SYS_PARAM_TID);
      result_op->set_name_cid(name_column->get_id());
      result_op->set_rowkey_info(table_schema->get_rowkey_info());
      result_op->set_value_column(value_column->get_id(), value_column->get_type());
    }
  }
  int64_t variables_num = stmt->get_variables_size();
  for (int64_t i = 0; ret == OB_SUCCESS && i < variables_num; i++)
  {
    const ObVariableSetStmt::VariableSetNode& var_stmt_node = stmt->get_variable_node(static_cast<int32_t>(i));
    ObVariableSet::VariableSetNode var_op_node;
    ObSqlRawExpr *expr = NULL;
    var_op_node.is_system_variable_ = var_stmt_node.is_system_variable_;
    var_op_node.is_global_ = (var_stmt_node.scope_type_ == ObVariableSetStmt::GLOBAL);
    if (var_stmt_node.is_system_variable_ && !sql_context_->session_info_->sys_variable_exists(var_stmt_node.variable_name_))
    {
      ret = OB_ERR_VARIABLE_UNKNOWN;
      TRANS_LOG("System variable %.*s Unknown", var_stmt_node.variable_name_.length(), var_stmt_node.variable_name_.ptr());
    }
    else if ((ret = ob_write_string(*mem_pool_, var_stmt_node.variable_name_, var_op_node.variable_name_)) != OB_SUCCESS)
    {
      TRANS_LOG("Make place for variable name %.*s failed", var_stmt_node.variable_name_.length(), var_stmt_node.variable_name_.ptr());
    }
    else if ((expr = logical_plan->get_expr(var_stmt_node.value_expr_id_)) == NULL)
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("Wrong expression id, id=%lu", var_stmt_node.value_expr_id_);
    }
    else if (var_op_node.is_system_variable_ && expr->get_result_type() != ObNullType && expr->get_result_type() != (sql_context_->session_info_->get_sys_variable_type(var_stmt_node.variable_name_)))
    {
      ret = OB_OBJ_TYPE_ERROR;
      TRANS_LOG("type not match");
      TBSYS_LOG(WARN, "type not match, ret=%d", ret);
    }
    else if ((var_op_node.variable_expr_ = ObSqlExpression::alloc()) == NULL)
    {
      ret = OB_ALLOCATE_MEMORY_FAILED;
      TRANS_LOG("no memory");
    }
    else if ((ret = result_op->add_variable_node(var_op_node)) != OB_SUCCESS)
    {
      ObSqlExpression::free(var_op_node.variable_expr_);
      var_op_node.variable_expr_ = NULL;
      TRANS_LOG("Add variable entry failed");
    }
    else if ((ret = expr->fill_sql_expression(*var_op_node.variable_expr_, this, logical_plan, physical_plan)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value expression failed");
    }
  }
  return ret;
}

int ObTransformer::gen_physical_execute(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObExecute *result_op = NULL;
  ObExecuteStmt *stmt = NULL;
  /* get execute statement */
  get_stmt(logical_plan, err_stat, query_id, stmt);
  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(result_op, ObExecute, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
    }
  }

  ObSQLSessionInfo *session_info = NULL;
  if (ret == OB_SUCCESS && (sql_context_ == NULL || (session_info = sql_context_->session_info_) == NULL))
  {
    ret = OB_NOT_INIT;
    TRANS_LOG("Session info is not initiated");
  }

  if (ret == OB_SUCCESS)
  {
    uint64_t stmt_id = OB_INVALID_ID;
    if (session_info->plan_exists(stmt->get_stmt_name(), &stmt_id) == false)
    {
      ret = OB_ERR_PREPARE_STMT_UNKNOWN;
      TRANS_LOG("Can not find stmt %.*s ", stmt->get_stmt_name().length(), stmt->get_stmt_name().ptr());
    }
    else
    {
      result_op->set_stmt_id(stmt_id);
    }
    for (int64_t i = 0; ret == OB_SUCCESS && i < stmt->get_variable_size(); i++)
    {
      const ObString& var_name = stmt->get_variable_name(i);
      if (session_info->variable_exists(var_name))
      {
        ObString tmp_name;
        if ((ret = ob_write_string(*mem_pool_, var_name, tmp_name)) != OB_SUCCESS || (ret = result_op->add_param_name(var_name)) != OB_SUCCESS)
        {
          TRANS_LOG("add variable %.*s failed", var_name.length(), var_name.ptr());
        }
      }
      else
      {
        ret = OB_ERR_VARIABLE_UNKNOWN;
        TRANS_LOG("Variable %.*s Unknown", var_name.length(), var_name.ptr());
      }
    }
  }

  return ret;
}

int ObTransformer::gen_physical_deallocate(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObDeallocate *result_op = NULL;
  ObDeallocateStmt *stmt = NULL;
  /* get deallocate statement */
  get_stmt(logical_plan, err_stat, query_id, stmt);
  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(result_op, ObDeallocate, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, stmt, result_op, index);
    }
  }
  if (ret == OB_SUCCESS)
  {
    uint64_t stmt_id = OB_INVALID_ID;
    if (sql_context_ == NULL || sql_context_->session_info_ == NULL)
    {
      ret = OB_NOT_INIT;
      TRANS_LOG("Session info is needed");
    }
    else if (sql_context_->session_info_->plan_exists(stmt->get_stmt_name(), &stmt_id) == false)
    {
      ret = OB_ERR_PREPARE_STMT_UNKNOWN;
      TRANS_LOG("Unknown prepared statement handler (%.*s) given to DEALLOCATE PREPARE", stmt->get_stmt_name().length(), stmt->get_stmt_name().ptr());
    }
    else
    {
      result_op->set_stmt_id(stmt_id);
    }
  }

  return ret;
}

int ObTransformer::gen_phy_static_data_scan(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const ObInsertStmt *insert_stmt, const ObRowDesc& row_desc, const ObSEArray<int64_t, 64> &row_desc_map, const uint64_t table_id, const ObRowkeyInfo &rowkey_info, ObTableRpcScan &table_scan)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(insert_stmt);
  ObSqlExpression *rows_filter = ObSqlExpression::alloc();
  if (NULL == rows_filter)
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TBSYS_LOG(WARN, "no memory");
  }
  ObSqlExpression column_ref;
  // construct left operand of IN operator
  // the same order with row_desc
  ExprItem expr_item;
  expr_item.type_ = T_REF_COLUMN;
  expr_item.value_.cell_.tid = table_id;
  int64_t rowkey_column_num = rowkey_info.get_size();
  uint64_t tid = OB_INVALID_ID;
  for (int i = 0; OB_SUCCESS == ret && i < row_desc.get_column_num(); ++i)
  {
    if (OB_UNLIKELY(OB_SUCCESS != (ret = row_desc.get_tid_cid(i, tid, expr_item.value_.cell_.cid))))
    {
      break;
    }
    else if (rowkey_info.is_rowkey_column(expr_item.value_.cell_.cid))
    {
      column_ref.reset();
      column_ref.set_tid_cid(table_id, expr_item.value_.cell_.cid);
      if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
      {
        TBSYS_LOG(WARN, "failed to add expr item, err=%d", ret);
        break;
      }
      else if (OB_SUCCESS != (ret = column_ref.add_expr_item(expr_item)))
      {
        TBSYS_LOG(WARN, "failed to add expr_item, err=%d", ret);
        break;
      }
      else if (OB_SUCCESS != (ret = column_ref.add_expr_item_end()))
      {
        TBSYS_LOG(WARN, "failed to add expr item, err=%d", ret);
        break;
      }
      else if (OB_SUCCESS != (ret = table_scan.add_output_column(column_ref)))
      {
        TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
        break;
      }
    }
  } // end for
  // add action flag column
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    column_ref.reset();
    column_ref.set_tid_cid(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
    if (OB_SUCCESS != (ret = ObSqlExpressionUtil::make_column_expr(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID, column_ref)))
    {
      TBSYS_LOG(WARN, "fail to make column expr:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = table_scan.add_output_column(column_ref)))
    {
      TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    expr_item.type_ = T_OP_ROW;
    expr_item.value_.int_ = rowkey_column_num;
    if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
    {
      TRANS_LOG("Failed to add expr item, err=%d", ret);
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    expr_item.type_ = T_OP_LEFT_PARAM_END;
    // a in (a,b,c) => 1 Dim;  (a,b) in ((a,b),(c,d)) =>2 Dim; ((a,b),(c,d)) in (...) =>3 Dim
    expr_item.value_.int_ = 2;
    if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
    {
      TBSYS_LOG(WARN, "failed to add expr item, err=%d", ret);
    }
  }
  uint64_t column_id = OB_INVALID_ID;
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    int64_t row_num = insert_stmt->get_value_row_size();
    for (int64_t i = 0; ret == OB_SUCCESS && i < row_num; i++) // for each row
    {
      const ObArray<uint64_t>& value_row = insert_stmt->get_value_row(i);
      OB_ASSERT(value_row.count() == row_desc_map.count());
      for (int64_t j = 0; ret == OB_SUCCESS && j < row_desc_map.count(); j++)
      {
        ObSqlRawExpr *value_expr = logical_plan->get_expr(value_row.at(row_desc_map.at(j)));
        if (value_expr == NULL)
        {
          ret = OB_ERR_ILLEGAL_ID;
          TRANS_LOG("Get value failed");
        }
        else if (OB_SUCCESS != (ret = row_desc.get_tid_cid(j, tid, column_id)))
        {
          TRANS_LOG("Failed to get tid cid, err=%d", ret);
        }
        // success
        else if (rowkey_info.is_rowkey_column(column_id))
        {
          // add right oprands of the IN operator
          if (OB_SUCCESS != (ret = value_expr->get_expr()->fill_sql_expression(*rows_filter, this, logical_plan, physical_plan)))
          {
            TRANS_LOG("Failed to fill expr, err=%d", ret);
          }
        }
      } // end for
      if (OB_LIKELY(ret == OB_SUCCESS))
      {
        if (rowkey_column_num > 0)
        {
          expr_item.type_ = T_OP_ROW;
          expr_item.value_.int_ = rowkey_column_num;
          if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
          {
            TRANS_LOG("Failed to add expr item, err=%d", ret);
          }
        }
      }
    } // end for

    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      expr_item.type_ = T_OP_ROW;
      expr_item.value_.int_ = row_num;
      ExprItem expr_in;
      expr_in.type_ = T_OP_IN;
      expr_in.value_.int_ = 2;
      if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
      {
        TRANS_LOG("Failed to add expr item, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_in)))
      {
        TRANS_LOG("Failed to add expr item, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = rows_filter->add_expr_item_end()))
      {
        TRANS_LOG("Failed to add expr item end, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = table_scan.add_filter(rows_filter)))
      {
        TRANS_LOG("Failed to add filter, err=%d", ret);
      }
    }
  }
  return ret;
}

//add maoxx
int ObTransformer::gen_phy_static_data_scan_for_replace(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const ObInsertStmt *insert_stmt,
    const ObRowDesc& row_desc,
    const ObSEArray<int64_t, 64> &row_desc_map,
    const uint64_t table_id,
    const ObRowkeyInfo &rowkey_info,
    ObTableRpcScan &table_scan)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(insert_stmt);
  ObSqlExpression *rows_filter = ObSqlExpression::alloc();
  if (NULL == rows_filter)
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TBSYS_LOG(WARN, "no memory");
  }
  ObSqlExpression column_ref;
  // construct left operand of IN operator
  // the same order with row_desc
  ExprItem expr_item;
  expr_item.type_ = T_REF_COLUMN;
  expr_item.value_.cell_.tid = table_id;
  int64_t rowkey_column_num = rowkey_info.get_size();
  uint64_t tid = OB_INVALID_ID;
  for (int i = 0; OB_SUCCESS == ret && i < row_desc.get_column_num(); ++i)
  {
    if (OB_UNLIKELY(OB_SUCCESS != (ret = row_desc.get_tid_cid(i, tid, expr_item.value_.cell_.cid))))
    {
      break;
    }
    column_ref.reset();
    column_ref.set_tid_cid(table_id, expr_item.value_.cell_.cid);
    if (rowkey_info.is_rowkey_column(expr_item.value_.cell_.cid))
    {
      if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
      {
        TBSYS_LOG(WARN, "failed to add expr item, err=%d", ret);
        break;
      }
    }
    if (OB_SUCCESS != (ret = column_ref.add_expr_item(expr_item)))
    {
      TBSYS_LOG(WARN, "failed to add expr_item, err=%d", ret);
      break;
    }
    else if (OB_SUCCESS != (ret = column_ref.add_expr_item_end()))
    {
      TBSYS_LOG(WARN, "failed to add expr item, err=%d", ret);
      break;
    }
    else if (OB_SUCCESS != (ret = table_scan.add_output_column(column_ref)))
    {
      TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
      break;
    }
  } // end for
  // add action flag column
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    column_ref.reset();
    column_ref.set_tid_cid(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
    if (OB_SUCCESS != (ret = ObSqlExpressionUtil::make_column_expr(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID, column_ref)))
    {
      TBSYS_LOG(WARN, "fail to make column expr:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = table_scan.add_output_column(column_ref)))
    {
      TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    expr_item.type_ = T_OP_ROW;
    expr_item.value_.int_ = rowkey_column_num;
    if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
    {
      TRANS_LOG("Failed to add expr item, err=%d", ret);
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    expr_item.type_ = T_OP_LEFT_PARAM_END;
    // a in (a,b,c) => 1 Dim;  (a,b) in ((a,b),(c,d)) =>2 Dim; ((a,b),(c,d)) in (...) =>3 Dim
    expr_item.value_.int_ = 2;
    if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
    {
      TBSYS_LOG(WARN, "failed to add expr item, err=%d", ret);
    }
  }
  uint64_t column_id = OB_INVALID_ID;
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    int64_t row_num = insert_stmt->get_value_row_size();
    for (int64_t i = 0; ret == OB_SUCCESS && i < row_num; i++) // for each row
    {
      const ObArray<uint64_t>& value_row = insert_stmt->get_value_row(i);
      OB_ASSERT(value_row.count() == row_desc_map.count());
      for (int64_t j = 0; ret == OB_SUCCESS && j < row_desc_map.count(); j++)
      {
        ObSqlRawExpr *value_expr = logical_plan->get_expr(value_row.at(row_desc_map.at(j)));
        if (value_expr == NULL)
        {
          ret = OB_ERR_ILLEGAL_ID;
          TRANS_LOG("Get value failed");
        }
        else if (OB_SUCCESS != (ret = row_desc.get_tid_cid(j, tid, column_id)))
        {
          TRANS_LOG("Failed to get tid cid, err=%d", ret);
        }
        // success
        else if (rowkey_info.is_rowkey_column(column_id))
        {
          // add right oprands of the IN operator
          if (OB_SUCCESS != (ret = value_expr->get_expr()->fill_sql_expression(*rows_filter, this, logical_plan, physical_plan)))
          {
            TRANS_LOG("Failed to fill expr, err=%d", ret);
          }
        }
      } // end for
      if (OB_LIKELY(ret == OB_SUCCESS))
      {
        if (rowkey_column_num > 0)
        {
          expr_item.type_ = T_OP_ROW;
          expr_item.value_.int_ = rowkey_column_num;
          if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
          {
            TRANS_LOG("Failed to add expr item, err=%d", ret);
          }
        }
      }
    } // end for

    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      expr_item.type_ = T_OP_ROW;
      expr_item.value_.int_ = row_num;
      ExprItem expr_in;
      expr_in.type_ = T_OP_IN;
      expr_in.value_.int_ = 2;
      if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_item)))
      {
        TRANS_LOG("Failed to add expr item, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = rows_filter->add_expr_item(expr_in)))
      {
        TRANS_LOG("Failed to add expr item, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = rows_filter->add_expr_item_end()))
      {
        TRANS_LOG("Failed to add expr item end, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = table_scan.add_filter(rows_filter)))
      {
        TRANS_LOG("Failed to add filter, err=%d", ret);
      }
    }
  }
  return ret;
}
//add e

int ObTransformer::wrap_ups_executor(
  ObPhysicalPlan *physical_plan,
  const uint64_t query_id,
  ObPhysicalPlan*& new_plan,
  int32_t *index,
  ErrStat& err_stat)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(physical_plan);
  if (query_id == OB_INVALID_ID || !physical_plan->in_ups_executor())
  {
    ObUpsExecutor *ups_executor = NULL;
    new_plan = (ObPhysicalPlan*) trans_malloc(sizeof(ObPhysicalPlan));
    if (NULL == new_plan)
    {
      TRANS_LOG("no memory");
      ret = OB_ALLOCATE_MEMORY_FAILED;
    }
    else
    {
      new_plan = new (new_plan) ObPhysicalPlan();
      TBSYS_LOG(DEBUG, "new wrapper physical plan, addr=%p", physical_plan);
      if (NULL == CREATE_PHY_OPERRATOR(ups_executor, ObUpsExecutor, physical_plan, err_stat))
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
      }
      else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(ups_executor, index, query_id == OB_INVALID_ID)))
      {
        TBSYS_LOG(WARN, "failed to add query, err=%d", ret);
      }
      else if (NULL == sql_context_->merge_service_)
      {
        ret = OB_NOT_INIT;
        TBSYS_LOG(WARN, "merge_service_ is null");
      }
      else
      {
        new_plan->set_in_ups_executor(true);
        ups_executor->set_rpc_stub(sql_context_->merger_rpc_proxy_);
        ups_executor->set_inner_plan(new_plan);
      }
      if (OB_SUCCESS != ret)
      {
        new_plan->~ObPhysicalPlan();
      }
    }
  }
  else
  {
    new_plan = physical_plan;
  }
  return ret;
}

int ObTransformer::gen_physical_insert_new(ObLogicalPlan *logical_plan, ObPhysicalPlan *physical_plan, ErrStat& err_stat, const uint64_t& query_id, int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObInsertStmt *insert_stmt = NULL;
  ObUpsModifyWithDmlType *ups_modify = NULL;
  ObRowDesc row_desc;
  ObRowDescExt row_desc_ext;
  ObSEArray<int64_t, 64> row_desc_map;
  const ObRowkeyInfo *rowkey_info = NULL;
  ObPhysicalPlan* inner_plan = NULL;
  //add maoxx
  bool need_modify_index_flag = false;
  IndexList modifiable_index_list;
  ObIndexTrigger *index_trigger = NULL;
  //add e
  if (OB_SUCCESS != (ret = wrap_ups_executor(physical_plan, query_id, inner_plan, index, err_stat)))
  {
    TBSYS_LOG(WARN, "err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, insert_stmt)))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(ups_modify, ObUpsModifyWithDmlType, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(ups_modify, physical_plan == inner_plan ? index : NULL, physical_plan != inner_plan)))
  {
    TRANS_LOG("Failed to add main phy query, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = cons_row_desc(insert_stmt->get_table_id(), insert_stmt, row_desc_ext, row_desc, rowkey_info, row_desc_map, err_stat)))
  {
    ret = OB_ERROR;
    TRANS_LOG("Fail to get table schema for table[%ld]", insert_stmt->get_table_id());
  }
  else
  {
    ups_modify->set_dml_type(OB_DML_INSERT);
    ups_modify->set_table_id(insert_stmt->get_table_id()); //add wangjiahao [table lock] 20160616
    // check primary key columns
    uint64_t tid = insert_stmt->get_table_id();
    uint64_t cid = OB_INVALID_ID;
    for (int64_t i = 0; i < rowkey_info->get_size(); ++i)
    {
      if (OB_SUCCESS != (ret = rowkey_info->get_column_id(i, cid)))
      {
        TBSYS_LOG(USER_ERROR, "primary key can not be empty");
        ret = OB_ERR_INSERT_NULL_ROWKEY;
        break;
      }
      else if (OB_INVALID_INDEX == row_desc.get_idx(tid, cid))
      {
        TBSYS_LOG(USER_ERROR, "primary key can not be empty");
        ret = OB_ERR_INSERT_NULL_ROWKEY;
        break;
      }
    } // end for
  }
  //add maoxx
  if (OB_LIKELY(ret == OB_SUCCESS))
  {
    if(OB_SUCCESS != (ret = sql_context_->schema_manager_->get_all_modifiable_index(insert_stmt->get_table_id(), modifiable_index_list)))
    {
      TBSYS_LOG(WARN,"failed to query if column hit index!table_id[%ld]", insert_stmt->get_table_id());
    }
    else if(modifiable_index_list.get_count() > 0)
    {
      need_modify_index_flag = true;
    }
  }
  //add e
  if (OB_LIKELY(ret == OB_SUCCESS))
  {
    if (OB_LIKELY(insert_stmt->get_insert_query_id() == OB_INVALID_ID))
    {
      // INSERT ... VALUES ...
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        uint64_t tid = insert_stmt->get_table_id();
        const ObTableSchema *table_schema = NULL;
        if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(tid)))
        {
          ret = OB_ERR_ILLEGAL_ID;
          TRANS_LOG("fail to get table schema for table[%ld]", tid);
        }
        else if (row_desc.get_idx(tid, table_schema->get_create_time_column_id()) != OB_INVALID_INDEX)
        {
          ret = OB_ERR_CREAT_MODIFY_TIME_COLUMN;
          ColumnItem *column_item = insert_stmt->get_column_item_by_id(tid, table_schema->get_create_time_column_id());
          if (column_item != NULL)
            TRANS_LOG("Column '%.*s' of type ObCreateTimeType can not be inserted", column_item->column_name_.length(), column_item->column_name_.ptr());
          else
            TRANS_LOG("Column '%ld' of type ObCreateTimeType can not be inserted", table_schema->get_create_time_column_id());
        }
        else if (row_desc.get_idx(tid, table_schema->get_modify_time_column_id()) != OB_INVALID_INDEX)
        {
          ret = OB_ERR_CREAT_MODIFY_TIME_COLUMN;
          ColumnItem *column_item = insert_stmt->get_column_item_by_id(tid, table_schema->get_modify_time_column_id());
          if (column_item != NULL)
            TRANS_LOG("Column '%.*s' of type ObModifyTimeType can not be inserted", column_item->column_name_.length(), column_item->column_name_.ptr());
          else
            TRANS_LOG("Column '%ld' of type ObModifyTimeType can not be inserted", table_schema->get_modify_time_column_id());
        }
      }
      ObTableRpcScan *table_scan = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        ObRpcScanHint hint;
        hint.read_method_ = ObSqlReadStrategy::USE_GET;
        hint.is_get_skip_empty_row_ = false;
        hint.read_consistency_ = FROZEN;
        const ObTableSchema *table_schema = NULL;
        int64_t table_id = insert_stmt->get_table_id();
        CREATE_PHY_OPERRATOR(table_scan, ObTableRpcScan, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if (OB_SUCCESS != (ret = table_scan->set_table(table_id, table_id)))
        {
          TRANS_LOG("failed to set table id, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = table_scan->init(sql_context_, &hint)))
        {
          TRANS_LOG("failed to init table scan, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = gen_phy_static_data_scan(logical_plan, inner_plan, err_stat, insert_stmt, row_desc, row_desc_map, table_id, *rowkey_info, *table_scan)))
        {
          TRANS_LOG("err=%d", ret);
        }
        else if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
        {
          ret = OB_ERR_ILLEGAL_ID;
          TRANS_LOG("Fail to get table schema for table[%ld]", table_id);
        }
        else if ((ret = physical_plan->add_base_table_version(table_id, table_schema->get_schema_version())) != OB_SUCCESS)
        {
          TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_id, ret);
        }
        else
        {
          table_scan->set_rowkey_cell_count(row_desc.get_rowkey_cell_count());
          table_scan->set_cache_bloom_filter(true);
        }
      }
      ObValues *tmp_table = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(tmp_table, ObValues, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if (OB_SUCCESS != (ret = tmp_table->set_child(0, *table_scan)))
        {
          TBSYS_LOG(WARN, "failed to set child, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(tmp_table)))
        {
          TBSYS_LOG(WARN, "failed to add phy query, err=%d", ret);
        }
      }
      ObMemSSTableScan *static_data = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(static_data, ObMemSSTableScan, inner_plan, err_stat);
        if (OB_LIKELY(OB_SUCCESS == ret))
        {
          static_data->set_tmp_table(tmp_table->get_id());
        }
      }
      ObIncScan *inc_scan = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(inc_scan, ObIncScan, inner_plan, err_stat);
        if (OB_LIKELY(OB_SUCCESS == ret))
        {
          inc_scan->set_scan_type(ObIncScan::ST_MGET);
          inc_scan->set_write_lock_flag();
        }
      }
      ObMultipleGetMerge *fuse_op = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(fuse_op, ObMultipleGetMerge, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if ((ret = fuse_op->set_child(0, *static_data)) != OB_SUCCESS)
        {
          TRANS_LOG("Set child of fuse_op operator failed, err=%d", ret);
        }
        else if ((ret = fuse_op->set_child(1, *inc_scan)) != OB_SUCCESS)
        {
          TRANS_LOG("Set child of fuse_op operator failed, err=%d", ret);
        }
        else
        {
          fuse_op->set_is_ups_row(false);
        }
      }
      ObExprValues *input_values = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(input_values, ObExprValues, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(input_values)))
        {
          TBSYS_LOG(WARN, "failed to add phy query, err=%d", ret);
        }
        else if ((ret = input_values->set_row_desc(row_desc, row_desc_ext)) != OB_SUCCESS)
        {
          TRANS_LOG("Set descriptor of value operator failed, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = gen_phy_values(logical_plan, inner_plan, err_stat, insert_stmt, row_desc, row_desc_ext, &row_desc_map, *input_values)))
        {
          TRANS_LOG("Failed to generate values, err=%d", ret);
        }
        else
        {
          input_values->set_check_rowkey_duplicate(true);
        }
      }
      ObEmptyRowFilter * empty_row_filter = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(empty_row_filter, ObEmptyRowFilter, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if ((ret = empty_row_filter->set_child(0, *fuse_op)) != OB_SUCCESS)
        {
          TRANS_LOG("Failed to set child");
        }
      }
      ObInsertDBSemFilter *insert_sem = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(insert_sem, ObInsertDBSemFilter, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if ((ret = insert_sem->set_child(0, *empty_row_filter)) != OB_SUCCESS)
        {
          TRANS_LOG("Failed to set child, err=%d", ret);
        }
        else
        {
          inc_scan->set_values(input_values->get_id(), true);
          insert_sem->set_input_values(input_values->get_id());
        }
      }
      //add maoxx
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        if (need_modify_index_flag)
        {
          if (NULL == CREATE_PHY_OPERRATOR(index_trigger, ObIndexTrigger, inner_plan, err_stat))
          {
            ret = OB_ALLOCATE_MEMORY_FAILED;
            TRANS_LOG("Failed to create phy operator index_trigger");
          }
          else if (OB_SUCCESS != (ret = index_trigger->set_child(0, *insert_sem)))
          {
            TRANS_LOG("Failed to set child, err=%d", ret);
          }
          else if (NULL != index_trigger)
          {
            int sql_type = 0;
            index_trigger->set_sql_type(sql_type);
            index_trigger->set_data_tid(insert_stmt->get_table_id());
            index_trigger->set_need_modify_index_num(modifiable_index_list.get_count());
            index_trigger->set_post_data_row_desc(row_desc);
            for(int64_t i = 0; i < modifiable_index_list.get_count(); i++)
            {
              const ObTableSchema* index_schema = NULL;
              uint64_t index_tid = OB_INVALID_ID;
              uint64_t index_cid = OB_INVALID_ID;
              modifiable_index_list.get_idx_id(i, index_tid);
              if(OB_INVALID_ID != index_tid)
              {
                index_schema = sql_context_->schema_manager_->get_table_schema(index_tid);
              }
              if(NULL == index_schema)
              {
                TBSYS_LOG(WARN,"get index schema failed!");
                ret = OB_SCHEMA_ERROR;
                break;
              }
              else
              {
                const ObRowkeyInfo idx_ori = index_schema->get_rowkey_info();
                ObRowDesc idx_ins;
                idx_ins.reset();
                idx_ins.set_rowkey_cell_count(idx_ori.get_size());
                for(int64_t j = 0; j < idx_ori.get_size(); j++)
                {
                  if(OB_SUCCESS != (ret = idx_ori.get_column_id(j, index_cid)))
                  {
                    TBSYS_LOG(WARN,"get_column_id for rowkey failed!");
                    ret = OB_ERROR;
                    break;
                  }
                  else
                  {
                    if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, index_cid)))
                    {
                      TBSYS_LOG(WARN,"idx_del.add_column_desc occur an error,ret[%d]",ret);
                    }
                  }
                }
                for (int64_t k = OB_APP_MIN_COLUMN_ID; k <= (int64_t)(index_schema->get_max_column_id()); k++)
                {
                  const ObColumnSchemaV2* idx_ocs = sql_context_->schema_manager_->get_column_schema(index_tid, k);
                  if(idx_ori.is_rowkey_column(k) || NULL == idx_ocs)
                  {

                  }
                  else
                  {
                    index_cid = idx_ocs->get_id();
                    if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, index_cid)))
                    {
                      TBSYS_LOG(ERROR,"error in add_column_desc");
                      break;
                    }
                  }
                }
                /*if(OB_SUCCESS == ret && sql_context_->schema_manager_->is_index_has_storing(index_tid))
                         {
                           if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, OB_INDEX_VIRTUAL_COLUMN_ID)))
                           {
                             TBSYS_LOG(WARN, "add index vitual column failed,ret = %d", ret);
                           }
                         }*/
                if(OB_SUCCESS == ret && OB_SUCCESS != (ret = index_trigger->add_row_desc_ins(i, idx_ins)))
                {
                  TBSYS_LOG(ERROR,"construct row desc error");
                  ret = OB_ERROR;
                }
              }
            }
          }
        }
      }
      //add e
      ObWhenFilter *when_filter_op = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        if (insert_stmt->get_when_expr_size() > 0)
        {
          if ((ret = gen_phy_when(logical_plan, inner_plan, err_stat, query_id, *insert_sem, when_filter_op)) != OB_SUCCESS)
          {
          }
          else if ((ret = ups_modify->set_child(0, *when_filter_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
          }
        }
        /*
        else if (OB_SUCCESS != (ret = ups_modify->set_child(0, *insert_sem)))
        {
          TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
        }
        */
        //modify maoxx
        else
        {
          if(need_modify_index_flag)
          {
            if (OB_SUCCESS != (ret = ups_modify->set_child(0, *index_trigger)))
            {
              TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
            }
          }
          else
          {
            if (OB_SUCCESS != (ret = ups_modify->set_child(0, *insert_sem)))
            {
              TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
            }
          }
        }
        //modify e
      }
    }
    else
    {
      // @todo insert ... select ...
    }
  }
  if (ret == OB_SUCCESS)
  {
    if ((ret = merge_tables_version(*physical_plan, *inner_plan)) != OB_SUCCESS)
    {
      TRANS_LOG("Failed to add base tables version, err=%d", ret);
    }
  }
  return ret;
}

int ObTransformer::gen_phy_table_for_update(ObLogicalPlan *logical_plan, ObPhysicalPlan*& physical_plan, ErrStat& err_stat, ObStmt *stmt, uint64_t table_id, const ObRowkeyInfo &rowkey_info, const ObRowDesc &row_desc, const ObRowDescExt &row_desc_ext, ObPhyOperator*& table_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  TableItem* table_item = NULL;
  ObTableRpcScan *table_rpc_scan_op = NULL;
  ObFilter *filter_op = NULL;
  ObIncScan *inc_scan_op = NULL;
  ObMultipleGetMerge *fuse_op = NULL;
  ObMemSSTableScan *static_data = NULL;
  ObValues *tmp_table = NULL;
  ObRowDesc rowkey_col_map;
  ObExprValues* get_param_values = NULL;
  const ObTableSchema *table_schema = NULL;
  ObObj rowkey_objs[OB_MAX_ROWKEY_COLUMN_NUMBER]; // used for constructing GetParam
  ObPostfixExpression::ObPostExprNodeType type_objs[OB_MAX_ROWKEY_COLUMN_NUMBER];
  ModuleArena rowkey_alloc(OB_MAX_VARCHAR_LENGTH, ModulePageAllocator(ObModIds::OB_SQL_TRANSFORMER));
  ObCellInfo cell_info;
  cell_info.table_id_ = table_id;
  cell_info.row_key_.assign(rowkey_objs, rowkey_info.get_size());

  bool has_other_cond = false;
  ObRpcScanHint hint;
  hint.read_method_ = ObSqlReadStrategy::USE_GET;
  hint.read_consistency_ = FROZEN;
  hint.is_get_skip_empty_row_ = false;

  if (table_id == OB_INVALID_ID || (table_item = stmt->get_table_item_by_id(table_id)) == NULL || TableItem::BASE_TABLE != table_item->type_)
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Wrong table id, tid=%lu", table_id);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if ((ret = table_rpc_scan_op->set_table(table_item->table_id_, table_item->ref_id_)) != OB_SUCCESS)
  {
    TRANS_LOG("ObTableRpcScan set table failed");
  }
  else if (OB_SUCCESS != (ret = table_rpc_scan_op->init(sql_context_, &hint)))
  {
    TRANS_LOG("ObTableRpcScan init failed");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(tmp_table, ObValues, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = tmp_table->set_child(0, *table_rpc_scan_op)))
  {
    TBSYS_LOG(WARN, "failed to set child op, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(tmp_table)))
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(filter_op, ObFilter, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(inc_scan_op, ObIncScan, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(fuse_op, ObMultipleGetMerge, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(static_data, ObMemSSTableScan, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(0, *static_data)))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(1, *inc_scan_op)))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(get_param_values, ObExprValues, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(get_param_values)))
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Fail to get table schema for table[%ld]", table_id);
  }
  else if ((ret = physical_plan->add_base_table_version(table_id, table_schema->get_schema_version())) != OB_SUCCESS)
  {
    TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_id, ret);
  }
  else
  {
    fuse_op->set_is_ups_row(false);

    inc_scan_op->set_scan_type(ObIncScan::ST_MGET);
    inc_scan_op->set_write_lock_flag();
    inc_scan_op->set_hotspot(stmt->get_query_hint().hotspot_);
    inc_scan_op->set_values(get_param_values->get_id(), false);

    static_data->set_tmp_table(tmp_table->get_id());

    table_rpc_scan_op->set_rowkey_cell_count(row_desc.get_rowkey_cell_count());
    table_rpc_scan_op->set_need_cache_frozen_data(true);

    get_param_values->set_row_desc(row_desc, row_desc_ext);
    // set filters
    int32_t num = stmt->get_condition_size();
    uint64_t cid = OB_INVALID_ID;
    int64_t cond_op = T_INVALID;
    ObObj cond_val;
    ObPostfixExpression::ObPostExprNodeType val_type = ObPostfixExpression::BEGIN_TYPE;
    int64_t rowkey_idx = OB_INVALID_INDEX;
    ObRowkeyColumn rowkey_col;
    for (int32_t i = 0; i < num; i++)
    {
      ObSqlRawExpr *cnd_expr = logical_plan->get_expr(stmt->get_condition_id(i));
      OB_ASSERT(cnd_expr);
      cnd_expr->set_applied(true);
      ObSqlExpression *filter = ObSqlExpression::alloc();
      if (NULL == filter)
      {
        TRANS_LOG("no memory");
        ret = OB_ALLOCATE_MEMORY_FAILED;
        break;
      }
      else if (OB_SUCCESS != (ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)))
      {
        ObSqlExpression::free(filter);
        TRANS_LOG("Failed to fill expression, err=%d", ret);
        break;
      }
      else if (filter->is_simple_condition(false, cid, cond_op, cond_val, &val_type) && (T_OP_EQ == cond_op || T_OP_IS == cond_op) && rowkey_info.is_rowkey_column(cid))
      {
        if (OB_SUCCESS != (ret = table_rpc_scan_op->add_filter(filter)))
        {
          ObSqlExpression::free(filter);
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = rowkey_col_map.add_column_desc(OB_INVALID_ID, cid)))
        {
          TRANS_LOG("Failed to add column desc, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = rowkey_info.get_index(cid, rowkey_idx, rowkey_col)))
        {
          TRANS_LOG("Unexpected branch");
          ret = OB_ERR_UNEXPECTED;
          break;
        }
        else if (OB_SUCCESS != (ret = ob_write_obj(rowkey_alloc, cond_val, rowkey_objs[rowkey_idx]))) // deep copy
        {
          TRANS_LOG("failed to copy cell, err=%d", ret);
        }
        else
        {
          type_objs[rowkey_idx] = val_type;
          TBSYS_LOG(DEBUG, "rowkey obj, i=%ld val=%s", rowkey_idx, to_cstring(cond_val));
        }
      }
      else
      {
        // other condition
        has_other_cond = true;
        if (OB_SUCCESS != (ret = filter_op->add_filter(filter)))
        {
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
      }
    } // end for
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      int64_t rowkey_col_num = rowkey_info.get_size();
      uint64_t cid = OB_INVALID_ID;
      for (int64_t i = 0; i < rowkey_col_num; ++i)
      {
        if (OB_SUCCESS != (ret = rowkey_info.get_column_id(i, cid)))
        {
          TRANS_LOG("Failed to get column id, err=%d", ret);
          break;
        }
        else if (OB_INVALID_INDEX == rowkey_col_map.get_idx(OB_INVALID_ID, cid))
        {
          TRANS_LOG("Primary key column %lu not specified in the WHERE clause", cid);
          ret = OB_ERR_LACK_OF_ROWKEY_COL;
          break;
        }
      } // end for
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    // add output columns
    int32_t num = stmt->get_column_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      const ColumnItem *col_item = stmt->get_column_item(i);
      if (col_item && col_item->table_id_ == table_item->table_id_)
      {
        ObBinaryRefRawExpr col_expr(col_item->table_id_, col_item->column_id_, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(common::OB_INVALID_ID, col_item->table_id_, col_item->column_id_, &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(output_expr, this, logical_plan, physical_plan)) != OB_SUCCESS || (ret = table_rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
        // for IncScan
        ObConstRawExpr col_expr2;
        if (i < rowkey_info.get_size()) // rowkey column
        {
          if (OB_SUCCESS != (ret = col_expr2.set_value_and_type(rowkey_objs[i])))
          {
            TBSYS_LOG(WARN, "failed to set value, err=%d", ret);
            break;
          }
          else
          {
            switch (type_objs[i])
            {
            case ObPostfixExpression::PARAM_IDX:
              col_expr2.set_expr_type(T_QUESTIONMARK);
              col_expr2.set_result_type(ObVarcharType);
              break;
            case ObPostfixExpression::SYSTEM_VAR:
              col_expr2.set_expr_type(T_SYSTEM_VARIABLE);
              col_expr2.set_result_type(ObVarcharType);
              break;
            case ObPostfixExpression::TEMP_VAR:
              col_expr2.set_expr_type(T_TEMP_VARIABLE);
              col_expr2.set_result_type(ObVarcharType);
              break;
            default:
              break;
            }
          }
        }
        else
        {
          ObObj null_obj;
          col_expr2.set_value_and_type(null_obj);
        }
        ObSqlRawExpr col_raw_expr2(common::OB_INVALID_ID, col_item->table_id_, col_item->column_id_, &col_expr2);
        ObSqlExpression output_expr2;
        if ((ret = col_raw_expr2.fill_sql_expression(output_expr2, this, logical_plan, physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns failed");
          break;
        }
        else if (OB_SUCCESS != (ret = get_param_values->add_value(output_expr2)))
        {
          TRANS_LOG("Failed to add cell into get param, err=%d", ret);
          break;
        }
      }
    } // end for
  }
  // add action flag column
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    ObSqlExpression column_ref;
    column_ref.set_tid_cid(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
    if (OB_SUCCESS != (ret = ObSqlExpressionUtil::make_column_expr(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID, column_ref)))
    {
      TBSYS_LOG(WARN, "fail to make column expr:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = table_rpc_scan_op->add_output_column(column_ref)))
    {
      TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
    }
  }

  if (ret == OB_SUCCESS)
  {
    if (has_other_cond)
    {
      if (OB_SUCCESS != (ret = filter_op->set_child(0, *fuse_op)))
      {
        TRANS_LOG("Failed to set child, err=%d", ret);
      }
      else
      {
        table_op = filter_op;
      }
    }
    else
    {
      table_op = fuse_op;
    }
  }
  return ret;
}

//add maoxx
int ObTransformer::gen_phy_table_for_delete(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan*& physical_plan,
    ErrStat& err_stat,
    ObStmt *stmt,
    uint64_t table_id,
    const ObRowkeyInfo &rowkey_info,
    const ObRowDesc &row_desc,
    const ObRowDescExt &row_desc_ext,
    ObPhyOperator*& table_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  TableItem* table_item = NULL;
  ObTableRpcScan *table_rpc_scan_op = NULL;
  ObFilter *filter_op = NULL;
  ObIncScan *inc_scan_op = NULL;
  ObMultipleGetMerge *fuse_op = NULL;
  ObMemSSTableScan *static_data = NULL;
  ObValues *tmp_table = NULL;
  ObRowDesc rowkey_col_map;
  ObExprValues* get_param_values = NULL;
  const ObTableSchema *table_schema = NULL;
  ObObj rowkey_objs[OB_MAX_ROWKEY_COLUMN_NUMBER]; // used for constructing GetParam
  ObPostfixExpression::ObPostExprNodeType type_objs[OB_MAX_ROWKEY_COLUMN_NUMBER];
  ModuleArena rowkey_alloc(OB_MAX_VARCHAR_LENGTH, ModulePageAllocator(ObModIds::OB_SQL_TRANSFORMER));
  ObCellInfo cell_info;
  cell_info.table_id_ = table_id;
  cell_info.row_key_.assign(rowkey_objs, rowkey_info.get_size());

  bool has_other_cond = false;
  ObRpcScanHint hint;
  hint.read_method_ = ObSqlReadStrategy::USE_GET;
  hint.read_consistency_ = FROZEN;
  hint.is_get_skip_empty_row_ = false;

  if (table_id == OB_INVALID_ID
      || (table_item = stmt->get_table_item_by_id(table_id)) == NULL
      || TableItem::BASE_TABLE != table_item->type_)
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Wrong table id, tid=%lu", table_id);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if ((ret = table_rpc_scan_op->set_table(table_item->table_id_, table_item->ref_id_)) != OB_SUCCESS)
  {
    TRANS_LOG("ObTableRpcScan set table failed");
  }
  else if (OB_SUCCESS != (ret = table_rpc_scan_op->init(sql_context_, &hint)))
  {
    TRANS_LOG("ObTableRpcScan init failed");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(tmp_table, ObValues, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = tmp_table->set_child(0, *table_rpc_scan_op)))
  {
    TBSYS_LOG(WARN, "failed to set child op, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(tmp_table)))
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(filter_op, ObFilter, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(inc_scan_op, ObIncScan, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(fuse_op, ObMultipleGetMerge, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(static_data, ObMemSSTableScan, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(0, *static_data)))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(1, *inc_scan_op)))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(get_param_values, ObExprValues, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(get_param_values)))
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Fail to get table schema for table[%ld]", table_id);
  }
  else if ((ret = physical_plan->add_base_table_version(
              table_id,
              table_schema->get_schema_version()
              )) != OB_SUCCESS)
  {
    TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_id, ret);
  }
  else
  {
    fuse_op->set_is_ups_row(false);

    inc_scan_op->set_scan_type(ObIncScan::ST_MGET);
    inc_scan_op->set_write_lock_flag();
    inc_scan_op->set_hotspot(stmt->get_query_hint().hotspot_);
    inc_scan_op->set_values(get_param_values->get_id(), false);

    static_data->set_tmp_table(tmp_table->get_id());

    table_rpc_scan_op->set_rowkey_cell_count(row_desc.get_rowkey_cell_count());
    table_rpc_scan_op->set_need_cache_frozen_data(true);

    get_param_values->set_row_desc(row_desc, row_desc_ext);
    // set filters
    int32_t num = stmt->get_condition_size();
    uint64_t cid = OB_INVALID_ID;
    int64_t cond_op = T_INVALID;
    ObObj cond_val;
    ObPostfixExpression::ObPostExprNodeType val_type = ObPostfixExpression::BEGIN_TYPE;
    int64_t rowkey_idx = OB_INVALID_INDEX;
    ObRowkeyColumn rowkey_col;
    for (int32_t i = 0; i < num; i++)
    {
      ObSqlRawExpr *cnd_expr = logical_plan->get_expr(stmt->get_condition_id(i));
      OB_ASSERT(cnd_expr);
      cnd_expr->set_applied(true);
      ObSqlExpression *filter = ObSqlExpression::alloc();
      if (NULL == filter)
      {
        TRANS_LOG("no memory");
        ret = OB_ALLOCATE_MEMORY_FAILED;
        break;
      }
      else if (OB_SUCCESS != (ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)))
      {
        ObSqlExpression::free(filter);
        TRANS_LOG("Failed to fill expression, err=%d", ret);
        break;
      }
      else if (filter->is_simple_condition(false, cid, cond_op, cond_val, &val_type)
               && (T_OP_EQ == cond_op || T_OP_IS == cond_op)
               && rowkey_info.is_rowkey_column(cid))
      {
        if (OB_SUCCESS != (ret = table_rpc_scan_op->add_filter(filter)))
        {
          ObSqlExpression::free(filter);
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = rowkey_col_map.add_column_desc(OB_INVALID_ID, cid)))
        {
          TRANS_LOG("Failed to add column desc, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = rowkey_info.get_index(cid, rowkey_idx, rowkey_col)))
        {
          TRANS_LOG("Unexpected branch");
          ret = OB_ERR_UNEXPECTED;
          break;
        }
        else if (OB_SUCCESS != (ret = ob_write_obj(rowkey_alloc, cond_val, rowkey_objs[rowkey_idx]))) // deep copy
        {
          TRANS_LOG("failed to copy cell, err=%d", ret);
        }
        else
        {
          type_objs[rowkey_idx] = val_type;
          TBSYS_LOG(DEBUG, "rowkey obj, i=%ld val=%s", rowkey_idx, to_cstring(cond_val));
        }
      }
      else
      {
        // other condition
        has_other_cond = true;
        if (OB_SUCCESS != (ret = filter_op->add_filter(filter)))
        {
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
      }
    } // end for
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      int64_t rowkey_col_num = rowkey_info.get_size();
      uint64_t cid = OB_INVALID_ID;
      for (int64_t i = 0; i < rowkey_col_num; ++i)
      {
        if (OB_SUCCESS != (ret = rowkey_info.get_column_id(i, cid)))
        {
          TRANS_LOG("Failed to get column id, err=%d", ret);
          break;
        }
        else if (OB_INVALID_INDEX == rowkey_col_map.get_idx(OB_INVALID_ID, cid))
        {
          TRANS_LOG("Primary key column %lu not specified in the WHERE clause", cid);
          ret = OB_ERR_LACK_OF_ROWKEY_COL;
          break;
        }
      } // end for
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    // add output columns
    for (int64_t i = 0; i < rowkey_info.get_size(); i++)
    {
      uint64_t rowkey_cid = OB_INVALID_ID;
      if(OB_SUCCESS != (rowkey_info.get_column_id(i, rowkey_cid)))
      {
        TBSYS_LOG(WARN,"cannot get rowkey id for get param values,ret[%d]",ret);
        break;
      }
      else
      {
        ObBinaryRefRawExpr col_expr(table_id, rowkey_cid, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(
              common::OB_INVALID_ID,
              table_id,
              rowkey_cid,
              &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(
               output_expr,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS
            || (ret = table_rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
        // for IncScan
        ObConstRawExpr col_expr2;
        ObRowkeyColumn rowkey;
        int64_t rowkey_idx = 0;
        if(OB_SUCCESS != (ret = rowkey_info.get_index(rowkey_cid, rowkey_idx, rowkey)))
        {
          TBSYS_LOG(WARN,"failed to find index for rowkey_column");
          break;
        }
        else if (OB_SUCCESS != (ret = col_expr2.set_value_and_type(rowkey_objs[rowkey_idx])))
        {
          TBSYS_LOG(WARN, "failed to set value, err=%d", ret);
          break;
        }
        else
        {
          switch (type_objs[i])
          {
          case ObPostfixExpression::PARAM_IDX:
            col_expr2.set_expr_type(T_QUESTIONMARK);
            col_expr2.set_result_type(ObVarcharType);
            break;
          case ObPostfixExpression::SYSTEM_VAR:
            col_expr2.set_expr_type(T_SYSTEM_VARIABLE);
            col_expr2.set_result_type(ObVarcharType);
            break;
          case ObPostfixExpression::TEMP_VAR:
            col_expr2.set_expr_type(T_TEMP_VARIABLE);
            col_expr2.set_result_type(ObVarcharType);
            break;
          default:
            break;
          }
        }
        ObSqlRawExpr col_raw_expr2(
              common::OB_INVALID_ID,
              table_id,
              rowkey_cid,
              &col_expr2);
        ObSqlExpression output_expr2;
        if ((ret = col_raw_expr2.fill_sql_expression(
               output_expr2,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns failed");
          break;
        }
        else if (OB_SUCCESS != (ret = get_param_values->add_value(output_expr2)))
        {
          TRANS_LOG("Failed to add cell into get param, err=%d", ret);
          break;
        }
      }
    } // end for
  }
  for (uint64_t cid = OB_APP_MIN_COLUMN_ID; ret == OB_SUCCESS && cid <= table_schema->get_max_column_id(); cid++)
  {
    bool output_flag = false;
    if(OB_SUCCESS != (ret = sql_context_->schema_manager_->column_hit_index_and_rowkey(table_id, cid, output_flag)))
    {
      TBSYS_LOG(WARN,"failed to check if column hit index table[%ld],cid[%ld]",table_id, cid);
      break;
    }
    if(OB_SUCCESS == ret && !rowkey_info.is_rowkey_column(cid) && output_flag)
    {
      if (table_schema->get_table_id() == table_item->table_id_)
      {
        ObBinaryRefRawExpr col_expr(table_id, cid, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(
              common::OB_INVALID_ID,
              table_id,
              cid,
              &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(
               output_expr,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS
            || (ret = table_rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
        // for IncScan
        ObConstRawExpr col_expr2;
        ObObj null_obj;
        col_expr2.set_value_and_type(null_obj);
        ObSqlRawExpr col_raw_expr2(
              common::OB_INVALID_ID,
              table_id,
              cid,
              &col_expr2);
        ObSqlExpression output_expr2;
        if ((ret = col_raw_expr2.fill_sql_expression(
               output_expr2,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns failed");
          break;
        }
        else if (OB_SUCCESS != (ret = get_param_values->add_value(output_expr2)))
        {
          TRANS_LOG("Failed to add cell into get param, err=%d", ret);
          break;
        }
      }
    }
  }//end for
  // add action flag column
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    ObSqlExpression column_ref;
    column_ref.set_tid_cid(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
    if (OB_SUCCESS != (ret = ObSqlExpressionUtil::make_column_expr(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID, column_ref)))
    {
      TBSYS_LOG(WARN, "fail to make column expr:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = table_rpc_scan_op->add_output_column(column_ref)))
    {
      TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
    }
  }

  if (ret == OB_SUCCESS)
  {
    if (has_other_cond)
    {
      if (OB_SUCCESS != (ret = filter_op->set_child(0, *fuse_op)))
      {
        TRANS_LOG("Failed to set child, err=%d", ret);
      }
      else
      {
        table_op = filter_op;
      }
    }
    else
    {
      table_op = fuse_op;
    }
  }
  return ret;
}

int ObTransformer::gen_phy_table_for_update_new(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan*& physical_plan,
    ErrStat& err_stat,
    ObStmt *stmt,
    uint64_t table_id,
    const ObRowkeyInfo &rowkey_info,
    const ObRowDesc &row_desc,
    const ObRowDescExt &row_desc_ext,
    ObPhyOperator*& table_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  TableItem* table_item = NULL;
  ObTableRpcScan *table_rpc_scan_op = NULL;
  ObFilter *filter_op = NULL;
  ObIncScan *inc_scan_op = NULL;
  ObMultipleGetMerge *fuse_op = NULL;
  ObMemSSTableScan *static_data = NULL;
  ObValues *tmp_table = NULL;
  ObRowDesc rowkey_col_map;
  ObExprValues* get_param_values = NULL;
  const ObTableSchema *table_schema = NULL;
  ObObj rowkey_objs[OB_MAX_ROWKEY_COLUMN_NUMBER]; // used for constructing GetParam
  ObPostfixExpression::ObPostExprNodeType type_objs[OB_MAX_ROWKEY_COLUMN_NUMBER];
  ModuleArena rowkey_alloc(OB_MAX_VARCHAR_LENGTH, ModulePageAllocator(ObModIds::OB_SQL_TRANSFORMER));
  ObCellInfo cell_info;
  cell_info.table_id_ = table_id;
  cell_info.row_key_.assign(rowkey_objs, rowkey_info.get_size());

  bool has_other_cond = false;
  ObRpcScanHint hint;
  hint.read_method_ = ObSqlReadStrategy::USE_GET;
  hint.read_consistency_ = FROZEN;
  hint.is_get_skip_empty_row_ = false;

  if (table_id == OB_INVALID_ID
      || (table_item = stmt->get_table_item_by_id(table_id)) == NULL
      || TableItem::BASE_TABLE != table_item->type_)
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Wrong table id, tid=%lu", table_id);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if ((ret = table_rpc_scan_op->set_table(table_item->table_id_, table_item->ref_id_)) != OB_SUCCESS)
  {
    TRANS_LOG("ObTableRpcScan set table failed");
  }
  else if (OB_SUCCESS != (ret = table_rpc_scan_op->init(sql_context_, &hint)))
  {
    TRANS_LOG("ObTableRpcScan init failed");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(tmp_table, ObValues, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = tmp_table->set_child(0, *table_rpc_scan_op)))
  {
    TBSYS_LOG(WARN, "failed to set child op, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(tmp_table)))
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(filter_op, ObFilter, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(inc_scan_op, ObIncScan, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(fuse_op, ObMultipleGetMerge, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(static_data, ObMemSSTableScan, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(0, *static_data)))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(1, *inc_scan_op)))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(get_param_values, ObExprValues, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(get_param_values)))
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Fail to get table schema for table[%ld]", table_id);
  }
  else if ((ret = physical_plan->add_base_table_version(
              table_id,
              table_schema->get_schema_version()
              )) != OB_SUCCESS)
  {
    TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_id, ret);
  }
  else
  {
    fuse_op->set_is_ups_row(false);

    inc_scan_op->set_scan_type(ObIncScan::ST_MGET);
    inc_scan_op->set_write_lock_flag();
    inc_scan_op->set_hotspot(stmt->get_query_hint().hotspot_);
    inc_scan_op->set_values(get_param_values->get_id(), false);

    static_data->set_tmp_table(tmp_table->get_id());

    table_rpc_scan_op->set_rowkey_cell_count(row_desc.get_rowkey_cell_count());
    table_rpc_scan_op->set_need_cache_frozen_data(true);

    get_param_values->set_row_desc(row_desc, row_desc_ext);
    // set filters
    int32_t num = stmt->get_condition_size();
    uint64_t cid = OB_INVALID_ID;
    int64_t cond_op = T_INVALID;
    ObObj cond_val;
    ObPostfixExpression::ObPostExprNodeType val_type = ObPostfixExpression::BEGIN_TYPE;
    int64_t rowkey_idx = OB_INVALID_INDEX;
    ObRowkeyColumn rowkey_col;
    for (int32_t i = 0; i < num; i++)
    {
      ObSqlRawExpr *cnd_expr = logical_plan->get_expr(stmt->get_condition_id(i));
      OB_ASSERT(cnd_expr);
      cnd_expr->set_applied(true);
      ObSqlExpression *filter = ObSqlExpression::alloc();
      if (NULL == filter)
      {
        TRANS_LOG("no memory");
        ret = OB_ALLOCATE_MEMORY_FAILED;
        break;
      }
      else if (OB_SUCCESS != (ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)))
      {
        ObSqlExpression::free(filter);
        TRANS_LOG("Failed to fill expression, err=%d", ret);
        break;
      }
      else if (filter->is_simple_condition(false, cid, cond_op, cond_val, &val_type)
               && (T_OP_EQ == cond_op || T_OP_IS == cond_op)
               && rowkey_info.is_rowkey_column(cid))
      {
        if (OB_SUCCESS != (ret = table_rpc_scan_op->add_filter(filter)))
        {
          ObSqlExpression::free(filter);
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = rowkey_col_map.add_column_desc(OB_INVALID_ID, cid)))
        {
          TRANS_LOG("Failed to add column desc, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = rowkey_info.get_index(cid, rowkey_idx, rowkey_col)))
        {
          TRANS_LOG("Unexpected branch");
          ret = OB_ERR_UNEXPECTED;
          break;
        }
        else if (OB_SUCCESS != (ret = ob_write_obj(rowkey_alloc, cond_val, rowkey_objs[rowkey_idx]))) // deep copy
        {
          TRANS_LOG("failed to copy cell, err=%d", ret);
        }
        else
        {
          type_objs[rowkey_idx] = val_type;
          TBSYS_LOG(DEBUG, "rowkey obj, i=%ld val=%s", rowkey_idx, to_cstring(cond_val));
        }
      }
      else
      {
        // other condition
        has_other_cond = true;
        if (OB_SUCCESS != (ret = filter_op->add_filter(filter)))
        {
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
      }
    } // end for
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      int64_t rowkey_col_num = rowkey_info.get_size();
      uint64_t cid = OB_INVALID_ID;
      for (int64_t i = 0; i < rowkey_col_num; ++i)
      {
        if (OB_SUCCESS != (ret = rowkey_info.get_column_id(i, cid)))
        {
          TRANS_LOG("Failed to get column id, err=%d", ret);
          break;
        }
        else if (OB_INVALID_INDEX == rowkey_col_map.get_idx(OB_INVALID_ID, cid))
        {
          TRANS_LOG("Primary key column %lu not specified in the WHERE clause", cid);
          ret = OB_ERR_LACK_OF_ROWKEY_COL;
          break;
        }
      } // end for
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    // add output columns
    for (int64_t i = 0; i < rowkey_info.get_size(); i++)
    {
      uint64_t rowkey_cid = OB_INVALID_ID;
      if(OB_SUCCESS != (rowkey_info.get_column_id(i, rowkey_cid)))
      {
        TBSYS_LOG(WARN,"cannot get rowkey id for get param values,ret[%d]",ret);
        break;
      }
      else
      {
        ObBinaryRefRawExpr col_expr(table_id, rowkey_cid, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(
              common::OB_INVALID_ID,
              table_id,
              rowkey_cid,
              &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(
               output_expr,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS
            || (ret = table_rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
        // for IncScan
        ObConstRawExpr col_expr2;
        ObRowkeyColumn rowkey;
        int64_t rowkey_idx = 0;
        if(OB_SUCCESS != (ret = rowkey_info.get_index(rowkey_cid, rowkey_idx, rowkey)))
        {
          TBSYS_LOG(WARN,"failed to find index for rowkey_column");
          break;
        }
        else if (OB_SUCCESS != (ret = col_expr2.set_value_and_type(rowkey_objs[rowkey_idx])))
        {
          TBSYS_LOG(WARN, "failed to set value, err=%d", ret);
          break;
        }
        else
        {
          switch (type_objs[i])
          {
          case ObPostfixExpression::PARAM_IDX:
            col_expr2.set_expr_type(T_QUESTIONMARK);
            col_expr2.set_result_type(ObVarcharType);
            break;
          case ObPostfixExpression::SYSTEM_VAR:
            col_expr2.set_expr_type(T_SYSTEM_VARIABLE);
            col_expr2.set_result_type(ObVarcharType);
            break;
          case ObPostfixExpression::TEMP_VAR:
            col_expr2.set_expr_type(T_TEMP_VARIABLE);
            col_expr2.set_result_type(ObVarcharType);
            break;
          default:
            break;
          }
        }
        ObSqlRawExpr col_raw_expr2(
              common::OB_INVALID_ID,
              table_id,
              rowkey_cid,
              &col_expr2);
        ObSqlExpression output_expr2;
        if ((ret = col_raw_expr2.fill_sql_expression(
               output_expr2,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns failed");
          break;
        }
        else if (OB_SUCCESS != (ret = get_param_values->add_value(output_expr2)))
        {
          TRANS_LOG("Failed to add cell into get param, err=%d", ret);
          break;
        }
      }
    } // end for
  }
  for (uint64_t cid = OB_APP_MIN_COLUMN_ID; ret == OB_SUCCESS && cid <= table_schema->get_max_column_id(); cid++)
  {
    bool column_hit_index_flag = false;
    bool column_in_update_stmt_flag = false;
    if(OB_SUCCESS != (ret = sql_context_->schema_manager_->column_hit_index(table_id, cid, column_hit_index_flag)))
    {
      TBSYS_LOG(WARN,"failed to check if column hit index table[%ld],cid[%ld]",table_id, cid);
      break;
    }
    else if(ObBasicStmt::T_UPDATE == stmt->get_stmt_type() && OB_SUCCESS != (ret = column_in_stmt(stmt, table_id, cid, column_in_update_stmt_flag)))
    {
      TBSYS_LOG(WARN,"failed to check if column hit update stmt[%ld],cid[%ld]",table_id, cid);
      break;
    }
    if(OB_SUCCESS == ret && !rowkey_info.is_rowkey_column(cid) && (column_hit_index_flag || column_in_update_stmt_flag))
    {
      if (table_schema->get_table_id() == table_item->table_id_)
      {
        ObBinaryRefRawExpr col_expr(table_id, cid, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(
              common::OB_INVALID_ID,
              table_id,
              cid,
              &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(
               output_expr,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS
            || (ret = table_rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
        // for IncScan
        ObConstRawExpr col_expr2;
        ObObj null_obj;
        col_expr2.set_value_and_type(null_obj);
        ObSqlRawExpr col_raw_expr2(
              common::OB_INVALID_ID,
              table_id,
              cid,
              &col_expr2);
        ObSqlExpression output_expr2;
        if ((ret = col_raw_expr2.fill_sql_expression(
               output_expr2,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns failed");
          break;
        }
        else if (OB_SUCCESS != (ret = get_param_values->add_value(output_expr2)))
        {
          TRANS_LOG("Failed to add cell into get param, err=%d", ret);
          break;
        }
      }
    }
  }//end for
  // add action flag column
  //modify maoxx 2016/01/26
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    ObSqlExpression column_ref;
    column_ref.set_tid_cid(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
    if (OB_SUCCESS != (ret = ObSqlExpressionUtil::make_column_expr(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID, column_ref)))
    {
      TBSYS_LOG(WARN, "fail to make column expr:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = table_rpc_scan_op->add_output_column(column_ref)))
    {
      TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
    }
  }
  //modify e

  if (ret == OB_SUCCESS)
  {
    if (has_other_cond)
    {
      if (OB_SUCCESS != (ret = filter_op->set_child(0, *fuse_op)))
      {
        TRANS_LOG("Failed to set child, err=%d", ret);
      }
      else
      {
        table_op = filter_op;
      }
    }
    else
    {
      table_op = fuse_op;
    }
  }
  return ret;
}
//add e
//add wangjiahao [dev_update_more] 20151204 :b
int ObTransformer::gen_phy_table_for_update_more(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan*& physical_plan,
    ErrStat& err_stat,
    ObStmt *stmt,
    uint64_t table_id,
    const ObRowkeyInfo &rowkey_info,
    const ObRowDesc &row_desc,
    const ObRowDescExt &row_desc_ext,
    ObPhyOperator*& table_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  TableItem* table_item = NULL;
  ObTableRpcScan *table_rpc_scan_op = NULL;
  ObFilter *filter_op = NULL;
  ObIncScan *inc_scan_op = NULL;
  ObMultipleGetMerge *fuse_op = NULL;
  ObMemSSTableScan *static_data = NULL;
  ObValues *tmp_table = NULL;
  ObFillValues *fill_data = NULL;
  ObExprValues* get_param_values = NULL;
  const ObTableSchema *table_schema = NULL;
  ObRowDesc rowkey_col_map;
  bool full_rowkey_col = true;
  bool has_other_cond = false;
  ObRpcScanHint hint;
  ObSqlReadStrategy sql_read_strategy;

  ObSEArray<ObSqlExpression*, OB_MAX_COLUMN_NUMBER> filter_list;
  bool is_rowkey_simple_filter[OB_MAX_COLUMN_NUMBER];

  ObObj rowkey_objs[OB_MAX_ROWKEY_COLUMN_NUMBER]; // used for constructing GetParam
  ObPostfixExpression::ObPostExprNodeType type_objs[OB_MAX_ROWKEY_COLUMN_NUMBER];
  ModuleArena rowkey_alloc(OB_MAX_VARCHAR_LENGTH, ModulePageAllocator(ObModIds::OB_SQL_TRANSFORMER));
  ObCellInfo cell_info;
  cell_info.table_id_ = table_id;
  cell_info.row_key_.assign(rowkey_objs, rowkey_info.get_size());

  hint.is_get_skip_empty_row_ = false;


  if (table_id == OB_INVALID_ID
      || (table_item = stmt->get_table_item_by_id(table_id)) == NULL
      || TableItem::BASE_TABLE != table_item->type_)
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Wrong table id, tid=%lu", table_id);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(table_rpc_scan_op, ObTableRpcScan, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if ((ret = table_rpc_scan_op->set_table(table_item->table_id_, table_item->ref_id_)) != OB_SUCCESS)
  {
    TRANS_LOG("ObTableRpcScan set table failed");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(tmp_table, ObValues, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = tmp_table->set_child(0, *table_rpc_scan_op)))
  {
    TBSYS_LOG(WARN, "failed to set child op, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(tmp_table)))
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (NULL == CREATE_PHY_OPERRATOR(filter_op, ObFilter, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(inc_scan_op, ObIncScan, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(fuse_op, ObMultipleGetMerge, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(static_data, ObMemSSTableScan, physical_plan, err_stat))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(0, *static_data)))
  {
  }
  else if (OB_SUCCESS != (ret = fuse_op->set_child(1, *inc_scan_op)))
  {
  }
  //new operator for fill ObExprValues
  else if (NULL == CREATE_PHY_OPERRATOR(fill_data, ObFillValues, physical_plan, err_stat))
  {
  }
  else if (NULL == CREATE_PHY_OPERRATOR(get_param_values, ObExprValues, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  //add the two operator and fill values into ObExprValues from ObValues
  else if (OB_SUCCESS != (ret = fill_data->set_op(tmp_table, get_param_values)))
  {
    TBSYS_LOG(WARN, "failed to set child op, err=%d", ret);
  }
  else if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("Fail to get table schema for table[%ld]", table_id);
  }
  else if ((ret = physical_plan->add_base_table_version(
                                    table_id,
                                    table_schema->get_schema_version()
                                    )) != OB_SUCCESS)
  {
    TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_id, ret);
  }
  else
  {
    fuse_op->set_is_ups_row(false);

    inc_scan_op->set_scan_type(ObIncScan::ST_MGET);
    inc_scan_op->set_write_lock_flag();
    inc_scan_op->set_hotspot(stmt->get_query_hint().hotspot_);
    inc_scan_op->set_values(get_param_values->get_id(), false);

    static_data->set_tmp_table(tmp_table->get_id());

    table_rpc_scan_op->set_rowkey_cell_count(row_desc.get_rowkey_cell_count());
    table_rpc_scan_op->set_need_cache_frozen_data(true);

    fill_data->set_rowkey_info(rowkey_info);

    get_param_values->set_row_desc(row_desc, row_desc_ext);

    sql_read_strategy.set_rowkey_info(table_schema->get_rowkey_info());

    // set filters
    int32_t num = stmt->get_condition_size();
    uint64_t cid = OB_INVALID_ID;
    int64_t cond_op = T_INVALID;
    ObObj cond_val;
    ObPostfixExpression::ObPostExprNodeType val_type = ObPostfixExpression::BEGIN_TYPE;
    int64_t rowkey_idx = OB_INVALID_INDEX;
    ObRowkeyColumn rowkey_col;

    for (int32_t i = 0; i < num; i++)
    {
      ObSqlRawExpr *cnd_expr = logical_plan->get_expr(stmt->get_condition_id(i));
      OB_ASSERT(cnd_expr);
      cnd_expr->set_applied(true);
      ObSqlExpression *filter = ObSqlExpression::alloc();

      if (NULL == filter)
      {
        TRANS_LOG("no memory");
        ret = OB_ALLOCATE_MEMORY_FAILED;
        break;
      }
      else if (OB_SUCCESS != (ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)))
      {
        ObSqlExpression::free(filter);
        TRANS_LOG("Failed to fill expression, err=%d", ret);
        break;
      }
      else if (OB_SUCCESS != (ret = filter_list.push_back(filter)))
      {
        TRANS_LOG("Failed add filter list, err=%d", ret);
        break;
      }

      if (OB_UNLIKELY(i > OB_MAX_COLUMN_NUMBER))
      {
        ret = OB_SIZE_OVERFLOW;
        TRANS_LOG("Filter num is overflow");
        break;
      }
      else
      {
        is_rowkey_simple_filter[i] = false;
      }

      if (filter->is_simple_condition(false, cid, cond_op, cond_val, &val_type)
               && (T_OP_EQ == cond_op || T_OP_IS == cond_op)
               && rowkey_info.is_rowkey_column(cid))
      {
	is_rowkey_simple_filter[i] = true;
        if (OB_SUCCESS != (ret = rowkey_col_map.add_column_desc(OB_INVALID_ID, cid)))
        {
          TRANS_LOG("Failed to add column desc, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = rowkey_info.get_index(cid, rowkey_idx, rowkey_col)))
        {
          TRANS_LOG("Unexpected branch");
          ret = OB_ERR_UNEXPECTED;
          break;
        }

        else if (OB_SUCCESS != (ret = ob_write_obj(rowkey_alloc, cond_val, rowkey_objs[rowkey_idx]))) // deep copy
        {
          TRANS_LOG("failed to copy cell, err=%d", ret);
        }
        else
        {
          type_objs[rowkey_idx] = val_type;
          TBSYS_LOG(DEBUG, "rowkey obj, i=%ld val=%s", rowkey_idx, to_cstring(cond_val));
        }
      }
      else
      {
        // other condition
        has_other_cond = true;
        ObSqlExpression *filter_clone = ObSqlExpression::alloc();
        *filter_clone = *filter;
        if (OB_SUCCESS != (ret = filter_op->add_filter(filter_clone)))
        {
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
      }

      if (OB_SUCCESS != (ret = sql_read_strategy.add_filter(*filter)))
      {
        TBSYS_LOG(WARN, "fail to add filter:ret[%d]", ret);
        break;
      }

    } // end for

    //set full_rowkey_col true if all rowkey is appear
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      int64_t rowkey_col_num = rowkey_info.get_size();
      uint64_t cid = OB_INVALID_ID;
      for (int64_t i = 0; i < rowkey_col_num; ++i)
      {
        if (OB_SUCCESS != (ret = rowkey_info.get_column_id(i, cid)))
        {
          TRANS_LOG("Failed to get column id, err=%d", ret);
          break;
        }
        else if (OB_INVALID_INDEX == rowkey_col_map.get_idx(OB_INVALID_ID, cid))
        {
          full_rowkey_col = false;
          break;
        }
      } // end for
    }

    //set hint
    if (full_rowkey_col)
    {
      hint.read_method_ = ObSqlReadStrategy::USE_GET;
      hint.read_consistency_ = FROZEN;
    }
    else
    {
      //if you do not have full rowkey columns, need to fetch and fill them.
      if (OB_SUCCESS != (ret = physical_plan->add_phy_query(fill_data)))
      {
        TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
      }
      ObString name = ObString::make_string(OB_READ_CONSISTENCY);
      ObObj value;
      int64_t read_consistency_level_val = 0;
      hint.read_consistency_ = common::STRONG;
      sql_context_->session_info_->get_sys_variable_value(name, value);
      value.get_int(read_consistency_level_val);
      hint.read_consistency_ = static_cast<ObConsistencyLevel>(read_consistency_level_val);

      int32_t read_method = ObSqlReadStrategy::USE_SCAN;
      // Determine Scan or Get?
      ObArray<ObRowkey> rowkey_array;
      // TODO: rowkey obj storage needed. varchar use orginal buffer, will be copied later
      PageArena<ObObj,ModulePageAllocator> rowkey_objs_allocator(
          PageArena<ObObj, ModulePageAllocator>::DEFAULT_PAGE_SIZE,ModulePageAllocator(ObModIds::OB_SQL_TRANSFORMER));
      // ObObj rowkey_objs[OB_MAX_ROWKEY_COLUMN_NUMBER];

      if (OB_SUCCESS != (ret = sql_read_strategy.get_read_method(rowkey_array, rowkey_objs_allocator, read_method)))
      {
        TBSYS_LOG(WARN, "fail to get read method:ret[%d]", ret);
      }
      else
      {
        TBSYS_LOG(DEBUG, "use [%s] method", read_method == ObSqlReadStrategy::USE_SCAN ? "SCAN" : "GET");
      }
      hint.read_method_ = read_method;
    }
  }

  if (OB_UNLIKELY(OB_SUCCESS != ret))
  {}
  else if (OB_SUCCESS != (ret = physical_plan->add_phy_query(get_param_values))) //after the decision whether fill_data add to the plan
  {
    TBSYS_LOG(WARN, "failed to add sub query, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = table_rpc_scan_op->init(sql_context_, &hint))) //init after hint was set
  {
    TRANS_LOG("ObTableRpcScan init failed");
  }
  else
  {
    //add filters
    for (int32_t i = 0; ret == OB_SUCCESS && i < filter_list.count(); i++)
    {  
      if (is_rowkey_simple_filter[i] || !full_rowkey_col)
      {
        if (OB_SUCCESS != (ret = table_rpc_scan_op->add_filter(filter_list.at(i))))
        {
          TRANS_LOG("Failed to add filter, err=%d", ret);
          break;
        }
      }
    }
  }

  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    // add output columns
    int32_t num = stmt->get_column_size();
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {

      const ColumnItem *col_item = stmt->get_column_item(i);    
      if (col_item && col_item->table_id_ == table_item->table_id_)
      {
        ObBinaryRefRawExpr col_expr(col_item->table_id_, col_item->column_id_, T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(
          common::OB_INVALID_ID,
          col_item->table_id_,
          col_item->column_id_,
          &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(
               output_expr,
               this,
               logical_plan,
               physical_plan)) != OB_SUCCESS
            || (ret = table_rpc_scan_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }
        // for IncScan
        if (full_rowkey_col)
        {
          ObConstRawExpr col_expr2;
          if (i < rowkey_info.get_size()) // rowkey column
          {
            if (OB_SUCCESS != (ret = col_expr2.set_value_and_type(rowkey_objs[i])))
            {
              TBSYS_LOG(WARN, "failed to set value, err=%d", ret);
              break;
            }
            else
            {
              switch (type_objs[i])
              {
                case ObPostfixExpression::PARAM_IDX:
                  col_expr2.set_expr_type(T_QUESTIONMARK);
                  col_expr2.set_result_type(ObVarcharType);
                  break;
                case ObPostfixExpression::SYSTEM_VAR:
                  col_expr2.set_expr_type(T_SYSTEM_VARIABLE);
                  col_expr2.set_result_type(ObVarcharType);
                  break;
                case ObPostfixExpression::TEMP_VAR:
                  col_expr2.set_expr_type(T_TEMP_VARIABLE);
                  col_expr2.set_result_type(ObVarcharType);
                  break;
                default:
                  break;
              }
            }
          }
          else
          {
            ObObj null_obj;
            col_expr2.set_value_and_type(null_obj);
          }
          ObSqlRawExpr col_raw_expr2(
            common::OB_INVALID_ID,
            col_item->table_id_,
            col_item->column_id_,
            &col_expr2);
          ObSqlExpression output_expr2;
          if ((ret = col_raw_expr2.fill_sql_expression(
                 output_expr2,
                 this,
                 logical_plan,
                 physical_plan)) != OB_SUCCESS)
          {
            TRANS_LOG("Add table output columns failed");
            break;
          }
          else if (OB_SUCCESS != (ret = get_param_values->add_value(output_expr2)))
          {
            TRANS_LOG("Failed to add cell into get param, err=%d", ret);
            break;
          }
        }
      }
    } // end for
  }
  // add action flag column
  if (full_rowkey_col && OB_SUCCESS == ret)
  {
    ObSqlExpression column_ref;
    column_ref.set_tid_cid(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
    if (OB_SUCCESS != (ret = ObSqlExpressionUtil::make_column_expr(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID, column_ref)))
    {
      TBSYS_LOG(WARN, "fail to make column expr:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = table_rpc_scan_op->add_output_column(column_ref)))
    {
      TBSYS_LOG(WARN, "failed to add output column, err=%d", ret);
    }
  }

  if (OB_SUCCESS == ret)
  {
    if (has_other_cond)
    {
      if (OB_SUCCESS != (ret = filter_op->set_child(0, *fuse_op)))
      {
        TRANS_LOG("Failed to set child, err=%d", ret);
      }
      else
      {
        table_op = filter_op;
      }
    }
    else
    {
      table_op = fuse_op;
    }
  }
  return ret;
}
//add :e

int ObTransformer::cons_row_desc(const uint64_t table_id,
                                 const ObStmt *stmt,
                                 ObRowDescExt &row_desc_ext,
                                 ObRowDesc &row_desc,
                                 const ObRowkeyInfo *&rowkey_info,
                                 ObSEArray<int64_t, 64> &row_desc_map,
                                 ErrStat& err_stat)
{
  OB_ASSERT(sql_context_);
  OB_ASSERT(sql_context_->schema_manager_);
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  const ObTableSchema *table_schema = NULL;
  if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
  {
    ret = OB_ERR_ILLEGAL_ID;
    TRANS_LOG("fail to get table schema for table[%ld]", table_id);
  }
  else
  {
    rowkey_info = &table_schema->get_rowkey_info();
    int64_t rowkey_col_num = rowkey_info->get_size();
    row_desc.set_rowkey_cell_count(rowkey_col_num);

    int32_t column_num = stmt->get_column_size();
    const ColumnItem* column_item = NULL;
    row_desc_map.clear();
    row_desc_map.reserve(column_num);
    ObObj data_type;
    // construct rowkey columns first
    for (int64_t i = 0; OB_SUCCESS == ret && i < rowkey_col_num; ++i) // for each primary key
    {
      const ObRowkeyColumn *rowkey_column = rowkey_info->get_column(i);
      OB_ASSERT(rowkey_column);
      // find it's index in the input columns
      for (int32_t j = 0; ret == OB_SUCCESS && j < column_num; ++j)
      {
        column_item = stmt->get_column_item(j);
        OB_ASSERT(column_item);
        OB_ASSERT(table_id == column_item->table_id_);
        if (rowkey_column->column_id_ == column_item->column_id_)
        {
          if (OB_SUCCESS != (ret = row_desc_map.push_back(j)))
          {
            TRANS_LOG("failed to add index map, err=%d", ret);
          }
          else if (OB_SUCCESS != (ret = row_desc.add_column_desc(column_item->table_id_, column_item->column_id_)))
          {
            TRANS_LOG("failed to add row desc, err=%d", ret);
          }
          else
          {
            data_type.set_type(rowkey_column->type_);
            if (OB_SUCCESS != (ret = row_desc_ext.add_column_desc(column_item->table_id_, column_item->column_id_, data_type)))
            {
              TRANS_LOG("failed to add row desc, err=%d", ret);
            }
          }
          break;
        }
      } // end for
    }   // end for
    // then construct other columns
    const ObColumnSchemaV2* column_schema = NULL;
    for (int32_t i = 0; ret == OB_SUCCESS && i < column_num; ++i)
    {
      column_item = stmt->get_column_item(i);
      OB_ASSERT(column_item);
      OB_ASSERT(table_id == column_item->table_id_);
      if (!rowkey_info->is_rowkey_column(column_item->column_id_))
      {
        if (NULL == (column_schema = sql_context_->schema_manager_->get_column_schema(column_item->table_id_, column_item->column_id_)))
        {
          ret = OB_ERR_COLUMN_NOT_FOUND;
          TRANS_LOG("Get column item failed");
          break;
        }
        else if (OB_SUCCESS != (ret = row_desc_map.push_back(i)))
        {
          TRANS_LOG("failed to add index map, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = row_desc.add_column_desc(column_item->table_id_, column_item->column_id_)))
        {
          TRANS_LOG("failed to add row desc, err=%d", ret);
        }
        else
        {
          data_type.set_type(column_schema->get_type());
          if (OB_SUCCESS != (ret = row_desc_ext.add_column_desc(column_item->table_id_, column_item->column_id_, data_type)))
          {
            TRANS_LOG("failed to add row desc, err=%d", ret);
          }
        }
      } // end if not rowkey column
    }   // end for
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      TBSYS_LOG(DEBUG, "row_desc=%s map_count=%ld", to_cstring(row_desc), row_desc_map.count());
    }
  }
  return ret;
}

//add maoxx
int ObTransformer::column_in_stmt(const ObStmt *stmt, uint64_t table_id, uint64_t cid, bool &in_stmt_flag)
{
  int ret = OB_SUCCESS;
  if(NULL == stmt)
  {
    ret = OB_INVALID_ARGUMENT;
  }
  else
  {
    const ColumnItem *column_item = NULL;
    for(int32_t i = 0; i < stmt->get_column_size(); i++)
    {
      if(NULL == (column_item = stmt->get_column_item(i)))
      {
        ret = OB_INVALID_ARGUMENT;
        TBSYS_LOG(WARN, "stmt pointer cannot be NULL, i = %d, ret = %d", i, ret);
        break;
      }
      else if(table_id != column_item->table_id_)
      {
        ret = OB_INVALID_ARGUMENT;
        TBSYS_LOG(WARN, "table_id is not equal item,table_id[%ld], column_item_tid[%ld]",table_id, column_item->table_id_);
        break;
      }
      else if(cid == column_item->column_id_)
      {
        in_stmt_flag = true;
        break;
      }
    }
  }
  return ret;
}
//add e

int ObTransformer::gen_physical_update_new(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan*& physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObUpdateStmt *update_stmt = NULL;
  ObUpsModifyWithDmlType *ups_modify = NULL;
  ObProject *project_op = NULL;
  uint64_t table_id = OB_INVALID_ID;
  const ObRowkeyInfo *rowkey_info = NULL;
  ObRowDesc row_desc;
  ObRowDescExt row_desc_ext;
  ObSEArray<int64_t, 64> row_desc_map;
  ObPhysicalPlan* inner_plan = NULL;
  //add maoxx
  bool column_hit_index_flag = false;
  IndexList hit_index_list;
  ObIndexTrigger *index_trigger = NULL;
  //add e
  if (OB_SUCCESS != (ret = wrap_ups_executor(physical_plan, query_id, inner_plan, index, err_stat)))
  {
    TBSYS_LOG(WARN, "err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, update_stmt)))
  {
  }
  /* generate root operator */
  else if (NULL == CREATE_PHY_OPERRATOR(ups_modify, ObUpsModifyWithDmlType, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(ups_modify, physical_plan == inner_plan ? index : NULL, physical_plan != inner_plan)))
  {
    TRANS_LOG("Add ups_modify operator failed");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(project_op, ObProject, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if (OB_SUCCESS != (ret = cons_row_desc(update_stmt->get_update_table_id(), update_stmt, row_desc_ext, row_desc, rowkey_info, row_desc_map, err_stat)))
  {
  }
  else
  {
    table_id = update_stmt->get_update_table_id();
    ups_modify->set_dml_type(OB_DML_UPDATE);
    ups_modify->set_table_id(table_id); //add wangjiahao [table lock] 20160616
  }
  ObSqlExpression expr;
  // fill rowkey columns into the Project op
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    uint64_t tid = OB_INVALID_ID;
    uint64_t cid = OB_INVALID_ID;
    for (int64_t i = 0; i < row_desc.get_rowkey_cell_count(); ++i)
    {
      if (OB_SUCCESS != (ret = row_desc.get_tid_cid(i, tid, cid)))
      {
        TRANS_LOG("Failed to get tid cid");
        break;
      }
      else
      {
        ObBinaryRefRawExpr col_raw_ref(tid, cid, T_REF_COLUMN);
        expr.reset();
        expr.set_tid_cid(tid, cid);
        ObSqlRawExpr col_ref(0, tid, cid, &col_raw_ref);
        if (OB_SUCCESS != (ret = col_ref.fill_sql_expression(expr, this, logical_plan, inner_plan)))
        {
          TRANS_LOG("Failed to fill expression, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = project_op->add_output_column(expr)))
        {
          TRANS_LOG("Failed to add output column");
          break;
        }
      }
    }
  }
  /* check and fill set column=expr pairs */
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    ObSqlRawExpr *raw_expr = NULL;
    uint64_t column_id = OB_INVALID_ID;
    uint64_t expr_id = OB_INVALID_ID;
    const ObColumnSchemaV2* column_schema = NULL;

    for (int64_t column_idx = 0; column_idx < update_stmt->get_update_column_count(); column_idx++)
    {
      expr.reset();
      // valid check
      // 1. rowkey can't be updated
      // 2. joined column can't be updated
      if (OB_SUCCESS != (ret = update_stmt->get_update_column_id(column_idx, column_id)))
      {
        TRANS_LOG("fail to get update column id for table %lu column_idx=%lu", table_id, column_idx);
        break;
      }
      else if (NULL == (column_schema = sql_context_->schema_manager_->get_column_schema(table_id, column_id)))
      {
        ret = OB_ERR_COLUMN_NOT_FOUND;
        TRANS_LOG("Get column item failed");
        break;
      }
      else if (true == column_schema->is_join_column())
      {
        ret = OB_ERR_UPDATE_JOIN_COLUMN;
        TRANS_LOG("join column '%s' can not be updated", column_schema->get_name());
        break;
      }
      else if (rowkey_info->is_rowkey_column(column_id))
      {
        ret = OB_ERR_UPDATE_ROWKEY_COLUMN;
        TRANS_LOG("rowkey column '%s' can not be updated", column_schema->get_name());
        break;
      }
      else if (column_schema->get_type() == ObCreateTimeType || column_schema->get_type() == ObModifyTimeType)
      {
        ret = OB_ERR_CREAT_MODIFY_TIME_COLUMN;
        TRANS_LOG("Column '%s' of type ObCreateTimeType/ObModifyTimeType can not be updated", column_schema->get_name());
        break;
      }
      // get expression
      else if (OB_SUCCESS != (ret = update_stmt->get_update_expr_id(column_idx, expr_id)))
      {
        TBSYS_LOG(WARN, "fail to get update expr for table %lu column %lu. column_idx=%ld", table_id, column_id, column_idx);
        break;
      }
      else if (NULL == (raw_expr = logical_plan->get_expr(expr_id)))
      {
        TBSYS_LOG(WARN, "fail to get expr from logical plan for table %lu column %lu. column_idx=%ld", table_id, column_id, column_idx);
        ret = OB_ERR_UNEXPECTED;
        break;
      }
      else if (OB_SUCCESS != (ret = raw_expr->fill_sql_expression(expr, this, logical_plan, inner_plan)))
      {
        TBSYS_LOG(WARN, "fail to fill sql expression. ret=%d", ret);
        break;
      }
      else
      {
        expr.set_tid_cid(table_id, column_id);
        // add <column_id, expression> to project operator
        if (OB_SUCCESS != (ret = project_op->add_output_column(expr)))
        {
          TRANS_LOG("fail to add update expr to update operator");
          break;
        }
      }
      //add maoxx
      if(OB_LIKELY(OB_SUCCESS == ret))
      {
        if(sql_context_->schema_manager_->is_modify_expire_condition(table_id, column_id))
        {
          uint64_t expire_table_id = OB_INVALID_ID;
          uint64_t cid = OB_INVALID_ID;
          int64_t cond_op = OB_INVALID_ID;
          ObObj cond_val;
          ObPostfixExpression::ObPostExprNodeType val_type;
          ObString  table_name;
          bool have_modifiable_index_flag = false;
          UNUSED(have_modifiable_index_flag); // add longfei [merge maoxx] 20151115
          for(int32_t i = 0; i < update_stmt->get_condition_size(); i++)
          {
            ObSqlRawExpr *cnd_expr = logical_plan->get_expr(update_stmt->get_condition_id(i));
            OB_ASSERT(cnd_expr);
            cnd_expr->set_applied(true);
            ObSqlExpression *filter = ObSqlExpression::alloc();
            if (NULL == filter)
            {
              TRANS_LOG("no memory");
              ret = OB_ALLOCATE_MEMORY_FAILED;
              break;
            }
            else if (OB_SUCCESS != (ret = cnd_expr->fill_sql_expression(*filter, this, logical_plan, physical_plan)))
            {
              ObSqlExpression::free(filter);
              TRANS_LOG("Failed to fill expression, err=%d", ret);
              break;
            }
            else if (filter->is_simple_condition(false, cid, cond_op, cond_val, &val_type)
                       && (T_OP_EQ == cond_op || T_OP_IS == cond_op)
                       && rowkey_info->is_rowkey_column(cid))
            {
              table_name.reset();
              if(OB_SUCCESS != (ret = cond_val.get_varchar(table_name)))
              {
                TBSYS_LOG(WARN,"get table name from update sql!ret[%d]",ret);
              }
              else if(NULL == sql_context_->schema_manager_->get_table_schema(table_name))
              {
                TBSYS_LOG(WARN,"failed to get schema from expire info sql");
                ret = OB_SCHEMA_ERROR;
              }
              else
              {
                expire_table_id = sql_context_->schema_manager_->get_table_schema(table_name)->get_table_id();
                break;
              }
             }
           }
           if(OB_SUCCESS == ret)
           {
             if(sql_context_->schema_manager_->is_have_modifiable_index(expire_table_id))
             {
               TRANS_LOG("can not update expire condition ,because table has index!");
               ret = OB_ERROR;
             }
           }
         }
       }
      if(OB_LIKELY(OB_SUCCESS == ret))
      {
        if(OB_SUCCESS != (ret = sql_context_->schema_manager_->column_hit_index(table_id, column_id, hit_index_list)))
        {
          TBSYS_LOG(WARN,"failed to get if column hit index!table_id[%ld],column_id[%ld]",table_id, column_id);
        }
        else if(hit_index_list.get_count() > 0)
        {
          column_hit_index_flag = true;
        }
      }
      //add e
    } // end for
  }
  //add maoxx
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    if(column_hit_index_flag)
    {
      if (NULL == CREATE_PHY_OPERRATOR(index_trigger, ObIndexTrigger, inner_plan, err_stat))
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TRANS_LOG("Failed to create phy operator index_trigger");
      }
      else if (OB_SUCCESS != (ret = index_trigger->set_child(0, *project_op)))
      {
        TRANS_LOG("Failed to set child, err=%d", ret);
      }
      else if (NULL != index_trigger)
      {
        int sql_type = 2;
        index_trigger->set_sql_type(sql_type);
        index_trigger->set_data_tid(update_stmt->get_update_table_id());
        index_trigger->set_need_modify_index_num(hit_index_list.get_count());
        index_trigger->set_post_data_row_desc(row_desc);
        for(int64_t i = 0; i < hit_index_list.get_count(); i++)
        {
          const ObTableSchema* index_schema = NULL;
          uint64_t index_tid = OB_INVALID_ID;
          uint64_t index_cid = OB_INVALID_ID;
          hit_index_list.get_idx_id(i, index_tid);
          if(OB_INVALID_ID != index_tid)
          {
            index_schema = sql_context_->schema_manager_->get_table_schema(index_tid);
            if(NULL == index_schema)
            {
              TBSYS_LOG(WARN,"get index schema failed!");
              ret = OB_SCHEMA_ERROR;
              break;
            }
            else
            {
              const ObRowkeyInfo idx_ori = index_schema->get_rowkey_info();
              ObRowDesc idx_del,idx_ins;
              idx_del.reset();
              idx_ins.reset();
              idx_del.set_rowkey_cell_count(idx_ori.get_size());
              idx_ins.set_rowkey_cell_count(idx_ori.get_size());
              for(int64_t j = 0; j < idx_ori.get_size(); j++)
              {
                if(OB_SUCCESS != (ret = idx_ori.get_column_id(j, index_cid)))
                {
                  TBSYS_LOG(WARN,"get_column_id for rowkey failed!");
                  ret = OB_ERROR;
                  break;
                }
                else
                {
                  if(OB_SUCCESS != (ret = idx_del.add_column_desc(index_tid, index_cid)))
                  {
                    TBSYS_LOG(WARN,"idx_del.add_column_desc occur an error,ret[%d]",ret);
                  }
                  else if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, index_cid)))
                  {
                    TBSYS_LOG(WARN,"idx_upd.add_column_desc occur an error,ret[%d]",ret);
                  }
                }
              }
              if(OB_SUCCESS == ret && OB_SUCCESS != (ret = idx_del.add_column_desc(index_tid,OB_ACTION_FLAG_COLUMN_ID)))
              {
                TBSYS_LOG(WARN,"idx_del.add_column_desc occur an error,ret[%d]",ret);
              }
              else
              {
                for (int64_t k = OB_APP_MIN_COLUMN_ID; k <= (int64_t)(index_schema->get_max_column_id()); k++)
                {
                  const ObColumnSchemaV2* idx_ocs = sql_context_->schema_manager_->get_column_schema(index_tid, k);
                  if(idx_ori.is_rowkey_column(k) || NULL == idx_ocs)
                  {

                  }
                  else
                  {
                    index_cid = idx_ocs->get_id();
                    if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, index_cid)))
                    {
                      TBSYS_LOG(ERROR,"error in add_column_desc");
                      break;
                    }
                  }
                }//end for
                /*if(OB_SUCCESS == ret && sql_context_->schema_manager_->is_index_has_storing(index_tid))
                              {
                                  if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, OB_INDEX_VIRTUAL_COLUMN_ID)))
                                  {
                                      TBSYS_LOG(WARN, "add index vitual column failed,ret = %d", ret);
                                  }
                              }*/
              }
              if(OB_SUCCESS == ret && (OB_SUCCESS != (ret = index_trigger->add_row_desc_del(i, idx_del))||OB_SUCCESS != (ret = index_trigger->add_row_desc_ins(i, idx_ins))))
              {
                TBSYS_LOG(ERROR,"construct row desc error");
                ret = OB_ERROR;
              }
            }
          }
        }//end for
        if(OB_SUCCESS == ret)
        {
          row_desc.reset();
          row_desc_ext.reset();
          if(OB_SUCCESS == (ret = cons_whole_row_desc_for_update(update_stmt, table_id, row_desc, row_desc_ext)))
          {
            index_trigger->set_pre_data_row_desc(row_desc);
          }
          else
          {
            TBSYS_LOG(ERROR,"cons whole row desc error!");
            ret = OB_INVALID_ARGUMENT;
          }
        }
        /*if(OB_SUCCESS == ret)
              {
                int64_t index_num = 0;
                IndexList modifiable_index_list;
                if(OB_SUCCESS == (ret = sql_context_->schema_manager_->get_all_modifiable_index_num(table_id, modifiable_index_list)))
                {
                  index_trigger->set_index_num(modifiable_index_list.get_count());
                }
                else
                {
                  TBSYS_LOG(ERROR,"failed get all modifiable index num,table id=%ld  ret=[%d]",table_id ,ret);
                }
              }
              if(OB_SUCCESS == ret)
              {
                  const ObColumnSchemaV2 *upd_ocs = NULL;
                  uint64_t expr_id = OB_INVALID_ID;
                  ObSqlRawExpr *raw_expr = NULL;
                  ObObj cast_obj;
                  for (int64_t i = 0; i < update_stmt->get_update_column_count(); i++)
                  {
                      expr.reset();
                      uint64_t upd_cid = OB_INVALID_ID;
                      if (OB_SUCCESS != (ret = update_stmt->get_update_column_id(i, upd_cid)))
                      {
                        TRANS_LOG("fail to get update column id for table %lu column_idx=%lu", table_id, i);
                        break;
                      }
                      else if (NULL == (upd_ocs = sql_context_->schema_manager_->get_column_schema(table_id, upd_cid)))
                      {
                        ret = OB_ERR_COLUMN_NOT_FOUND;
                        TRANS_LOG("Get column item failed");
                        break;
                      }
                      else if (OB_SUCCESS != (ret = update_stmt->get_update_expr_id(i, expr_id)))
                      {
                        TBSYS_LOG(WARN, "fail to get update expr for table %lu column %lu. column_idx=%ld", table_id, upd_cid, i);
                        break;
                      }
                      else if (NULL == (raw_expr = logical_plan->get_expr(expr_id)))
                      {
                        TBSYS_LOG(WARN, "fail to get expr from logical plan for table %lu column %lu. column_idx=%ld", table_id, upd_cid, i);
                        ret = OB_ERR_UNEXPECTED;
                        break;
                      }
                      else if (OB_SUCCESS != (ret = raw_expr->fill_sql_expression(expr, this, logical_plan, inner_plan)))
                      {
                        TBSYS_LOG(WARN, "fail to fill sql expression. ret=%d", ret);
                        break;
                      }
                      else
                      {
                        expr.set_tid_cid(table_id, upd_cid);
                        cast_obj.set_type(upd_ocs->get_type());
                        if (OB_SUCCESS != (ret = index_trigger->add_set_index_column(expr)))
                        {
                          TRANS_LOG("fail to add update expr to update operator,ret [%d]", ret);
                          break;
                        }
                        else if(OB_SUCCESS != (ret = index_trigger->add_set_cast_obj(cast_obj)))
                        {
                          TRANS_LOG("fail to add cast obj to update operator, ret[%d]", ret);
                          break;
                        }
                      }
                  }
              }*/
      }
    }
  }
  ObWhenFilter *when_filter_op = NULL;
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    if (update_stmt->get_when_expr_size() > 0)
    {
      if ((ret = gen_phy_when(logical_plan,
                              inner_plan,
                              err_stat,
                              query_id,
                              *project_op,
                              when_filter_op
                              )) != OB_SUCCESS)
      {
      }
      else if ((ret = ups_modify->set_child(0, *when_filter_op)) != OB_SUCCESS)
      {
        TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
      }
    }
    else
    {
      if(!column_hit_index_flag)
      {
        /*if(OB_SUCCESS != (ret = sql_context_->schema_manager_->get_all_modifiable_index_num(table_id, modifiable_index_list)))
              {
                TRANS_LOG("get all modifiable index_num failed, err=%d", ret);
              }
              else
              {
                project_op->set_index_num(modifiable_index_list.get_count());*/
        if (OB_SUCCESS != (ret = ups_modify->set_child(0, *project_op)))
        {
          TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
        }
        //}
      }
      else
      {
        if (OB_SUCCESS != (ret = ups_modify->set_child(0, *index_trigger)))
        {
          TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
        }
      }
    }
  }
  //add e
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    ObPhyOperator* table_op = NULL;
    if(!column_hit_index_flag)    {
        if (OB_SUCCESS != (ret = gen_phy_table_for_update_more(logical_plan, inner_plan, err_stat,
                                                          update_stmt, table_id, *rowkey_info,
                                                          row_desc, row_desc_ext, table_op)))
        {
        }
        else if (OB_SUCCESS != (ret = project_op->set_child(0, *table_op)))
        {
          TRANS_LOG("Failed to set child, err=%d", ret);
        }
    }
    //modify maoxx
    else
    {
      if (OB_SUCCESS != (ret = gen_phy_table_for_update_new(logical_plan, inner_plan, err_stat,
                                                            update_stmt, table_id, *rowkey_info,
                                                            row_desc, row_desc_ext, table_op)))
      {
      }
      else if (OB_SUCCESS != (ret = project_op->set_child(0, *table_op)))
      {
        TRANS_LOG("Failed to set child, err=%d", ret);
      }
      if(OB_SUCCESS == ret && PHY_FILTER == table_op->get_type())
      {
        index_trigger->set_cond_flag(true);
      }
    }
    //modify e
  }
  if (ret == OB_SUCCESS)
  {
    if ((ret = merge_tables_version(*physical_plan, *inner_plan)) != OB_SUCCESS)
    {
      TRANS_LOG("Failed to add base tables version, err=%d", ret);
    }
  }
  return ret;
}

int ObTransformer::gen_physical_delete_new(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan* physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(physical_plan);
  ObDeleteStmt *delete_stmt = NULL;
  ObUpsModifyWithDmlType *ups_modify = NULL;
  ObProject *project_op = NULL;
  uint64_t table_id = OB_INVALID_ID;
  const ObRowkeyInfo *rowkey_info = NULL;
  ObRowDesc row_desc;
  ObRowDescExt row_desc_ext;
  ObSEArray<int64_t, 64> row_desc_map;
  ObPhysicalPlan* inner_plan = NULL;
  //add maoxx
  bool need_modify_index_flag = false;
  IndexList modifiable_index_list;
  ObIndexTrigger *index_trigger = NULL;
  //add e
  if (OB_SUCCESS != (ret = wrap_ups_executor(physical_plan, query_id, inner_plan, index, err_stat)))
  {
    TBSYS_LOG(WARN, "err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, delete_stmt)))
  {
  }
  /* generate root operator */
  else if (NULL == CREATE_PHY_OPERRATOR(ups_modify, ObUpsModifyWithDmlType, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(ups_modify, physical_plan == inner_plan ? index : NULL, physical_plan != inner_plan)))
  {
    TRANS_LOG("Add ups_modify operator failed");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(project_op, ObProject, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if (OB_SUCCESS != (ret = cons_row_desc(delete_stmt->get_delete_table_id(), delete_stmt, row_desc_ext, row_desc, rowkey_info, row_desc_map, err_stat)))
  {
  }
  else
  {
    table_id = delete_stmt->get_delete_table_id();
    ups_modify->set_dml_type(OB_DML_DELETE);
    ups_modify->set_table_id(table_id); // add wangjiahao [table lock] 20160616
  }
  //add maoxx
  if (OB_LIKELY(ret == OB_SUCCESS))
  {
    if(OB_SUCCESS != (ret = sql_context_->schema_manager_->get_all_modifiable_index(delete_stmt->get_delete_table_id(), modifiable_index_list)))
    {
      TBSYS_LOG(WARN,"failed to query if column hit index!table_id[%ld]", delete_stmt->get_delete_table_id());
    }
    else if(modifiable_index_list.get_count() > 0)
    {
      need_modify_index_flag = true;
    }
  }
  //add e
  ObWhenFilter *when_filter_op = NULL;
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    if (delete_stmt->get_when_expr_size() > 0)
    {
      if ((ret = gen_phy_when(logical_plan, inner_plan, err_stat, query_id, *project_op, when_filter_op)) != OB_SUCCESS)
      {
      }
      else if ((ret = ups_modify->set_child(0, *when_filter_op)) != OB_SUCCESS)
      {
        TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
      }
    }
    //add maoxx
    else if (need_modify_index_flag)
    {
      if (NULL == CREATE_PHY_OPERRATOR(index_trigger, ObIndexTrigger, inner_plan, err_stat))
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TRANS_LOG("Failed to create phy operator index_trigger");
      }
      else if (OB_SUCCESS != (ret = ups_modify->set_child(0, *index_trigger)))
      {
        TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = index_trigger->set_child(0, *project_op)))
      {
        TRANS_LOG("Set child of ObDeleteIndex operator failed, err=%d", ret);
      }
      else if (NULL != index_trigger)
      {
        int sql_type = 1;
        index_trigger->set_sql_type(sql_type);
        index_trigger->set_data_tid(delete_stmt->get_delete_table_id());
        index_trigger->set_need_modify_index_num(modifiable_index_list.get_count());
        for(int64_t i = 0; i < modifiable_index_list.get_count(); i++)
        {
          const ObTableSchema* index_schema = NULL;
          uint64_t index_tid = OB_INVALID_ID;
          uint64_t index_cid = OB_INVALID_ID;
          modifiable_index_list.get_idx_id(i, index_tid);
          if(OB_INVALID_ID != index_tid)
          {
            index_schema = sql_context_->schema_manager_->get_table_schema(index_tid);
            if(NULL == index_schema)
            {
              TBSYS_LOG(WARN,"get index schema failed!");
              ret = OB_SCHEMA_ERROR;
              break;
            }
            else
            {
              const ObRowkeyInfo idx_ori = index_schema->get_rowkey_info();
              ObRowDesc idx_del;
              idx_del.reset();
              idx_del.set_rowkey_cell_count(idx_ori.get_size());
              for(int64_t j = 0; j < idx_ori.get_size(); j++)
              {
                if(OB_SUCCESS != (ret = idx_ori.get_column_id(j, index_cid)))
                {
                  TBSYS_LOG(WARN,"get_column_id for rowkey failed!");
                  ret = OB_ERROR;
                  break;
                }
                else
                {
                  if(OB_SUCCESS != (ret = idx_del.add_column_desc(index_tid, index_cid)))
                  {
                    TBSYS_LOG(WARN,"idx_del.add_column_desc occur an error,ret[%d]",ret);
                  }
                }
              }//end for
              if(OB_SUCCESS == ret && OB_SUCCESS != (ret = idx_del.add_column_desc(index_tid, OB_ACTION_FLAG_COLUMN_ID)))
              {
                TBSYS_LOG(WARN,"idx_del.add_column_desc occur an error,ret[%d]",ret);
              }
              if(OB_SUCCESS == ret && (OB_SUCCESS != (ret = index_trigger->add_row_desc_del(i, idx_del))))
              {
                TBSYS_LOG(ERROR,"construct row desc error");
                ret = OB_ERROR;
              }
            }
          }
        }//end for
        if(OB_SUCCESS == ret)
        {
          row_desc.reset();
          row_desc_ext.reset();
          if(OB_SUCCESS == (ret = cons_whole_row_desc_for_delete(table_id, row_desc, row_desc_ext)))
          {
            index_trigger->set_pre_data_row_desc(row_desc);
          }
          else
          {
            TBSYS_LOG(ERROR,"cons whole row desc error!");
            ret = OB_INVALID_ARGUMENT;
          }
        }
      }
    }
    //add e
    else if (OB_SUCCESS != (ret = ups_modify->set_child(0, *project_op)))
    {
      TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
    }
  }
  ObSqlExpression expr;
  // fill rowkey columns into the Project op
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    uint64_t tid = OB_INVALID_ID;
    uint64_t cid = OB_INVALID_ID;
    for (int64_t i = 0; i < row_desc.get_rowkey_cell_count(); ++i)
    {
      if (OB_SUCCESS != (ret = row_desc.get_tid_cid(i, tid, cid)))
      {
        TRANS_LOG("Failed to get tid cid");
        break;
      }
      else
      {
        ObBinaryRefRawExpr col_raw_ref(tid, cid, T_REF_COLUMN);
        expr.reset();
        ObSqlRawExpr col_ref(OB_INVALID_ID, tid, cid, &col_raw_ref);
        if (OB_SUCCESS != (ret = col_ref.fill_sql_expression(expr, this, logical_plan, inner_plan)))
        {
          TRANS_LOG("Failed to fill expression, err=%d", ret);
          break;
        }
        else if (OB_SUCCESS != (ret = project_op->add_output_column(expr)))
        {
          TRANS_LOG("Failed to add output column");
          break;
        }
      }
    }
    // add ObActionFlag::OB_DEL_ROW cell
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      ObObj del_row;
      del_row.set_int(ObActionFlag::OP_DEL_ROW);
      ObConstRawExpr const_expr(del_row, T_INT);
      expr.reset();
      ObSqlRawExpr const_del(OB_INVALID_ID, table_id, OB_ACTION_FLAG_COLUMN_ID, &const_expr);
      if (OB_SUCCESS != (ret = const_del.fill_sql_expression(expr, this, logical_plan, inner_plan)))
      {
        TRANS_LOG("Failed to fill expression, err=%d", ret);
      }
      else if (OB_SUCCESS != (ret = project_op->add_output_column(expr)))
      {
        TRANS_LOG("Failed to add output column");
      }
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    ObPhyOperator* table_op = NULL;
    if (!need_modify_index_flag)    {
        if (OB_SUCCESS != (ret = gen_phy_table_for_update_more(logical_plan, inner_plan, err_stat,
                                                          delete_stmt, table_id, *rowkey_info,
                                                          row_desc, row_desc_ext, table_op)))
        {
        }
        else if (OB_SUCCESS != (ret = project_op->set_child(0, *table_op)))
        {
          TRANS_LOG("Failed to set child, err=%d", ret);
        }
    }
    //modify maoxx
    else
    {
      if (OB_SUCCESS != (ret = gen_phy_table_for_delete(logical_plan, inner_plan, err_stat,
                                                        delete_stmt, table_id, *rowkey_info,
                                                        row_desc, row_desc_ext, table_op)))
      {
      }
      else if (OB_SUCCESS != (ret = project_op->set_child(0, *table_op)))
      {
        TRANS_LOG("Failed to set child, err=%d", ret);
      }
    }
    //modify e
  }
  if (ret == OB_SUCCESS)
  {
    if ((ret = merge_tables_version(*physical_plan, *inner_plan)) != OB_SUCCESS)
    {
      TRANS_LOG("Failed to add base tables version, err=%d", ret);
    }
  }
  return ret;
}

//add maoxx
int ObTransformer::gen_physical_replace_new(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObInsertStmt *insert_stmt = NULL;
  ObPhysicalPlan* inner_plan = NULL;
  ObUpsModifyWithDmlType *ups_modify = NULL;
  ObSEArray<int64_t, 64> row_desc_map;
  ObRowDesc row_desc;
  ObRowDescExt row_desc_ext;
  ObRowDesc row_desc_for_static_data;
  ObRowDescExt row_desc_ext_for_static_data;
  const ObRowkeyInfo *rowkey_info = NULL;
  bool need_modify_index_flag = false;
  IndexList modifiable_index_list;
  ObIndexTrigger *index_trigger = NULL;

  if (OB_SUCCESS != (ret = wrap_ups_executor(physical_plan, query_id, inner_plan, index, err_stat)))
  {
    TBSYS_LOG(WARN, "err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, insert_stmt)))
  {
    TRANS_LOG("Fail to get statement");
  }
  else if (NULL == CREATE_PHY_OPERRATOR(ups_modify, ObUpsModifyWithDmlType, inner_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
  }
  else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(
                            ups_modify,
                            physical_plan == inner_plan ? index : NULL,
                            physical_plan != inner_plan)))
  {
    TRANS_LOG("Failed to add phy query, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = cons_row_desc(insert_stmt->get_table_id(), insert_stmt, row_desc_ext, row_desc, rowkey_info, row_desc_map, err_stat)))
  {
    TRANS_LOG("Failed to cons row desc, err=%d", ret);
  }
  else
  {
    ups_modify->set_dml_type(OB_DML_REPLACE);
    uint64_t tid = insert_stmt->get_table_id();
    uint64_t cid = OB_INVALID_ID;
    for (int64_t i = 0; OB_SUCCESS == ret && i < rowkey_info->get_size(); ++i)
    {
      if (OB_SUCCESS != (ret = rowkey_info->get_column_id(i, cid)))
      {
        TBSYS_LOG(USER_ERROR, "primary key can not be empty");
        ret = OB_ERR_INSERT_NULL_ROWKEY;
        break;
      }
      else if (OB_INVALID_INDEX == row_desc.get_idx(tid, cid))
      {
        TBSYS_LOG(USER_ERROR, "primary key can not be empty");
        ret = OB_ERR_INSERT_NULL_ROWKEY;
        break;
      }
    }//end for

    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      ObObj data_type;
      for (int i = 0; i < row_desc_ext.get_column_num(); ++i)
      {
        if (OB_SUCCESS != (ret = row_desc_ext.get_by_idx(i, tid, cid, data_type)))
        {
          TBSYS_LOG(ERROR, "failed to get type, err=%d", ret);
          ret = OB_ERR_UNEXPECTED;
          break;
        }
        else if (ObCreateTimeType == data_type.get_type()
                 || ObModifyTimeType == data_type.get_type())
        {
          ret = OB_ERR_CREAT_MODIFY_TIME_COLUMN;
          TRANS_LOG("Column of type ObCreateTimeType/ObModifyTimeType can not be inserted");
          break;
        }
      }//end for
    }
  }
  FILL_TRACE_LOG("cons_row_desc");
  if (OB_LIKELY(ret == OB_SUCCESS))
  {
    if(OB_SUCCESS != (ret = sql_context_->schema_manager_->get_all_modifiable_index(insert_stmt->get_table_id(), modifiable_index_list)))
    {
      TBSYS_LOG(WARN,"failed to query if column hit index!table_id[%ld]", insert_stmt->get_table_id());
    }
    else if(modifiable_index_list.get_count() > 0)
    {
      need_modify_index_flag = true;
    }
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    if (need_modify_index_flag)   //replace table with index
    {
      ObTableRpcScan *table_scan = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        ObRpcScanHint hint;
        hint.read_method_ = ObSqlReadStrategy::USE_GET;
        hint.is_get_skip_empty_row_ = false;
        hint.read_consistency_ = FROZEN;
        const ObTableSchema *table_schema = NULL;
        int64_t table_id = insert_stmt->get_table_id();
        CREATE_PHY_OPERRATOR(table_scan, ObTableRpcScan, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if(OB_SUCCESS != (ret = cons_whole_row_desc_for_replace(insert_stmt, insert_stmt->get_table_id(), row_desc_for_static_data, row_desc_ext_for_static_data)))
        {
          TRANS_LOG("fail to cons row desc for static data, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = table_scan->set_table(table_id, table_id)))
        {
          TRANS_LOG("failed to set table id, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = table_scan->init(sql_context_, &hint)))
        {
          TRANS_LOG("failed to init table scan, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = gen_phy_static_data_scan_for_replace(logical_plan, inner_plan, err_stat,
                                                                           insert_stmt, row_desc_for_static_data, row_desc_map,
                                                                           table_id, *rowkey_info, *table_scan)))
        {
          TRANS_LOG("err=%d", ret);
        }
        else if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(table_id)))
        {
          ret = OB_ERR_ILLEGAL_ID;
          TRANS_LOG("Fail to get table schema for table[%ld]", table_id);
        }
        else if ((ret = physical_plan->add_base_table_version(
                    table_id,
                    table_schema->get_schema_version()
                    )) != OB_SUCCESS)
        {
          TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", table_id, ret);
        }
        else
        {
          table_scan->set_rowkey_cell_count(row_desc.get_rowkey_cell_count());
          table_scan->set_cache_bloom_filter(true);
        }
      }
      ObValues *tmp_table = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(tmp_table, ObValues, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if (OB_SUCCESS != (ret = tmp_table->set_child(0, *table_scan)))
        {
          TBSYS_LOG(WARN, "failed to set child, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(tmp_table)))
        {
          TBSYS_LOG(WARN, "failed to add phy query, err=%d", ret);
        }
      }
      ObMemSSTableScan *static_data = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(static_data, ObMemSSTableScan, inner_plan, err_stat);
        if (OB_LIKELY(OB_SUCCESS == ret))
        {
          static_data->set_tmp_table(tmp_table->get_id());
        }
      }
      ObIncScan *inc_scan = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(inc_scan, ObIncScan, inner_plan, err_stat);
        if (OB_LIKELY(OB_SUCCESS == ret))
        {
          inc_scan->set_scan_type(ObIncScan::ST_MGET);
          inc_scan->set_write_lock_flag();
        }
      }
      ObMultipleGetMerge *fuse_op = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(fuse_op, ObMultipleGetMerge, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if ((ret = fuse_op->set_child(0, *static_data)) != OB_SUCCESS)
        {
          TRANS_LOG("Set child of fuse_op operator failed, err=%d", ret);
        }
        else if ((ret = fuse_op->set_child(1, *inc_scan)) != OB_SUCCESS)
        {
          TRANS_LOG("Set child of fuse_op operator failed, err=%d", ret);
        }
        else
        {
          fuse_op->set_is_ups_row(false);
        }
      }
      ObExprValues *input_values = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        CREATE_PHY_OPERRATOR(input_values, ObExprValues, inner_plan, err_stat);
        if (OB_UNLIKELY(OB_SUCCESS != ret))
        {
        }
        else if (OB_SUCCESS != (ret = inner_plan->add_phy_query(input_values)))
        {
          TBSYS_LOG(WARN, "failed to add phy query, err=%d", ret);
        }
        else if ((ret = input_values->set_row_desc(row_desc_for_static_data, row_desc_ext_for_static_data)) != OB_SUCCESS)
        {
          TRANS_LOG("Set descriptor of value operator failed, err=%d", ret);
        }
        else if (OB_SUCCESS != (ret = gen_phy_values_for_replace(logical_plan, inner_plan, err_stat, insert_stmt,
                                                                 row_desc_for_static_data, row_desc_ext_for_static_data, &row_desc_map, *input_values)))
        {
          TRANS_LOG("Failed to generate values, err=%d", ret);
        }
        else
        {
          input_values->set_check_rowkey_duplicate(true);
        }
      }
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        if (NULL == CREATE_PHY_OPERRATOR(index_trigger, ObIndexTrigger, inner_plan, err_stat))
        {
          ret = OB_ALLOCATE_MEMORY_FAILED;
          TRANS_LOG("Failed to create phy operator index_trigger");
        }
        else if (OB_SUCCESS != (ret = index_trigger->set_child(0, *fuse_op)))
        {
          TRANS_LOG("Failed to set child, err=%d", ret);
        }
        else if (NULL != index_trigger)
        {
          int sql_type = 3;
          index_trigger->set_sql_type(sql_type);
          index_trigger->set_data_tid(insert_stmt->get_table_id());
          index_trigger->set_need_modify_index_num(modifiable_index_list.get_count());
          index_trigger->set_pre_data_row_desc(row_desc_for_static_data);
          index_trigger->set_post_data_row_desc(row_desc_for_static_data);
          //index_trigger->set_replace_values_id(input_values->get_id());
          inc_scan->set_values(input_values->get_id(), false);
          input_values->open();
          const ObRow *row;
          while(OB_SUCCESS == (ret = input_values->get_next_row(row)))
          {
            index_trigger->add_post_data_row(*row);
          }
          if(OB_ITER_END == ret)
            ret = OB_SUCCESS;
          for(int64_t i = 0; i < modifiable_index_list.get_count(); i++)
          {
            const ObTableSchema* index_schema = NULL;
            uint64_t index_tid = OB_INVALID_ID;
            uint64_t index_cid = OB_INVALID_ID;
            modifiable_index_list.get_idx_id(i, index_tid);
            if(OB_INVALID_ID != index_tid)
            {
              index_schema = sql_context_->schema_manager_->get_table_schema(index_tid);
              if(NULL == index_schema)
              {
                TBSYS_LOG(WARN,"get index schema failed!");
                ret = OB_SCHEMA_ERROR;
                break;
              }
              else
              {
                const ObRowkeyInfo idx_ori = index_schema->get_rowkey_info();
                ObRowDesc idx_del,idx_ins;
                idx_del.reset();
                idx_ins.reset();
                idx_del.set_rowkey_cell_count(idx_ori.get_size());
                idx_ins.set_rowkey_cell_count(idx_ori.get_size());
                for(int64_t j = 0; j < idx_ori.get_size(); j++)
                {
                  if(OB_SUCCESS != (ret = idx_ori.get_column_id(j, index_cid)))
                  {
                    TBSYS_LOG(WARN,"get_column_id for rowkey failed!");
                    ret = OB_ERROR;
                    break;
                  }
                  else
                  {
                    if(OB_SUCCESS != (ret = idx_del.add_column_desc(index_tid, index_cid)))
                    {
                      TBSYS_LOG(WARN,"idx_del.add_column_desc occur an error,ret[%d]",ret);
                    }
                    else if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, index_cid)))
                    {
                      TBSYS_LOG(WARN,"idx_upd.add_column_desc occur an error,ret[%d]",ret);
                    }
                  }
                }
                if(OB_SUCCESS == ret && OB_SUCCESS != (ret = idx_del.add_column_desc(index_tid,OB_ACTION_FLAG_COLUMN_ID)))
                {
                  TBSYS_LOG(WARN,"idx_del.add_column_desc occur an error,ret[%d]",ret);
                }
                else
                {
                  for (int64_t k = OB_APP_MIN_COLUMN_ID; k <= (int64_t)(index_schema->get_max_column_id()); k++)
                  {
                    const ObColumnSchemaV2* idx_ocs = sql_context_->schema_manager_->get_column_schema(index_tid, k);
                    if(idx_ori.is_rowkey_column(k) || NULL == idx_ocs)
                    {

                    }
                    else
                    {
                      index_cid = idx_ocs->get_id();
                      if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, index_cid)))
                      {
                        TBSYS_LOG(ERROR,"error in add_column_desc");
                        break;
                      }
                    }
                  }//end for
                  /*if(OB_SUCCESS == ret && sql_context_->schema_manager_->is_index_has_storing(index_tid))
                                    {
                                        if(OB_SUCCESS != (ret = idx_ins.add_column_desc(index_tid, OB_INDEX_VIRTUAL_COLUMN_ID)))
                                        {
                                            TBSYS_LOG(WARN, "add index vitual column failed,ret = %d", ret);
                                        }
                                    }*/
                }
                if(OB_SUCCESS == ret && (OB_SUCCESS != (ret = index_trigger->add_row_desc_del(i, idx_del))||OB_SUCCESS != (ret = index_trigger->add_row_desc_ins(i, idx_ins))))
                {
                  TBSYS_LOG(ERROR,"construct row desc error");
                  ret = OB_ERROR;
                }
              }
            }
          }//end for
        }
      }
      ObWhenFilter *when_filter_op = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        if (insert_stmt->get_when_expr_size() > 0)
        {
          if ((ret = gen_phy_when(logical_plan,
                                  inner_plan,
                                  err_stat,
                                  query_id,
                                  *input_values,
                                  when_filter_op
                                  )) != OB_SUCCESS)
          {
          }
          else if ((ret = ups_modify->set_child(0, *when_filter_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
          }
        }
        else
        {
          if (OB_SUCCESS != (ret = ups_modify->set_child(0, *index_trigger)))
          {
            TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
          }
        }
      }
    }
    else   //replace table without index
    {
      ObExprValues *value_op = NULL;
      if (ret == OB_SUCCESS)
      {
        if (OB_LIKELY(insert_stmt->get_insert_query_id() == OB_INVALID_ID))
        {
          CREATE_PHY_OPERRATOR(value_op, ObExprValues, inner_plan, err_stat);
          if (OB_SUCCESS != ret)
          {

          }
          else if ((ret = value_op->set_row_desc(row_desc, row_desc_ext)) != OB_SUCCESS)
          {
            TRANS_LOG("Set descriptor of value operator failed");
          }
          else if (OB_SUCCESS != (ret = gen_phy_values(logical_plan, inner_plan, err_stat, insert_stmt,
                                                       row_desc, row_desc_ext, &row_desc_map, *value_op)))
          {
            TRANS_LOG("Failed to gen expr values, err=%d", ret);
          }
          else
          {
            value_op->set_do_eval_when_serialize(true);
          }
          FILL_TRACE_LOG("gen_phy_values");
        }
        else
        {
          // replace ... select
          TRANS_LOG("REPLACE INTO ... SELECT is not supported yet");
          ret = OB_NOT_SUPPORTED;
        }
      }
      ObWhenFilter *when_filter_op = NULL;
      if (OB_LIKELY(OB_SUCCESS == ret))
      {
        if (insert_stmt->get_when_expr_size() > 0)
        {
          if ((ret = gen_phy_when(logical_plan,
                                  inner_plan,
                                  err_stat,
                                  query_id,
                                  *value_op,
                                  when_filter_op
                                  )) != OB_SUCCESS)
          {
          }
          else if ((ret = ups_modify->set_child(0, *when_filter_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
          }
        }
        else
        {
          if (OB_SUCCESS != (ret = ups_modify->set_child(0, *value_op)))
          {
            TRANS_LOG("Set child of ups_modify operator failed, err=%d", ret);
          }
        }
      }
      if (OB_SUCCESS == ret)
      {
        // record table's schema version
        uint64_t tid = insert_stmt->get_table_id();
        const ObTableSchema *table_schema = NULL;
        if (NULL == (table_schema = sql_context_->schema_manager_->get_table_schema(tid)))
        {
          ret = OB_ERR_ILLEGAL_ID;
          TRANS_LOG("fail to get table schema for table[%ld]", tid);
        }
        else if ((ret = physical_plan->add_base_table_version(
                    tid,
                    table_schema->get_schema_version()
                    )) != OB_SUCCESS)
        {
          TRANS_LOG("Failed to add table version into physical_plan, err=%d", ret);
        }
      }
    }
    if (OB_SUCCESS == ret)
    {
      if ((ret = merge_tables_version(*physical_plan, *inner_plan)) != OB_SUCCESS)
      {
        TRANS_LOG("Failed to add base tables version, err=%d", ret);
      }
    }
  }
  return ret;
}
//add e

int ObTransformer::gen_physical_start_trans(
  ObLogicalPlan *logical_plan,
  ObPhysicalPlan* physical_plan,
  ErrStat& err_stat,
  const uint64_t& query_id,
  int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(physical_plan);
  ObStartTransStmt *stmt = NULL;
  ObStartTrans *start_trans = NULL;
  if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, stmt)))
  {
  }
  /* generate root operator */
  else if (NULL == CREATE_PHY_OPERRATOR(start_trans, ObStartTrans, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if (OB_SUCCESS != (ret = add_phy_query(logical_plan, physical_plan, err_stat,
                                              query_id, stmt, start_trans, index)))
  {
    TRANS_LOG("Add ups_modify operator failed");
  }
  else
  {
    start_trans->set_rpc_stub(sql_context_->merger_rpc_proxy_);
    start_trans->set_trans_param(stmt->get_with_consistent_snapshot() ? READ_ONLY_TRANS : READ_WRITE_TRANS);
  }
  return ret;
}

int ObTransformer::gen_physical_priv_stmt(
  ObLogicalPlan *logical_plan,
  ObPhysicalPlan* physical_plan,
  ErrStat& err_stat,
  const uint64_t& query_id,
  int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(physical_plan);
  ObBasicStmt * stmt = NULL;
  ObPrivExecutor *priv_executor = NULL;
  if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, stmt)))
  {
  }
  /* generate root operator */
  else if (NULL == CREATE_PHY_OPERRATOR(priv_executor, ObPrivExecutor, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if (OB_SUCCESS != (ret = add_phy_query(logical_plan, physical_plan, err_stat,
                                              query_id, stmt, priv_executor, index)))
  {
    TRANS_LOG("Add create user operator failed");
  }
  else
  {
    ObBasicStmt * basic_stmt = NULL;
    // 这块内存是从transform mem pool中分配出来的
    if (stmt->get_stmt_type() == ObBasicStmt::T_CREATE_USER)
    {
      void *ptr = trans_malloc(sizeof(ObCreateUserStmt));
      if (ptr == NULL)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TBSYS_LOG(ERROR, "malloc ObCreateUserStmt in transform mem pool failed, ret=%d", ret);
      }
      else
      {
        basic_stmt = new (ptr) ObCreateUserStmt(*(dynamic_cast<ObCreateUserStmt*>(stmt)));
      }
    }
    else if (stmt->get_stmt_type() == ObBasicStmt::T_DROP_USER)
    {
      void *ptr = trans_malloc(sizeof(ObDropUserStmt));
      if (ptr == NULL)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TBSYS_LOG(ERROR, "malloc ObDropUserStmt in transform mem pool failed, ret=%d", ret);
      }
      else
      {
        basic_stmt = new (ptr) ObDropUserStmt(*(dynamic_cast<ObDropUserStmt*>(stmt)));
      }
    }
    else if (stmt->get_stmt_type() == ObBasicStmt::T_GRANT)
    {
      void *ptr = trans_malloc(sizeof(ObGrantStmt));
      if (ptr == NULL)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TBSYS_LOG(ERROR, "malloc ObGrantStmt in transform mem pool failed, ret=%d", ret);
      }
      else
      {
        basic_stmt = new (ptr) ObGrantStmt(*(dynamic_cast<ObGrantStmt*>(stmt)));
      }
    }
    else if (stmt->get_stmt_type() == ObBasicStmt::T_REVOKE)
    {
      void *ptr = trans_malloc(sizeof(ObRevokeStmt));
      if (ptr == NULL)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TBSYS_LOG(ERROR, "malloc ObRevokeStmt in transform mem pool failed, ret=%d", ret);
      }
      else
      {
        basic_stmt = new (ptr) ObRevokeStmt(*(dynamic_cast<ObRevokeStmt*>(stmt)));
      }
    }
    else if (stmt->get_stmt_type() == ObBasicStmt::T_RENAME_USER)
    {
      void *ptr = trans_malloc(sizeof(ObRenameUserStmt));
      if (ptr == NULL)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TBSYS_LOG(ERROR, "malloc ObRenameUserStmt in transform mem pool failed, ret=%d", ret);
      }
      else
      {
        basic_stmt = new (ptr) ObRenameUserStmt(*(dynamic_cast<ObRenameUserStmt*>(stmt)));
      }
    }
    else if (stmt->get_stmt_type() == ObBasicStmt::T_SET_PASSWORD)
    {
      void *ptr = trans_malloc(sizeof(ObSetPasswordStmt));
      if (ptr == NULL)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TBSYS_LOG(ERROR, "malloc ObSetPasswordStmt in transform mem pool failed, ret=%d", ret);
      }
      else
      {
        basic_stmt = new (ptr) ObSetPasswordStmt(*(dynamic_cast<ObSetPasswordStmt*>(stmt)));
      }
    }
    else if (stmt->get_stmt_type() == ObBasicStmt::T_LOCK_USER)
    {
      void *ptr = trans_malloc(sizeof(ObLockUserStmt));
      if (ptr == NULL)
      {
        ret = OB_ALLOCATE_MEMORY_FAILED;
        TBSYS_LOG(ERROR, "malloc ObGrantStmt in transform mem pool failed, ret=%d", ret);
      }
      else
      {
        basic_stmt = new (ptr) ObLockUserStmt(*(dynamic_cast<ObLockUserStmt*>(stmt)));
      }
    }
    priv_executor->set_stmt(basic_stmt);
    priv_executor->set_context(sql_context_);
  }
  return ret;
}

int ObTransformer::gen_physical_change_obi_stmt(
  ObLogicalPlan *logical_plan,
  ObPhysicalPlan* physical_plan,
  ErrStat& err_stat,
  const uint64_t& query_id,
  int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObChangeObiStmt *change_obi_stmt = NULL;
  ObChangeObi *change_obi = NULL;
  if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, change_obi_stmt)))
  {
  }
  else
  {
    CREATE_PHY_OPERRATOR(change_obi, ObChangeObi, physical_plan, err_stat);
    if (OB_SUCCESS == ret)
    {
      ObString target_server_addr;
      change_obi_stmt->get_target_server_addr(target_server_addr);
      change_obi->set_force(change_obi_stmt->get_force());
      change_obi->set_target_role(change_obi_stmt->get_target_role());
      if (OB_SUCCESS != (ret = change_obi->set_target_server_addr(target_server_addr)))
      {
      }
      else if (OB_SUCCESS != (ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, change_obi_stmt, change_obi, index)))
      {
        TBSYS_LOG(WARN, "add_phy_query failed, ret=%d", ret);
      }
      else
      {
        ObObj old_ob_query_timeout;
        ObObj change_obi_timeout_value;
        change_obi_timeout_value.set_int(mergeserver::ObMergeServerMain::get_instance()->get_merge_server().get_config().change_obi_timeout);
        ObString ob_query_timeout = ObString::make_string(OB_QUERY_TIMEOUT_PARAM);
        if (OB_SUCCESS != (ret = sql_context_->session_info_->get_sys_variable_value(ob_query_timeout, old_ob_query_timeout)))
        {
          TBSYS_LOG(WARN, "get old session timeout value failed, ret=%d", ret);
        }
        else if (OB_SUCCESS != (ret = change_obi->set_change_obi_timeout(change_obi_timeout_value)))
        {
          TBSYS_LOG(ERROR, "set change obi timeout failed, ret=%d", ret);
        }
        else
        {
          change_obi->set_check_ups_log_interval(static_cast<int>(mergeserver::ObMergeServerMain::get_instance()->get_merge_server().get_config().check_ups_log_interval));
          change_obi->set_old_ob_query_timeout(old_ob_query_timeout);
          change_obi->set_context(sql_context_);
        }
      }

    }
  }
  return ret;
}
int ObTransformer::gen_physical_kill_stmt(
  ObLogicalPlan *logical_plan,
  ObPhysicalPlan* physical_plan,
  ErrStat& err_stat,
  const uint64_t& query_id,
  int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObKillStmt *kill_stmt = NULL;
  ObKillSession *kill_op = NULL;

  /* get statement */
  if (ret == OB_SUCCESS)
  {
    get_stmt(logical_plan, err_stat, query_id, kill_stmt);
  }
  /* generate operator */
  if (ret == OB_SUCCESS)
  {
    CREATE_PHY_OPERRATOR(kill_op, ObKillSession, physical_plan, err_stat);
    if (ret == OB_SUCCESS)
    {
      kill_op->set_rpc_stub(sql_context_->merger_rpc_proxy_);
      kill_op->set_session_mgr(sql_context_->session_mgr_);
      ret = add_phy_query(logical_plan, physical_plan, err_stat, query_id, kill_stmt, kill_op, index);
    }
  }

  if (ret == OB_SUCCESS)
  {
    kill_op->set_session_id(kill_stmt->get_thread_id());
    kill_op->set_is_query(kill_stmt->is_query());
    kill_op->set_is_global(kill_stmt->is_global());
  }

  return ret;
}

int ObTransformer::gen_physical_end_trans(
  ObLogicalPlan *logical_plan,
  ObPhysicalPlan* physical_plan,
  ErrStat& err_stat,
  const uint64_t& query_id,
  int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  OB_ASSERT(logical_plan);
  OB_ASSERT(physical_plan);
  ObEndTransStmt *stmt = NULL;
  ObEndTrans *end_trans = NULL;
  if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, stmt)))
  {
  }
  /* generate root operator */
  else if (NULL == CREATE_PHY_OPERRATOR(end_trans, ObEndTrans, physical_plan, err_stat))
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if (OB_SUCCESS != (ret = add_phy_query(logical_plan, physical_plan, err_stat,
                                              query_id, stmt, end_trans, index)))
  {
    TRANS_LOG("Add ups_modify operator failed");
  }
  else
  {
    end_trans->set_rpc_stub(sql_context_->merger_rpc_proxy_);
    end_trans->set_trans_param(sql_context_->session_info_->get_trans_id(), stmt->get_is_rollback());
  }
  return ret;
}

int ObTransformer::gen_phy_select_for_update(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObSelectStmt *select_stmt = NULL;
  ObPhyOperator *result_op = NULL;
  //ObLockFilter *lock_op = NULL;
  ObProject *project_op = NULL;
  uint64_t table_id = OB_INVALID_ID;
  const ObRowkeyInfo *rowkey_info = NULL;
  ObPhysicalPlan *inner_plan = NULL;
  ObRowDesc row_desc;
  ObRowDescExt row_desc_ext;
  ObSEArray<int64_t, 64> row_desc_map;
  if ((ret = get_stmt(logical_plan, err_stat, query_id, select_stmt)) != OB_SUCCESS)
  {
  }
  else if (!select_stmt->is_for_update() || select_stmt->get_from_item_size() > 1 || select_stmt->get_table_size() > 1 || (select_stmt->get_table_size() > 0 && select_stmt->get_table_item(0).type_ != TableItem::BASE_TABLE && select_stmt->get_table_item(0).type_ != TableItem::ALIAS_TABLE) || select_stmt->get_group_expr_size() > 0 || select_stmt->get_agg_fun_size() > 0 || select_stmt->get_order_item_size() > 0 || select_stmt->has_limit())
  {
    ret = OB_NOT_SUPPORTED;
    TRANS_LOG("This select statement is not allowed by implement");
  }
  else if ((ret = wrap_ups_executor(physical_plan, query_id, inner_plan, index, err_stat)) != OB_SUCCESS)
  {
    TBSYS_LOG(WARN, "err=%d", ret);
  }
  /*
   else if (CREATE_PHY_OPERRATOR(lock_op, ObLockFilter, physical_plan, err_stat) == NULL)
   {
   ret = OB_ALLOCATE_MEMORY_FAILED;
   TRANS_LOG("Failed to ObLockFilter operator");
   }
   */
  else if (CREATE_PHY_OPERRATOR(project_op, ObProject, inner_plan,
      err_stat) == NULL)
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if ((ret = inner_plan->add_phy_query(project_op, physical_plan == inner_plan ? index : NULL, physical_plan != inner_plan)))

  {
    TRANS_LOG("Add top operator failed");
  }
  /* select ... from DUAL */
  else if (select_stmt->get_table_size() == 0)
  {
    if (CREATE_PHY_OPERRATOR(result_op, ObDualTableScan, inner_plan,
        err_stat) == NULL)
    {
      TRANS_LOG("Generate dual table operator failed, ret=%d", ret);
    }
  }
  else
  {
    table_id = select_stmt->get_table_item(0).table_id_;
    if ((ret = cons_row_desc(table_id, select_stmt, row_desc_ext, row_desc, rowkey_info, row_desc_map, err_stat)) != OB_SUCCESS)
    {
    }
    else
    {
      //lock_op->set_write_lock_flag();
    }
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      if ((ret = gen_phy_table_for_update_more(logical_plan,inner_plan, err_stat,
                                          select_stmt, table_id, *rowkey_info,
                                          row_desc, row_desc_ext, result_op)
                                          ) != OB_SUCCESS)      {
      }
      /*
       else if ((ret = lock_op->set_child(0, *result_op)) != OB_SUCCESS)
       {
       TRANS_LOG("Failed to set child, err=%d", ret);
       }
       else
       {
       result_op = lock_op;
       }
       */
    }
  }

  // add output columns
  for (int32_t i = 0; ret == OB_SUCCESS && i < select_stmt->get_select_item_size(); i++)
  {
    const SelectItem& select_item = select_stmt->get_select_item(i);
    ObSqlExpression output_expr;
    ObSqlRawExpr *expr = NULL;
    if ((expr = logical_plan->get_expr(select_item.expr_id_)) == NULL)
    {
      ret = OB_ERR_ILLEGAL_ID;
      TRANS_LOG("Wrong expression id");
    }
    else if ((ret = expr->fill_sql_expression(
                              output_expr,
                              this,
                              logical_plan,
                              inner_plan)) != OB_SUCCESS)
    {
      TRANS_LOG("Generate post-expression faild");
    }
    else if ((ret = project_op->add_output_column(output_expr)) != OB_SUCCESS)
    {
      TRANS_LOG("Add output column to project operator faild");
    }
  }
  // generate physical plan for order by
  if (ret == OB_SUCCESS && select_stmt->get_order_item_size() > 0)
  {
    ret = gen_phy_order_by(logical_plan, inner_plan, err_stat, select_stmt, result_op, result_op);
  }
  // generate physical plan for limit
  if (ret == OB_SUCCESS && select_stmt->has_limit())
  {
    ret = gen_phy_limit(logical_plan, inner_plan, err_stat, select_stmt, result_op, result_op);
  }
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    ObWhenFilter *when_filter_op = NULL;
    if (select_stmt->get_when_expr_size() > 0)
    {
      if ((ret = gen_phy_when(logical_plan,
                            inner_plan,
                            err_stat,
                            query_id,
                            *result_op,
                            when_filter_op
                            )) != OB_SUCCESS)
      {
      }
      else if ((ret = project_op->set_child(0, *when_filter_op)) != OB_SUCCESS)
      {
        TRANS_LOG("Set child of project_op operator failed, err=%d", ret);
      }
    }
    else if ((ret = project_op->set_child(0, *result_op)) != OB_SUCCESS)
    {
      TRANS_LOG("Set child of project_op operator failed, err=%d", ret);
    }
  }
  if (ret == OB_SUCCESS)
  {
    if ((ret = merge_tables_version(*physical_plan, *inner_plan)) != OB_SUCCESS)
    {
      TRANS_LOG("Failed to add base tables version, err=%d", ret);
    }
  }
  return ret;
}

int ObTransformer::gen_physical_alter_system(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    int32_t* index)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObAlterSysCnfStmt *alt_sys_stmt = NULL;
  ObAlterSysCnf *alt_sys_op = NULL;

  /* get statement */
  if ((get_stmt(logical_plan, err_stat, query_id, alt_sys_stmt)) != OB_SUCCESS)
  {
  }
  /* generate operator */
  else if (CREATE_PHY_OPERRATOR(alt_sys_op, ObAlterSysCnf, physical_plan,
      err_stat) == NULL)
  {
  }
  else if ((ret = add_phy_query(logical_plan,
                                physical_plan,
                                err_stat,
                                query_id,
                                alt_sys_stmt,
                                alt_sys_op, index)
                                ) != OB_SUCCESS)
  {
    TRANS_LOG("Add physical operator failed, err=%d", ret);
  }
  else
  {
    alt_sys_op->set_sql_context(*sql_context_);
    hash::ObHashMap<ObSysCnfItemKey, ObSysCnfItem>::iterator iter;
    for (iter = alt_sys_stmt->sys_cnf_begin(); iter != alt_sys_stmt->sys_cnf_end(); iter++)
    {
      ObSysCnfItem cnf_item = iter->second;
      if ((ret = ob_write_string(*mem_pool_,
                                 iter->second.param_name_,
                                 cnf_item.param_name_)) != OB_SUCCESS)
      {
        TRANS_LOG("Failed to copy param name, err=%d", ret);
        break;
      }
      else if ((ret = ob_write_obj(*mem_pool_,
                                   iter->second.param_value_,
                                   cnf_item.param_value_)) != OB_SUCCESS)
      {
        TRANS_LOG("Failed to copy param value, err=%d", ret);
        break;
      }
      else if ((ret = ob_write_string(*mem_pool_,
                                      iter->second.comment_,
                                      cnf_item.comment_)) != OB_SUCCESS)
      {
        TRANS_LOG("Failed to copy comment, err=%d", ret);
        break;
      }
      else if ((ret = ob_write_string(*mem_pool_,
                                      iter->second.server_ip_,
                                      cnf_item.server_ip_)) != OB_SUCCESS)
      {
        TRANS_LOG("Failed to copy server ip, err=%d", ret);
        break;
      }
      else if ((ret = alt_sys_op->add_sys_cnf_item(cnf_item)) != OB_SUCCESS)
      {
        TRANS_LOG("Failed to add config item, err=%d", ret);
        break;
      }
    }
  }
  return ret;
}

int ObTransformer::gen_phy_show_parameters(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    ObShowStmt *show_stmt,
    ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObTableRpcScan *table_op = NULL;
  ObProject *project_op = NULL;
  ObRpcScanHint hint;
  hint.read_method_ = ObSqlReadStrategy::USE_SCAN;
  if (CREATE_PHY_OPERRATOR(table_op, ObTableRpcScan, physical_plan,
      err_stat) == NULL)
  {
  }
  else if (CREATE_PHY_OPERRATOR(project_op, ObProject, physical_plan,
      err_stat) == NULL)
  {
  }
  else if ((ret = project_op->set_child(0, *table_op)) != OB_SUCCESS)
  {
    TRANS_LOG("Set child of project failed, ret=%d", ret);
  }
  else if ((ret = table_op->set_table(
                                OB_ALL_SYS_CONFIG_STAT_TID,
                                OB_ALL_SYS_CONFIG_STAT_TID)
                                ) != OB_SUCCESS)
  {
    TRANS_LOG("ObTableRpcScan set table faild, table id = %lu", OB_ALL_SYS_CONFIG_STAT_TID);
  }
  else if ((ret = table_op->init(sql_context_, &hint)) != OB_SUCCESS)
  {
    TRANS_LOG("ObTableRpcScan init faild");
  }
  else if ((ret = physical_plan->add_base_table_version(OB_ALL_SYS_CONFIG_STAT_TID, 0)) != OB_SUCCESS)
  {
    TRANS_LOG("Add base table version failed, table_id=%ld, ret=%d", OB_ALL_SYS_CONFIG_STAT_TID, ret);
  }
  else
  {
    ObString cnf_name = ObString::make_string(OB_ALL_SYS_CONFIG_STAT_TABLE_NAME);
    ObString ip_name = ObString::make_string("server_ip");
    ObString port_name = ObString::make_string("server_port");
    ObString type_name = ObString::make_string("server_type");
    for (int32_t i = 0; i < show_stmt->get_column_size(); i++)
    {
      const ColumnItem* column_item = show_stmt->get_column_item(i);
      ObString cname;
      if (column_item->column_name_ == ip_name)
      {
        cname = ObString::make_string("svr_ip");
      }
      else if (column_item->column_name_ == port_name)
      {
        cname = ObString::make_string("svr_port");
      }
      else if (column_item->column_name_ == type_name)
      {
        cname = ObString::make_string("svr_type");
      }
      else
      {
        cname = column_item->column_name_;
      }
      const ObColumnSchemaV2* column_schema = NULL;
      if ((column_schema = sql_context_->schema_manager_->get_column_schema(cnf_name, cname)) == NULL)
      {
        ret = OB_ERR_COLUMN_UNKNOWN;
        TRANS_LOG("Can not get relative column %.*s from %s", column_item->column_name_.length(), column_item->column_name_.ptr(), OB_ALL_SYS_CONFIG_STAT_TABLE_NAME);
        break;
      }
      else
      {
        // add table scan columns
        ObBinaryRefRawExpr col_expr(OB_ALL_SYS_CONFIG_STAT_TID, column_schema->get_id(), T_REF_COLUMN);
        ObSqlRawExpr col_raw_expr(
            common::OB_INVALID_ID,
            OB_ALL_SYS_CONFIG_STAT_TID,
            column_schema->get_id(),
            &col_expr);
        ObSqlExpression output_expr;
        if ((ret = col_raw_expr.fill_sql_expression(
                                    output_expr,
                                    this,
                                    logical_plan,
                                    physical_plan)) != OB_SUCCESS
          || (ret = table_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add table output columns faild");
          break;
        }

        // add project columns
        col_raw_expr.set_table_id(column_item->table_id_);
        col_raw_expr.set_column_id(column_item->column_id_);
        output_expr.reset();
        if ((ret = col_raw_expr.fill_sql_expression(
                                    output_expr,
                                    this,
                                    logical_plan,
                                    physical_plan)) != OB_SUCCESS
          || (ret = project_op->add_output_column(output_expr)) != OB_SUCCESS)
        {
          TRANS_LOG("Add project output columns faild");
          break;
        }
      }
    } // end for
  }
  if (ret == OB_SUCCESS)
  {
    out_op = project_op;
  }
  return ret;
}

int ObTransformer::gen_phy_show_create_table(
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    ObShowStmt *show_stmt,
    ObPhyOperator *&out_op)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  ObRowDesc row_desc;
  ObValues *values_op = NULL;

  int32_t num = show_stmt->get_column_size();
  if (OB_UNLIKELY(num != 2))
  {
    ret = OB_ERR_COLUMN_SIZE;
    TRANS_LOG("wrong columns' number of %s", OB_CREATE_TABLE_SHOW_TABLE_NAME);
  }
  else if (CREATE_PHY_OPERRATOR(values_op, ObValues, physical_plan,
      err_stat) == NULL)
  {
  }
  else
  {
    for (int32_t i = 0; ret == OB_SUCCESS && i < num; i++)
    {
      const ColumnItem* column_item = show_stmt->get_column_item(i);
      if ((ret = row_desc.add_column_desc(column_item->table_id_, column_item->column_id_)) != OB_SUCCESS)
      {
        TRANS_LOG("Add row desc error, err=%d", ret);
        break;
      }
    }
    if ((ret = values_op->set_row_desc(row_desc)) != OB_SUCCESS)
    {
      TRANS_LOG("Set row desc error, err=%d", ret);
    }
  }

  const ObTableSchema *table_schema = NULL;
  if (ret != OB_SUCCESS)
  {
  }
  else if ((table_schema = sql_context_->schema_manager_->get_table_schema(show_stmt->get_show_table_id())) == NULL)
  {
    ret = OB_ERR_TABLE_UNKNOWN;
    TRANS_LOG("Unknow table id = %lu, err=%d", show_stmt->get_show_table_id(), ret);
  }
  else
  {
    uint64_t table_id = OB_INVALID_ID;
    uint64_t column_id = OB_INVALID_ID;
    ObRow val_row;
    val_row.set_row_desc(row_desc);
    int64_t pos = 0;
    char buf[OB_MAX_VARCHAR_LENGTH];

    // add table_name
    int32_t name_len = static_cast<int32_t>(strlen(table_schema->get_table_name()));
    ObString name_val(name_len, name_len, table_schema->get_table_name());
    ObObj name;
    name.set_varchar(name_val);
    if ((ret = row_desc.get_tid_cid(0, table_id, column_id)) != OB_SUCCESS)
    {
      TRANS_LOG("Get table_name desc failed");
    }
    else if ((ret = val_row.set_cell(table_id, column_id, name)) != OB_SUCCESS)
    {
      TRANS_LOG("Add table_name to ObRow failed, ret=%d", ret);
    }
    // add table definition
    else if ((ret = row_desc.get_tid_cid(1, table_id, column_id)) != OB_SUCCESS)
    {
      TRANS_LOG("Get table definition desc failed");
    }
    else if ((ret = cons_table_definition(
                         *table_schema,
                         buf,
                         OB_MAX_VARCHAR_LENGTH,
                         pos,
                         err_stat)) != OB_SUCCESS)
    {
      TRANS_LOG("Generate table definition failed");
    }
    else
    {
      ObString value_str(static_cast<int32_t>(pos), static_cast<int32_t>(pos), buf);
      ObObj value;
      value.set_varchar(value_str);
      if ((ret = val_row.set_cell(table_id, column_id, value)) != OB_SUCCESS)
      {
        TRANS_LOG("Add table_definiton to ObRow failed, ret=%d", ret);
      }
    }
    // add final value row
    if (ret == OB_SUCCESS && (ret = values_op->add_values(val_row)) != OB_SUCCESS)
    {
      TRANS_LOG("Add value row failed");
    }
  }
  if (ret == OB_SUCCESS)
  {
    out_op = values_op;
  }
  return ret;
}

int ObTransformer::cons_table_definition(
    const ObTableSchema& table_schema,
    char* buf,
    const int64_t& buf_len,
    int64_t& pos,
    ErrStat& err_stat)
{
  int& ret = err_stat.err_code_ = OB_SUCCESS;
  const ObColumnSchemaV2* columns = NULL;
  int32_t column_size = 0;
  if ((columns = sql_context_->schema_manager_->get_table_schema(table_schema.get_table_id(), column_size)) == NULL || column_size <= 0)
  {
    ret = OB_ERR_TABLE_UNKNOWN;
    TRANS_LOG("Unknow table id = %lu, err=%d", table_schema.get_table_id(), ret);
  }
  else
  {
    databuff_printf(buf, buf_len, pos, "CREATE TABLE %s (\n", table_schema.get_table_name());
  }

  // add columns
  for (int32_t i = 0; ret == OB_SUCCESS && i < column_size; i++)
  {
    if (i == 0)
    {
      databuff_printf(buf, buf_len, pos, "%s %s\n", columns[i].get_name(), ObObj::get_sql_type(columns[i].get_type()));
    }
    else
    {
      databuff_printf(buf, buf_len, pos, ", %s %s\n", columns[i].get_name(), ObObj::get_sql_type(columns[i].get_type()));
    }
  }

  // add rowkeys
  const ObRowkeyInfo& rowkey_info = table_schema.get_rowkey_info();
  databuff_printf(buf, buf_len, pos, ", PRIMARY KEY(");
  for (int64_t j = 0; ret == OB_SUCCESS && j < rowkey_info.get_size(); j++)
  {
    const ObColumnSchemaV2* col = NULL;
    if ((col = sql_context_->schema_manager_->get_column_schema(table_schema.get_table_id(), rowkey_info.get_column(j)->column_id_)) == NULL)
    {
      ret = OB_ERR_COLUMN_UNKNOWN;
      TRANS_LOG("Get column %lu failed", rowkey_info.get_column(j)->column_id_);
      break;
    }
    else if (j != rowkey_info.get_size() - 1)
    {
      databuff_printf(buf, buf_len, pos, "%s, ", col->get_name());
    }
    else
    {
      databuff_printf(buf, buf_len, pos, "%s)\n", col->get_name());
    }
  }

  // add table options
  if (ret == OB_SUCCESS)
  {
    databuff_printf(buf, buf_len, pos, ") ");
    if (table_schema.get_max_sstable_size() >= 0)
    {
      databuff_printf(buf, buf_len, pos, "TABLET_MAX_SIZE = %ld, ", table_schema.get_max_sstable_size());
    }
    if (table_schema.get_block_size() >= 0)
    {
      databuff_printf(buf, buf_len, pos, "TABLET_BLOCK_SIZE = %d, ", table_schema.get_block_size());
    }
    if (*table_schema.get_expire_condition() != '\0')
    {
      databuff_printf(buf, buf_len, pos, "EXPIRE_INFO = '%s', ", table_schema.get_expire_condition());
    }
    if (*table_schema.get_comment_str() != '\0')
    {
      databuff_printf(buf, buf_len, pos, "COMMENT = '%s', ", table_schema.get_comment_str());
    }
    if (!table_schema.is_merge_dynamic_data())
    {
      databuff_printf(buf, buf_len, pos, "CONSISTENT_MODE=STATIC ");
    }
    databuff_printf(buf, buf_len, pos,
    // "REPLICA_NUM = %ld, "
        "USE_BLOOM_FILTER = %s",
        // table_schema.get_replica_num(),
        table_schema.is_use_bloomfilter() ? "TRUE" : "FALSE");
  }
  return ret;
}

int ObTransformer::gen_phy_when(
    ObLogicalPlan *logical_plan,
    ObPhysicalPlan *physical_plan,
    ErrStat& err_stat,
    const uint64_t& query_id,
    ObPhyOperator& child_op,
    ObWhenFilter *& when_filter)
{
  int &ret = err_stat.err_code_ = OB_SUCCESS;
  ObStmt *stmt = NULL;
  if (OB_SUCCESS != (ret = get_stmt(logical_plan, err_stat, query_id, stmt)))
  {
  }
  /* generate root operator */
  else if (CREATE_PHY_OPERRATOR(when_filter, ObWhenFilter, physical_plan,
      err_stat) == NULL)
  {
    ret = OB_ALLOCATE_MEMORY_FAILED;
    TRANS_LOG("Failed to create phy operator");
  }
  else if ((ret = when_filter->set_child(0, child_op)) != OB_SUCCESS)
  {
    TRANS_LOG("Add first child of ObWhenFilter failed, ret=%d", ret);
  }
  else
  {
    when_filter->set_when_number(stmt->get_when_number());
    int32_t sub_index = OB_INVALID_INDEX;
    uint64_t expr_id = OB_INVALID_ID;
    ObSqlRawExpr *when_expr = NULL;
    ObUnaryOpRawExpr *when_func = NULL;
    ObUnaryRefRawExpr *sub_query = NULL;
    ObPhyOperator *sub_plan = NULL;
    for (int32_t i = 0; ret == OB_SUCCESS && i < stmt->get_when_fun_size(); i++)
    {
      expr_id = stmt->get_when_func_id(i);
      if ((when_expr = logical_plan->get_expr(expr_id)) == NULL || (when_func = static_cast<ObUnaryOpRawExpr*>(when_expr->get_expr())) == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong expr id = %lu of when function, ret=%d", expr_id, ret);
      }
      else if ((sub_query = static_cast<ObUnaryRefRawExpr*>(when_func->get_op_expr())) == NULL)
      {
        ret = OB_ERR_ILLEGAL_VALUE;
        TRANS_LOG("Wrong expr of %dth when function, ret=%d", i, ret);
      }
      else if ((ret = generate_physical_plan(
                          logical_plan,
                          physical_plan,
                          err_stat,
                          sub_query->get_ref_id(),
                          &sub_index)) != OB_SUCCESS)
      {
      }
      else if ((sub_plan = physical_plan->get_phy_query(sub_index)) == NULL)
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong sub-query index %d of when function, ret=%d", sub_index, ret);
      }
      else
      {
        switch (when_func->get_expr_type())
        {
        case T_ROW_COUNT:
        {
          ObRowCount *row_count_op = NULL;
          if (CREATE_PHY_OPERRATOR(row_count_op, ObRowCount, physical_plan,
              err_stat) == NULL)
          {
            break;
          }
          else if ((ret = row_count_op->set_child(0, *sub_plan)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of ObRowCount failed, ret=%d", ret);
          }
          else if ((ret = when_filter->set_child(i + 1, *row_count_op)) != OB_SUCCESS)
          {
            TRANS_LOG("Add child of ObWhenFilter failed, ret=%d", ret);
          }
          else
          {
            row_count_op->set_tid_cid(when_expr->get_table_id(), when_expr->get_column_id());
            row_count_op->set_when_func_index(i);
          }
          break;
        }
        default:
        {
          ret = OB_ERR_ILLEGAL_TYPE;
          TRANS_LOG("Unknown type of %dth when function, ret=%d", i, ret);
          break;
        }
        }
        if (ret != OB_SUCCESS)
        {
          break;
        }
        else if ((ret = physical_plan->remove_phy_query(sub_index)) != OB_SUCCESS)
        {
          TRANS_LOG("Remove sub-query plan failed, ret=%d", ret);
        }
      }
    }
    for (int32_t i = 0; ret == OB_SUCCESS && i < stmt->get_when_expr_size(); i++)
    {
      uint64_t expr_id = stmt->get_when_expr_id(i);
      ObSqlRawExpr *raw_expr = logical_plan->get_expr(expr_id);
      ObSqlExpression expr;
      if (OB_UNLIKELY(raw_expr == NULL))
      {
        ret = OB_ERR_ILLEGAL_ID;
        TRANS_LOG("Wrong id = %lu to get expression, ret=%d", expr_id, ret);
      }
      else if ((ret = raw_expr->fill_sql_expression(
                                    expr,
                                    this,
                                    logical_plan,
                                    physical_plan)
                                    ) != OB_SUCCESS)
      {
        TRANS_LOG("Generate ObSqlExpression failed, ret=%d", ret);
      }
      else if ((ret = when_filter->add_filter(expr)) != OB_SUCCESS)
      {
        TRANS_LOG("Add when filter failed, ret=%d", ret);
      }
    }
  }
  return ret;
}

//add maoxx
int ObTransformer::cons_whole_row_desc_for_delete(uint64_t table_id, ObRowDesc &desc, ObRowDescExt &desc_ext)
{
  int ret = OB_SUCCESS;
  const ObTableSchema *table_schema = sql_context_->schema_manager_->get_table_schema(table_id);
  ObRowkeyInfo ori;
  uint64_t cid = OB_INVALID_ID;
  uint64_t max_column_id = OB_INVALID_ID;
  ObObj obj_type;
  if(NULL == table_schema)
  {
    TBSYS_LOG(ERROR,"Table_Schema pointer is NULL");
    ret = OB_SCHEMA_ERROR;
  }
  else
  {
    ori = table_schema->get_rowkey_info();
    desc.set_rowkey_cell_count(ori.get_size());
    for(int64_t i = 0; i < ori.get_size(); i++)
    {
      const ObColumnSchemaV2* ocs = NULL;
      if(OB_SUCCESS != (ret = ori.get_column_id(i, cid)))
      {
        TBSYS_LOG(WARN,"get_column_id for rowkey failed!");
        ret = OB_SCHEMA_ERROR;
        break;
      }
      else
      {
        ocs = sql_context_->schema_manager_->get_column_schema(table_id, cid);
        if(NULL == ocs)
        {
          TBSYS_LOG(WARN,"NULL Pointer of column schmea");
          ret = OB_SCHEMA_ERROR;
          break;
        }
        if(OB_SUCCESS != (ret = desc.add_column_desc(table_id, cid)))
        {
          TBSYS_LOG(WARN,"failed to add column desc!");
          ret = OB_ERROR;
          break;
        }
        else
        {
          obj_type.set_type(ocs->get_type());
        }
        if(OB_SUCCESS == ret && OB_SUCCESS != (ret = desc_ext.add_column_desc(ocs->get_table_id(), ocs->get_id(), obj_type)))
        {
          TBSYS_LOG(WARN,"failed to add column desc_ext!");
          ret = OB_ERROR;
          break;
        }
      }
    }
    max_column_id = table_schema->get_max_column_id();
    for (int64_t j = OB_APP_MIN_COLUMN_ID; j <= (int64_t)max_column_id;  j++)
    {
      bool hit_flag = false;
      const ObColumnSchemaV2* ocs = sql_context_->schema_manager_->get_column_schema(table_id, j);
      if(NULL == ocs)
      {
        TBSYS_LOG(WARN,"get column schema error!");
        ret = OB_SCHEMA_ERROR;
      }
      else if(OB_SUCCESS != (ret = sql_context_->schema_manager_->column_hit_index_and_rowkey(table_id, (uint64_t)j, hit_flag)))
      {
        TBSYS_LOG(WARN, "failed to check if column hit index");
        ret = OB_ERROR;
      }
      else if(!ori.is_rowkey_column(j) && hit_flag)
      {
        if(OB_SUCCESS != (ret = desc.add_column_desc(table_id, j)))
        {
          TBSYS_LOG(WARN,"failed to add column desc!");
          ret = OB_ERROR;
        }
        else
        {
          obj_type.set_type(ocs->get_type());
        }
        if(OB_SUCCESS == ret && OB_SUCCESS != (ret = desc_ext.add_column_desc(ocs->get_table_id(), ocs->get_id(), obj_type)))
        {
          TBSYS_LOG(WARN,"failed to add column desc_ext!");
          ret = OB_ERROR;
          break;
        }
      }
    }
  }
  return ret;
}

int ObTransformer::cons_whole_row_desc_for_update(const ObStmt *stmt, uint64_t table_id, ObRowDesc &desc, ObRowDescExt &desc_ext)
{
  int ret = OB_SUCCESS;
  const ObTableSchema *table_schema = sql_context_->schema_manager_->get_table_schema(table_id);
  ObRowkeyInfo ori;
  uint64_t cid = OB_INVALID_ID;
  uint64_t max_column_id = OB_INVALID_ID;
  ObObj obj_type;
  if(NULL == table_schema)
  {
    TBSYS_LOG(ERROR,"Table_Schema pointer is NULL");
    ret = OB_SCHEMA_ERROR;
  }
  else
  {
    ori = table_schema->get_rowkey_info();
    desc.set_rowkey_cell_count(ori.get_size());
    for(int64_t i = 0; i < ori.get_size(); i++)
    {
      const ObColumnSchemaV2* ocs = NULL;
      if(OB_SUCCESS != (ret = ori.get_column_id(i, cid)))
      {
        TBSYS_LOG(WARN,"get_column_id for rowkey failed!");
        ret = OB_SCHEMA_ERROR;
        break;
      }
      else
      {
        ocs = sql_context_->schema_manager_->get_column_schema(table_id, cid);
        if(NULL == ocs)
        {
          TBSYS_LOG(WARN,"NULL Pointer of column schmea");
          ret = OB_SCHEMA_ERROR;
          break;
        }
        if(OB_SUCCESS != (ret = desc.add_column_desc(table_id, cid)))
        {
          TBSYS_LOG(WARN,"failed to add column desc!");
          ret = OB_ERROR;
          break;
        }
        else
        {
          obj_type.set_type(ocs->get_type());
        }
        if(OB_SUCCESS == ret && OB_SUCCESS != (ret = desc_ext.add_column_desc(ocs->get_table_id(), ocs->get_id(), obj_type)))
        {
          TBSYS_LOG(WARN,"failed to add column desc_ext!");
          ret = OB_ERROR;
          break;
        }
      }
    }
    max_column_id = table_schema->get_max_column_id();
    for (int64_t j = OB_APP_MIN_COLUMN_ID; j <= (int64_t)max_column_id;  j++)
    {
      bool column_hit_index_flag = false;
      const ObColumnSchemaV2* ocs = sql_context_->schema_manager_->get_column_schema(table_id, j);
      if(NULL == ocs)
      {
        TBSYS_LOG(WARN,"get column schema error!");
        ret = OB_SCHEMA_ERROR;
      }
      else if(OB_SUCCESS != (ret = sql_context_->schema_manager_->column_hit_index(table_id, (uint64_t)j, column_hit_index_flag)))
      {
        TBSYS_LOG(WARN, "failed to check if column hit index");
        ret = OB_ERROR;
      }
      else if(!ori.is_rowkey_column(j) && !column_hit_index_flag)
      {
        uint64_t set_cid = OB_INVALID_ID;
        for(int32_t set_cid_idx = 0; set_cid_idx < stmt->get_column_size(); set_cid_idx++)
        {
          const ColumnItem* set_column_item = stmt->get_column_item(set_cid_idx);
          set_cid = set_column_item->column_id_;
          if((int64_t)set_cid == j)
          {
            ret = desc.add_column_desc(table_id, j);
            obj_type.set_type(ocs->get_type());
            if(OB_SUCCESS == ret)
            {
              desc_ext.add_column_desc(ocs->get_table_id(), ocs->get_id(), obj_type);
            }
          }
        }
      }
      else if(!ori.is_rowkey_column(j) && column_hit_index_flag)
      {
        if(OB_SUCCESS != (ret = desc.add_column_desc(table_id, j)))
        {
          TBSYS_LOG(WARN,"failed to add column desc!");
          ret = OB_ERROR;
        }
        else
        {
          obj_type.set_type(ocs->get_type());
        }
        if(OB_SUCCESS == ret && OB_SUCCESS != (ret = desc_ext.add_column_desc(ocs->get_table_id(), ocs->get_id(), obj_type)))
        {
          TBSYS_LOG(WARN,"failed to add column desc_ext!");
          ret = OB_ERROR;
          break;
        }
      }
    }
  }
  return ret;
}

int ObTransformer::cons_whole_row_desc_for_replace(const ObStmt *stmt, uint64_t table_id, ObRowDesc &desc, ObRowDescExt &desc_ext)
{
  int ret = OB_SUCCESS;
  const ObTableSchema *table_schema = sql_context_->schema_manager_->get_table_schema(table_id);
  ObRowkeyInfo ori;
  uint64_t max_column_id = OB_INVALID_ID;
  ObObj obj_type;
  if(NULL == table_schema)
  {
    TBSYS_LOG(ERROR,"Table_Schema pointer is NULL");
    ret = OB_SCHEMA_ERROR;
  }
  else
  {
    uint64_t cid = OB_INVALID_ID;
    ori = table_schema->get_rowkey_info();
    desc.set_rowkey_cell_count(ori.get_size());
    for(int64_t i = 0; i < ori.get_size(); i++)
    {
      const ObColumnSchemaV2* ocs = NULL;
      if(OB_SUCCESS != (ret = ori.get_column_id(i, cid)))
      {
        TBSYS_LOG(WARN,"get_column_id for rowkey failed!");
        ret = OB_SCHEMA_ERROR;
        break;
      }
      else
      {
        bool column_in_stmt_flag = false;
        ocs = sql_context_->schema_manager_->get_column_schema(table_id, cid);
        if(NULL == ocs)
        {
          TBSYS_LOG(ERROR,"NULL Pointer of column schmea");
          break;
        }
        else if(OB_SUCCESS != (ret = column_in_stmt(stmt, table_id, cid, column_in_stmt_flag)))
        {
          TBSYS_LOG(WARN, "is coloumn in stmt failed,ret = %d, table_id = %ld, cid = %ld", ret, table_id, cid);
          ret = OB_ERROR;
          break;
        }
        else if(column_in_stmt_flag)
        {
          if (OB_SUCCESS != (ret = desc.add_column_desc(table_id, cid)))
          {
            TBSYS_LOG(WARN,"failed to add row desc, err=%d", ret);
            ret = OB_ERROR;
            break;
          }
          else
          {
            obj_type.set_type(ocs->get_type());
            if (OB_SUCCESS != (ret = desc_ext.add_column_desc(table_id, cid, obj_type)))
            {
              TBSYS_LOG(WARN,"failed to add row desc_ext, err=%d", ret);
              ret = OB_ERROR;
              break;
            }
          }
        }
      }
    }//end for
    max_column_id = table_schema->get_max_column_id();
    for (int64_t j = OB_APP_MIN_COLUMN_ID; j <= (int64_t)max_column_id;  j++)
    {
      bool column_hit_index_flag = false;
      bool column_in_stmt_flag = false;
      const ObColumnSchemaV2* ocs = sql_context_->schema_manager_->get_column_schema(table_id, j);
      if(NULL == ocs)
      {
        TBSYS_LOG(WARN,"get column schema error!");
        ret = OB_SCHEMA_ERROR;
        break;
      }
      else if(OB_SUCCESS != (ret = sql_context_->schema_manager_->column_hit_index(table_id, (uint64_t)j, column_hit_index_flag)))
      {
        TBSYS_LOG(WARN, "failed to check if column hit index");
        ret = OB_ERROR;
        break;
      }
      else if(OB_SUCCESS != (ret = column_in_stmt(stmt, table_id, j, column_in_stmt_flag)))
      {
        TBSYS_LOG(WARN, "is coloumn in stmt failed,ret = %d, table_id = %ld, cid = %ld", ret, table_id, j);
        ret = OB_ERROR;
        break;
      }
      else if(!ori.is_rowkey_column(j) && (column_hit_index_flag || column_in_stmt_flag))
      {
        if(OB_SUCCESS != (ret = desc.add_column_desc(table_id, j)))
        {
          TBSYS_LOG(WARN,"failed to add column desc!");
          ret = OB_ERROR;
          break;
        }
        else
        {
          obj_type.set_type(ocs->get_type());
          if (OB_SUCCESS != (ret = desc_ext.add_column_desc(table_id, j, obj_type)))
          {
            TBSYS_LOG(WARN,"failed to add row desc_ext, err=%d", ret);
            ret = OB_ERROR;
            break;
          }
        }
      }
    }
  }
  return ret;
}
//add e
