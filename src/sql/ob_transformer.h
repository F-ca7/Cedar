/**
 * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * ob_transformer.h
 *
 * Authors:
 *   Guibin Du <tianguan.dgb@taobao.com>
 *
 */
#ifndef _OB_TRANSFORMER_H
#define _OB_TRANSFORMER_H

#include "ob_phy_operator.h"
#include "ob_logical_plan.h"
#include "ob_multi_phy_plan.h"
#include "ob_multi_logic_plan.h"
#include "ob_sql_context.h"
#include "ob_insert_stmt.h"
#include "ob_show_stmt.h"
#include "ob_values.h"
#include "ob_expr_values.h"
#include "ob_table_rpc_scan.h"
#include "common/ob_list.h"
#include "common/ob_row_desc_ext.h"
#include "common/ob_se_array.h"
#include "sql/ob_procedure.h"
namespace oceanbase
{
  namespace sql
  {
    class ObWhenFilter;
    class ObTransformer
    {
      public:
        ObTransformer(ObSqlContext &context);
        virtual ~ObTransformer();

        int generate_physical_plans(
            ObMultiLogicPlan &logical_plans,
            ObMultiPhyPlan &physical_plans,
            ErrStat& err_stat);

        int gen_physical_select(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);

        ObSqlContext* get_sql_context();

      private:
        DISALLOW_COPY_AND_ASSIGN(ObTransformer);
        void *trans_malloc(const size_t nbyte);
        void trans_free(void* p);

        //add by zhujun 2014-12-05:b
        //code_coverage_zhujun
        int gen_physical_procedure(
			ObLogicalPlan *logical_plan,
			ObPhysicalPlan *physical_plan,
			ErrStat& err_stat,
			const uint64_t& query_id,
			int32_t* index);
        int gen_physical_procedure_create(
			ObLogicalPlan *logical_plan,
			ObPhysicalPlan *physical_plan,
			ErrStat& err_stat,
			const uint64_t& query_id,
			int32_t* index);
        int gen_physical_procedure_drop(
			ObLogicalPlan *logical_plan,
			ObPhysicalPlan *physical_plan,
			ErrStat& err_stat,
			const uint64_t& query_id,
			int32_t* index);
        int gen_physical_procedure_execute(
			ObLogicalPlan *logical_plan,
			ObPhysicalPlan *physical_plan,
			ErrStat& err_stat,
			const uint64_t& query_id,
      int32_t* index);
        int gen_physical_procedure_else(
			ObLogicalPlan *logical_plan,
			ObPhysicalPlan *physical_plan,
			ErrStat& err_stat,
			const uint64_t& query_id,
      int32_t* index);


        //add zt 20151207 : help function
  int gen_physical_procedure_inst_var_set(
                  SpVariableSet &var_set,
                  const ObIArray<const ObRawExpr *> & raw_expr_list
                  );
  int gen_physical_procedure_inst_var_set(SpVariableSet &var_set,
                  const ObSqlRawExpr *raw_expr);

  int gen_physical_procedure_if(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );

