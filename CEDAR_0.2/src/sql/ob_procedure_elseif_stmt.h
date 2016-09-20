/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_elseif_stmt.h
* @brief this class present a procedure "elseif" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_ELSEIF_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_ELSEIF_STMT_H_
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
 * @brief The ObProcedureElseIfStmt class
 */
class ObProcedureElseIfStmt: public ObBasicStmt {
	public:
	ObProcedureElseIfStmt() :
				ObBasicStmt(T_PROCEDURE_ELSEIF) {
		expr_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureElseIfStmt() {
		}
		virtual void print(FILE* fp, int32_t level, int32_t index);

        /**
         * @brief set "elseif" statement expression id
         * @param expr_id
         * @return
         */
		int set_expr_id(uint64_t& expr_id);

        /**
         * @brief add statement into "then" branch
         * @param stmt_id
         * @return
         */
		int add_elseif_then_stmt(uint64_t& stmt_id);

        /**
         * @brief get "elseif" statement expression
         * @return
         */
		uint64_t get_expr_id();

        /**
         * @brief get "elseif" statement's "then" branch statements
         * @return
         */
        ObArray<uint64_t> get_then_stmts();

        /**
         * @brief get then statement by index
         * @param index
         * @return
         */
		uint64_t& get_then_stmt(int64_t index);

        /**
         * @brief get then statement size
         * @return
         */
		int64_t get_then_stmt_size();

	private:
        uint64_t expr_id_;///> else if expression

        ObArray<uint64_t> elseif_then_stmts_;///> elseif then statement list


	};


}
}

#endif
