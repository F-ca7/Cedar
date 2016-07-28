#ifndef OCEANBASE_SQL_OB_PROCEDURE_WHILE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_WHILE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
using namespace oceanbase::common;

namespace oceanbase
{
  namespace sql
  {
    class ObProcedureWhileStmt: public ObBasicStmt
    {
    public:
      ObProcedureWhileStmt() :
          ObBasicStmt(T_PROCEDURE_WHILE)
      {
      expr_id_=common::OB_INVALID_ID;
      }
      virtual ~ObProcedureWhileStmt()
      {
      }
      virtual void print(FILE* fp, int32_t level, int32_t index);

      int set_expr_id(uint64_t& expr_id);

      int add_do_stmt(uint64_t& stmt_id);

      uint64_t get_expr_id();

      ObArray<uint64_t> get_do_stmts();

      uint64_t& get_do_stmt(int64_t index);

      int64_t get_do_stmt_size();

    private:
      uint64_t expr_id_;							/*while循环的的表达式的*/
      ObArray<uint64_t> while_do_stmts_;		/*while then的列表 */

    };
  }
}
#endif