  int gen_physical_procedure_declare(
                  ObLogicalPlan *logical_plan,
                  //			ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op);
  //			int32_t* index);
  int gen_physical_procedure_assign(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );
  int gen_physical_procedure_insert(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );
  int gen_physical_procedure_replace(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );
  int gen_physical_procedure_update(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat &err_stat,
                  const uint64_t &query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );
  //add by wangdonghui 20160623 :b
  int gen_physical_procedure_delete(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat &err_stat,
                  const uint64_t &query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst
          );
  //add :e
  int gen_physical_procedure_select_into(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );
  int gen_physical_procedure_loop(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );
  int gen_physical_procedure_inst(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpMultiInsts *mul_inst = NULL
                  );
  int gen_physical_procedure_elseif(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure *proc_op,
                  SpIfCtrlInsts *&elseif_ctrl,
                  SpMultiInsts *mul_inst = NULL
                  );
  int gen_physical_procedure_case(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure* proc_op,
                  SpMultiInsts* mul_inst =NULL);
  int gen_physical_procedure_casewhen(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat& err_stat,
                  const uint64_t& query_id,
                  ObProcedure* proc_op,
                  SpMultiInsts* mul_inst =NULL);

  int gen_physical_set_array_value(
                  ObLogicalPlan *logical_plan,
                  ObPhysicalPlan *physical_plan,
                  ErrStat &err_stat,
                  const uint64_t &query_id,
                  int32_t *index
                  );


  //add hjw 20151229:b
  int gen_physical_procedure_while(
         ObLogicalPlan *logical_plan,
         ObPhysicalPlan *physical_plan,
         ErrStat& err_stat,
         const uint64_t& query_id,
         ObProcedure *proc_op,
         SpMultiInsts* mul_inst = NULL);
  //add hjw 20151229:e

  //add wdh 20160623 :b
  int gen_physical_procedure_exit(
         ObLogicalPlan *logical_plan,
         ObPhysicalPlan *physical_plan,
         ErrStat& err_stat,
         const uint64_t& query_id,
         ObProcedure *proc_op,
         SpMultiInsts* mul_inst = NULL);
  //add :e

        //code_coverage_zhujun
		//add:e
        int generate_physical_plan(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan*& physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id = common::OB_INVALID_ID,
            int32_t* index = NULL);

        int add_cur_time_plan(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const ObCurTimeType& type);

        int gen_physical_replace(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_insert_new(
          ObLogicalPlan *logical_plan,
          ObPhysicalPlan *physical_plan,
          ErrStat& err_stat,
          const uint64_t& query_id,
          int32_t* index);
        int gen_physical_delete(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_update(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_explain(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_create_table(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_drop_table(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_alter_table(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_show(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_phy_tables(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObSelectStmt *select_stmt,
            bool& group_agg_pushed_down,
            bool& limit_pushed_down,
            oceanbase::common::ObList<ObPhyOperator*>& phy_table_list,
            oceanbase::common::ObList<ObBitSet<> >& bitset_list,
            oceanbase::common::ObList<ObSqlRawExpr*>& remainder_cnd_list,
            oceanbase::common::ObList<ObSqlRawExpr*>& none_columnlize_alias);
        int gen_physical_kill_stmt(
          ObLogicalPlan *logical_plan,
          ObPhysicalPlan* physical_plan,
          ErrStat& err_stat,
          const uint64_t& query_id,
          int32_t* index);
        int gen_phy_table(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObStmt *stmt,
            uint64_t table_id,
            ObPhyOperator*& table_op,
            bool* group_agg_pushed_down = NULL,
            bool* limit_pushed_down = NULL);
        int gen_phy_joins(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObSelectStmt *select_stmt,
            oceanbase::common::ObList<ObPhyOperator*>& phy_table_list,
            oceanbase::common::ObList<ObBitSet<> >& bitset_list,
            oceanbase::common::ObList<ObSqlRawExpr*>& remainder_cnd_list,
            oceanbase::common::ObList<ObSqlRawExpr*>& none_columnlize_alias);
        int gen_phy_group_by(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObSelectStmt *select_stmt,
            ObPhyOperator *in_op,
            ObPhyOperator *&out_op);
        int gen_phy_scalar_aggregate(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObSelectStmt *select_stmt,
            ObPhyOperator *in_op,
            ObPhyOperator *&out_op);
        int gen_phy_distinct(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObSelectStmt *select_stmt,
            ObPhyOperator *in_op,
            ObPhyOperator *&out_op);
        int gen_phy_order_by(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObSelectStmt *select_stmt,
            ObPhyOperator *in_op,
            ObPhyOperator *&out_op,
            bool use_generated_id = false);
        int gen_phy_limit(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObSelectStmt *select_stmt,
            ObPhyOperator *in_op,
            ObPhyOperator *&out_op);
        int gen_phy_values(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const ObInsertStmt *insert_stmt,
            const ObRowDesc& row_desc,
            const ObRowDescExt& row_desc_ext,
            const ObSEArray<int64_t, 64> *row_desc_map,
            ObExprValues& value_op);
        int gen_phy_static_data_scan(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const ObInsertStmt *insert_stmt,
            const ObRowDesc& row_desc,
            const common::ObSEArray<int64_t, 64> &row_desc_map,
            const uint64_t table_id,
            const ObRowkeyInfo &rowkey_info,
            ObTableRpcScan &table_scan);
        int gen_phy_show_tables(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        int gen_phy_show_columns(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        int gen_phy_show_variables(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        int gen_phy_show_warnings(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        int gen_phy_show_grants(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        int gen_phy_show_table_status(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
	   //zhounan unmark:b
       int gen_physical_cursor_declare(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
       int gen_physical_cursor_fetch(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
       int gen_physical_cursor_fetch_into(
			   ObLogicalPlan *logical_plan,
			   ObPhysicalPlan *physical_plan,
			   ErrStat& err_stat,
			   const uint64_t& query_id,
			   int32_t* index);
       int gen_physical_cursor_fetch_prior(
	       ObLogicalPlan *logical_plan,
	       ObPhysicalPlan *physical_plan,
	       ErrStat& err_stat,
	       const uint64_t& query_id,
	       int32_t* index);
       int gen_physical_cursor_fetch_prior_into(
       	       ObLogicalPlan *logical_plan,
       	       ObPhysicalPlan *physical_plan,
       	       ErrStat& err_stat,
       	       const uint64_t& query_id,
       	       int32_t* index);
       int gen_physical_cursor_fetch_first(
	    ObLogicalPlan *logical_plan,
	    ObPhysicalPlan *physical_plan,
	    ErrStat& err_stat,
	    const uint64_t& query_id,
	    int32_t* index);
       int gen_physical_cursor_fetch_first_into(
      			   ObLogicalPlan *logical_plan,
      			   ObPhysicalPlan *physical_plan,
      			   ErrStat& err_stat,
      			   const uint64_t& query_id,
      			   int32_t* index);
       int gen_physical_cursor_fetch_last(
	    ObLogicalPlan *logical_plan,
	    ObPhysicalPlan *physical_plan,
	    ErrStat& err_stat,
	    const uint64_t& query_id,
	    int32_t* index);

       int gen_physical_cursor_fetch_last_into(
             			   ObLogicalPlan *logical_plan,
             			   ObPhysicalPlan *physical_plan,
             			   ErrStat& err_stat,
             			   const uint64_t& query_id,
             			   int32_t* index);

       int gen_physical_cursor_fetch_relative(
	    ObLogicalPlan *logical_plan,
	    ObPhysicalPlan *physical_plan,
	    ErrStat& err_stat,
	    const uint64_t& query_id,
		 int32_t* index);

       int gen_physical_cursor_fetch_relative_into(
       	    ObLogicalPlan *logical_plan,
       	    ObPhysicalPlan *physical_plan,
       	    ErrStat& err_stat,
       	    const uint64_t& query_id,
			int32_t* index);

       int gen_physical_cursor_fetch_absolute(
	    ObLogicalPlan *logical_plan,
	    ObPhysicalPlan *physical_plan,
	    ErrStat& err_stat,
	    const uint64_t& query_id,
	    int32_t* index);

       int gen_physical_cursor_fetch_absolute_into(
                    			   ObLogicalPlan *logical_plan,
                    			   ObPhysicalPlan *physical_plan,
                    			   ErrStat& err_stat,
                    			   const uint64_t& query_id,
                    			   int32_t* index);

       int gen_physical_cursor_fetch_fromto(
	       ObLogicalPlan *logical_plan,
	       ObPhysicalPlan *physical_plan,
	       ErrStat& err_stat,
	       const uint64_t& query_id,
	       int32_t* index);
       int gen_physical_cursor_open(
	       ObLogicalPlan *logical_plan,
	       ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
			
       int gen_physical_cursor_close(
	    ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);

//e:add by zhounan

        int gen_phy_show_processlist(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        template <class T>
        int get_stmt(
            ObLogicalPlan *logical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            T *& stmt);
        template <class T>
        int add_phy_query(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            T * stmt,
            ObPhyOperator *phy_op,
            int32_t* index);
        int gen_physical_priv_stmt(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_prepare(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_variable_set(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_execute(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_deallocate(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_phy_table_for_update(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan*& physical_plan,
            ErrStat& err_stat,
            ObStmt *stmt,
            uint64_t table_id,
            const ObRowkeyInfo &rowkey_info,
            const ObRowDesc &row_desc,
            const ObRowDescExt &row_desc_ext,
            ObPhyOperator*& table_op,
            //add zt 20151105 :b
            SpRdBaseInst *rd_base_inst = NULL,
            SpRwDeltaInst *rw_delta_inst = NULL
            //add zt 20151105 :e
            );
        int gen_physical_update_new(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan*& physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index,
            //add zt : 20151105 b
            SpRdBaseInst *inst = NULL,
            SpRwDeltaInst *rw_delta_inst = NULL
            //add zt : 20151105 e
            );
        int cons_row_desc(const uint64_t table_id,
            const ObStmt *stmt,
            ObRowDescExt &row_desc_ext,
            ObRowDesc &row_desc,
            const ObRowkeyInfo *&rowkey_info,
            common::ObSEArray<int64_t, 64> &row_desc_map,
            ErrStat& err_stat);
        int gen_physical_delete_new(ObLogicalPlan *logical_plan,
            ObPhysicalPlan* physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index,
            //add by wangdonghui 20160623 :b
            SpRdBaseInst *rd_base_inst = NULL,
            SpRwDeltaInst *rw_delta_inst = NULL);
            //add :e
        int gen_physical_start_trans(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan* physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_physical_end_trans(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan* physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int wrap_ups_executor(
            ObPhysicalPlan *physical_plan,
            const uint64_t query_id,
            ObPhysicalPlan*& new_plan,
            int32_t* index,
            ErrStat& err_stat);
        int gen_phy_select_for_update(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index,
            //add zt 20151105:b
            SpRdBaseInst *rd_base_inst = NULL,
            SpRwDeltaInst *rw_delta_inst = NULL
            //add zt 20151105:e
            );
        int try_push_down_group_agg(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const ObSelectStmt *select_stmt,
            bool& group_agg_pushed_down,
            ObPhyOperator *& scan_op);
        int try_push_down_limit(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const ObSelectStmt *select_stmt,
            bool& limit_pushed_down,
            ObPhyOperator *scan_op);
        int gen_phy_show_parameters(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        int gen_phy_show_create_table(
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            ObShowStmt *show_stmt,
            ObPhyOperator *&out_op);
        int cons_table_definition(
            const common::ObTableSchema& table_schema,
            char* buf,
            const int64_t& buf_len,
            int64_t& pos,
            ErrStat& err_stat);
        int gen_physical_alter_system(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            int32_t* index);
        int gen_phy_when(
            ObLogicalPlan *logical_plan,
            ObPhysicalPlan *physical_plan,
            ErrStat& err_stat,
            const uint64_t& query_id,
            ObPhyOperator& child_op,
            ObWhenFilter *& when_filter);
        int merge_tables_version(ObPhysicalPlan & outer_plan, ObPhysicalPlan & inner_plan);

        bool parse_join_info(const ObString &join_info, TableSchema &table_schema);
        bool check_join_column(const int32_t column_index,
              const char* column_name, const char* join_column_name,
              TableSchema& schema, const ObTableSchema& join_table_schema);
        
        int allocate_column_id(TableSchema & table_schema);
        int gen_physical_change_obi_stmt(
          ObLogicalPlan *logical_plan,
          ObPhysicalPlan* physical_plan,
          ErrStat& err_stat,
          const uint64_t& query_id,
          int32_t* index);

      private:
        common::ObIAllocator *mem_pool_;
        ObSqlContext *sql_context_;
        bool group_agg_push_down_param_;
    };

    inline ObSqlContext* ObTransformer::get_sql_context()
    {
      return sql_context_;
    }
  } // end namespace sql
} // end namespace oceanbase

#endif /* _OB_TRANSFORMER_H */
