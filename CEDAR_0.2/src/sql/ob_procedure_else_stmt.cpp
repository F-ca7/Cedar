/**
* Copyright (C) 2013-2016 DaSE
 *This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_else_stmt.cpp
* @brief this class  present a procedure "if" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
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

ObArray<uint64_t> ObProcedureElseStmt::get_else_stmts()
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



