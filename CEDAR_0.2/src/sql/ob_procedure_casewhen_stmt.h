/**
* Copyright (C) 2013-2016 DaSE .
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_casewhen.h
* @brief this class  present a procedure "casewhen" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2 
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_CASEWHEN_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_CASEWHEN_STMT_H_
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
 * @brief The ObProcedureCaseWhenStmt class
 */
class ObProcedureCaseWhenStmt: public ObBasicStmt {
	public:
	ObProcedureCaseWhenStmt() :
				ObBasicStmt(T_PROCEDURE_CASEWHEN) {
		expr_id_=common::OB_INVALID_ID;
		case_value_expr_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureCaseWhenStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

        /**
         * @brief set the expression compare with case statement
         * @param expr_id
         * @return
         */
		int set_compare_expr_id(uint64_t& expr_id);

        /**
         * @brief set the case statement's expression
         * @param expr_id
         * @return
         */
		int set_expr_id(uint64_t& expr_id);

        /**
         * @brief set case value expression
         * @param expr_id
         * @return
         */
		int set_case_value_expr(uint64_t& expr_id);

        /**
         * @brief add statement into "casewhen"
         * @param stmt_id
         * @return
         */
		int add_then_stmt(uint64_t& stmt_id);

        /**
         * @brief get compare expression id
         * @return
         */
		uint64_t get_compare_expr_id();

        /**
         * @brief get case expression id
         * @return
         */
		uint64_t get_expr_id();

        /**
         * @brief get case value expression
         * @return
         */
		uint64_t get_case_value_expr();

        /**
         * @brief get "casewhen" statement's then statements
         * @return
         */
		ObArray<uint64_t> get_then_stmts();

        /**
         * @brief get "casewhen" statement by index
         * @return
         */
		uint64_t& get_then_stmt(int64_t index);

        /**
         * @brief get "casewhen" statements size
         * @return
         */
		int64_t get_then_stmt_size();

	private:
        uint64_t compare_expr_id_;///>compare expr
        uint64_t expr_id_;///> case expr id
        uint64_t case_value_expr_;///>case value expr
        ObArray<uint64_t> when_then_stmts_;///>"casewhen" statement's statements


	};


}
}

#endif
