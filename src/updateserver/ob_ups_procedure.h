#ifndef OBUPSPROCEDURE_H
#define OBUPSPROCEDURE_H
#include "sql/ob_sp_procedure.h"
#include "common/ob_pool.h"
#include "common/ob_pooled_allocator.h"
using namespace oceanbase::sql;
namespace oceanbase
{
  namespace updateserver
  {

    class SpUpsLoopInst;
    class SpUpsInstExecStrategy : public sql::SpInstExecStrategy
    {
    public:
      virtual int execute_inst(SpInst *inst); //provide the simple routine
      virtual int execute_block(SpBlockInsts *inst) ;
    private:
      virtual int execute_expr(SpExprInst *inst) ;
      virtual int execute_rd_base(SpRdBaseInst *inst)  { UNUSED(inst); return OB_ERROR; }
      virtual int execute_rw_delta(SpRwDeltaInst *inst) ;
      virtual int execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst) ;
      virtual int execute_rw_comp(SpRwCompInst *inst) { UNUSED(inst); return OB_ERROR; }
      virtual int execute_if_ctrl(SpIfCtrlInsts *inst);
      virtual int execute_loop(SpLoopInst *inst) { UNUSED(inst); return OB_ERROR; }
      virtual int execute_multi_inst(SpMultiInsts *mul_inst);
      int execute_ups_loop(SpUpsLoopInst *inst);
    };

    class SpUpsLoopInst : public sql::SpInst
    {
    public:
      SpUpsLoopInst() : SpInst(SP_L_INST) {}
      virtual ~SpUpsLoopInst();
      virtual const VariableSet &get_read_variable_set() const { return rs_set_; }
      virtual const VariableSet &get_write_variable_set() const { return ws_set_; }

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;

      int64_t get_iteration_count() const { return expanded_loop_body_.count(); }
      SpMultiInsts & get_loop_body(int64_t itr) { return expanded_loop_body_.at(itr); }

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
      virtual int assign(const SpInst *inst);

    private:
      ObArray<SpMultiInsts> expanded_loop_body_;

      VariableSet rs_set_;
      VariableSet ws_set_;
    };

    template<>
    struct sp_inst_traits<SpUpsLoopInst>
    {
      static const bool is_sp_inst = true;
    };

   class ObUpsProcedure : public sql::SpProcedure
    {
    public:
      ObUpsProcedure();
      virtual ~ObUpsProcedure();
      virtual void reset();
      virtual void reuse();
      virtual int open();
      virtual int close();

      int create_variable_table();
      virtual int write_variable(const ObString &var_name, const ObObj &val);
      virtual int write_variable(SpVar &var, const ObObj &val);

      virtual int read_variable(const ObString &var_name, ObObj &val) const;
      virtual int read_variable(const ObString &var_name, const ObObj *&val) const;

      //specially handle the loop inst creataion
      virtual SpInst * create_inst(SpInstType type, SpMultiInsts *mul_inst);

      virtual int64_t to_string(char* buf, const int64_t buf_len) const;
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
    };

  }
}
#endif // OBUPSPROCEDURE_H
