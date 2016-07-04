#include "ob_procedure_exit_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
    namespace sql{
        void ObProcedureExitStmt::print(FILE* fp, int32_t level, int32_t index) {
            UNUSED(index);
            print_indentation(fp, level);
            fprintf(fp, "<ObProcedureExitStmt %d begin>\n", index);
            print_indentation(fp, level);
            fprintf(fp, "<ObProcedureExitStmt %d End>\n", index);
        }
        int ObProcedureExitStmt::set_expr_id(uint64_t& expr_id)
        {
            expr_id_=expr_id;
            return OB_SUCCESS;
        }

        /*when expr id*/
        uint64_t ObProcedureExitStmt::get_expr_id()
        {
            return expr_id_;
        }
    }
}



