/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_case_stmt.cpp
* @brief this class present a procedure "case" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
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


ObArray<uint64_t> ObProcedureCaseStmt::get_case_when_stmts()
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



