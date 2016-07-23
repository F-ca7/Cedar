#include "ob_procedure_else_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureElseStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureElseStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureElseStmt %d End>\n", index);
}

int ObProcedureElseStmt::add_else_stmt(uint64_t& stmt_id)
{
	return else_stmts_.push_back(stmt_id);
}

const ObArray<uint64_t> &ObProcedureElseStmt::get_else_stmts() const
{
	return else_stmts_;
}
uint64_t&  ObProcedureElseStmt::get_else_stmt(int64_t index)
{
	return else_stmts_.at(index);
}

int64_t ObProcedureElseStmt::get_else_stmt_size()
{
	return else_stmts_.count();
}


}
}



