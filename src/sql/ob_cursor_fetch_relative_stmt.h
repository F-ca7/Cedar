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

#ifndef OCEANBASE_SQL_FETCH_RELATIVE_STMT_H
#define OCEANBASE_SQL_FETCH_RELATIVE_STMT_H
#include "ob_basic_stmt.h"
#include "common/ob_string.h"
#include "common/ob_array.h"

namespace oceanbase
{
	namespace sql
	{
	  class ObFetchRelativeStmt : public ObBasicStmt
	  {
		 public:
		 ObFetchRelativeStmt()
			: ObBasicStmt(T_CURSOR_FETCH_RELATIVE)
		      {
		      }
		 virtual ~ObFetchRelativeStmt(){}
		 void set_cursor_name(const common::ObString& name);
		 const common::ObString& get_cursor_name() const;
		 void set_is_next(int64_t is_next);
		 int64_t get_is_next();
		 void set_fetch_count(int64_t fetch_count);
		 int64_t get_fetch_count();
		 virtual void print(FILE* fp, int32_t level, int32_t index);
		 private:
	     common::ObString  cursor_name_;
	     common::ObArray<common::ObString> variable_names_;
	     int64_t is_next_;
	     int64_t  fetch_count_;
	  };
	  inline void ObFetchRelativeStmt::set_cursor_name(const common::ObString& name)
	  {
	     cursor_name_ = name;
	  }
      inline const common::ObString& ObFetchRelativeStmt::get_cursor_name() const
      {
         return cursor_name_;
      }
      inline void ObFetchRelativeStmt::set_is_next(int64_t is_next)
      {
 	     is_next_ = is_next;
      }
	  inline int64_t ObFetchRelativeStmt::get_is_next()
   	  {
   	     return is_next_;
      }
	  inline void ObFetchRelativeStmt::set_fetch_count(int64_t fetch_count)
      {
         fetch_count_ = fetch_count;
      }
      inline int64_t ObFetchRelativeStmt::get_fetch_count()
      {
         return fetch_count_;
      }
	}
}

#endif //OCEANBASE_SQL_FETCH_STMT_H
