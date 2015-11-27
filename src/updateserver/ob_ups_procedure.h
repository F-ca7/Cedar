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
      virtual int execute_multi_inst(SpMultiInsts *mul_inst);
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
