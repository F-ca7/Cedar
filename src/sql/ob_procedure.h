#ifndef OCEANBASE_SQL_OB_PROCEDURE_H
#define OCEANBASE_SQL_OB_PROCEDURE_H
//#include "ob_multi_children_phy_operator.h"
#include "ob_no_children_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_stmt.h"
#include "ob_procedure_assgin_stmt.h"
#include "ob_procedure_declare_stmt.h"
using namespace oceanbase::common;
namespace oceanbase
{
	namespace sql
	{
    class ObPhysicalPlan;
    class ObProcedure;
    enum SpInstType
    {
      SP_E_INST, //expr instruction
      SP_C_INST, //control instruction
      SP_B_INST, //read baseline data
      SP_D_INST, //maintain delta data
      SP_A_INST, //analyse inst, read, baseline & delta, aggreation, analyze
      SP_UNKOWN
    };

    struct SpPtr
    {
      SpInstType type_;
      int64_t 	 idx_;
      SpPtr(const SpInstType &type, const int64_t &idx) : type_(type), idx_(idx)
      {}
      SpPtr() : type_(SP_UNKOWN), idx_(-1)
      {}
    };


    enum DepDirection //dependence direction between two instructions
    {
      Da_True_Dep, //data true dependence
      Da_Anti_Dep, //data anti dependecne
      Da_Out_Dep,  //data output dependece
      Tr_Itm_Dep   //transaction item dependence
    };

//    class SpBlockInst;
    /**
      spInst could use the decorator model to describe

      SpInst should be a simple wrapper, do not own big memory area which
      should belongs to the physical plan or the result set
     * @brief The SpInst class
     */
    class SpInst
    {
    public:
      SpInst(SpInstType type) : type_(type), proc_(NULL) {}
      virtual int exec() = 0;  //exec the inst at once
//      virtual int split(SpBlockInst &block_inst) = 0; //split the inst into small ones
      virtual const VariableSet &get_read_variable_set() const = 0;
      virtual const VariableSet &get_write_variable_set() const = 0;

      static DepDirection get_dep_rel(SpInst &inst_in, SpInst &inst_out);

      void set_owner_procedure(ObProcedure *proc) { proc_ = proc;}
    protected:
      SpInstType type_;
      ObProcedure *proc_; //the procedure thats owns this instruction
    };

    class SpExprInst : public SpInst
    {
    public:
      SpExprInst() : SpInst(SP_E_INST) {}
      virtual int exec();
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;
      int set_var_val(ObVarAssignVal &var);
      int64_t to_string(char *buf, const int64_t buf_len) const;
    private:
      ObVarAssignVal var_val_;
      VariableSet ws_;
    };


    class SpRdBaseInst :public SpInst
    {
    public:
      SpRdBaseInst() : SpInst(SP_B_INST), op_(NULL) {}
      virtual int exec();
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;
      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      int set_rdbase_op(ObPhyOperator *op);
      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      int64_t to_string(char *buf, const int64_t buf_len) const;
    private:
      ObPhyOperator *op_;
      VariableSet rs_; //the row key variable
      VariableSet ws_; //does not contain any variable
      uint64_t table_id_;
    };

    class SpRwDeltaInst : public SpInst
    {
    public:
      SpRwDeltaInst() : SpInst(SP_D_INST), op_(NULL) {}
      virtual int exec();
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;
      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      void add_write_var(ObString &var_name) { ws_.addVariable(var_name); }
      int set_rwdelta_op(ObPhyOperator *op);
      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      int64_t to_string(char *buf, const int64_t buf_len) const;
    private:
      ObPhyOperator *op_;
      VariableSet rs_;
      VariableSet ws_;
      uint64_t table_id_;
    };

//    class SpExprsInst : public SpInst
//    {
//    public:
//      int exec();
//      int split(SpBlockInst &block_inst);
//    private:
//      ObArray<ObVariableSetVal> var_val_list_;
//    };

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
//			virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
//			virtual int32_t get_child_num() const;

			int set_proc_name(ObString &proc_name);/*设置存储过程名*/
			int add_param(ObParamDef &proc_param);
			int set_params(ObArray<ObParamDef*> &params);/*存储过程参数*/
			int add_declare_var(ObString &var);/*添加一个变量*/

      int add_inst_e(SpExprInst &inst)
      {
        inst_seq_.push_back(SpPtr(SP_E_INST, inst_e_.count()));
        inst_e_.push_back(inst);
        return OB_SUCCESS;
      }

      int add_inst_b(SpRdBaseInst &inst)
      {
        inst_seq_.push_back(SpPtr(SP_B_INST, inst_b_.count()));
        inst_b_.push_back(inst);
        return OB_SUCCESS;
      }

      int add_inst_d(SpRwDeltaInst &inst)
      {
        inst_seq_.push_back(SpPtr(SP_D_INST, inst_d_.count()));
        inst_d_.push_back(inst);
        return OB_SUCCESS;
      }

      int add_var_def(ObVariableDef def)
      {
        defs_.push_back(def);
        return OB_SUCCESS;
      }

      int create_variables();
      int get_var_val(const ObString &var_name, ObObj &val) const;
      int debug_status() const;

      ObArray<ObParamDef*>& get_params();

      int update_variable(const ObString &var_name, const ObObj & val);

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
//			int32_t child_num_;
			ObString proc_name_;
			ObArray<ObParamDef*> params_;/*存储过程参数*/
      ObArray<ObString> declare_variable_;

      ObArray<SpPtr> inst_seq_;
      ObArray<SpExprInst> inst_e_;
      ObArray<SpRdBaseInst> inst_b_;
      ObArray<SpRwDeltaInst> inst_d_;
      ObArray<ObVariableDef> defs_;
      typedef int64_t ProgramCounter;
      ProgramCounter pc_;
		};
	}
}

#endif
