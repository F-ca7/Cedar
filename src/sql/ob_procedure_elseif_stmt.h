#ifndef OCEANBASE_SQL_OB_PROCEDURE_ELSEIF_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_ELSEIF_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
class ObProcedureElseIfStmt: public ObBasicStmt {
	public:
	ObProcedureElseIfStmt() :
				ObBasicStmt(T_PROCEDURE_ELSEIF) {
		expr_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureElseIfStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

		int set_expr_id(uint64_t& expr_id);

		int add_elseif_then_stmt(uint64_t& stmt_id);

		/*else if表达的id*/
		uint64_t get_expr_id();

    ObArray<uint64_t> get_then_stmts();			/*else if then语句列表*/

		uint64_t& get_then_stmt(int64_t index);

		int64_t get_then_stmt_size();

	private:
		uint64_t expr_id_;							/*else if的表达式的*/

		ObArray<uint64_t> elseif_then_stmts_;		/*else if then */


	};


}
}

#endif
