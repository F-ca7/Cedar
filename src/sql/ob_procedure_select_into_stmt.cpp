/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_select_into_stmt.h
* @brief this class present a procedure "select into" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
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



