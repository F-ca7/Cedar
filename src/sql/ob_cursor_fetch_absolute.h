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

#ifndef OCEANBASE_SQL_OB_FETCH_ABSOLUTE_H_
#define OCEANBASE_SQL_OB_FETCH_ABSOLUTE_H_
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"


namespace oceanbase
{
	namespace sql
	{
		class ObFetchAbsolute: public ObSingleChildPhyOperator
		{
			public:
			ObFetchAbsolute();
			virtual ~ObFetchAbsolute();
			virtual void reset();
			virtual void reuse();
			void set_cursor_name(const common::ObString& cursor_name);
			//execute the declare statement
			virtual int open();
			virtual int close();
		    virtual ObPhyOperatorType get_type() const { return PHY_CURSOR_FETCH_ABSOLUTE; }
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);
			void set_is_next(int64_t is_next);
		    int64_t get_is_next();
	        void set_fetch_count(int64_t fetch_count);
		    int64_t get_fetch_count();
			private:
			//disallow copy
			ObFetchAbsolute(const ObFetchAbsolute &other);
			ObFetchAbsolute& operator=(const ObFetchAbsolute &other);
			//function members
			private:
			//data members
			bool  is_next_;
		    int64_t  fetch_count_;
		    common::ObString cursor_name_;
		};

        inline void ObFetchAbsolute::set_is_next(int64_t is_next)
		{
		    is_next_ = is_next;
		}
	    inline int64_t ObFetchAbsolute::get_is_next()
		{
		    return is_next_;
		}
	    inline void ObFetchAbsolute::set_fetch_count(int64_t fetch_count)
		{
		    fetch_count_ = fetch_count;
		}
	    inline int64_t ObFetchAbsolute::get_fetch_count()
		{
		    return fetch_count_;
		}
	    inline void ObFetchAbsolute::set_cursor_name(const common::ObString& cursor_name)
		{
		    cursor_name_ = cursor_name;
		}

	}
}
#endif/* OCEANBASE_SQL_OB_FETCH_H_ */
