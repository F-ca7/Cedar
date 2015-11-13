#ifndef SPPROCEDURE_H
#define SPPROCEDURE_H

#include "ob_no_children_phy_operator.h"
#include "common/dlist.h"
#include "ob_procedure_stmt.h"
#include "ob_procedure_assgin_stmt.h"
#include "ob_procedure_declare_stmt.h"
#include "ob_physical_plan.h"
#include "ob_raw_expr.h"

using namespace oceanbase::common;

namespace oceanbase
{
  namespace sql
  {
    class SpInstExecStrategy;
    class SpMsInstExecStrategy;
    class SpProcedure;

    enum SpInstType
    {
      SP_E_INST, //expr instruction
      SP_C_INST, //control instruction
      SP_B_INST, //read baseline data
      SP_D_INST, //maintain delta data
      SP_DE_INST, //maintain delta data, read into variables
      SP_A_INST, //analyse inst, read, baseline & delta, aggreation, analyze
      SP_BLOCK_INST, //for a block of instructions
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
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;
      //      SpInst() : type_(SP_UNKOWN), proc_(NULL) {}
      SpInst(SpInstType type) : type_(type), proc_(NULL) {}
      virtual const VariableSet &get_read_variable_set() const = 0; //bad design ret type as ref ... try to correct later
      virtual const VariableSet &get_write_variable_set() const = 0;

      static DepDirection get_dep_rel(SpInst &inst_in, SpInst &inst_out);

      void set_owner_procedure(SpProcedure *proc) { proc_ = proc;}
      SpProcedure *get_ownner() const { return proc_; }
      SpInstType get_type() const { return type_; }

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                                   ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      //      VIRTUAL_NEED_SERIALIZE_AND_DESERIALIZE;
      virtual int64_t to_string(char *buf, const int64_t buf_len) const {UNUSED(buf); UNUSED(buf_len); return 0;}
    protected:
      SpInstType type_;
      SpProcedure *proc_; //the procedure thats owns this instruction
    };

    const static int SP_INST_LIST_SIZE = 5;
    typedef ObSEArray<SpInst *, SP_INST_LIST_SIZE> SpInstList;

    class SpMultiInsts
    {
    public:
      SpMultiInsts(SpInst *ownner) : ownner_(ownner) {}
      int add_inst(SpInst *inst) { return inst_list_.push_back(inst); }
      int get_inst(int64_t idx, SpInst *&inst);
      int64_t inst_count() const { return inst_list_.count(); }
      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

    private:
      SpInstList inst_list_;
      SpInst *ownner_;
    };

    class SpExprInst : public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;
      SpExprInst() : SpInst(SP_E_INST) {}
      //      virtual ~SpExprInst() {}
      //      virtual int exec();
      //      virtual int ups_exec();
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;
      int set_var_val(ObVarAssignVal &var);

      ObSqlExpression * get_val() { return var_val_.var_value_; }
      const ObString & get_var() { return var_val_.variable_name_ ;}

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
      //      NEED_SERIALIZE_AND_DESERIALIZE;
      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

    private:
      ObVarAssignVal var_val_;
      VariableSet ws_;
    };

    class SpRdBaseInst :public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;

      SpRdBaseInst() : SpInst(SP_B_INST), op_(NULL) {}
//      virtual ~SpRdBaseInst() {}
//      virtual int exec();
//      virtual int ups_exec() { /*undefined*/ return OB_ERROR;}
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;
      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      void add_read_var(ObArray<const ObRawExpr *> &var_list);
      int set_rdbase_op(ObPhyOperator *op);
      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
    protected:
      ObPhyOperator *op_;
      VariableSet rs_; //the row key variable
      VariableSet ws_; //does not contain any variable
      uint64_t table_id_;
    };

    class SpRwDeltaInst : public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;
      SpRwDeltaInst(SpInstType type = SP_D_INST) : SpInst(type), op_(NULL), ups_exec_op_(NULL), table_id_(0) {}
