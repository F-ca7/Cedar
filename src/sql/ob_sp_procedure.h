#ifndef SPPROCEDURE_H
#define SPPROCEDURE_H

#include "ob_no_children_phy_operator.h"
#include "ob_procedure_stmt.h"
#include "ob_procedure_assgin_stmt.h"
#include "ob_procedure_declare_stmt.h"
#include "ob_procedure_assgin.h"
#include "ob_physical_plan.h"
#include "ob_raw_expr.h"
#include "ob_procedure_static_data_mgr.h"
using namespace oceanbase::common;

namespace oceanbase
{
  namespace sql
  {
    class SpInstExecStrategy;
    class SpMsInstExecStrategy;
    class SpProcedure;
    class ObProcedureOptimizer;

    enum SpInstType
    {
      SP_E_INST = 0, //expr instruction
      SP_C_INST, //if control instruction
      SP_L_INST, //loop instruction
      SP_CW_INST,//case_when instruction
      SP_B_INST, //read baseline data
      SP_D_INST, //maintain delta data
      SP_DE_INST, //maintain delta data, read into variables
      SP_A_INST, //analyse inst, read, baseline & delta, aggreation, analyze
      SP_PREGROUP_INST, //used to fetch static data
      SP_GROUP_INST, //for a block of instructions
      SP_W_INST, //while instruction
      SP_UNKOWN
    };

    enum CallType
    {
      L_LPC = 0,
      T_RPC = 1,
      S_RPC = 2,
      T_AND_S  = 3,
    };

    inline CallType merge_call_type(CallType a, CallType b)
    {
      return (CallType)(a | b);
    }

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
      ObObj idx_value_;

      SpVar() { idx_value_.set_null();}
      ~SpVar();

      bool is_array() const { return !idx_value_.is_null(); }
      int deserialize(const char *buf, int64_t data_len, int64_t &pos);
      int serialize(char *buf, int64_t buf_len, int64_t &pos) const;

      int64_t to_string(char *buf, const int64_t buf_len) const;

      //comment, donot forget the set the ownner op of the idx_value_
      int assign(const SpVar &other);
    };

    /**
     * @brief SpVarType
          Used to represent the usage of a variable
          I'm not sure how many ways the array could be used.
          Thus, leave it as a typedef to expand in future
     */
    enum SpVarType
    {
      VM_TMP_VAR,
      VM_FUL_ARY,
      VM_DB_TAB
    };

    /**
     * @brief The SpVarInfo struct
          Reprenset a variable used in an instruction
     */
    struct SpVarInfo
    {
      SpVarInfo() {}
      SpVarInfo(uint64_t table_id) :
        var_type_(VM_DB_TAB)  { idx_value_.set_int((int64_t)table_id);}
      SpVarInfo(const ObString &name) :
        var_name_(name), var_type_(VM_TMP_VAR) {}
      SpVarInfo(const ObString &name, const ObObj &idx) :
        var_name_(name), idx_value_(idx), var_type_(VM_FUL_ARY) {}

      static bool conflict(const SpVarInfo &a, const SpVarInfo &b);

      int64_t to_string(char *buf, const int64_t buf_len) const;
      ObString var_name_;
      ObObj    idx_value_;
      SpVarType var_type_;
    };

    /**
     *
     * @brief The SpVariableSet struct
     */
    class SpVariableSet
    {
    public:
      const static int VAR_PER_INST = 8;
      typedef ObSEArray<SpVarInfo, VAR_PER_INST> SpVarArray;
      SpVariableSet() {}

      int add_tmp_var(const ObString &var_name);
      int add_tmp_var(const ObIArray<ObString>& var_set);
      int add_array_var(const ObString &arr_name, const ObObj &idx_value);
      int add_var(const SpVar &var);

      int add_var_info_set(const SpVariableSet &var_set);
      int add_var_info(const SpVarInfo &var_info);

      int add_table_id(const uint64_t table_id);

      int64_t count() const { return var_info_set_.count(); }
      const SpVarInfo & get_var_info(int64_t idx) const { return var_info_set_.at(idx); }
      int64_t to_string(char *buf, int64_t buf_len) const;

      static int conflict(const SpVariableSet &in_set, const SpVariableSet &out_set);
    private:
      SpVarArray var_info_set_;
    };

    enum InstDep //dependence direction between two instructions
    {
      Da_True_Dep = 1, //data true dependence
      Da_Anti_Dep = 2, //data anti dependecne
      Da_Out_Dep  = 4,  //data output dependece
      Tr_Itm_Dep  = 8   //transaction item dependence
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
      virtual CallType get_call_type() const  = 0;

