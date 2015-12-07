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
     *
     * @remind
     * later I will refactor the SpVar structure. Here we use ObSqlExpression to
     * represent the index value of an array variable. Each time, we need to caculate
     * the expr to get the index value. Later, I will force the index value to a constant
     * such as: int (a raw index) or string (a temp variable name).
     *
     * @remind
     * refactor SpVar finished
     */
    struct SpVar
    {
      ObString var_name_;
//      ObSqlExpression *idx_value_; //NULL for ordinary variable
      ObObj idx_value_;

      SpVar() { idx_value_.set_null();}
      ~SpVar();

      bool is_array() const { return !idx_value_.is_null(); }
      int deserialize(const char *buf, int64_t data_len, int64_t &pos);
      int serialize(char *buf, int64_t buf_len, int64_t &pos) const;

      int64_t to_string(char *buf, const int64_t buf_len) const;

//      void clear();
      //comment, donot forget the set the ownner op of the idx_value_
      int assign(const SpVar &other);
    };

    /**
     * @brief VarUsedMethod
          Used to represent the usage of a variable
          I'm not sure how many ways the array could be used.
          Thus, leave it as a typedef to expand in future
     *
     */
    typedef int64_t SpVarUsedMethod;
    enum VarUsedMethods
    {
      VM_TMP_VAR,
      VM_FUL_ARY
    };

    /**
     * @brief The SpVarInfo struct
          Reprenset a variable used in an instruction
     */
    struct SpVarInfo
    {
      SpVarInfo() {}
      SpVarInfo(const ObString &name, const SpVarUsedMethod &md) :
        var_name_(name), using_method_(md) {}

      int64_t to_string(char *buf, const int64_t buf_len) const;
      ObString var_name_;
      SpVarUsedMethod using_method_;
    };

    /**
     *
     * @brief The SpVariableSet struct
     */
    class SpVariableSet
    {
    public:
      const static int VAR_PER_INST = 5;
      typedef ObSEArray<SpVarInfo, VAR_PER_INST> VarArray;
      SpVariableSet() {}

      /**
       * add usage of normal variable
       * @brief addVariable
       * @param var_name
       * @return
       */
      int add_tmp_var(const ObString &var_name);
      int add_tmp_var(const ObIArray<ObString>& var_set);
      int add_array_var(const ObString &arr_name);

      int add_var_info_set(const SpVariableSet &var_set);
      int add_var_info(const SpVarInfo &var_info);

      int64_t count() const { return var_info_set_.count(); }
      const SpVarInfo & get_var_info(int64_t idx) const { return var_info_set_.at(idx); }
      int64_t to_string(char *buf, int64_t buf_len) const;

    private:
      VarArray var_info_set_;
    };

    enum DepDirection //dependence direction between two instructions
    {
      Da_True_Dep, //data true dependence
      Da_Anti_Dep, //data anti dependecne
      Da_Out_Dep,  //data output dependece
      Tr_Itm_Dep   //transaction item dependence
    };

    /**
      SpInst should be a simple wrapper, do not own big memory area which
      should belongs to the physical plan or the result set
     * @brief The SpInst class
     */
    class SpInst
    {
    public:
      SpInst(SpInstType type) : type_(type), proc_(NULL) {}
      virtual ~SpInst();
      virtual void get_read_variable_set(SpVariableSet &read_set) const = 0; //bad design ret type as ref ... try to correct later
      virtual void get_write_variable_set(SpVariableSet &write_set) const = 0;

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

    /**
     * @brief The SpMultiInsts class
     * consists of multi-instructions, used when define instructions block,
     * such as if-then block, if-else block, loop-body-block
     */
    class SpMultiInsts
    {
    public:
      SpMultiInsts() : ownner_(NULL) {}
      SpMultiInsts(SpInst *ownner) : ownner_(ownner) {}
      virtual ~SpMultiInsts();
      int add_inst(SpInst *inst) { return inst_list_.push_back(inst); }
      int get_inst(int64_t idx, SpInst *&inst);
      SpInst* get_inst(int64_t idx);
      int64_t inst_count() const { return inst_list_.count(); }

      void get_read_variable_set(SpVariableSet &read_set) const;
      void get_write_variable_set(SpVariableSet &write_set) const;

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int optimize(SpInstList &exec_list);

      int64_t to_string(char *buf, const int64_t buf_len) const;
      int assign(const SpMultiInsts &mul_inst);
    protected:
      SpInstList inst_list_;
      SpInst *ownner_;
    };

    /**
     * @brief The SpExprInst class
     * Represent assign instructions, left_variable = right_values
     */
    class SpExprInst : public SpInst
    {
    public:
      SpExprInst() : SpInst(SP_E_INST) {}
      virtual ~SpExprInst();
      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      ObSqlExpression& get_val() { return right_val_; }
      SpVar & get_var() { return left_var_; }

      SpVariableSet & cons_read_var_set() { return rs_; }
//      int add_rs_var(const ObString &name, bool is_array = false);

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int assign(const SpInst *inst);
    private:

      SpVar left_var_;
      ObSqlExpression right_val_;
      SpVariableSet rs_;
    };

    class SpRdBaseInst :public SpInst
    {
    public:
      SpRdBaseInst() : SpInst(SP_B_INST), op_(NULL) {}
      virtual ~SpRdBaseInst();
      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      SpVariableSet & cons_read_var_set() { return rs_; }
//      void add_read_var(const ObString &var_name, bool is_array) { rs_.add_tmp_var(var_name); }
//      void add_read_var(const ObArray<const ObRawExpr *> &var_list);

      int set_rdbase_op(ObPhyOperator *op, int32_t query_id);
      ObPhyOperator* get_rd_op() { return op_;}
      int32_t get_query_id() const {return query_id_; }
      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int assign(const SpInst *inst);
    protected:
      ObPhyOperator *op_;
      int32_t query_id_; //corresponde to the op_

      SpVariableSet rs_; //the row key variable
      uint64_t table_id_;
    };

    class SpRwDeltaInst : public SpInst
    {
    public:
      friend class SpInstExecStrategy;
      friend class SpMsInstExecStrategy;
      SpRwDeltaInst(SpInstType type = SP_D_INST) : SpInst(type), op_(NULL), ups_exec_op_(NULL), table_id_(0) {}
      virtual ~SpRwDeltaInst();

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      SpVariableSet & cons_read_var_set() { return rs_; }
//      void add_read_var(const ObString &var_name) { rs_.add_tmp_var(var_name); }
//      void add_write_var(const ObString &var_name) { ws_.add_tmp_var(var_name); }
//      void add_read_var(const ObArray<const ObRawExpr *> &var_list);

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
      SpVariableSet rs_;
//      SpVariableSet ws_;
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

      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      const ObIArray<SpVar> & get_var_list() const { return var_list_;}

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

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;
//      void add_read_var(ObString &var_name) { rs_.add_tmp_var(var_name); }
//      void add_write_var(ObString &var_name) { ws_.addVariable(var_name); }

      SpVariableSet & cons_read_var_set() { return rs_; }

      int set_rwcomp_op(ObPhyOperator *op, int32_t query_id) { op_ = op; query_id_ = query_id; return OB_SUCCESS; }
      ObPhyOperator * get_rwcomp_op() { return op_; }

      int32_t get_query_id() const { return query_id_; }

      const ObIArray<SpVar> & get_var_list() const { return var_list_;}

      void add_assign_var(const SpVar &var) { var_list_.push_back(var); }

      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int assign(const SpInst *inst);
    private:
      ObPhyOperator *op_;
      int32_t query_id_;
      uint64_t table_id_;

      ObArray<SpVar> var_list_;

      SpVariableSet rs_;
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

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      int add_inst(SpInst *inst);
      ObIArray<SpInst *> & get_inst_list() { return inst_list_;}

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int assign(const SpInst *inst);
    private:
      ObArray<SpInst *> inst_list_;
      SpVariableSet rs_;
      SpVariableSet ws_;
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
//      void add_read_var(const ObIArray<const ObRawExpr *> &var_list);
      SpVariableSet & cons_read_var_set() { return expr_rs_set_; }

      SpMultiInsts* get_then_block() { return &then_branch_; }
      SpMultiInsts* get_else_block() { return &else_branch_; }

      int optimize(SpInstList &exec_list);

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int assign(const SpInst *inst);
    private:
      ObSqlExpression if_expr_;
      SpVariableSet expr_rs_set_;
//      VariableSet rs_set_;
//      VariableSet ws_set_; //fake design
      SpIfBlock then_branch_;
      SpIfBlock else_branch_;
    };

    class SpLoopInst : public SpInst
    {
    public:
      SpLoopInst() : SpInst(SP_L_INST), step_size_(1), loop_body_(this) {}
      virtual ~SpLoopInst();

      ObSqlExpression & get_lowest_expr() { return lowest_expr_; }
      ObSqlExpression & get_highest_expr() { return highest_expr_; }

      void set_step_size(int64_t step) { step_size_ = step; }
      void set_loop_var(const SpVar &var) { loop_counter_var_ = var; }

      void set_reverse(bool rev) { reverse_ = rev; }
      SpMultiInsts* get_body_block() { return &loop_body_; }

      const SpVar & get_loop_var() const { return loop_counter_var_; }

      int optimize(SpInstList &exec_list);

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) ;

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      virtual int assign(const SpInst *inst);

    private:
      SpVar loop_counter_var_;       //loop counter var
      ObSqlExpression lowest_expr_;  //lowest value
      ObSqlExpression highest_expr_; //highest value
      int64_t lowest_number_;
      int64_t highest_number_;

      int64_t step_size_;						 //step size
      SpMultiInsts loop_body_;       //loop body
      bool reverse_;   //this variable could be elimated
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
    struct sp_inst_traits<SpLoopInst>
    {
      static const bool is_sp_inst = true;
    };

    class SpInstExecStrategy
    {
    public:
      virtual int execute_inst(SpInst *inst) = 0; //to provide the simple routine
      virtual int close(SpInst *inst);
    private:
      virtual int execute_expr(SpExprInst *inst) = 0;
      virtual int execute_rd_base(SpRdBaseInst *inst) = 0;
      virtual int execute_rw_delta(SpRwDeltaInst *inst) = 0;
      virtual int execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst) = 0;
      virtual int execute_rw_comp(SpRwCompInst *inst) = 0;
      virtual int execute_block(SpBlockInsts *inst) = 0;
      virtual int execute_if_ctrl(SpIfCtrlInsts *inst) = 0;
      virtual int execute_loop(SpLoopInst *inst) = 0;
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

      virtual int write_variable(const SpVar &var, const ObObj &val);

      virtual int read_variable(const ObString &var_name, const ObObj *&val) const ;
      virtual int read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const;

      virtual int read_variable(const SpVar &var, const ObObj *&val) const;

      virtual int read_array_size(const ObString &array_name, int64_t &size) const;
      virtual int read_index_value(const ObObj &obj, int64_t &idx_val) const;

      //remove the instruction that does not owned by itself
      //only used when we build a fake procedure object
      void clear_inst_list() { inst_list_.clear(); }

      void set_exec_strategy(SpInstExecStrategy *exec_strategy) { exec_strategy_ = exec_strategy; }
      SpInstExecStrategy * get_exec_strategy() { return exec_strategy_; }

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
      virtual SpInst* create_inst(SpInstType type, SpMultiInsts *mul_inst);

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
      SpInstExecStrategy *exec_strategy_;
      typedef int64_t ProgramCounter;
      ProgramCounter pc_;
      ModuleArena arena_; //maybe we can use the ObTransformer's mem_pool_ to allocate the instruction
    };
  }
}

#endif // SPPROCEDURE_H
