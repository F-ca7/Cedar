/*
 * ob_cs_interactive_scan.h
 *
 *  Created on: 2015年12月7日
 *      Author: longfei
 *  longfei1lantern@gmail.com
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
