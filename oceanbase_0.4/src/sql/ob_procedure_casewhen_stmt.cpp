/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_casewhen.cpp
* @brief this class  present a procedure "casewhen" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#include "ob_procedure_casewhen_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureCaseWhenStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureCaseWhenStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureCaseWhenStmt %d End>\n", index);
}

int ObProcedureCaseWhenStmt::set_compare_expr_id(uint64_t& expr_id)
{
	compare_expr_id_=expr_id;
	return OB_SUCCESS;
}
int ObProcedureCaseWhenStmt::set_expr_id(uint64_t& expr_id)
{
	expr_id_=expr_id;
	return OB_SUCCESS;
}
int ObProcedureCaseWhenStmt::set_case_value_expr(uint64_t& expr_id)
{
	case_value_expr_=expr_id;
	return OB_SUCCESS;
}

int ObProcedureCaseWhenStmt::add_then_stmt(uint64_t& stmt_id)
{
	return when_then_stmts_.push_back(stmt_id);
}

uint64_t ObProcedureCaseWhenStmt::get_compare_expr_id()
{
	return compare_expr_id_;
}

uint64_t ObProcedureCaseWhenStmt::get_expr_id()
{
	return expr_id_;
}

uint64_t ObProcedureCaseWhenStmt::get_case_value_expr()
{
	return case_value_expr_;
}

ObArray<uint64_t> ObProcedureCaseWhenStmt::get_then_stmts()
{
	return when_then_stmts_;
}

uint64_t& ObProcedureCaseWhenStmt::get_then_stmt(int64_t index)
{
	return when_then_stmts_.at(index);
}
int64_t ObProcedureCaseWhenStmt::get_then_stmt_size()
{
	return when_then_stmts_.count();
}


}
}



