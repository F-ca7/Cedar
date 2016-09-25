/**
* Copyright (C) 2013-2016 DaSE .
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_assgin_stmt.h
* @brief this class present a procedure "assgin" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2 
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include "ob_sql_expression.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {

/**
 * @brief The ObVariableSetVal struct represent assign operator
 */
struct ObVariableSetVal
{
    ObString    variable_name_;///>variable name
    uint64_t	var_expr_id_;///> this assgin value expr's id
    ObSqlExpression var_value_;///> the assgin value
};
/**
 * @brief The ObProcedureAssginStmt class represent a logical plan to assign variable value in the procedure
 */
class ObProcedureAssginStmt: public ObBasicStmt {
	public:
	ObProcedureAssginStmt() :
				ObBasicStmt(T_PROCEDURE_ASSGIN) {
		}
		virtual ~ObProcedureAssginStmt() {
		}


        /**
         * @brief add a ObVariableSetVal into this logical plan
         * @param var_val type is ObVariableSetVal
         * @return int
         */
        int add_var_val(ObVariableSetVal &var_val);

        /**
         * @brief get all of the logical plan's ObVariableSetVal
         * @return ObArray
         */
        ObArray<ObVariableSetVal>& get_var_val_list();

        /**
         * @brief gets the elements of "assign" operators index location
         * @param index
         * @return
         */
        ObVariableSetVal& get_var_val(int64_t index);

        /**
         * @brief get the size of "assign" operators
         * @return
         */
        int64_t get_var_val_size();

		virtual void print(FILE* fp, int32_t level, int32_t index);
	private:
        ObArray<ObVariableSetVal> var_val_list_;///< the "assign" operators array


	};


}
}

#endif
