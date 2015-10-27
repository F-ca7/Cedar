/*
 * ob_drop_index.h
 *
 *  Created on: 2015年10月26日
 *      Author: longfei
 */

#ifndef SQL_OB_DROP_INDEX_H_
#define SQL_OB_DROP_INDEX_H_

#include "sql/ob_no_children_phy_operator.h"
#include "common/ob_strings.h"
#include "sql/ob_drop_table.h"
namespace oceanbase
{
  namespace mergeserver
  {
    class ObMergerRootRpcProxy;
  } // end namespace mergeserver

  namespace sql
  {
    class ObDropIndex: public ObDropTable
    {
      public:
        ObDropIndex();
        virtual ~ObDropIndex();
        int add_index_name (const common::ObString &tname);

        /// execute the insert statement
        virtual int open();
        virtual int close();
        virtual ObPhyOperatorType get_type() const { return PHY_DROP_INDEX; }
        virtual int64_t to_string(char* buf, const int64_t buf_len) const;

      private:
        // data members
        common::ObStrings indexs_;
    };

  } // end namespace sql
} // end namespace oceanbase



#endif /* SQL_OB_DROP_INDEX_H_ */
