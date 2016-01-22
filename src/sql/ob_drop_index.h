/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_drop_index.h
 * @brief for physical plan of drop index
 *
 * Created by longfei：drop index physical operator
 *
 * @version __DaSE_VERSION
 * @author longfei <longfei@stu.ecnu.edu.cn>
 * @date 2015_10_26
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
        common::ObStrings indexs_; // store the index we will drops
    };

  } // end namespace sql
} // end namespace oceanbase



#endif /* SQL_OB_DROP_INDEX_H_ */
