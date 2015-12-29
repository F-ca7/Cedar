#ifndef OB_VARIABLE_SET_ARRAY_VALUE_STMT_H
#define OB_VARIABLE_SET_ARRAY_VALUE_STMT_H

#include "common/ob_array.h"
#include "sql/ob_basic_stmt.h"
#include "common/ob_object.h"

using namespace oceanbase::common;
namespace oceanbase
{
  namespace sql
  {
    class ObVariableSetArrayValueStmt : public ObBasicStmt
    {
    public:
      ObVariableSetArrayValueStmt() :
        ObBasicStmt(T_VARIABLE_SET_ARRAY_VALUE) {

      }

      virtual ~ObVariableSetArrayValueStmt();

      void set_var_name(const ObString &var_name) { var_name_ = var_name; }
      int add_value(const ObObj &val) { return values_.push_back(val); }

      const ObString &get_var_name() const { return var_name_; }
      const ObObj & get_value(int64_t idx) const { return values_.at(idx); }
      int64_t count() const { return values_.count();}

      virtual void print(FILE *fp, int32_t level, int32_t index);
    private:
      ObArray<ObObj> values_;
      ObString var_name_;
    };
  }
}

#endif // OBARRAYVALUELISTSTMT_H
