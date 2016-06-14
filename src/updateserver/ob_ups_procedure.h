#ifndef OBUPSPROCEDURE_H
#define OBUPSPROCEDURE_H
#include "sql/ob_sp_procedure.h"
#include "common/ob_pool.h"
#include "common/ob_pooled_allocator.h"
#include "ob_session_mgr.h"
#include "ob_ups_procedure_special_executor.h"
using namespace oceanbase::sql;
namespace oceanbase
{
  namespace updateserver
  {

    class SpUpsLoopInst;

    class SpUpsInstExecStrategy;
    typedef int (*UpsInstHandler)(SpUpsInstExecStrategy *host, SpInst *inst);

    class SpUpsInstExecStrategy
    {
    public:

      SpUpsInstExecStrategy();

      int execute_inst(SpInst *inst)
      {
        return inst_handler[inst->get_type()](this, inst);
      }

      int execute_block(SpGroupInsts *inst) ;

      int64_t hkey(int64_t sdata_id) const;

    private:
      int execute_expr(SpExprInst *inst) ;
      int execute_rd_base(SpRdBaseInst *inst)  { UNUSED(inst); return OB_ERROR; }
      int execute_rw_delta(SpRwDeltaInst *inst) ;
      int execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst) ;
      int execute_rw_comp(SpRwCompInst *inst) { UNUSED(inst); return OB_ERROR; }
      int execute_if_ctrl(SpIfCtrlInsts *inst);
      int execute_loop(SpLoopInst *inst) { UNUSED(inst); return OB_ERROR; }
      int execute_casewhen(SpCaseInst *inst);
      int execute_multi_inst(SpMultiInsts *mul_inst);
      int execute_ups_loop(SpUpsLoopInst *inst);
    private:
      static int pexecute_expr(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_rw_delta(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_rw_delta_into_var(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_if_ctrl(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_loop(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_block(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_casewhen(SpUpsInstExecStrategy *host, SpInst *inst);
    private:
      UpsInstHandler inst_handler[SP_UNKOWN];
      ObLoopCounter loop_counter_;
    };

    class SpUpsLoopInst : public sql::SpInst
    {
    public:
      SpUpsLoopInst() : SpInst(SP_L_INST), expanded_loop_body_(this) {}
      virtual ~SpUpsLoopInst();

      virtual void get_read_variable_set(SpVariableSet &read_set) const { UNUSED(read_set); }
      virtual void get_write_variable_set(SpVariableSet &write_set) const { UNUSED(write_set); }

      virtual CallType get_call_type() const { return T_RPC; }
      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;
      virtual int deserialize_loop_body(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int deserialize_loop_template(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);


//      int64_t get_iteration_count() const { return expanded_loop_body_.count(); }
      int64_t get_inst_count() const { return expanded_loop_body_.inst_count(); }
      int64_t get_lowest_number() const { return lowest_number_; }
      int64_t get_highest_number() const { return highest_number_; }
      const SpVar & get_loop_counter_var() const { return loop_counter_var_; }
//      SpMultiInsts & get_loop_body(int64_t itr) { return expanded_loop_body_.at(itr); }

      SpInst *get_inst(int64_t idx) { return expanded_loop_body_.get_inst(idx); }
      SpMultiInsts * get_loop_body() { return &expanded_loop_body_; }
      bool get_flag(int64_t idx) const { return flags.at(idx); }
      int64_t get_body_size() const { return flags.count(); }

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
      virtual int assign(const SpInst *inst);

    private:
      SpVar loop_counter_var_;
      int64_t lowest_number_;
      int64_t highest_number_;
//      ObArray<SpMultiInsts> expanded_loop_body_;
      ObSEArray<bool, 16> flags;
      SpMultiInsts expanded_loop_body_;
    };

   class ObUpsProcedure : public sql::SpProcedure
    {
    public:
      ObUpsProcedure(BaseSessionCtx& session_ctx);
      virtual ~ObUpsProcedure();
      virtual void reset();
      virtual void reuse();
      virtual int open();
      virtual int close();

      int create_variable_table();
      virtual int write_variable(const ObString &var_name, const ObObj &val);
      virtual int write_variable(const SpVar &var, const ObObj &val);
      virtual int write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val);

      virtual int read_variable(const ObString &var_name, const ObObj *&val) const;
      virtual int read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const;

      virtual int store_static_data(int64_t sdata_id, int64_t hkey, ObRowStore *&p_row_store);
      virtual int get_static_data_by_id(int64_t sdata_id, ObRowStore *&p_row_store);
      virtual int64_t get_static_data_count() const;

      //specially handle the loop inst creataion
      virtual SpInst * create_inst(SpInstType type, SpMultiInsts *mul_inst);

      virtual int64_t to_string(char* buf, const int64_t buf_len) const;

      BaseSessionCtx * get_session_ctx() { return session_ctx_; }
    private:
      //disallow copy
      static const int64_t SMALL_BLOCK_SIZE = 4 * 1024LL;
      ObUpsProcedure(const ObUpsProcedure &other);
      ObUpsProcedure& operator=(const ObUpsProcedure &other);
    private:

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

      //save the variables
      bool is_var_tab_created;
      common::ObSmallBlockAllocator<> block_allocator_;
      VarNameValMapAllocer var_name_val_map_allocer_;
      VarNameValMap var_name_val_map_;
      common::ObStringBuf name_pool_;

      struct ObUpsArray
      {
        ObString array_name_;
        ObSEArray<ObObj, 8> array_values_;
      };

      ObSEArray<ObUpsArray, 4> array_table_;

      SpUpsInstExecStrategy strategy_;
      ObProcedureStaticDataMgr static_data_mgr_;

      BaseSessionCtx *session_ctx_;
    };

  }
}
#endif // OBUPSPROCEDURE_H
