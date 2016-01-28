/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_stmt.h
* @brief this class present a procedure logic plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "common/hash/ob_hashmap.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {

enum ParamType
{
  DEFAULT_TYPE=0,
  IN_TYPE,
  OUT_TYPE,
  INOUT_TYPE
};

struct ObParamDef
{
    ObString*    param_name_;///< parameter name
    ObObjType   param_type_;///< parameter type
    ObObj*       default_value_;///< default value
    ParamType	out_type_;///< output type
};

/**
 * @brief The ObProcedureStmt class
 */
class ObProcedureStmt: public ObBasicStmt {
	public:
	ObProcedureStmt() :
				ObBasicStmt(T_PROCEDURE) {
			cursor_hash_map_.create(hash::cal_next_prime(512));
		}
		virtual ~ObProcedureStmt() {
		}

        /**
         * @brief set procedure name
         * @param proc_name
         * @return
         */
		int set_proc_name(ObString &proc_name);

        /**
         * @brief add procedure parameter
         * @param proc_param
         * @return
         */
        int add_proc_param(ObParamDef &proc_param);

        /**
         * @brief add declare variable
         * @param var
         * @return
         */
        int add_declare_var(ObString &var);

        /**
         * @brief add statement
         * @param stmt_id
         * @return
         */
		int add_stmt(uint64_t& stmt_id);

        /**
         * @brief get statement by index
         * @param index
         * @return
         */
		uint64_t& get_stmt(int64_t index);

        /**
         * @brief get procedure name
         * @return
         */
		ObString& get_proc_name();

        /**
         * @brief  gets the elements of "declare variable" index location
         * @param index
         * @return
         */
		ObString& get_declare_var(int64_t index);

        /**
         * @brief get procedure parameters size
         * @return
         */
		int64_t get_param_size();

        /**
         * @brief get procedure statements size
         * @return
         */
		int64_t get_stmt_size();

        /**
         * @brief get procedure declare variables size
         * @return
         */
		int64_t get_declare_var_size();

		ObArray<ObParamDef*>& get_params();

		ObParamDef* get_param(int64_t index);
		virtual void print(FILE* fp, int32_t level, int32_t index);


	private:
        ObString proc_name_;///< procedure name
        ObArray<uint64_t> proc_block_;///< procedure statements
        ObArray<ObParamDef*> params_;///< procedure parameters
        ObArray<ObString> declare_variable_;///< procedure declare variables

		hash::ObHashMap<ObString,uint64_t,hash::NoPthreadDefendMode> cursor_hash_map_;


	};


}
}

#endif
