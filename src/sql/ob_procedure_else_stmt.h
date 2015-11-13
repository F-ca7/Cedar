#ifndef OCEANBASE_SQL_OB_PROCEDURE_ELSE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_ELSE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
class ObProcedureElseStmt: public ObBasicStmt {
	public:
	ObProcedureElseStmt() :
				ObBasicStmt(T_PROCEDURE_ELSE) {
		}
		virtual ~ObProcedureElseStmt() {
		}

		virtual void print(FILE* fp, int32_t level, int32_t index);

		int add_else_stmt(uint64_t& stmt_id);

    const ObArray<uint64_t> &get_else_stmts() const;		/*else语句列表*/

		uint64_t& get_else_stmt(int64_t index);

		int64_t get_else_stmt_size();

	private:
		ObArray<uint64_t> else_stmts_;		/*else stmt */


	};


}
}

#endif