//      SpRwDeltaInst(SpInstType type) : SpInst(type), op_(NULL) {}
//      virtual ~SpRwDeltaInst() {}
//      virtual int exec();
//      virtual int ups_exec();
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;
      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      void add_write_var(ObString &var_name) { ws_.addVariable(var_name); }
      void add_read_var(ObArray<const ObRawExpr *> &var_list);
      int set_rwdelta_op(ObPhyOperator *op);
      int set_ups_exec_op(ObPhyOperator *op);

      ObPhyOperator* get_rwdelta_op() { return op_; }
      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
//      NEED_SERIALIZE_AND_DESERIALIZE;
      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

    protected:
      ObPhyOperator *op_; //the main query of the ups execution plan
      ObPhyOperator *ups_exec_op_; //the ObUpsExecutor wrapper operator
      VariableSet rs_;
      VariableSet ws_;
      uint64_t table_id_;
    };

    class SpRwDeltaIntoVarInst : public SpRwDeltaInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;

      SpRwDeltaIntoVarInst() : SpRwDeltaInst(SP_DE_INST) {}
//      virtual ~SpRwDeltaIntoVarInst() {}
//      virtual int exec();
//      virtual int ups_exec();

      void add_assign_list(const ObArray<ObString> &assign_list)
      {
        for(int64_t i = 0; i < assign_list.count(); ++i)
        {
          var_list_.push_back(assign_list.at(i));
          ObString name = assign_list.at(i);
          add_write_var(name);
        }
      }
      const ObArray<ObString> & get_var_list() const { return var_list_;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

//      NEED_SERIALIZE_AND_DESERIALIZE;
    private:
      ObArray<ObString> var_list_;
    };

    class SpRwCompInst : public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;

      SpRwCompInst() : SpInst(SP_A_INST), op_(NULL), table_id_(0) {}
//      virtual ~SpRwCompInst() {}
//      virtual int exec();
//      virtual int ups_exec() {/*undefined*/ return OB_ERROR;}
      virtual const VariableSet &get_read_variable_set() const {return rs_;}
      virtual const VariableSet &get_write_variable_set() const {return ws_;}
      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      void add_write_var(ObString &var_name) { ws_.addVariable(var_name); }
      int set_rwcomp_op(ObPhyOperator *op) { op_ = op; return OB_SUCCESS; }

      void add_assign_list(const ObArray<ObString> &assign_list)
      {
        for(int64_t i = 0; i < assign_list.count(); ++i)
        {
          var_list_.push_back(assign_list.at(i));
          ObString name = assign_list.at(i);
          add_write_var(name);
        }
      }

      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
    private:
      ObPhyOperator *op_;
      VariableSet rs_;
      VariableSet ws_;
      uint64_t table_id_;
      ObArray<ObString> var_list_;
    };

    /**
     * @brief The SpInstBlock class
     * a list of each instruction, which would be sent to ups for further execution
     */
    class SpBlockInsts : public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;

      SpBlockInsts() : SpInst(SP_BLOCK_INST), inst_list_() {}
