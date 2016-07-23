//add by wangdonghui 20160623
#ifndef OCEANBASE_SQL_OB_PROCEDURE_EXIT_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_EXIT_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
class ObProcedureExitStmt: public ObBasicStmt {
    public:
    ObProcedureExitStmt() :
                ObBasicStmt(T_PROCEDURE_EXIT) {
        expr_id_=common::OB_INVALID_ID;
        }
        virtual ~ObProcedureExitStmt() {
        }
        virtual void print(FILE* fp, int32_t level, int32_t index);

        int set_expr_id(uint64_t& expr_id);

        uint64_t get_expr_id();

    private:
        uint64_t expr_id_;							/*Exit循环的的表达式的id,-1代表no when*/

    };


}
}

#endif
