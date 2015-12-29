#include "ob_procedure_create_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureCreateStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureCreateStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureCreateStmt %d End>\n", index);
}

int ObProcedureCreateStmt::set_proc_name(ObString &proc_name)
{
	proc_name_=proc_name;
	return OB_SUCCESS;
}

ObString& ObProcedureCreateStmt::get_proc_name()
{
	return proc_name_;
}
int ObProcedureCreateStmt::set_proc_id(uint64_t& stmt_id)
{
	proc_id_=stmt_id;
	return OB_SUCCESS;
}

uint64_t& ObProcedureCreateStmt::get_proc_id()
{
	return proc_id_;
}
int ObProcedureCreateStmt::set_proc_insert_id(uint64_t& stmt_id)
{
	proc_insert_id_=stmt_id;
	return OB_SUCCESS;
}

uint64_t& ObProcedureCreateStmt::get_proc_insert_id()
{
	return proc_insert_id_;
}



}
}



