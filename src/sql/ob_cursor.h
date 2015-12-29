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

#ifndef _OB_CURSOR_H
#define _OB_CURSOR_H 1
#include "ob_single_child_phy_operator.h"
#include "common/ob_string.h"
#include "common/ob_array.h"
#include "ob_in_memory_cursor.h"
#include "ob_merge_cursor.h"
#include "sql/ob_basic_stmt.h"
#include "ob_sql_session_info.h"
namespace oceanbase
{
  namespace sql
  {
    class ObCursor: public ObSingleChildPhyOperator
    {
      public:
        ObCursor();
        virtual ~ObCursor();
        virtual void reset();
        virtual void reuse();
        void set_mem_size_limit(const int64_t limit);
        int set_run_filename(const common::ObString &filename);
        int get_run_file();
        virtual int open();
        virtual int close();
        virtual int get_next_row(const common::ObRow *&row);
        virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
        virtual int64_t to_string(char* buf, const int64_t buf_len) const;
        virtual ObPhyOperatorType get_type() const;
        int64_t get_mem_size_limit() const;
        void inc_pos();
        void dec_pos();
        void set_is_opened(bool is_opened);
        bool get_is_opened();
        int64_t get_row_num() const;
        int get_ab_row(int64_t ab_num_,const common::ObRow *&row);
        int get_first_row(const common::ObRow *&row);
        int get_last_row(const common::ObRow *&row);
        int get_prior_row(const common::ObRow *&row);
        int get_rela_row(bool is_next,int64_t rela_count,const common::ObRow *&row);
        DECLARE_PHY_OPERATOR_ASSIGN;
        NEED_SERIALIZE_AND_DESERIALIZE;
      private:
        // disallow copy
        ObCursor(const ObCursor &other);
        ObCursor& operator=(const ObCursor &other);
        // function members
        bool need_dump() const;
        int do_cursor();
      private:
        // data members
        bool is_opened_;
        int64_t mem_size_limit_;
        int64_t row_offset_;
        int64_t row_count_;
        int64_t run_idx_;
        int64_t row_num_;
        common::ObArray<int64_t> run_array_;
        ObInMemoryCursor in_mem_cursor_;
        ObMergeCursor merge_cursor_;
        ObCursorHelper *cursor_reader_;
    };

    inline int64_t ObCursor::get_mem_size_limit() const
    {
      return mem_size_limit_;
    }

    inline int64_t ObCursor::get_row_num() const
    {
      return row_num_;
    }
    inline void ObCursor::inc_pos()
    {
      in_mem_cursor_.inc_pos();
    }
    inline void ObCursor::set_is_opened(bool is_opened)
    {
       is_opened_ = is_opened;
    }
    inline bool ObCursor::get_is_opened()
    {
      return  is_opened_;
    }
    inline void ObCursor::dec_pos()
    {
      in_mem_cursor_.dec_pos();
    }
  } // end namespace sql
} // end namespace oceanbase

#endif /* _OB_CURSOR_H */
