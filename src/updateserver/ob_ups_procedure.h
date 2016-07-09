#ifndef OBUPSPROCEDURE_H
#define OBUPSPROCEDURE_H
#include "sql/ob_sp_procedure.h"
#include "ob_session_mgr.h"
#include "ob_ups_procedure_special_executor.h"
using namespace oceanbase::sql;
namespace oceanbase
{
  namespace updateserver
  {

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
//      int execute_loop(SpLoopInst *inst) { UNUSED(inst); return OB_ERROR; }
      int execute_casewhen(SpCaseInst *inst);
      int execute_multi_inst(SpMultiInsts *mul_inst);
      int execute_while(SpWhileInst *inst);
      int execute_loop(SpLoopInst *inst);
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
      ObRow curr_row_;
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

      virtual int64_t hkey(int64_t sdata_id) const;

      virtual int64_t to_string(char* buf, const int64_t buf_len) const;

      BaseSessionCtx * get_session_ctx() { return session_ctx_; }

      virtual int get_next_row(const common::ObRow *&row);
      virtual int get_row_desc(const ObRowDesc *&row_desc) const;

    private:
      //disallow copy
      static const int64_t SMALL_BLOCK_SIZE = 4 * 1024LL;
      ObUpsProcedure(const ObUpsProcedure &other);
      ObUpsProcedure& operator=(const ObUpsProcedure &other);

      int make_fake_desc();
    private:

      SpUpsInstExecStrategy strategy_;

      VarNameValMap::const_iterator var_iter_;
      ObRowDesc fake_desc_;
      ObRow var_row_;
      BaseSessionCtx *session_ctx_;
    };

  }
}
#endif // OBUPSPROCEDURE_H
