/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_drop_index_stmt.h
 * @brief for logical plan of drop index
 *
 * Created by longfei：for resolving logical plan of drop index
 *
 * @version __DaSE_VERSION
 * @author longfei <longfei@stu.ecnu.edu.cn>
 * @date 2015_10_26
 */

#ifndef SQL_OB_DROP_INDEX_STMT_H_
#define SQL_OB_DROP_INDEX_STMT_H_

#include "common/ob_array.h"
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "sql/ob_basic_stmt.h"
#include "parse_node.h"
#include "ob_drop_table_stmt.h"
namespace oceanbase
{
  namespace sql
  {
    class ObDropIndexStmt : public ObDropTableStmt
    {
    public:
      ObDropIndexStmt(common::ObStringBuf* name_pool_):ObDropTableStmt(name_pool_),drp_all_(false)
     {
        set_stmt_type(T_DROP_INDEX);
     }
      ~ObDropIndexStmt(){}
      int generate_inner_index_table_name(common::ObString& idx_name, common::ObString& ori_tab_name, char* inner_idx_name, int64_t& len);
      const common::ObString& getOriTabName() const;
      void setOriTabName(const common::ObString& oriTabName);
      bool isDrpAll() const;
      void setDrpAll(bool drpAll);

    private:
      common::ObString ori_tab_name_;
      bool drp_all_;
    };
  }
}



#endif /* SQL_OB_DROP_INDEX_STMT_H_ */
