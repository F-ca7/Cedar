#ifndef OCEANBASE_SQL_OB_PROCEDURE_H
#define OCEANBASE_SQL_OB_PROCEDURE_H
#include "ob_sp_procedure.h"
#include "ob_no_children_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_stmt.h"
#include "ob_procedure_assgin_stmt.h"
#include "ob_procedure_declare_stmt.h"
#include "ob_raw_expr.h"
#include "mergeserver/ob_ms_rpc_proxy.h"
using namespace oceanbase::common;
namespace oceanbase
{
	namespace sql
	{
    class ObPhysicalPlan;
    class ObProcedure;
    class SpProcedure;
    class ObProcedureOptimizer;

    class SpMsInstExecStrategy : public SpInstExecStrategy
    {
    public:
        virtual int execute_inst(SpInst *inst); //provide simple routine for inst execution
        int64_t hkey(int64_t sdata_id) const;

    private:
      virtual int execute_expr(SpExprInst *inst);
      virtual int execute_rd_base(SpRdBaseInst *inst);
      virtual int execute_wr_delta(SpRwDeltaInst *inst);
      virtual int execute_rd_delta(SpRwDeltaIntoVarInst *inst);
      virtual int execute_rw_all(SpRwCompInst *inst);
      virtual int execute_group(SpGroupInsts *inst);
      virtual int execute_if_ctrl(SpIfCtrlInsts *inst);
      virtual int execute_loop(SpLoopInst *inst);

      virtual int execute_casewhen(SpCaseInst *inst);
      virtual int execute_while(SpWhileInst *inst);
      virtual int execute_multi_inst(SpMultiInsts *mul_inst);
      int init_physical_plan(ObPhysicalPlan &exec_plan, ObPhysicalPlan &out_plan);
      int set_trans_params(ObSQLSessionInfo *session, common::ObTransReq &req);

      int handle_group_result(SpProcedure *proc, ObUpsResult &result);

      int execute_pre_group(SpPreGroupInsts *inst);

    private:
      //execution context
      ObLoopCounter loop_counter_;
      ObRow curr_row_;
      ObRowDesc fake_row_desc_;
      ObStringBuf obj_pool_;
    };

    /**
     * ObProcedure is the wrapper of a stored procedure, the really execution model is include
     * in this class, but the execution model could not be the iterator model
     *
     * the real execution plan is owned by the procedure, instead of sp inst
     *
     * ObProcedure is the sub-class of SpProcedure that executed on ms
     * @brief The ObProcedure class
     */
    class ObProcedure : public SpProcedure
		{
    public:
        friend class ObProcedureOptimizer;
			ObProcedure();
			virtual ~ObProcedure();
			virtual void reset();
			virtual void reuse();
			virtual int open();
      virtual int close();

      virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);

      int set_rpc_stub(mergeserver::ObMergerRpcProxy *rpc) { rpc_ = rpc; return OB_SUCCESS;}
      mergeserver::ObMergerRpcProxy * get_rpc_stub() { return rpc_; }

      int add_param(const ObParamDef &proc_param);	//add param def

      int add_var_def(const ObVariableDef &def);

      int fill_parameters(ObIArray<ObSqlExpression> &param_expr);
      int return_paramters();
      int create_variables();
//      int clear_variables();

      /*
      virtual int write_variable(const ObString &var_name, const ObObj & val);
      virtual int write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val);
      virtual int write_variable(const SpVar &var, const ObObj &val);

      virtual int read_variable(const ObString &var_name, const ObObj *&val) const;
      virtual int read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const;
      virtual int read_variable(const SpVar &var, const ObObj *&val) const;

      virtual int read_array_size(const ObString &array_name, int64_t &size) const;
      */

      /*
      virtual int store_static_data(int64_t sdata_id, int64_t hkey, ObRowStore *&p_row_store);
      virtual int get_static_data_by_id(int64_t sdata_id, ObRowStore *&p_row_store);
      virtual int get_static_data(int64_t idx, int64_t &sdata_id, int64_t &hkey, const ObRowStore *&p_row_store);
      virtual int64_t get_static_data_count() const;
      */

      virtual int64_t hkey(int64_t sdata_id) const;

      int deter_exec_mode();

      const ObParamDef& get_param(int64_t index) const;
      int64_t get_param_num() const;

      DECLARE_PHY_OPERATOR_ASSIGN;
      int set_inst_op();

      int end_trans(bool rollback);
		private:
			//disallow copy
			ObProcedure(const ObProcedure &other);
			ObProcedure& operator=(const ObProcedure &other);
      //function members

      int set_inst_op(SpInst *inst);
    private:
      ObSEArray<ObParamDef, 16> params_;
      ObSEArray<ObVariableDef, 16> defs_;

      SpInstList exec_list_;
//      ObProcedureStaticDataMgr static_data_mgr_;

      SpMsInstExecStrategy strategy_;

      bool long_trans_;
      mergeserver::ObMergerRpcProxy *rpc_;
    };
  }
}

#endif
