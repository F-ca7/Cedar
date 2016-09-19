/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_stmt.cpp
* @brief this class present a procedure logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#include "ob_procedure_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureStmt::print(FILE* fp, int32_t level, int32_t index) {
		UNUSED(index);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureStmt %d begin>\n", index);
		//print_indentation(fp, level + 1);
		//fprintf(fp, "Expires Count = %d\n",(int32_t)var_val.);
		print_indentation(fp, level);
		fprintf(fp, "<ObProcedureStmt %d End>\n", index);
}

int ObProcedureStmt::set_proc_name(ObString &proc_name)
{
	proc_name_=proc_name;
	return OB_SUCCESS;
}
int ObProcedureStmt::add_proc_param(ObParamDef &proc_param)
{
	return params_.push_back(&proc_param);
}
int ObProcedureStmt::add_declare_var(ObString &var)
{
		int ret=OB_SUCCESS;
        for (int64_t i = 0;i < declare_variable_.count();i++)//check whether declare same name variable
		{
			if(declare_variable_.at(i).compare(var)==0)
			{
				TBSYS_LOG(WARN, "same variable");
				ret=-17;
				break;
			}
		}
		if(ret==OB_SUCCESS)
		{
			declare_variable_.push_back(var);
		}
	return ret;
}
int ObProcedureStmt::add_stmt(uint64_t& stmt_id)
{
	return proc_block_.push_back(stmt_id);
}


ObString& ObProcedureStmt::get_proc_name()
{
	return proc_name_;
}
uint64_t& ObProcedureStmt::get_stmt(int64_t index)
{
	return proc_block_.at(index);
}
ObString& ObProcedureStmt::get_declare_var(int64_t index)
{
	return declare_variable_.at(index);
}
int64_t ObProcedureStmt::get_param_size()
{
	return params_.count();
}
int64_t ObProcedureStmt::get_stmt_size()
{
	return proc_block_.count();
}
int64_t ObProcedureStmt::get_declare_var_size()
{
	return declare_variable_.count();
}
ObArray<ObParamDef*>& ObProcedureStmt::get_params()
{
	return params_;
}
ObParamDef* ObProcedureStmt::get_param(int64_t index)
{
	return params_.at(index);
}

}
}



