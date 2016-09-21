/**
* Copyright (C) 2013-2016 DaSE
 *This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_declare_stmt.h
* @brief this class  present a procedure "declare" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_DECLARE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_DECLARE_STMT_H_
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
 * @brief The ObVariableDef struct
 */
struct ObVariableDef
{
    ObString*    variable_name_;///> variable name
    ObObjType   variable_type_;///> variable type
    bool   is_default_;///> default value flag
    ObObj* default_value_;///> default value
};
/**
 * @brief The ObProcedureDeclareStmt class
 */
class ObProcedureDeclareStmt: public ObBasicStmt {
	public:
	ObProcedureDeclareStmt() :
				ObBasicStmt(T_PROCEDURE_DECLARE) {
		}
		virtual ~ObProcedureDeclareStmt() {
		}


        /**
         * @brief add procedure declare variable
         * @param proc_var
         * @return
         */
        int add_proc_var(ObVariableDef &proc_var);

        /**
         * @brief get procedure declare variables
         * @return
         */
        ObArray<ObVariableDef>& get_variables();

        /**
         * @brief get declare variable by index
         * @param index
         * @return
         */
        ObVariableDef& get_variable(int64_t index);

        /**
         * @brief get declare variable size
         * @return
         */
        int64_t get_variable_size();

		virtual void print(FILE* fp, int32_t level, int32_t index);
	private:
        ObArray<ObVariableDef> variables_;///>declare variable list

	};


}
}

#endif