//      virtual int exec();
//      virtual int ups_exec();
      virtual const VariableSet &get_read_variable_set() const { return rs_; }
      virtual const VariableSet &get_write_variable_set() const { return ws_; }

      int add_inst(SpInst *inst);
      ObArray<SpInst *> & get_inst_list() { return inst_list_;}

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
//      NEED_SERIALIZE_AND_DESERIALIZE;
      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;
    private:
      ObArray<SpInst *> inst_list_;
      VariableSet rs_;
      VariableSet ws_;
    };

    class SpIfCtrlInsts;
    class SpIfBlock : public SpMultiInsts
    {
    public:
      friend class SpIfCtrlInsts;
      SpIfBlock(SpInst *ownner) : SpMultiInsts(ownner) {}
      int optimize() {return OB_SUCCESS;}  //optimize as if block

    };


    class SpIfCtrlInsts : public SpInst
    {
    public:
      SpIfCtrlInsts() : SpInst(SP_C_INST), then_branch_(this), else_branch_(this) {}
      int add_then_inst(SpInst *inst);
      int add_else_inst(SpInst *inst);
      ObSqlExpression & get_if_expr() { return if_expr_; }
      void add_read_var(ObArray<const ObRawExpr *> &var_list);
      SpMultiInsts* get_then_block() { return &then_branch_; }
      SpMultiInsts* get_else_block() { return &else_branch_; }

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;
      virtual const VariableSet &get_read_variable_set() const  { return expr_rs_set_; }
      virtual const VariableSet &get_write_variable_set() const { return ws_set_; }

    private:

      ObSqlExpression if_expr_;
      VariableSet expr_rs_set_;
      VariableSet ws_set_; //fake design
      SpIfBlock then_branch_;
      SpIfBlock else_branch_;
    };

    template<class T>
    struct sp_inst_traits
    {
      static const bool is_sp_inst = false;
    };

    template<>
    struct sp_inst_traits<SpExprInst>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpRdBaseInst>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpRwDeltaInst>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpRwDeltaIntoVarInst>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpRwCompInst>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpBlockInsts>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpIfCtrlInsts>
    {
      static const bool is_sp_inst = true;
    };

    class SpInstExecStrategy
    {
    public:
      virtual int execute_expr(SpExprInst *inst) = 0;
      virtual int execute_rd_base(SpRdBaseInst *inst) = 0;
      virtual int execute_rw_delta(SpRwDeltaInst *inst) = 0;
      virtual int execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst) = 0;
      virtual int execute_rw_comp(SpRwCompInst *inst) = 0;
      virtual int execute_block(SpBlockInsts *inst) = 0;
      virtual int execute_if_ctrl(SpIfCtrlInsts *inst) = 0;
      virtual int execute_multi_inst(SpMultiInsts *mul_inst) = 0;
    };


    class SpProcedure : public ObNoChildrenPhyOperator
    {
    public:
      SpProcedure();
      virtual ~SpProcedure();
      virtual ObPhyOperatorType get_type() const
      {
        return PHY_PROCEDURE;
      }

      virtual void reset() {}
      virtual void reuse() {}
      virtual int open() {return OB_SUCCESS;}
      virtual int close() {return OB_SUCCESS;}
      virtual int get_row_desc(const common::ObRowDesc *&row_desc) const {UNUSED(row_desc); return OB_SUCCESS;}
      virtual int get_next_row(const common::ObRow *&row) {UNUSED(row); return OB_ITER_END;}

      virtual int write_variable(const ObString &var_name, const ObObj & val);
      virtual int read_variable(const ObString &var_name, ObObj &val) const ;
      virtual int read_variable(const ObString &var_name, const ObObj *&val) const ;

      //remove the instruction that does not owned by itself
      //only used when we build a fake procedure object
      void clear_inst_list() { inst_list_.clear(); }

      template<class T>
      T * create_inst(SpMultiInsts *mul_inst)
      {
        T * ret = NULL;
        if( sp_inst_traits<T>::is_sp_inst )
        {
          void *ptr = arena_.alloc(sizeof(T));
          ret = new(ptr) T();
          inst_list_.push_back((SpInst *)ret);
          ((SpInst*)ret)->set_owner_procedure(this);
          if( NULL != mul_inst)
            mul_inst->add_inst(ret);
        }
        return ret;
      }

      virtual void add_inst(SpInst *inst)
      {
        inst_list_.push_back(inst);
      }

      int debug_status(const SpInst *inst) const;

      int deserialize_tree(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory, ObPhyOperator *&root);
      int serialize_tree(char *buf, int64_t buf_len, int64_t &pos, const ObPhyOperator &root) const;
      NEED_SERIALIZE_AND_DESERIALIZE;
      virtual int64_t to_string(char* buf, const int64_t buf_len) const;

    private:
      SpProcedure(const SpProcedure &other);
      SpProcedure& operator=(const SpProcedure &other);

    protected:

      ObArray<SpInst *> inst_list_;

      typedef int64_t ProgramCounter;
      ProgramCounter pc_;
      ModuleArena arena_;
//      SpInstExecStrategy* strategy_;
    };
#endif // SPPROCEDURE_H
  }
}

