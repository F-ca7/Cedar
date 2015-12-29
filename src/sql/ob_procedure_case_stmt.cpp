#include "ob_procedure_case_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureCaseStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureCaseStmt %d begin>\n", index);
		print_indentation(fp, level + 1);
		fprintf(fp, "Expires ID = %ld\n",expr_id_);
		print_indentation(fp, level + 1);
		fprintf(fp, "CaseWhen Count = %ld\n",casewhen_stmts_.count());
		print_indentation(fp, level + 1);
		fprintf(fp, "Have Else = %d\n",have_else_);
		print_indentation(fp, level);
		fprintf(fp, "Else Stmt ID = %ld\n",else_stmt_);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureCaseStmt %d End>\n", index);
}


int ObProcedureCaseStmt::set_expr_id(uint64_t& expr_id)
{
	expr_id_=expr_id;
	return OB_SUCCESS;
}


int ObProcedureCaseStmt::add_case_when_stmt(uint64_t& stmt_id)
{
	return casewhen_stmts_.push_back(stmt_id);
}

int ObProcedureCaseStmt::set_else_stmt(uint64_t& stmt_id)
{
	else_stmt_=stmt_id;
	return OB_SUCCESS;
}


int ObProcedureCaseStmt::set_have_else(bool flag)
{
	have_else_=flag;
	return OB_SUCCESS;
}


bool ObProcedureCaseStmt::have_else()
{
	return have_else_;
}

uint64_t ObProcedureCaseStmt::get_expr_id()
{
	return expr_id_;
}


const ObArray<uint64_t>& ObProcedureCaseStmt::get_case_when_stmts() const
{
	return casewhen_stmts_;
}

uint64_t& ObProcedureCaseStmt::get_case_when_stmt(int64_t index)
{
	return casewhen_stmts_.at(index);
}

uint64_t ObProcedureCaseStmt::get_else_stmt()
{
	return else_stmt_;
}

int64_t ObProcedureCaseStmt::get_case_when_stmt_size()
{
	return casewhen_stmts_.count();
}



}
}



