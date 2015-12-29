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


#ifndef OCEANBASE_SQL_FETCH_PRIOR_STMT_H
#define OCEANBASE_SQL_FETCH_PRIOR_STMT_H
#include "ob_basic_stmt.h"
#include "common/ob_string.h"
#include "common/ob_array.h"

namespace oceanbase
{
	namespace sql
	{
	   class ObFetchPriorStmt : public ObBasicStmt
	   {
		 public:
		 ObFetchPriorStmt()
			: ObBasicStmt(T_CURSOR_FETCH_PRIOR)
		      {
		      }
		 virtual ~ObFetchPriorStmt(){}
		 void set_cursor_name(const common::ObString& name);
		 const common::ObString& get_cursor_name() const;
		 virtual void print(FILE* fp, int32_t level, int32_t index);
		 private:
	     common::ObString  cursor_name_;
	     common::ObArray<common::ObString> variable_names_;
	  };
	  inline void ObFetchPriorStmt::set_cursor_name(const common::ObString& name)
	  {
        cursor_name_ = name;
	  }
	  inline const common::ObString& ObFetchPriorStmt::get_cursor_name() const
	  {
        return cursor_name_;
	  }
	}
}

#endif //OCEANBASE_SQL_FETCH_STMT_H
