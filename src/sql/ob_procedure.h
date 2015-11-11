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

    class SpMsInstExecStrategy
    {
    public:
      virtual int execute_expr(SpExprInst *inst);
      virtual int execute_rd_base(SpRdBaseInst *inst);
      virtual int execute_rw_delta(SpRwDeltaInst *inst);
      virtual int execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst);
      virtual int execute_rw_comp(SpRwCompInst *inst);
      virtual int execute_block(SpBlockInsts *inst);
      int init_physical_plan(ObPhysicalPlan &exec_plan, ObPhysicalPlan &out_plan);
      int set_trans_params(ObSQLSessionInfo *session, common::ObTransReq &req);
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
      friend class SpInst;
      friend class SpExprInst;
      friend class SpRdBaseInst;
      friend class SpRwDeltaInst;
      friend class SpRwDeltaIntoVarInst;
      friend class SpRwCompInst;
      friend class SpBlockInsts;
			ObProcedure();
			virtual ~ObProcedure();
			virtual void reset();
			virtual void reuse();
			virtual int open();
      virtual int close();

      virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);
//			virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
//			virtual int32_t get_child_num() const;

      int set_rpc_stub(mergeserver::ObMergerRpcProxy *rpc) { rpc_ = rpc; return OB_SUCCESS;}
      mergeserver::ObMergerRpcProxy * get_rpc_stub() { return rpc_; }
      int set_proc_name(ObString &proc_name);/*设置存储过程名*/
			int add_param(ObParamDef &proc_param);
			int set_params(ObArray<ObParamDef*> &params);/*存储过程参数*/
			int add_declare_var(ObString &var);/*添加一个变量*/

      int add_var_def(ObVariableDef def)
      {
        defs_.push_back(def);
        return OB_SUCCESS;
      }

      int create_variables();
      virtual int write_variable(const ObString &var_name, const ObObj & val);
      virtual int read_variable(const ObString &var_name, ObObj &val) const;
      virtual int read_variable(const ObString &var_name, const ObObj *&val) const;

      int optimize();

      ObArray<ObParamDef*>& get_params();
			ObParamDef* get_param(int64_t index);
			ObString& get_declare_var(int64_t index);
			int64_t get_param_num();
      int64_t get_declare_var_num();
		private:
			//disallow copy
			ObProcedure(const ObProcedure &other);
			ObProcedure& operator=(const ObProcedure &other);
      //function members

    private:
      ObString proc_name_;
			ObArray<ObParamDef*> params_;/*存储过程参数*/
      ObArray<ObString> declare_variable_;
      ObArray<ObVariableDef> defs_;

      ObArray<SpInst *> exec_list_;

      mergeserver::ObMergerRpcProxy *rpc_;
    }; 
  }
}

#endif
