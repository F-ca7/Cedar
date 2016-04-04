/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_create.h
* @brief this class  present a procedure "create" physical plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_CREATE_H
#define OCEANBASE_SQL_OB_PROCEDURE_CREATE_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"

namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
        /**
         * @brief The ObProcedureCreate class
         */
		class ObProcedureCreate : public ObSingleChildPhyOperator
		{
		public:
			ObProcedureCreate();
			virtual ~ObProcedureCreate();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_CREATE;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);

            /**
             * @brief set procedur name
             * @param proc_name
             * @return
             */
            int set_proc_name(ObString &proc_name);

            /**
             * @brief set insert operator
             * @param insert_op
             * @return
             */
			int set_insert_op(ObPhyOperator &insert_op);
		private:
			//disallow copy
			ObProcedureCreate(const ObProcedureCreate &other);
			ObProcedureCreate& operator=(const ObProcedureCreate &other);
			//function members

		private:
            ObString proc_name_;///> procedure name

            ObPhyOperator *insert_op_;///>insert operator

		};



	}
}

#endif



