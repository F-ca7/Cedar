#ifndef OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include "ob_sql_expression.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {

struct ObVariableSetVal
{
	ObString    variable_name_;/*参数名称*/
	uint64_t	var_expr_id_;
	ObSqlExpression var_value_;/*赋值*/
};
class ObProcedureAssginStmt: public ObBasicStmt {
	public:
	ObProcedureAssginStmt() :
				ObBasicStmt(T_PROCEDURE_ASSGIN) {
		}
		virtual ~ObProcedureAssginStmt() {
		}


		int add_var_val(ObVariableSetVal &var_val);/*添加一个var_val*/

		ObArray<ObVariableSetVal>& get_var_val_list();/*返回所有赋值*/

		ObVariableSetVal& get_var_val(int64_t index);/*返回一个赋值*/

		int64_t get_var_val_size();/*返回变量列表大小*/

		virtual void print(FILE* fp, int32_t level, int32_t index);
	private:
		ObArray<ObVariableSetVal> var_val_list_;/*赋值变量列表*/


	};


}
}

#endif
