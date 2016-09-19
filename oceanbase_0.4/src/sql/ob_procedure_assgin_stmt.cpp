/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_assgin_stmt.cpp
* @brief this class present a procedure "assgin" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#include "ob_procedure_assgin_stmt.h"
using namespace oceanbase::common;
namespace oceanbase{
namespace sql{
void ObProcedureAssginStmt::print(FILE* fp, int32_t level, int32_t index) {
        UNUSED(index);
        print_indentation(fp, level);
        fprintf(fp, "<ObProcedureAssginStmt %d begin>\n", index);
        print_indentation(fp, level + 1);
        fprintf(fp, "Expires Count = %d\n",(int32_t)var_val_list_.count());
        print_indentation(fp, level);
        fprintf(fp, "<ObProcedureAssginStmt %d End>\n", index);
}

int ObProcedureAssginStmt::add_var_val(ObVariableSetVal &var_val)
{
    return var_val_list_.push_back(var_val);
}

ObArray<ObVariableSetVal>& ObProcedureAssginStmt::get_var_val_list()
{
    return var_val_list_;
}

ObVariableSetVal& ObProcedureAssginStmt::get_var_val(int64_t index)
{
    return var_val_list_.at(index);
}

int64_t ObProcedureAssginStmt::get_var_val_size()
{
    return var_val_list_.count();
}




}
}



