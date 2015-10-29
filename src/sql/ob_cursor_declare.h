/**
 * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * Authors:
 *   zhou nan <zn4work@gmail.com>
 *
 */

#ifndef OCEANBASE_SQL_OB_DECLARE_H
#define OCEANBASE_SQL_OB_DECLARE_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"

namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObCursorDeclare : public ObSingleChildPhyOperator
		{
		public:
			ObCursorDeclare();
			virtual ~ObCursorDeclare();
			virtual void reset();
			virtual void reuse();
			//store curtsor_name
			void set_cursor_name(const common::ObString& cursor_name);
			const common::ObString& get_cursor_name()const;
			//execute the declare statement
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const{ return PHY_CURSOR_DECLARE;}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			// @note always return OB_ITER_END
			virtual int get_next_row(const common::ObRow *&row);
		private:
			//disallow copy
			ObCursorDeclare(const ObCursorDeclare &other);
			ObCursorDeclare& operator=(const ObCursorDeclare &other);
			//function members
			int store_phy_plan_to_session();
		private:
			//data members
			common::ObString cursor_name_;
		};

		inline void ObCursorDeclare::reset()
		{
		    ObSingleChildPhyOperator::reset();
		}

		inline void ObCursorDeclare::reuse()
		{
			ObSingleChildPhyOperator::reuse();
		}

		inline void ObCursorDeclare::set_cursor_name(const common::ObString& cursor_name)
		{
		    cursor_name_ = cursor_name;
		}
	}
}

#endif /* OCEANBASE_SQL_OB_PREPARE_H_ */



