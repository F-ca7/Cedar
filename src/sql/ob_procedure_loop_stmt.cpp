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
  }
}