      static int check_dep(SpInst &inst_in, SpInst &inst_out);

      void set_owner_procedure(SpProcedure *proc) { proc_ = proc;}
      SpProcedure *get_ownner() const { return proc_; }
      SpInstType get_type() const { return type_; }
      bool is_srpc() const { return get_call_type() == S_RPC || get_call_type() == T_AND_S; }
      bool is_trpc() const { return get_call_type() == T_RPC; }

      int64_t get_id() const { return id_; }

      void set_id(int64_t id) { id_ = id; }
      virtual bool in_group_exec() const { return false;}
      virtual void set_in_group_exec() {}

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                                   ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      virtual int64_t to_string(char *buf, const int64_t buf_len) const {UNUSED(buf); UNUSED(buf_len); return 0;}

      virtual int assign(const SpInst *inst) = 0;
    protected:
      SpInstType type_;
      int64_t id_;
      SpProcedure *proc_; //the procedure thats owns this instruction
    };

    const static int SP_INST_LIST_SIZE = 16;
    typedef ObSEArray<SpInst *, SP_INST_LIST_SIZE> SpInstList;

    /**
     * @brief The SpMultiInsts class
     * consists of multi-instructions, used when define instructions block,
     * such as if-then block, if-else block, loop-body-block
     */
    class SpMultiInsts
    {
    public:
        friend class ObProcedureOptimizer;
      SpMultiInsts() : ownner_(NULL) {}
      SpMultiInsts(SpInst *ownner) : ownner_(ownner) {}
      virtual ~SpMultiInsts();
      int add_inst(SpInst *inst) { return inst_list_.push_back(inst); }
      int get_inst(int64_t idx, SpInst *&inst);
      SpInst* get_inst(int64_t idx);
      int64_t inst_count() const { return inst_list_.count(); }

      void get_read_variable_set(SpVariableSet &read_set) const;
      void get_write_variable_set(SpVariableSet &write_set) const;
      CallType get_call_type() const;

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int optimize(SpInstList &exec_list);
      void set_in_group_exec();

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

      CallType get_call_type() const { return L_LPC; }

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
      SpRdBaseInst() : SpInst(SP_B_INST), op_(NULL), table_id_(0), for_group_exec_(false), rw_inst_id_(-1) {}
      virtual ~SpRdBaseInst();
      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      SpVariableSet & cons_read_var_set() { return rs_; }
      int set_rdbase_op(ObPhyOperator *op, int32_t query_id);

      CallType get_call_type() const { return S_RPC; }

      ObPhyOperator* get_rd_op() { return op_;}
      int32_t get_query_id() const {return query_id_; }
      void set_tid(uint64_t tid) { table_id_ = tid; }
      void set_rw_id(int64_t id) { rw_inst_id_ = id; }
      int64_t get_rw_id() const { return rw_inst_id_; }

      bool is_for_group_exec() const { return for_group_exec_; }
      void set_exec_mode();
      int64_t get_sdata_id() const { return sdata_id_; }

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int assign(const SpInst *inst);
    protected:
      ObPhyOperator *op_;
      int32_t query_id_; //corresponde to the op_

      SpVariableSet rs_; //the row key variable
      uint64_t table_id_;

      int64_t sdata_id_;
      bool for_group_exec_;

      //Never use in execution phase. Only meaningful in compilation phase.
      int64_t rw_inst_id_;
    };

    class SpRwDeltaInst : public SpInst
    {
    public:
      SpRwDeltaInst(SpInstType type = SP_D_INST) : SpInst(type), op_(NULL), ups_exec_op_(NULL), table_id_(0), group_exec_(false) {}
      virtual ~SpRwDeltaInst();

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      SpVariableSet & cons_read_var_set() { return rs_; }

      CallType get_call_type() const { return T_RPC; }

      int set_rwdelta_op(ObPhyOperator *op);
      int set_ups_exec_op(ObPhyOperator *op, int32_t query_id);
      int32_t get_query_id() const { return query_id_; }

      ObPhyOperator* get_rwdelta_op() { return op_; }
      ObPhyOperator* get_ups_exec_op() { return ups_exec_op_; }

      int set_tid(uint64_t tid) {table_id_ = tid; return OB_SUCCESS;}
      bool in_group_exec() const { return group_exec_; }
      void set_in_group_exec() { group_exec_ = true; }

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
      uint64_t table_id_;
      bool group_exec_;
    };

    class SpRwDeltaIntoVarInst : public SpRwDeltaInst
    {
    public:
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
      ObSEArray<SpVar, 16> var_list_;
    };

