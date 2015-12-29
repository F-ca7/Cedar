#ifndef OCEANBASE_SQL_OB_PROCEDURE_CASEWHEN_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_CASEWHEN_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
class ObProcedureCaseWhenStmt: public ObBasicStmt {
	public:
	ObProcedureCaseWhenStmt() :
				ObBasicStmt(T_PROCEDURE_CASEWHEN) {
		expr_id_=common::OB_INVALID_ID;
		case_value_expr_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureCaseWhenStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

		int set_expr_id(uint64_t& expr_id);

		int set_case_value_expr(uint64_t& expr_id);

    uint64_t get_expr_id();

		uint64_t get_case_value_expr();

    int add_then_stmt(uint64_t& stmt_id);

    const ObArray<uint64_t>& get_then_stmts() const;

		uint64_t& get_then_stmt(int64_t index);

		int64_t get_then_stmt_size();

  private:
    uint64_t expr_id_;
    uint64_t case_value_expr_;
    ObArray<uint64_t> when_then_stmts_;


	};


}
}

#endif
