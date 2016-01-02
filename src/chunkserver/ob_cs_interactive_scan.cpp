/*
 * ob_cs_interactive_scan.cpp
 *
 *  Created on: 2015年12月7日
 *      Author: longfei
 *  longfei1lantern@gmail.com
 */

#include "ob_cs_interactive_scan.h"
#include "tbsys.h"

namespace oceanbase
{
  using namespace common;
  namespace chunkserver
  {


    ObCsInteractiveScan::ObCsInteractiveScan() :
        local_idx_scan_finish_(false)
    {
      // TODO Auto-generated constructor stub

    }

    ObCsInteractiveScan::~ObCsInteractiveScan()
    {
      // TODO Auto-generated destructor stub
    }

    int ObCsInteractiveScan::get_next_row(const common::ObRow *&row)
    {
      int ret = OB_SUCCESS;
      //@(longfei):need to set local_idx_scan_finish_
      if (!local_idx_scan_finish_)
      {
        if (OB_SUCCESS != (ret = (left_op_->get_next_row(row))))
        {
          if(OB_ITER_END == ret)
          {
            local_idx_scan_finish_ = true;
            TBSYS_LOG(INFO, "local_idx_scan_finish_ is true");
          }
          else
          {
            TBSYS_LOG(ERROR, "get local next row failed");
          }
        }
      }
      if(local_idx_scan_finish_)
      {
        //TBSYS_LOG(ERROR, "test::longfei I am in ObCsInteractiveScan");
        if (OB_SUCCESS != (ret = (right_op_->get_next_row(row))))
        {
          if(OB_ITER_END == ret)
           {
              TBSYS_LOG(ERROR, "test::longfei OB_ITER_END ObCsInteractiveScan");
           }
          else
          {
            TBSYS_LOG(ERROR, "get interactive next row failed");
          }
        }
        else
        {
          //if(row)TBSYS_LOG(ERROR, "test::longfei$$$$$$$$$$$$$$$$$$$ row = %s",to_cstring(*row));
        }
      }
      return ret;
    }

    int ObCsInteractiveScan::get_row_desc(const ObRowDesc *& row_desc) const
    {
      int ret = OB_SUCCESS;
      UNUSED(row_desc);
      return ret;
    }

    int64_t ObCsInteractiveScan::to_string(char *buf, const int64_t buf_len) const
    {
      int ret = OB_SUCCESS;
      UNUSED(buf);
      UNUSED(buf_len);
      return ret;
    }
  } /* namespace chunkserver */
} /* namespace oceanbase */