    class SpRwCompInst : public SpInst
    {
    public:
      SpRwCompInst() : SpInst(SP_A_INST), op_(NULL), table_id_(0) {}
      virtual ~SpRwCompInst();

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;
      CallType get_call_type() const { return S_RPC; }

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

      ObSEArray<SpVar, 16> var_list_;

      SpVariableSet rs_;
    };

    class SpPreGroupInsts : public SpInst
    {
    public:

        SpPreGroupInsts() : SpInst(SP_PREGROUP_INST) {}
        virtual ~SpPreGroupInsts();

        virtual void get_read_variable_set(SpVariableSet &read_set) const;
        virtual void get_write_variable_set(SpVariableSet &write_set) const;

        CallType get_call_type() const { return S_RPC; }

        SpMultiInsts *get_body() { return inst_list_; }

        int add_inst(SpInst *inst);

        SpVariableSet & get_write_set() const { return write_set_; }
    private:
        SpMultiInsts inst_list_;
        SpVariableSet write_set_;
    };

    /**
     * @brief The SpInstBlock class
     * a list of each instruction, which would be sent to ups for further execution
     */
    class SpGroupInsts : public SpInst
    {
    public:

      SpGroupInsts() : SpInst(SP_GROUP_INST) {}
      virtual ~SpGroupInsts();

      const ObString & get_name() const { return group_proc_name_; }
      void set_name(ObString &name) { group_proc_name_ = name; }
      void set_name(ModuleArena &alloc, const ObString &name)
      {
        ob_write_string(alloc, name, group_proc_name_);
      }

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      CallType get_call_type() const { return T_RPC; }

      int add_inst(SpInst *inst);
      int push_back(SpInst *inst) { return add_inst(inst); }
      ObIArray<SpInst *> & get_inst_list() { return inst_list_;}

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos,
                           common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store,
                           ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int assign(const SpInst *inst);
    private:
      SpInstList inst_list_;
      SpVariableSet rs_;
      SpVariableSet ws_;
      ObString group_proc_name_;
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
      SpIfCtrlInsts() : SpInst(SP_C_INST), branch_opened_(-1), then_branch_(this), else_branch_(this) {}
      virtual ~SpIfCtrlInsts();
      int add_then_inst(SpInst *inst);
      int add_else_inst(SpInst *inst);
      ObSqlExpression & get_if_expr() { return if_expr_; }
      SpVariableSet & cons_read_var_set() { return expr_rs_set_; }

      SpMultiInsts* get_then_block() { return &then_branch_; }
      SpMultiInsts* get_else_block() { return &else_branch_; }

      //@deprecated
      int optimize(SpInstList &exec_list);
      void set_open_flag(int flag) { branch_opened_ = flag; }
      int get_open_flag() const { return branch_opened_; }

      void set_in_group_exec();

      int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos,
                           common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store,
                           ObPhyOperatorFactory *op_factory);
      int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      CallType get_call_type() const;

      int assign(const SpInst *inst);
    private:
      ObSqlExpression if_expr_;
      SpVariableSet expr_rs_set_;
      int branch_opened_; //-1 for not open, 1 for then branch open, 0 for else branch open
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

      /**
       * @brief add_itr_local_inst
       * instruction used to set the temporary status of each iteration
       * exectuted at the start of each iteration, just like increase the loop_counter_var_
       * @param inst
       */
//      void add_itr_local_inst(int64_t idx) { loop_local_inst_.push_back(idx); }

      const SpVar & get_loop_var() const { return loop_counter_var_; }

      int optimize(SpInstList &exec_list);

      bool is_simple_loop() const;
      void set_in_group_exec();

      CallType get_call_type() const;
      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos,
                                   ModuleArena &allocator,
                                   ObPhysicalPlan::OperatorStore &operators_store,
                                   ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;
//      int serialize_loop_body(char *buf, int64_t buf_len, int64_t &pos, int64_t itr_begin, int64_t itr_end);

      int serialize_loop_template(char *buf, int64_t buf_len, int64_t &pos) const;
      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      virtual int assign(const SpInst *inst);
      int assign_template(const SpLoopInst *old_inst);

    private:
//      static bool need_expand(SpInst *inst);

    private:
      SpVar loop_counter_var_;       //loop counter var
      ObSqlExpression lowest_expr_;  //lowest value
      ObSqlExpression highest_expr_; //highest value

      int64_t step_size_;						 //step size
      SpMultiInsts loop_body_;       //loop body

