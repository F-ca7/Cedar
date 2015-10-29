/*
 * ob_merge_cursor.h
 *
 *  Created on: 2014年12月31日
 *      Author: ZN
 */

#ifndef _OB_MERGE_CURSOR_H
#define _OB_MERGE_CURSOR_H 1
#include "common/ob_define.h"
#include "common/ob_string.h"
#include "common/ob_array.h"
#include "common/ob_row.h"
#include "ob_run_file.h"
#include "ob_in_memory_cursor.h"
#include "ob_cursor_helper.h"

namespace oceanbase
{
  namespace sql
  {
    // on-disk merge sort, used by ObSort
    class ObMergeCursor: public ObCursorHelper
    {
      public:
        ObMergeCursor();
        virtual ~ObMergeCursor();
        virtual void reset();
        virtual void reuse();
        int set_run_filename(const common::ObString &filename);
        int dump_run(ObInMemoryCursor &rows);
        void set_final_run(ObInMemoryCursor &rows);
        virtual int get_next_row(const common::ObRow *&row);
        int get_next_row(common::ObRow &row);
        void set_run_idx(int64_t pos);
        int end_get_run();

      private:
        // types and constants
        static const int64_t CURSOR_RUN_FILE_BUCKET_ID = 0;
      private:
        // disallow copy
        ObMergeCursor(const ObMergeCursor &other);
        ObMergeCursor& operator=(const ObMergeCursor &other);
      private:
        // data members
        char run_filename_buf_[common::OB_MAX_FILE_NAME_LENGTH];
        common::ObString run_filename_;
        ObRunFile run_file_;
        ObInMemoryCursor *final_run_;
        int64_t run_idx_;
        int64_t dump_run_count_;
        int64_t count_;
        common::ObRow curr_row_;
        const common::ObRowDesc *row_desc_;
    };

    inline void ObMergeCursor::set_run_idx(int64_t pos)
         {
            run_idx_ = pos;
         }


  } // end namespace sql
} // end namespace oceanbase

#endif /* _OB_MERGE_CURSOR_H */
