#include "ob_procedure_while_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureWhileStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureWhileStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureWhileStmt %d End>\n", index);
}


int ObProcedureWhileStmt::set_expr_id(uint64_t& expr_id)
{
	expr_id_=expr_id;
	return OB_SUCCESS;
}

int ObProcedureWhileStmt::add_then_stmt(uint64_t& stmt_id)
{
	while_then_stmts_.push_back(stmt_id);
	return OB_SUCCESS;
}

/*while表达的id*/
uint64_t ObProcedureWhileStmt::get_expr_id()
{
	return expr_id_;
}

ObArray<uint64_t> ObProcedureWhileStmt::get_then_stmts()/*while then语句列表*/
{
	return while_then_stmts_;
}

uint64_t& ObProcedureWhileStmt::get_then_stmt(int64_t index)
{
	return while_then_stmts_.at(index);
}
int64_t ObProcedureWhileStmt::get_then_stmt_size()
{
	return while_then_stmts_.count();
}


}
}



