/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_index_local_agent.h
 * @brief get range data in cs itself
 *
 * Created by longfei： local agent is for the global stage of construct static index,
 *  get the datas of the range when those datas in myself.
 *
 * @version __DaSE_VERSION
 * @author longfei <longfei@stu.ecnu.edu.cn>
 * @date 2015_12_02
 */

#ifndef CHUNKSERVER_OB_INDEX_LOCAL_AGENT_H_
#define CHUNKSERVER_OB_INDEX_LOCAL_AGENT_H_

#include "common/ob_schema.h"
#include "ob_cell_stream.h"
#include "ob_scan_cell_stream.h"
#include "ob_rpc_proxy.h"
#include "common/ob_scan_param.h"
#include "sql/ob_no_children_phy_operator.h"
#include "sql/ob_sstable_scan.h"

namespace oceanbase
{
  using namespace common;
  using namespace sql;
  namespace chunkserver
  {
    typedef hash::ObHashMap<ObNewRange, ObTabletLocationList,
        hash::NoPthreadDefendMode> RangeServerHash;
    typedef hash::ObHashMap<ObNewRange, ObTabletLocationList,
        hash::NoPthreadDefendMode>::const_iterator HashIterator;

    class ObIndexLocalAgent: public ObNoChildrenPhyOperator
    {
      public:
        ObIndexLocalAgent();
        virtual ~ObIndexLocalAgent();
        virtual void reset();
        virtual void reuse();
        virtual int open();
        virtual int close();
        virtual ObPhyOperatorType get_type() const
        {
          return PHY_INDEX_LOCAL_AGENT;
        }
        virtual int get_next_row(const ObRow *&row);
        virtual int get_row_desc(const ObRowDesc *&row_desc) const;
        virtual int64_t to_string(char* buf, const int64_t buf_len) const;


      public:
        void set_row_desc(const ObRowDesc &desc);
        int set_scan_param(ObScanParam *scan_param);
        int set_range_server_hash(const chunkserver::RangeServerHash *range_server_hash);
//        void set_query_agent(chunkserver::ObIndexLocalAgent *agent);
//        void set_failed_fake_range(const ObNewRange &range);
        int build_sst_scan_param();
        int get_next_local_row(const ObRow *&row);
        int scan();
        int get_next_local_range(ObNewRange &range);
        void set_server(ObServer server)
        {
          self_ = server;
        }
        void set_scan_context(ScanContext &sc)
        {
          sc_ = sc;
        }
        DECLARE_PHY_OPERATOR_ASSIGN;

      private:
        ObRowDesc row_desc_;
        ObRow cur_row_;
        ObSSTableScan sst_scan_;
        ObScanParam *scan_param_;
        sstable::ObSSTableScanParam sst_scan_param_;
        const chunkserver::RangeServerHash *range_server_hash_;
        ObNewRange fake_rage_;
        int64_t hash_index_;
        bool local_idx_scan_finish_;
        bool local_idx_block_end_;
        bool first_scan_;
        ObServer self_;
        ScanContext sc_;
    };

  } //end chunkserver

} //end oceanbase

#endif /* CHUNKSERVER_OB_INDEX_LOCAL_AGENT_H_ */
