/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_cs_interactive_scan.h
 * @brief ob_cs_interactive_scan.h base node for ObIndexLocalAgent and ObIndexInteractiveAgent
 *
 * Created by longfei：scan agent for construct static index
 *
 * @version __DaSE_VERSION
 * @author longfei <longfei@stu.ecnu.edu.cn>
 * @date 2015_12_07
 */

#ifndef CHUNKSERVER_OB_CS_INTERACTIVE_SCAN_H_
#define CHUNKSERVER_OB_CS_INTERACTIVE_SCAN_H_

#include "sql/ob_double_children_phy_operator.h"

using namespace oceanbase::sql;
namespace oceanbase
{
  namespace chunkserver
  {
    class ObCsInteractiveScan: public ObDoubleChildrenPhyOperator
    {
    public:
      ObCsInteractiveScan();
      virtual ~ObCsInteractiveScan();
    public:
      virtual int get_next_row(const common::ObRow *&row);
      virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
      virtual int64_t to_string(char *buf,const int64_t buf_len) const;

    private:
      bool local_idx_scan_finish_;
    };

  } /* namespace chunkserver */
} /* namespace oceanbase */

#endif /* CHUNKSERVER_OB_CS_INTERACTIVE_SCAN_H_ */
