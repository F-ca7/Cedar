/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_if_stmt.h
* @brief this class  present a procedure "if" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_IF_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_IF_STMT_H_
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
 * @brief The ObProcedureIfStmt class
 */
class ObProcedureIfStmt: public ObBasicStmt {
	public:
	ObProcedureIfStmt() :
				ObBasicStmt(T_PROCEDURE_IF) {
		expr_id_ = common::OB_INVALID_ID;
		else_stmt_ = common::OB_INVALID_ID;
		have_else_if_ = false;
		have_else_ = false;
		}
		virtual ~ObProcedureIfStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

        /**
         * @brief set "if" statement first expression id
         * @param expr_id
         * @return
         */
		int set_expr_id(uint64_t& expr_id);

        /**
         * @brief add statement into "if" statement's "then statement" list
         * @param stmt_id
         * @return
         */
		int add_then_stmt(uint64_t& stmt_id);

        /**
         * @brief add statement into "else if" statement's "then statement" list
         * @param stmt_id
         * @return
         */
		int add_else_if_stmt(uint64_t& stmt_id);

        /**
         * @brief set "if" statement's "else" statement
         * @param stmt_id
         * @return
         */
		int set_else_stmt(uint64_t& stmt_id);

        /**
         * @brief set "if" statement whether has "else if" branch
         * @param flag
         * @return
         */
		int set_have_elseif(bool flag);

        /**
         * @brief set "if" statement whether has "else" branch
         * @param flag
         * @return
         */
		int set_have_else(bool flag);

        /**
         * @brief get the flag of "if" statement whether have "elseif" branch
         * @return
         */
		bool have_elseif();

        /**
         * @brief get the flag of "if" statement whether have "else" branch
         * @return
         */
		bool have_else();

        /**
         * @brief get "if" statement expression id
         * @return
         */
		uint64_t get_expr_id();

        /**
         * @brief get "if" statement "then" branch statement list
         * @return
         */
        ObArray<uint64_t> get_then_stmts();

        /**
         * @brief get "then" branch statement by index
         * @param index
         * @return
         */
		uint64_t& get_then_stmt(int64_t index);

        /**
         * @brief get "elseif" statement list
         * @return
         */
        ObArray<uint64_t> get_elseif_stmts();

        /**
         * @brief get "elseif" statement by index
         * @param index
         * @return
         */
		uint64_t& get_elseif_stmt(int64_t index);

        /**
         * @brief get "else" statement id
         * @return
         */
        uint64_t 	get_else_stmt();

        /**
         * @brief get "then" statement size
         * @return
         */
        int64_t	get_then_stmt_size();

        /**
         * @brief get "elseif" statement size
         * @return
         */
        int64_t	get_elseif_stmt_size();



	private:
        uint64_t expr_id_;///< if expression id

        ObArray<uint64_t> then_stmts_;///< then statements

        bool have_else_if_;///< flag of whether has "elseif" branch

        ObArray<uint64_t> elseif_stmts_;///< else if statements

        bool have_else_;///< flag of whether has "else" branch

        uint64_t else_stmt_;///< else statement id

	};


}
}

#endif
