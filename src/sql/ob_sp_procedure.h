#ifndef SPPROCEDURE_H
#define SPPROCEDURE_H

#include "ob_no_children_phy_operator.h"
#include "ob_procedure_stmt.h"
#include "ob_procedure_assgin_stmt.h"
#include "ob_procedure_declare_stmt.h"
#include "ob_procedure_assgin.h"
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
      SP_C_INST, //if control instruction
      SP_L_INST, //loop instruction
      SP_B_INST, //read baseline data
      SP_D_INST, //maintain delta data
      SP_DE_INST, //maintain delta data, read into variables
      SP_A_INST, //analyse inst, read, baseline & delta, aggreation, analyze
      SP_BLOCK_INST, //for a block of instructions
      SP_UNKOWN
    };

    /**
     * @brief The SpVar struct
     * SpVariables,
     * be careful of the usage of SpVar,
     * remember call clear to totally desconstruct the object,
     * the ~SpVar doesnot free the memory used by idx_value_
     */
    struct SpVar
    {
      ObString var_name_;
      ObSqlExpression *idx_value_; //NULL for ordinary variable

      SpVar() : idx_value_(NULL) {}
      ~SpVar();

      bool is_array() const { return idx_value_ != NULL; }
      int deserialize(const char *buf, int64_t data_len, int64_t &pos, SpProcedure *proc);
      int serialize(char *buf, int64_t buf_len, int64_t &pos) const;

      int64_t to_string(char *buf, const int64_t buf_len) const;

      void clear();
      //comment, donot forget the set the ownner op of the idx_value_
      int assign(const SpVar &other);
    };

    enum DepDirection //dependence direction between two instructions
    {
      Da_True_Dep, //data true dependence
      Da_Anti_Dep, //data anti dependecne
      Da_Out_Dep,  //data output dependece
      Tr_Itm_Dep   //transaction item dependence
    };

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
      SpInst(SpInstType type) : type_(type), proc_(NULL) {}
      virtual ~SpInst();
      virtual const VariableSet &get_read_variable_set() const = 0; //bad design ret type as ref ... try to correct later
      virtual const VariableSet &get_write_variable_set() const = 0;

      static DepDirection get_dep_rel(SpInst &inst_in, SpInst &inst_out);

      void set_owner_procedure(SpProcedure *proc) { proc_ = proc;}
      SpProcedure *get_ownner() const { return proc_; }
      SpInstType get_type() const { return type_; }

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                                   ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      virtual int64_t to_string(char *buf, const int64_t buf_len) const {UNUSED(buf); UNUSED(buf_len); return 0;}

      virtual int assign(const SpInst *inst) = 0;
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
      virtual ~SpMultiInsts();
      int add_inst(SpInst *inst) { return inst_list_.push_back(inst); }
      int get_inst(int64_t idx, SpInst *&inst);
      SpInst* get_inst(int64_t idx);
      int64_t inst_count() const { return inst_list_.count(); }
      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int64_t to_string(char *buf, const int64_t buf_len) const;
      int assign(const SpMultiInsts &mul_inst);
    protected:
      SpInstList inst_list_;
      SpInst *ownner_;
    };

    class SpExprInst : public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;
      SpExprInst() : SpInst(SP_E_INST) {}
      virtual ~SpExprInst();
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;

      ObSqlExpression& get_val() { return right_val_; }
      SpVar & get_var() { return left_var_; }

      int add_rs_var(const ObString &name) { return rs_.addVariable(name); }

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int assign(const SpInst *inst);
    private:

      SpVar left_var_;
      ObSqlExpression right_val_;
      VariableSet ws_; //save the variable_set is a bad idea, since it is only used once when optimze
      VariableSet rs_;
    };

    class SpRdBaseInst :public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;

      SpRdBaseInst() : SpInst(SP_B_INST), op_(NULL) {}
      virtual ~SpRdBaseInst();
      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;
      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      void add_read_var(ObArray<const ObRawExpr *> &var_list);
      int set_rdbase_op(ObPhyOperator *op, int32_t query_id);
      ObPhyOperator* get_rd_op() { return op_;}
      int32_t get_query_id() const {return query_id_; }
      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int assign(const SpInst *inst);
    protected:
      ObPhyOperator *op_;
      int32_t query_id_; //corresponde to the op_
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
      virtual ~SpRwDeltaInst();

      virtual const VariableSet &get_read_variable_set() const;
      virtual const VariableSet &get_write_variable_set() const;

      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      void add_write_var(ObString &var_name) { ws_.addVariable(var_name); }
      void add_read_var(ObArray<const ObRawExpr *> &var_list);

      int set_rwdelta_op(ObPhyOperator *op);
      int set_ups_exec_op(ObPhyOperator *op, int32_t query_id);
      int32_t get_query_id() const { return query_id_; }

      ObPhyOperator* get_rwdelta_op() { return op_; }
      ObPhyOperator* get_ups_exec_op() { return ups_exec_op_; }

      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int assign(const SpInst *inst);
    protected:
      ObPhyOperator *op_; //the main query of the ups execution plan
      ObPhyOperator *ups_exec_op_; //the ObUpsExecutor wrapper operator
      int32_t query_id_;
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
      virtual ~SpRwDeltaIntoVarInst();

      void add_assign_var(const SpVar &var) { var_list_.push_back(var); }

      ObArray<SpVar> & get_var_list() { return var_list_;}

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int assign(const SpInst *inst);

    private:
      ObArray<SpVar> var_list_;
    };

    class SpRwCompInst : public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;

      SpRwCompInst() : SpInst(SP_A_INST), op_(NULL), table_id_(0) {}
      virtual ~SpRwCompInst();

      virtual const VariableSet &get_read_variable_set() const {return rs_;}
      virtual const VariableSet &get_write_variable_set() const {return ws_;}
      void add_read_var(ObString &var_name) { rs_.addVariable(var_name); }
      void add_write_var(ObString &var_name) { ws_.addVariable(var_name); }

      int set_rwcomp_op(ObPhyOperator *op, int32_t query_id) { op_ = op; query_id_ = query_id; return OB_SUCCESS; }
      ObPhyOperator * get_rwcomp_op() { return op_; }

      int32_t get_query_id() const { return query_id_; }

      ObArray<SpVar> & get_var_list() { return var_list_;}

      void add_assign_var(const SpVar &var) { var_list_.push_back(var); }

      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int assign(const SpInst *inst);
    private:
      ObPhyOperator *op_;
      int32_t query_id_;
      VariableSet rs_;
      VariableSet ws_;
      uint64_t table_id_;

      ObArray<SpVar> var_list_;
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

      SpBlockInsts() : SpInst(SP_BLOCK_INST) {}
      virtual ~SpBlockInsts();
