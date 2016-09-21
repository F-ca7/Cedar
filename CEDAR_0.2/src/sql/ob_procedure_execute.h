/**
* Copyright (C) 2013-2016 DaSE
 *This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_execute.h
* @brief this class present a procedure "execute" physical plan in oceanbase
*
* @version CEDAR 0.2
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_EXECUTE_H
#define OCEANBASE_SQL_OB_PROCEDURE_EXECUTE_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_execute_stmt.h"


namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
        /**
         * @brief The ObProcedureExecute class
         */
		class ObProcedureExecute : public ObSingleChildPhyOperator
		{
		public:
			ObProcedureExecute();
			virtual ~ObProcedureExecute();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_EXEC;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);

            /**
             * @brief set procedure name
             * @param proc_name
             * @return
             */
            int set_proc_name(ObString &proc_name);
            /**
             * @brief set procedure statement id
             * @param stmt_id
             * @return
             */
			int set_stmt_id(uint64_t &stmt_id);
            /**
             * @brief get parameter name size
             * @return
             */
			int64_t get_param_num();

            /**
             * @brief add parameter name
             * @param name
             * @return
             */
			int add_param_name(common::ObString& name);

            /**
             * @brief add parameter expression
             * @param expr
             * @return
             */
			int add_param_expr(ObSqlExpression& expr);

            /**
             * @brief get parameter expression size
             * @return
             */
			int64_t get_param_size();
		private:
			//disallow copy
			ObProcedureExecute(const ObProcedureExecute &other);
			ObProcedureExecute& operator=(const ObProcedureExecute &other);
			//function members

		private:
			//data members
            ObString proc_name_;///> procedure name
            common::ObArray<common::ObString> param_names_;///> prameters names
            common::ObArray<ObSqlExpression> param_list_;///> parameter expression list
            uint64_t stmt_id_;///> procedure statement id
		};



	}
}

#endif



