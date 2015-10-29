#include "ob_procedure_elseif_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureElseIfStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureElseIfStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureElseIfStmt %d End>\n", index);
}


int ObProcedureElseIfStmt::set_expr_id(uint64_t& expr_id)
{
	expr_id_=expr_id;
	return OB_SUCCESS;
}

int ObProcedureElseIfStmt::add_elseif_then_stmt(uint64_t& stmt_id)
{
	elseif_then_stmts_.push_back(stmt_id);
	return OB_SUCCESS;
}

/*else if表达的id*/
uint64_t ObProcedureElseIfStmt::get_expr_id()
{
	return expr_id_;
}

ObArray<uint64_t> ObProcedureElseIfStmt::get_then_stmts()/*else if then语句列表*/
{
	return elseif_then_stmts_;
}

uint64_t& ObProcedureElseIfStmt::get_then_stmt(int64_t index)
{
	return elseif_then_stmts_.at(index);
}
int64_t ObProcedureElseIfStmt::get_then_stmt_size()
{
	return elseif_then_stmts_.count();
}


}
}



