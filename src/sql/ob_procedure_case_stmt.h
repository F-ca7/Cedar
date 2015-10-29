#ifndef OCEANBASE_SQL_OB_PROCEDURE_CASE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_CASE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
class ObProcedureCaseStmt: public ObBasicStmt {
	public:
	ObProcedureCaseStmt() :
				ObBasicStmt(T_PROCEDURE_CASE) {
		expr_id_ = common::OB_INVALID_ID;
		else_stmt_ = common::OB_INVALID_ID;
		have_else_ = false;
		}
		virtual ~ObProcedureCaseStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

		int set_expr_id(uint64_t& expr_id);

		int add_case_when_stmt(uint64_t& stmt_id);

		int set_else_stmt(uint64_t& stmt_id);

		int set_have_else(bool flag);

		bool have_else();

		/*case 表达的expr id*/
		uint64_t get_expr_id();

		ObArray<uint64_t> get_case_when_stmts();	/*case when语句列表*/

		uint64_t& get_case_when_stmt(int64_t index);

		uint64_t get_else_stmt();				/*else语句*/

		int64_t	get_case_when_stmt_size();		/*返回case when的个数*/



	private:
		uint64_t expr_id_;					/*case的表达式的id*/

		ObArray<uint64_t> casewhen_stmts_;	/*case when列表*/

		bool have_else_;					/*是否有else语句*/

		uint64_t else_stmt_;				/*else 语句*/

	};


}
}

#endif
