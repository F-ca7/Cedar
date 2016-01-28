/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_drop_stmt.h
* @brief this class  present a procedure "drop" logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_DROP_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_DROP_STMT_H_
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
 * @brief The ObProcedureDropStmt class
 */
class ObProcedureDropStmt: public ObBasicStmt {
	public:
	ObProcedureDropStmt() :
				ObBasicStmt(T_PROCEDURE_DROP) {

		proc_delete_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureDropStmt() {
		}

        /**
         * @brief set delete procedure name
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
         * @brief set procedure delete statement id
         * @param stmt_id
         * @return
         */
		int set_proc_delete_id(uint64_t& stmt_id);

        /**
         * @brief get procedure delete statement id
         * @return
         */
		uint64_t& get_proc_delete_id();
        /**
         * @brief set "if exists" flag
         * @param flag
         */
		void set_if_exists(bool flag);
        /**
         * @brief get "if exists" flag
         * @return
         */
		bool if_exists();

		virtual void print(FILE* fp, int32_t level, int32_t index);


	private:
        ObString proc_name_;///> procedure name
        uint64_t proc_delete_id_;///> procedure delete statement id
        bool  if_exists_;///> "if exitst" flag

	};


}
}

#endif
