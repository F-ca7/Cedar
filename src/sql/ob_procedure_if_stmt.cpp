#include "ob_procedure_if_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureIfStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureIfStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureIfStmt %d End>\n", index);
}


int ObProcedureIfStmt::set_expr_id(uint64_t& expr_id)
{
	expr_id_=expr_id;
	return OB_SUCCESS;
}


int ObProcedureIfStmt::add_then_stmt(uint64_t& stmt_id)
{
	return then_stmts_.push_back(stmt_id);
}

int ObProcedureIfStmt::add_else_if_stmt(uint64_t& stmt_id)
{
	return elseif_stmts_.push_back(stmt_id);
}

int ObProcedureIfStmt::set_else_stmt(uint64_t& stmt_id)
{
	else_stmt_=stmt_id;
	return OB_SUCCESS;
}

int ObProcedureIfStmt::set_have_elseif(bool flag)
{
	have_else_if_=flag;
	return OB_SUCCESS;
}

int ObProcedureIfStmt::set_have_else(bool flag)
{
	have_else_=flag;
	return OB_SUCCESS;
}

bool ObProcedureIfStmt::have_elseif()
{
	return have_else_if_;
}

bool ObProcedureIfStmt::have_else()
{
	return have_else_;
}

/*if表达的id*/
uint64_t ObProcedureIfStmt::get_expr_id()
{
	return expr_id_;
}

ObArray<uint64_t> ObProcedureIfStmt::get_then_stmts()/*then语句列表*/
{
	return then_stmts_;
}

uint64_t& ObProcedureIfStmt::get_then_stmt(int64_t index)/*then语句*/
{
	return then_stmts_.at(index);
}

ObArray<uint64_t> ObProcedureIfStmt::get_elseif_stmts()/*else if语句列表*/
{
	return elseif_stmts_;
}

uint64_t& ObProcedureIfStmt::get_elseif_stmt(int64_t index)/*else if语句*/
{
	return elseif_stmts_.at(index);
}

uint64_t ObProcedureIfStmt::get_else_stmt()/*else语句*/
{
	return else_stmt_;
}

int64_t ObProcedureIfStmt::get_then_stmt_size()
{
	return then_stmts_.count();
}

int64_t ObProcedureIfStmt::get_elseif_stmt_size()
{
	return elseif_stmts_.count();
}



}
}



