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


#ifndef OCEANBASE_SQL_OB_DECLARE_STMT_H_
#define OCEANBASE_SQL_OB_DECLARE_STMT_H_
#include "ob_basic_stmt.h"
#include "common/ob_string.h"
namespace oceanbase
{
	namespace sql
	{
		class ObCursorDeclareStmt : public ObBasicStmt
		{
		  public:
		  ObCursorDeclareStmt()
		  : ObBasicStmt(T_CURSOR_DECLARE)
		  {
		   declare_query_id_ = common::OB_INVALID_ID;
		  }
		  virtual ~ObCursorDeclareStmt(){}
	          void set_cursor_name(const common::ObString& name);
	          void set_declare_query_id(const uint64_t query_id);
	          const common::ObString& get_cursor_name() const;
	          uint64_t get_declare_query_id() const;
	          virtual void print(FILE* fp, int32_t level, int32_t index);
		  private:
		  common::ObString cursor_name_;
		  common::ObString declare_sql_;
		  uint64_t declare_query_id_;
		};
		inline void ObCursorDeclareStmt::set_cursor_name(const common::ObString& name)
		{
			cursor_name_=name;
		}
		inline const common::ObString& ObCursorDeclareStmt::get_cursor_name()const
		{
			return cursor_name_;
		}
		inline uint64_t ObCursorDeclareStmt::get_declare_query_id()const
		{
			return declare_query_id_;
		}
		inline void ObCursorDeclareStmt::set_declare_query_id(const uint64_t query_id_)
		{
			declare_query_id_= query_id_;
		}
	}
}


#endif //OCEANBASE_SQL_OB_DECLARE_STMT_H_
