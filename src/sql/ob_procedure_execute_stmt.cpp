#include "ob_procedure_execute_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
  namespace sql{

    void ObProcedureExecuteStmt::print(FILE* fp, int32_t level, int32_t index) {
      UNUSED(index);
      print_indentation(fp, level);
      fprintf(fp, "<ObProcedureExecuteStmt %d begin>\n", index);
      //print_indentation(fp, level + 1);
      //fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
      print_indentation(fp, level);
      fprintf(fp, "<ObProcedureExecuteStmt %d End>\n", index);
    }

    int ObProcedureExecuteStmt::set_proc_name(const ObString &proc_name)
    {
      proc_name_=proc_name;
      return OB_SUCCESS;
    }
    int ObProcedureExecuteStmt::set_proc_stmt_id(uint64_t proc_stmt_id)
    {
      proc_stmt_id_=proc_stmt_id;
      return OB_SUCCESS;
    }

    const ObString& ObProcedureExecuteStmt::get_proc_name() const
    {
      return proc_name_;
    }
    uint64_t ObProcedureExecuteStmt::get_proc_stmt_id() const
    {
      return proc_stmt_id_;
    }

//    int ObProcedureExecuteStmt::add_variable_name(const ObString& name)
//    {
//      return variable_names_.push_back(name);
//    }

//    int64_t ObProcedureExecuteStmt::get_variable_size() const
//    {
//      return variable_names_.count();
//    }

//    const ObString& ObProcedureExecuteStmt::get_variable_name(int64_t index) const
//    {
//      return variable_names_.at(index);
//    }

    int ObProcedureExecuteStmt::add_param_expr(uint64_t expr_id)
    {
      return param_list_.push_back(expr_id);
    }

    uint64_t ObProcedureExecuteStmt::get_param_expr(int64_t index) const
    {
      return param_list_.at(index);
    }

    int64_t ObProcedureExecuteStmt::get_param_size() const
    {
      return param_list_.count();
    }


  }
}
