#ifndef OCEANBASE_SQL_OB_SURSOR_FETCH_RELATIVE_INTO_STMT_H_
#define OCEANBASE_SQL_OB_SURSOR_FETCH_RELATIVE_INTO_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {

class ObCursorFetchRelativeIntoStmt: public ObBasicStmt {
	public:
	ObCursorFetchRelativeIntoStmt() :
				ObBasicStmt(T_CURSOR_FETCH_RELATIVE_INTO) {
			cursor_stmt_id_=common::OB_INVALID_ID;
		}
		virtual ~ObCursorFetchRelativeIntoStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

		int set_cursor_id(uint64_t stmt_id);
		uint64_t get_cursor_id();
		int add_variable(ObString &name);
		ObString& get_variable(int64_t index);
		int64_t get_variable_size();

	private:
		uint64_t cursor_stmt_id_;
		ObArray<ObString> variable_name_;

	};


}
}

#endif
