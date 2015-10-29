#include "ob_procedure_select_into_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureSelectIntoStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureSelectIntoStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureSelectIntoStmt %d End>\n", index);
}

int ObProcedureSelectIntoStmt::set_declare_id(uint64_t query_id)
{
	declare_query_id_=query_id;
	return OB_SUCCESS;
}
uint64_t ObProcedureSelectIntoStmt::get_declare_id()
{
	return declare_query_id_;
}
int ObProcedureSelectIntoStmt::add_variable(ObString &name)
{
	return variable_name_.push_back(name);
}
ObString& ObProcedureSelectIntoStmt::get_variable(int64_t index)
{
	return variable_name_.at(index);
}
int64_t ObProcedureSelectIntoStmt::get_variable_size()
{
	return variable_name_.count();
}


}
}



