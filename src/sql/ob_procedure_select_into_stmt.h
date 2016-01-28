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
#ifndef OCEANBASE_SQL_OB_PROCEDURE_SELECT_INTO_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_SELECT_INTO_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
/**
 * @brief The ObProcedureSelectIntoStmt class
 */
class ObProcedureSelectIntoStmt: public ObBasicStmt {
	public:
	ObProcedureSelectIntoStmt() :
				ObBasicStmt(T_PROCEDURE_SELECT_INTO) {
			declare_query_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureSelectIntoStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);
         /**
         * @brief set the "select into" statement query id
         * @param query_id
         * @return
         */
		int set_declare_id(uint64_t query_id);
        /**
         * @brief get query id
         * @return
         */
		uint64_t get_declare_id();
        /**
         * @brief add variable into statement
         * @param name
         * @return
         */
		int add_variable(ObString &name);
        /**
         * @brief get variable by index
         * @param index
         * @return
         */
		ObString& get_variable(int64_t index);
        /**
         * @brief get variable size
         * @return
         */
		int64_t get_variable_size();

	private:
        uint64_t declare_query_id_;///< the select statement id
        ObArray<ObString> variable_name_;///< the variables

	};


}
}

#endif
