/**
* Copyright (C) 2013-2016 DaSE
 *This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_while_stmt.h
* @brief this class present a procedure "while" loop in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_WHILE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_WHILE_STMT_H_
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
 * @brief The ObProcedureWhileStmt class
 */
class ObProcedureWhileStmt: public ObBasicStmt {
	public:
	ObProcedureWhileStmt() :
				ObBasicStmt(T_PROCEDURE_WHILE) {
		expr_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureWhileStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

        /**
         * @brief set the "while" statement expression id
         * @param expr_id
         * @return
         */
		int set_expr_id(uint64_t& expr_id);

        /**
         * @brief add the statement into "while" statement
         * @param stmt_id
         * @return
         */
		int add_then_stmt(uint64_t& stmt_id);
        /**
         * @brief get expression id
         * @return
         */
		uint64_t get_expr_id();
        /**
         * @brief get "while then" statement list
         * @return
         */
		ObArray<uint64_t> get_then_stmts();

		uint64_t& get_then_stmt(int64_t index);

        /**
         * @brief get_then_stmt_size
         * @return
         */
		int64_t get_then_stmt_size();

	private:
        uint64_t expr_id_;///< while loop expression

        ObArray<uint64_t> while_then_stmts_;///< while loop statements


	};


}
}

#endif
