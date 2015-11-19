#include "ob_procedure_assgin_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
  namespace sql{

    void ObProcedureAssginStmt::print(FILE* fp, int32_t level, int32_t index) {
      UNUSED(index);
      print_indentation(fp, level);
      fprintf(fp, "<ObProcedureAssginStmt %d begin>\n", index);
      print_indentation(fp, level + 1);
      fprintf(fp, "Expires Count = %d\n",(int32_t)var_val_list_.count());
      print_indentation(fp, level);
      fprintf(fp, "<ObProcedureAssginStmt %d End>\n", index);
    }

    int ObProcedureAssginStmt::add_var_val(ObRawVarAssignVal &var_val)
    {
      return var_val_list_.push_back(var_val);
    }

    const ObArray<ObRawVarAssignVal>& ObProcedureAssginStmt::get_var_val_list() const
    {
      return var_val_list_;
    }

    const ObRawVarAssignVal& ObProcedureAssginStmt::get_var_val(int64_t index) const
    {
      return var_val_list_.at(index);
    }

    int64_t ObProcedureAssginStmt::get_var_val_size() const
    {
      return var_val_list_.count();
    }
  }
}
