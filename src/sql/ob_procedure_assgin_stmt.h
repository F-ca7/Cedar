#ifndef OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include "ob_sql_expression.h"
using namespace oceanbase::common;

namespace oceanbase {
  namespace sql {

    struct VariableSet
    {
//      typedef ObSEArray<ObString, 4> VarArray;
      typedef ObArray<ObString> VarArray;
      VariableSet() {}
//      VariableSet(ObArray<ObString> &array) : var_set_(array)
//      {}

      int addVariable(const ObString &var_name)
      {
        int ret = OB_SUCCESS;
        bool flag = false;
        for(int64_t i = 0; i < var_set_.count(); ++i)
        {
          if( var_name.compare(var_set_.at(i)) == 0 )
          {
            flag = true;
            break;
          }
        }
        if( flag ) {}
        else if( OB_SUCCESS != (ret = var_set_.push_back(var_name)) )
        {}
        return ret;
      }

      int addVariable(const VariableSet& var_set)
      {
        int ret = OB_SUCCESS;
        for(int64_t i = 0; i < var_set.var_set_.count(); ++i)
        {
          bool flag = false;
          const ObString &var_name = var_set.var_set_.at(i);
          for(int64_t i = 0; i < var_set_.count(); ++i)
          {
            if( var_name.compare(var_set_.at(i)) == 0 )
            {
              flag = true;
              break;
            }
          }
          if( flag ) {}
          else if( OB_SUCCESS != (ret = var_set_.push_back(var_name)) )
          {
            TBSYS_LOG(WARN, "add varialbes into var_set fail");
          }
        }
        return ret;
      }

      VarArray var_set_;
    };

    struct ObRawVarAssignVal
    {
      ObString var_name_;
      uint64_t val_expr_id_;

      ObRawVarAssignVal() : val_expr_id_(0)
      {}
    };

    struct ObRawArrAssignVal
    {
      ObString var_name_;
      uint64_t val_expr_id_;
      uint64_t idx_expr_id_;

      ObRawArrAssignVal() : val_expr_id_(0), idx_expr_id_(0)
      {}
    };

    class ObProcedureAssginStmt: public ObBasicStmt {
    public:
      ObProcedureAssginStmt() :
              ObBasicStmt(T_PROCEDURE_ASSGIN) {
      }
      virtual ~ObProcedureAssginStmt() {
      }


      int add_var_val(ObRawVarAssignVal &var_val);/*添加一个var_val*/
      int add_arr_val(ObRawArrAssignVal &arr_val); //add the array[idx] assign

//      const ObArray<ObRawVarAssignVal>& get_var_val_list() const;/*返回所有赋值*/

      const ObRawVarAssignVal& get_var_val(int64_t index) const;/*返回一个赋值*/
      const ObRawArrAssignVal& get_arr_val(int64_t index) const; //get the array[idx] assign

      int64_t get_var_val_size() const;/*返回变量列表大小*/
      int64_t get_arr_val_size() const;

      virtual void print(FILE* fp, int32_t level, int32_t index);
    private:
//      ObArray<ObVarAssignVal> var_val_list_;/*赋值变量列表*/
      ObArray<ObRawVarAssignVal> var_val_list_;
      ObArray<ObRawArrAssignVal> arr_val_list_;
    };
  }
}

#endif
