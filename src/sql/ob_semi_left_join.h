/**
 * ob_semi_left_join.h
 * Version: $Id$
 * Authors:
 *   shengjuan Yu <yushengjuan@gmail.com>
 */

//add yushengjuan [semi_join] [0.1] 20150829:b
#ifndef _OB_SEMI_LEFT_JOIN_H_
#define _OB_SEMI_LEFT_JOIN_H_ 1
#include "common/ob_array.h"
#include "common/ob_string.h"
#include "common/ob_object.h"
#include "common/ob_row_store.h"
#include "ob_in_memory_sort.h"
#include "ob_merge_distinct.h"

namespace oceanbase
{
  namespace sql
    {
      class ObSemiLeftJoin: public ObSingleChildPhyOperator
      {
        public:
        ObSemiLeftJoin();
        virtual ~ObSemiLeftJoin();
        virtual int open();
        virtual int get_next_row(const common::ObRow *&row);
        virtual int colse();
        virtual void reset();
        virtual void reuse();
        virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;

        int do_sort();
        int do_distinct();

        int64_t to_string(char *buf, const int64_t buf_len) const;
        int set_sort_columns(uint64_t tab_id_, uint64_t col_id_);
        int compare_equal(const common::ObRowStore::StoredRow* this_row, const common::ObRowStore::StoredRow* last_row, bool &result) const;
        friend class ObInMemorySort;
        common::ObArray<common::ObObj>& get_left_table_element();
        //add fanqiushi [semi_join] [0.1] 20150829:b
        enum ObPhyOperatorType get_type() const{return PHY_SEMI_LEFT_JOIN;}
        //add:e
        private:
        //disallow copy
        ObSemiLeftJoin(const ObSemiLeftJoin &other);
        ObSemiLeftJoin& operator=(const ObSemiLeftJoin &other);

        private:
        //data members
        bool got_first_row_;
        common::ObArray<ObSortColumn> sort_columns_;
        common::ObRowStore row_store_;
        ObInMemorySort in_mem_sort_;//before select distinct element,should sort the row
        common::ObArray<const common::ObRowStore::StoredRow*> sorted_array_;
        common::ObArray<common::ObObj> left_table_element_stored_;//stored the distinct left_table element
      };

    inline common::ObArray<common::ObObj>& ObSemiLeftJoin::get_left_table_element()
    {
      //add fanqiushi [semi_join] [0.1] 20150910:b
      //tid = sort_columns_.at(0).table_id_;
      //cid = sort_columns_.at(0).column_id_;
      //add:e
      return left_table_element_stored_; //interface for right table
    }
  }//end namespace sql
}//end namespace oceanbase

#endif /* SQL_OB_SEMI_LEFT_JOIN_H_ */
//add:e
