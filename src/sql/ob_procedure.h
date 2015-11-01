#ifndef OCEANBASE_SQL_OB_PROCEDURE_H
#define OCEANBASE_SQL_OB_PROCEDURE_H
//#include "ob_multi_children_phy_operator.h"
#include "ob_no_children_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_stmt.h"
#include "ob_procedure_assgin_stmt.h"
using namespace oceanbase::common;
namespace oceanbase
{
	namespace sql
	{
    class ObPhysicalPlan;

    enum SpInstType
    {
      SP_E_INST, //expr instruction
      SP_C_INST, //control instruction
      SP_B_INST, //read baseline data
      SP_D_INST, //maintain delta data
      SP_A_INST, //analyse inst, read, baseline & delta, aggreation, analyze
    };

    enum DepDirection //dependence direction between two instructions
    {
      Da_True_Dep, //data true dependence
      Da_Anti_Dep, //data anti dependecne
      Da_Out_Dep,  //data output dependece
      Tr_Itm_Dep   //transaction item dependence
    };

    struct VariableSet
    {

    };

    class SpBlockInst;
    /**
      spInst could use the decorator model to describe
     * @brief The SpInst class
     */
    class SpInst
    {
    public:
      virtual int exec() = 0;  //exec the inst at once
      virtual int split(SpBlockInst &block_inst) = 0; //split the inst into small ones
      virtual int get_read_varialbe_set(VariableSet &rs);
      virtual int get_write_variable_set(VariableSet &ws);

      static DepDirection get_dep_rel(SpInst &inst_in, SpInst &inst_out);
    protected:
      SpInstType type_;
      ObProcedure *proc_; //the procedure thats owns this instruction
    };

    class SpBlockInst
    {
    public:
      virtual int exec();
      int add_inst(SpInst &expr_inst);
    private:
      ObArray<SpInst> inst_block_;
    };

    class SpExprInst : public SpInst
    {
    public:
      SpExprInst(ObVariableSetVal var_val);
    private:
      ObVariableSetVal var_val_;
    };

    class SpExprsInst : public SpInst
    {
    public:
      int exec();
      int split(SpBlockInst &block_inst);
    private:
      ObArray<ObVariableSetVal> var_val_list_;
    };

//    class SpBaselineInst : public SpInst
//    {
//    private:
//      ObPhyOperator *read_baseline_op_;
//    };

//    class SpDeltaInst : public SpInst
//    {
//    private:
//      ObPhyOperator *update_delta_op_;
//    };

//    class SpGroupDeltaInst : public SpInst
//    {
//    public:
//      int exec(); //here we could define the group execution
//      int split(SpBlockInst &block_inst);
//    private:
//      ObArray<ObPhyOperator *> update_delta_ops_;
//    };

//    class SpAnalyzeInst : public SpInst
//    {
//    private:
//      ObPhyOperator *complex_analyze_op_;
//    };

//    int group_inst(ObArray<SpInst> &in_seq, ObArray<SpInst> &out_seq);
//    int build_graph(ObArray<SpInst> &in_seq);
    /**
     * ObProcedure is the wrapper of a stored procedure, the really execution model is include
     * in this class, but the execution model could not be the iterator model
     *
     * the real execution plan is owned by the procedure, instead of sp inst
     * @brief The ObProcedure class
     */
    class ObProcedure : public ObNoChildrenPhyOperator
		{
		public:
			ObProcedure();
			virtual ~ObProcedure();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);
			virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
			virtual int32_t get_child_num() const;

			int set_proc_name(ObString &proc_name);/*设置存储过程名*/
			int add_param(ObParamDef &proc_param);
			int set_params(ObArray<ObParamDef*> &params);/*存储过程参数*/
			int add_declare_var(ObString &var);/*添加一个变量*/

      ObArray<ObParamDef*>& get_params();

      int update_variable(const ObString &var_name, const ObObj & obj);

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
			//data members
			int32_t child_num_;
			ObString proc_name_;
			ObArray<ObParamDef*> params_;/*存储过程参数*/
			ObArray<ObString> declare_variable_;
		};
	}
}

#endif
