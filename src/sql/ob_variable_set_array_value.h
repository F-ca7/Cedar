#ifndef OBVARIABLESETARRAYVALUE_H
#define OBVARIABLESETARRAYVALUE_H

#include "ob_no_children_phy_operator.h"
#include "common/ob_string.h"
#include "common/ob_object.h"
#include "common/ob_array.h"
using namespace oceanbase::common;

namespace oceanbase
{
  namespace sql
  {
    class ObVariableSetArrayValue : public ObNoChildrenPhyOperator
    {
      public:
        ObVariableSetArrayValue();
        virtual ~ObVariableSetArrayValue();

        virtual void reset() {}
        virtual void reuse() { values_.clear(); }

        virtual int open();
        virtual int close() { return OB_SUCCESS; }
        virtual ObPhyOperatorType get_type() const { return PHY_VARIABLE_SET_ARRAY; }
        virtual int64_t to_string(char *buf, const int64_t buf_len) const;

        virtual int get_next_row(const ObRow *&row) { row = NULL; return OB_ITER_END; }
        virtual int get_row_desc(const ObRowDesc *&row_desc) const { row_desc = NULL; return OB_NOT_SUPPORTED; }


        void set_var_name(const ObString &var_name) { var_name_ = var_name; }
        int add_array_value(const ObObj &obj) { return values_.push_back(obj); }

      private:
        ObVariableSetArrayValue(const ObVariableSetArrayValue &other);
        ObVariableSetArrayValue& operator = (const ObVariableSetArrayValue &other);

        ObString var_name_;
        ObArray<ObObj> values_;
    };
  }
}

#endif // OBVARIABLESETARRAYVALUE_H
