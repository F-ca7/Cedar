/**
* Copyright (C) 2013-2016 DaSE .
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_drop.h
* @brief this class  present a procedure "drop" physical plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2 
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_DROP_H
#define OCEANBASE_SQL_OB_PROCEDURE_DROP_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"

namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
        /**
         * @brief The ObProcedureDrop class
         */
		class ObProcedureDrop : public ObSingleChildPhyOperator
		{
		public:
			ObProcedureDrop();
			virtual ~ObProcedureDrop();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_DROP;
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
             * @brief set delete physical plan for delete procedure
             * @param delete_op
             * @return
             */
			int set_delete_op(ObPhyOperator &delete_op);

            /**
             * @brief set the "if exists" flag
             * @param flag
             */
			void set_if_exists(bool flag);
            /**
             * @brief get the "if exists" flag
             * @return
             */
			bool if_exists();
		private:
			//disallow copy
			ObProcedureDrop(const ObProcedureDrop &other);
			ObProcedureDrop& operator=(const ObProcedureDrop &other);
			//function members

		private:
            ObString proc_name_;///> procedure name

            ObPhyOperator *delete_op_;///>delete operator
            bool  if_exists_;///> "if exists" flag

		};



	}
}

#endif



