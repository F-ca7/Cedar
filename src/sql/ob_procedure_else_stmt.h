/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_else_stmt.h
* @brief this class  present a procedure "if" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_ELSE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_ELSE_STMT_H_
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
 * @brief The ObProcedureElseStmt class
 */
class ObProcedureElseStmt: public ObBasicStmt {
	public:
	ObProcedureElseStmt() :
				ObBasicStmt(T_PROCEDURE_ELSE) {
		}
		virtual ~ObProcedureElseStmt() {
		}

		virtual void print(FILE* fp, int32_t level, int32_t index);

        /**
         * @brief add else statement
         * @param stmt_id
         * @return
         */
		int add_else_stmt(uint64_t& stmt_id);

        /**
         * @brief get else statement
         * @return
         */
        ObArray<uint64_t> get_else_stmts();

        /**
         * @brief get else statement by index
         * @param index
         * @return
         */
		uint64_t& get_else_stmt(int64_t index);

        /**
         * @brief get else statement size
         * @return
         */
		int64_t get_else_stmt_size();

	private:
        ObArray<uint64_t> else_stmts_;///> else statements


	};


}
}

#endif
