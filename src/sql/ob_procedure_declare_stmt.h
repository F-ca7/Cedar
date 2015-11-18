#ifndef OCEANBASE_SQL_OB_PROCEDURE_DECLARE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_DECLARE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include "ob_sql_expression.h"
using namespace oceanbase::common;

namespace oceanbase {
  namespace sql {

    struct ObVariableDef
    {
      ObString    variable_name_;/*参数名称*/
      ObObjType   variable_type_;/*参数类型*/
      bool   is_default_;/*是否有默认值*/
      ObObj default_value_;/*默认值*/
    };
    class ObProcedureDeclareStmt: public ObBasicStmt {
    public:
      ObProcedureDeclareStmt() :
              ObBasicStmt(T_PROCEDURE_DECLARE) {
      }
      virtual ~ObProcedureDeclareStmt() {
      }


      int add_proc_var(const ObVariableDef &proc_var);/*添加一个变量*/

//      ObArray<ObVariableDef>& get_variables();/*返回所有变量*/

      const ObVariableDef& get_variable(int64_t index) const;

      int64_t get_variable_size() const;

      virtual void print(FILE* fp, int32_t level, int32_t index);
    private:
      ObArray<ObVariableDef> variables_;
    };
  }
}

#endif
