#ifndef OCEANBASE_SQL_OB_PROCEDURE_EXECUTE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_EXECUTE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {


class ObProcedureExecuteStmt: public ObBasicStmt {
	public:
	ObProcedureExecuteStmt() :
				ObBasicStmt(T_PROCEDURE_EXEC) {
			proc_stmt_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureExecuteStmt() {
		}

		int set_proc_name(ObString &proc_name);

		int set_proc_stmt_id(uint64_t& proc_stmt_id);

		ObString& get_proc_name();/*获取存储过程名*/

		uint64_t& get_proc_stmt_id();/*获取存储过程对应语句id*/

		virtual void print(FILE* fp, int32_t level, int32_t index);

		int add_variable_name(ObString& name);
		ObString& get_variable_name(int64_t index);
		int64_t get_variable_size();

		int add_param_expr(uint64_t& expr_id);
		uint64_t get_param_expr(int64_t index);
		int64_t get_param_size();

	private:
		ObString proc_name_;
		common::ObArray<common::ObString> variable_names_;
		common::ObArray<uint64_t> param_list_;
		uint64_t proc_stmt_id_;/*需要从表里面查询数据生成存储过程计划的时候对应的存储过程语句id*/
	};


}
}

#endif
