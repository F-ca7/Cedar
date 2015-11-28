#include "ob_procedure_loop_stmt.h"


namespace oceanbase
{
  namespace sql
  {
    ObProcedureLoopStmt::~ObProcedureLoopStmt()
    {
    }

    void ObProcedureLoopStmt::print(FILE* fp, int32_t level, int32_t index) {
      UNUSED(index);
      print_indentation(fp, level);
      fprintf(fp, "<ObProcedureLoopStmt %d begin>\n", index);
      print_indentation(fp, level);
      fprintf(fp, "<ObProcedureLoopStmt %d End>\n", index);
    }

    uint64_t ObProcedureLoopStmt::get_loop_stmt(int64_t idx) const
    {
      uint64_t stmt_id = OB_INVALID;
      if( OB_SUCCESS != loop_body_stmts_.at(idx, stmt_id) )
      {
        TBSYS_LOG(WARN, "stmt idx out of range in loop body block");
      }
      return stmt_id;
    }
  }
}