      //executed at each iteration started
//      ObSEArray<int64_t, 8> loop_local_inst_;
      bool reverse_;   //this variable could be elimated
    };

    //add hjw 20151229:b
    class SpWhileInst : public SpInst
    {
     public:
        SpWhileInst():SpInst(SP_W_INST), do_body_(this){}
        virtual ~SpWhileInst();

        ObSqlExpression& get_while_expr(){return while_expr_;}
        SpMultiInsts* get_body_block() {return &do_body_;}
        SpVariableSet & cons_read_var_set() { return while_expr_var_set_; }


        virtual void get_read_variable_set(SpVariableSet &read_set) const;
        virtual void get_write_variable_set(SpVariableSet &write_set) const;
        virtual CallType get_call_type() const;

        virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos,ModuleArena &allocator,ObPhysicalPlan::OperatorStore &operators_store,ObPhyOperatorFactory *op_factory);
        virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

        virtual int64_t to_string(char *buf, const int64_t buf_len) const;

        virtual int assign(const SpInst *inst);

     private:
        ObSqlExpression while_expr_;  //while value
        SpVariableSet while_expr_var_set_;
        SpMultiInsts do_body_;
    };
//add hjw 20151229:e


    class SpCaseInst;
    class SpWhenBlock : public SpMultiInsts
    {
     friend class SpCaseInst;
    public:
      SpWhenBlock() : SpMultiInsts() {}
      SpWhenBlock(SpInst *ownner) : SpMultiInsts(ownner) {}
      virtual ~SpWhenBlock();

      SpVariableSet & cons_read_var_set() { return when_expr_var_set_; }

      ObSqlExpression& get_when_expr(){return when_expr_;}

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;
      int assign(const SpWhenBlock &block);

    private:
      ObSqlExpression when_expr_;
      SpVariableSet when_expr_var_set_;
    };


    class SpCaseInst : public SpInst
    {
    public:
      SpCaseInst():SpInst(SP_CW_INST), else_branch_(this) {}
      virtual ~SpCaseInst();

      ObSqlExpression& get_case_expr(){return case_expr_;}
      SpMultiInsts* get_else_block(){return &else_branch_;}
      ObIArray<SpWhenBlock>& cons_when_list() {return when_list_;}

      SpWhenBlock * get_when_block(int64_t idx) { return & (when_list_.at(idx)); }
      int64_t get_when_count() const { return when_list_.count(); }

      void set_in_group_exec();
      SpVariableSet & cons_read_var_set() { return case_expr_var_set_; }

      CallType get_call_type() const;
      virtual void get_read_variable_set(SpVariableSet &read_set) const;
      virtual void get_write_variable_set(SpVariableSet &write_set) const;

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;

      virtual int assign(const SpInst *inst);
    private:
      ObSqlExpression case_expr_;
      SpVariableSet case_expr_var_set_;
      ObSEArray<SpWhenBlock, 8> when_list_;
      SpMultiInsts else_branch_;
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
    struct sp_inst_traits<SpPreGroupInsts>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpGroupInsts>
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

    template<>
    struct sp_inst_traits<SpCaseInst>
    {
      static const bool is_sp_inst = true;
    };

    template<>
    struct sp_inst_traits<SpWhileInst>
    {
      static const bool is_sp_inst = true;
    };

    typedef ObSEArray<int64_t, 8> ObLoopCounter; //represent the instruction location, each loop would create one more counter

    class SpInstExecStrategy
    {
    public:
      virtual int execute_inst(SpInst *inst) = 0; //to provide the simple routine
      static int64_t sdata_mgr_hash(int64_t sdata_id, const ObLoopCounter &counter);
    private:
      virtual int execute_expr(SpExprInst *inst) = 0;
      virtual int execute_rd_base(SpRdBaseInst *inst) = 0;
      virtual int execute_wr_delta(SpRwDeltaInst *inst) = 0;
      virtual int execute_rd_delta(SpRwDeltaIntoVarInst *inst) = 0;
      virtual int execute_rw_all(SpRwCompInst *inst) = 0;
      virtual int execute_group(SpGroupInsts *inst) = 0;
      virtual int execute_if_ctrl(SpIfCtrlInsts *inst) = 0;
      virtual int execute_loop(SpLoopInst *inst) = 0;
      virtual int execute_casewhen(SpCaseInst *inst) = 0;  //TODO
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
      int set_proc_name(const ObString &proc_name); //proc name
      const ObString & get_proc_name() const { return proc_name_; }

      virtual void reset();
      virtual void reuse() {}
      virtual int open() {return OB_SUCCESS;}
      virtual int close();
      virtual int get_row_desc(const common::ObRowDesc *&row_desc) const {UNUSED(row_desc); return OB_SUCCESS;}
      virtual int get_next_row(const common::ObRow *&row) {UNUSED(row); return OB_ITER_END;}

      int create_variable_table();
      virtual int write_variable(const ObString &var_name, const ObObj & val);
      virtual int write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val);

      virtual int write_variable(const SpVar &var, const ObObj &val);

      virtual int read_variable(const ObString &var_name, const ObObj *&val) const ;
      virtual int read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const;

      virtual int read_variable(const SpVar &var, const ObObj *&val) const;

      virtual int read_array_size(const ObString &array_name, int64_t &size) const;
      virtual int read_index_value(const ObObj &obj, int64_t &idx_val) const;

      //for static data management
      int store_static_data(int64_t sdata_id, int64_t hkey, ObRowStore *&p_row_store);
      int get_static_data_by_id(int64_t sdata_id, ObRowStore *&p_row_store);
      int get_static_data(int64_t idx, int64_t &sdata_id, int64_t &hkey, const ObRowStore *&p_row_store);
      int64_t get_static_data_count() const;
      virtual int64_t hkey(int64_t sdata_id) const;

      //remove the instruction that does not owned by itself
      //only used when we build a fake procedure object
      void clear_inst_list() { inst_list_.clear(); }
      void clear_var_tab();

//      void set_exec_strategy(SpInstExecStrategy *exec_strategy) { exec_strategy_ = exec_strategy; }
//      SpInstExecStrategy * get_exec_strategy() { return exec_strategy_; }

      template<class T>
      T * create_inst(SpMultiInsts *mul_inst)
      {
        T * ret = NULL;
        if( sp_inst_traits<T>::is_sp_inst )
        {
          void *ptr = arena_.alloc(sizeof(T));
          if( NULL != ptr )
          {
            ret = new(ptr) T();
            //inst_list_.push_back((SpInst *)ret);
            ((SpInst*)ret)->set_owner_procedure(this);
            if( NULL != mul_inst)
              mul_inst->add_inst(ret);
            else
              inst_list_.push_back((SpInst*)ret);

            ((SpInst*)ret)->set_id(inst_store_.count());
            inst_store_.push_back(ret);
          }
        }
        return ret;
      }

      //factory function, create a new instruction type
      virtual SpInst* create_inst(SpInstType type, SpMultiInsts *mul_inst);

      virtual void add_inst(SpInst *inst)
      {
        inst_list_.push_back(inst);
      }

      int get_inst_by_id(int64_t inst_id, SpInst *&inst) { return inst_store_.at(inst_id, inst); }

      int64_t generate_static_data_id() { return ++static_data_id_gen_; }

      int debug_status(const SpInst *inst) const;

      int deserialize_tree(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                           ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory, ObPhyOperator *&root);
      int serialize_tree(char *buf, int64_t buf_len, int64_t &pos, const ObPhyOperator &root) const;
      NEED_SERIALIZE_AND_DESERIALIZE;
      virtual int64_t to_string(char* buf, const int64_t buf_len) const;

      const static int64_t FAKE_TABLE_ID = -1;
      const static int64_t ROW_VAR_CID = 16;
      const static int64_t ROW_VAL_CID = 17;
    private:
      SpProcedure(const SpProcedure &other);
      SpProcedure& operator=(const SpProcedure &other);

    protected:

      ObString proc_name_;

      SpInstList inst_list_;
      SpInstList inst_store_;

//      SpInstExecStrategy *exec_strategy_;
      int64_t static_data_id_gen_;
      int64_t pc_;

      ModuleArena arena_; //maybe we can use the ObTransformer's mem_pool_ to allocate the instruction


      static const int64_t SMALL_BLOCK_SIZE = 4 * 1024LL;
      typedef common::ObPooledAllocator<common::hash::HashMapTypes<common::ObString, common::ObObj>::AllocType, common::ObWrapperAllocator> VarNameValMapAllocer;
      typedef common::hash::ObHashMap<common::ObString,
      common::ObObj,
      common::hash::NoPthreadDefendMode,
      common::hash::hash_func<common::ObString>,
      common::hash::equal_to<common::ObString>,
      VarNameValMapAllocer,
      common::hash::NormalPointer,
      common::ObSmallBlockAllocator<>
      > VarNameValMap;

      common::ObSmallBlockAllocator<> block_allocator_;
      VarNameValMapAllocer var_name_val_map_allocer_;
      VarNameValMap var_name_val_map_;
      common::ObStringBuf name_pool_;

      struct ObProcedureArray
      {
//        ObString array_name_;
        ObSEArray<ObObj, 8> array_values_;
      };

      ObSEArray<ObProcedureArray, 4> array_table_;

      ObProcedureStaticDataMgr static_data_mgr_;
    };
  }
}

#endif // SPPROCEDURE_H