//      virtual int exec();
//      virtual int ups_exec();
      virtual const VariableSet &get_read_variable_set() const { return rs_; }
      virtual const VariableSet &get_write_variable_set() const { return ws_; }

      int add_inst(SpInst *inst);
      ObArray<SpInst *> & get_inst_list() { return inst_list_;}

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int assign(const SpInst *inst);
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
      virtual ~SpIfBlock();
      int optimize(SpInstList &exec_list);  //optimize as if block
    };


    class SpIfCtrlInsts : public SpInst
    {
    public:
      SpIfCtrlInsts() : SpInst(SP_C_INST), then_branch_(this), else_branch_(this) {}
      virtual ~SpIfCtrlInsts();
      int add_then_inst(SpInst *inst);
      int add_else_inst(SpInst *inst);
      ObSqlExpression & get_if_expr() { return if_expr_; }
      void add_read_var(ObArray<const ObRawExpr *> &var_list);
      SpMultiInsts* get_then_block() { return &then_branch_; }
      SpMultiInsts* get_else_block() { return &else_branch_; }

      int optimize(SpInstList &exec_list);

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;
      virtual const VariableSet &get_read_variable_set() const  { return expr_rs_set_; }
      virtual const VariableSet &get_write_variable_set() const { return ws_set_; }
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int assign(const SpInst *inst);
    private:
      ObSqlExpression if_expr_;
      VariableSet expr_rs_set_;
      VariableSet rs_set_;
      VariableSet ws_set_; //fake design
      SpIfBlock then_branch_;
      SpIfBlock else_branch_;
    };

    class SpLoopInsts : public SpInst
    {
    public:
      SpLoopInsts() : SpInst(SP_L_INST), step_size_(1), loop_body_(this) {}
      virtual ~SpLoopInsts();

      ObSqlExpression & get_lowest_expr() { return lowest_expr_; }
      ObSqlExpression & get_highest_expr() { return highest_expr_; }

      void set_step_size(int64_t step) { step_size_ = step; }
      void set_loop_var(const SpVar &var) { loop_counter_var_ = var; }
//      int add_loop_inst(SpInst *inst) { return loop_body_.add_inst(inst); }
      void set_reverse(bool rev) { reverse_ = rev; }
      SpMultiInsts* get_body_block() { return &loop_body_; }

    private:
      SpVar loop_counter_var_;       //loop counter var
      ObSqlExpression lowest_expr_;  //lowest value
      ObSqlExpression highest_expr_; //highest value
      int64_t step_size_;						 //step size
      SpMultiInsts loop_body_;       //loop body
      bool reverse_;   //this variable could be elimated

      VariableSet rs_set_;
      VariableSet ws_set_;
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

    template<>
    struct sp_inst_traits<SpLoopInsts>
    {
      static const bool is_sp_inst = true;
    };

    class SpInstExecStrategy
    {
    public:
      virtual int execute_inst(SpInst *inst) = 0; //to provide the simple routine
    private:
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

      virtual void reset();
      virtual void reuse() {}
      virtual int open() {return OB_SUCCESS;}
      virtual int close() {return OB_SUCCESS;}
      virtual int get_row_desc(const common::ObRowDesc *&row_desc) const {UNUSED(row_desc); return OB_SUCCESS;}
      virtual int get_next_row(const common::ObRow *&row) {UNUSED(row); return OB_ITER_END;}

      virtual int write_variable(const ObString &var_name, const ObObj & val);
      virtual int write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val);

      virtual int write_variable(SpVar &var, const ObObj &val);

      virtual int read_variable(const ObString &var_name, ObObj &val) const ;
      virtual int read_variable(const ObString &var_name, const ObObj *&val) const ;
      virtual int read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const;

      virtual int read_variable(SpVar &var, const ObObj *&val) const;

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
          //inst_list_.push_back((SpInst *)ret);
          ((SpInst*)ret)->set_owner_procedure(this);
          if( NULL != mul_inst)
            mul_inst->add_inst(ret);
          else
            inst_list_.push_back((SpInst*)ret);
        }
        return ret;
      }

      //factory function, create a new instruction type
      SpInst* create_inst(SpInstType type, SpMultiInsts *mul_inst);

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

      //further using SpMulInsts to replace it
      ObArray<SpInst *> inst_list_; //would there be memory leak ?

      typedef int64_t ProgramCounter;
      ProgramCounter pc_;
      ModuleArena arena_; //maybe we can use the ObTransformer's mem_pool_ to allocate the instruction
    };
#endif // SPPROCEDURE_H
  }
}
