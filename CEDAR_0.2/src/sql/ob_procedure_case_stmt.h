/**
* Copyright (C) 2013-2016 DaSE
 *This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_case_stmt.h
* @brief this class present a procedure "case" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_CASE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_CASE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {
class ObProcedureCaseStmt: public ObBasicStmt {
	public:
	ObProcedureCaseStmt() :
				ObBasicStmt(T_PROCEDURE_CASE) {
		expr_id_ = common::OB_INVALID_ID;
		else_stmt_ = common::OB_INVALID_ID;
		have_else_ = false;
		}
		virtual ~ObProcedureCaseStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

        /**
         * @brief set expression id
         * @param expr_id
         * @return
         */
		int set_expr_id(uint64_t& expr_id);

        /**
         * @brief add case when statement
         * @param stmt_id
         * @return
         */
		int add_case_when_stmt(uint64_t& stmt_id);

        /**
         * @brief set else statement
         * @param stmt_id
         * @return
         */
		int set_else_stmt(uint64_t& stmt_id);

        /**
         * @brief set "else" flag
         * @param flag
         * @return
         */
		int set_have_else(bool flag);

		bool have_else();

        /**
         * @brief get expression id
         * @return
         */
		uint64_t get_expr_id();

        /**
         * @brief get case when statements
         * @return
         */
        ObArray<uint64_t> get_case_when_stmts();

        /**
         * @brief get case when statement
         * @param index
         * @return
         */
		uint64_t& get_case_when_stmt(int64_t index);

        /**
         * @brief get else statement
         * @return
         */
        uint64_t get_else_stmt();

        /**
         * @brief get case when statements size
         * @return
         */
        int64_t	get_case_when_stmt_size();



	private:
        uint64_t expr_id_;///> expression id

        ObArray<uint64_t> casewhen_stmts_;///> case when list

        bool have_else_;///> else flag

        uint64_t else_stmt_;///> else statement

	};


}
}

#endif
