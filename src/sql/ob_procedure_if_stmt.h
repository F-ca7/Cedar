#ifndef OCEANBASE_SQL_OB_PROCEDURE_IF_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_IF_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
class ObProcedureIfStmt: public ObBasicStmt {
	public:
	ObProcedureIfStmt() :
				ObBasicStmt(T_PROCEDURE_IF) {
		expr_id_ = common::OB_INVALID_ID;
		else_stmt_ = common::OB_INVALID_ID;
		have_else_if_ = false;
		have_else_ = false;
		}
		virtual ~ObProcedureIfStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);


		int set_expr_id(uint64_t& expr_id);

		int add_then_stmt(uint64_t& stmt_id);

		int add_else_if_stmt(uint64_t& stmt_id);

		int set_else_stmt(uint64_t& stmt_id);

		int set_have_elseif(bool flag);

		int set_have_else(bool flag);

    bool have_elseif() const;

    bool have_else() const;

		/*if表达的id*/
    uint64_t get_expr_id() const;

    const ObArray<uint64_t> &get_then_stmts() const;		/*then语句列表*/

    uint64_t get_then_stmt(int64_t index) const;

    const ObArray<uint64_t> &get_elseif_stmts() const;	/*else if语句列表*/

    uint64_t get_elseif_stmt(int64_t index) const;

    uint64_t 	get_else_stmt() const;			/*else语句*/

    int64_t	get_then_stmt_size() const;		/*返回 if then 下面的语句长度*/

    int64_t	get_elseif_stmt_size() const;		/*返回elseif的个数*/



	private:
		uint64_t expr_id_;					/*if的表达式的*/

		ObArray<uint64_t> then_stmts_;		/*if then */

		bool have_else_if_;					/*是否有else if语句*/

		ObArray<uint64_t> elseif_stmts_;	/*else if 列表*/

		bool have_else_;					/*是否有else语句*/

		uint64_t else_stmt_;				/*else 语句*/

	};


}
}

#endif
