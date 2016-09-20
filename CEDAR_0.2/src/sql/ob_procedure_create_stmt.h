/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_create_stmt.h
* @brief this class  present a procedure "create" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_CREATE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_CREATE_STMT_H_
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
 * @brief The ObProcedureCreateStmt class
 */
class ObProcedureCreateStmt: public ObBasicStmt {
	public:
	ObProcedureCreateStmt() :
				ObBasicStmt(T_PROCEDURE_CREATE) {
		proc_id_=common::OB_INVALID_ID;
		proc_insert_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureCreateStmt() {
		}

        /**
         * @brief set procedure name
         * @param proc_name
         * @return
         */
		int set_proc_name(ObString &proc_name);

        /**
         * @brief get procedure name
         * @return
         */
		ObString& get_proc_name();

        /**
         * @brief set procedure statement id
         * @param stmt_id
         * @return
         */
		int set_proc_id(uint64_t& stmt_id);

        /**
         * @brief get procedure statement id
         * @return
         */
		uint64_t& get_proc_id();

        /**
         * @brief set procedure insert into __all_procedure statement id
         * @param stmt_id
         * @return
         */
		int set_proc_insert_id(uint64_t& stmt_id);

        /**
         * @brief get procedure insert id
         * @return
         */
		uint64_t& get_proc_insert_id();


		virtual void print(FILE* fp, int32_t level, int32_t index);


	private:
        ObString proc_name_;///> procedure name
        uint64_t proc_id_;///> procedure statement id
        uint64_t proc_insert_id_;///> insert statement id

	};


}
}

#endif
