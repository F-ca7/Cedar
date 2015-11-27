#ifndef OCEANBASE_SQL_OB_PROCEDURE_SELECT_INTO_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_SELECT_INTO_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
using namespace oceanbase::common;

namespace oceanbase {
  namespace sql {

    struct SpRawVar
    {
      ObString var_name_;
      uint64_t idx_expr_id_;

      SpRawVar() : idx_expr_id_(OB_INVALID_ID) {}
    };

    class ObProcedureSelectIntoStmt: public ObBasicStmt {
    public:
      ObProcedureSelectIntoStmt() :
              ObBasicStmt(T_PROCEDURE_SELECT_INTO) {
        declare_query_id_=common::OB_INVALID_ID;
      }
      virtual ~ObProcedureSelectIntoStmt() {
      }
      virtual void print(FILE* fp, int32_t level, int32_t index);

      int set_declare_id(uint64_t query_id);

      uint64_t get_declare_id();

      int add_variable(const SpRawVar &raw_var);
      const SpRawVar & get_variable(int64_t index);
      int64_t get_variable_size();

    private:
      uint64_t declare_query_id_;
      ObArray<SpRawVar> raw_vars_;

    };
  }
}

#endif
