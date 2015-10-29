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

#ifndef OCEANBASE_SQL_FETCH_FROMTO_STMT_H
#define OCEANBASE_SQL_FETCH_FROMTO_STMT_H
#include "ob_basic_stmt.h"
#include "common/ob_string.h"
#include "common/ob_array.h"

namespace oceanbase
{
	namespace sql
	{
	   class ObFetchFromtoStmt : public ObBasicStmt
	   {
		 public:
		 ObFetchFromtoStmt()
			: ObBasicStmt(T_CURSOR_FETCH_FROMTO)
		      {
		      }
		 virtual ~ObFetchFromtoStmt(){}
		 void set_cursor_name(const common::ObString& name);
		 void set_count_f(int64_t fetch_count);
		 int64_t get_count_f();
		 void set_count_t(int64_t fetch_count);
		 int64_t get_count_t();
		 const common::ObString& get_cursor_name() const;
		 virtual void print(FILE* fp, int32_t level, int32_t index);
		 private:
	     common::ObString  cursor_name_;
//	     common::ObArray<common::ObString> variable_names_;
	     int64_t  count_f_;
	     int64_t  count_t_;
		};
		inline void ObFetchFromtoStmt::set_cursor_name(const common::ObString& name)
		{
	      cursor_name_ = name;
		}
	    inline const common::ObString& ObFetchFromtoStmt::get_cursor_name() const
		{
		   return cursor_name_;
	    }
	    inline void ObFetchFromtoStmt::set_count_f(int64_t fetch_count)
		{
		   count_f_ = fetch_count;
		}
	    inline int64_t ObFetchFromtoStmt::get_count_f()
		{
		   return count_f_;
	    }
		inline void ObFetchFromtoStmt::set_count_t(int64_t fetch_count)
		{
		   count_t_ = fetch_count;
		}
	    inline int64_t ObFetchFromtoStmt::get_count_t()
		{
		   return count_t_;
		}
	}
}

#endif //OCEANBASE_SQL_FETCH_STMT_H
