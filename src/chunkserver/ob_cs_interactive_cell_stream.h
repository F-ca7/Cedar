/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_cs_interactive_cell_stream.h
 * @brief ob_cs_interactive_cell_stream.h for define rpc interface between chunk like this :) cs <== rpc ==> cs
 *
 * Created by longfei：provide cell stream for operator ObCsInteractiveAgent
 *
 * @version __DaSE_VERSION
 * @author longfei <longfei@stu.ecnu.edu.cn>
 * @date 2015_12_04
 */

#ifndef CHUNKSERVER_OB_CS_INTERACTIVE_CELL_STREAM_H_
#define CHUNKSERVER_OB_CS_INTERACTIVE_CELL_STREAM_H_

#include "common/ob_read_common_data.h"
#include "ob_cell_stream.h"

namespace oceanbase
{
  namespace chunkserver
  {
    class ObCsInteractiveCellStream: public ObCellStream
    {
    public:
      virtual ~ObCsInteractiveCellStream();
      ObCsInteractiveCellStream(ObMergerRpcProxy * rpc_proxy,
          const common::ObServerType server_type = common::MERGE_SERVER,
          const int64_t time_out = 0);

    public:
      // get next cell
      virtual int next_cell(void);
      // scan init
      virtual int scan(const common::ObScanParam & param);

      /**
       * get the current scan data version, this function must
       * be called after next_cell()
       *
       * @return int64_t return data version
       */
      virtual int64_t get_data_version() const;

      void set_chunkserver(const ObTabletLocationList server);

      // reset inner stat
      void reset_inner_stat(void);
      inline void set_self(ObServer self)
      {
        self_ = self;
      }
      inline ObServer get_self()
      {
        return self_;
      }

    private:

      // check whether finish scan, if finished return server's servering tablet range
      // param  @param current scan param
      int check_finish_scan(const common::ObScanParam & param);

      // scan for get next cell
      // 从cur_result_中将结果取出来返回给上一层
      int get_next_cell(void);

      // scan data
      // param @param scan data param
      // 真正的扫描cell将结果存在cur_result_中
      int scan_row_data();

      // check inner stat
      bool check_inner_stat(void) const;

    private:
      DISALLOW_COPY_AND_ASSIGN(ObCsInteractiveCellStream);

      bool finish_;                          // finish all scan routine status
      common::ObMemBuf range_buffer_;           // for modify param range
      const common::ObScanParam * scan_param_;  // orignal scan param
      common::ObScanParam cur_scan_param_;      // current scan param
      ObTabletLocationList chunkserver_;                    // 选择需要发送的CS
      int64_t cur_rep_index_; //当前副本的索引
      ObServer self_;
    };

    // check inner stat
    inline bool ObCsInteractiveCellStream::check_inner_stat(void) const
    {
      //finish_ = false;
      return (ObCellStream::check_inner_stat() && (NULL != scan_param_));
    }

    // reset inner stat
    inline void ObCsInteractiveCellStream::reset_inner_stat(void)
    {
      ObCellStream::reset_inner_stat();
      finish_ = false;
      scan_param_ = NULL;
      cur_scan_param_.reset();
      cur_rep_index_ = 0;
    }

    inline void ObCsInteractiveCellStream::set_chunkserver(
        const ObTabletLocationList server)
    {
      chunkserver_ = server;
    }

  } /* namespace chunkserver */
} /* namespace oceanbase */

#endif /* CHUNKSERVER_OB_CS_INTERACTIVE_CELL_STREAM_H_ */
