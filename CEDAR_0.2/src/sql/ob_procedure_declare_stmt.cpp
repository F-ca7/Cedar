/**
* Copyright (C) 2013-2016 DaSE
 *This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_declare_stmt.cpp
* @brief this class  present a procedure "declare" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#include "ob_procedure_declare_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureDeclareStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureDeclareStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureDeclareStmt %d End>\n", index);
}

int ObProcedureDeclareStmt::add_proc_var(ObVariableDef &proc_var)
{
	variables_.push_back(proc_var);
	return OB_SUCCESS;
}

ObArray<ObVariableDef>& ObProcedureDeclareStmt::get_variables()
{
	return variables_;
}

ObVariableDef& ObProcedureDeclareStmt::get_variable(int64_t index)
{
	return variables_.at(index);
}

int64_t ObProcedureDeclareStmt::get_variable_size()
{
	return variables_.count();
}



}
}



