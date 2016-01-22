/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_index_interactive_agent.h
 * @brief for define rpc interface between chunkserver like this :) cs <== rpc ==> cs
 *
 * Created by longfei：  interactive agent is for the global stage of construct static index,
 *  get the datas of the range when those datas in other chunkserver.
 *
 * @version __DaSE_VERSION
 * @author longfei <longfei@stu.ecnu.edu.cn>
 * @date 2015_12_02
 */

#ifndef CHUNKSERVER_OB_INDEX_INTERACTIVE_AGENT_H_
#define CHUNKSERVER_OB_INDEX_INTERACTIVE_AGENT_H_

//#include files
#include "sql/ob_no_children_phy_operator.h"
#include "ob_cs_interactive_cell_stream.h"
#include "ob_index_local_agent.h"

namespace oceanbase
{
  using namespace common;
  using namespace sql;
  namespace chunkserver
  {
    class ObIndexInteractiveAgent: public ObNoChildrenPhyOperator
    {
    public:
      ObIndexInteractiveAgent();
      virtual ~ObIndexInteractiveAgent(){}
      virtual void reset();
      virtual void reuse();
      virtual int open();
      virtual int close();
      virtual ObPhyOperatorType get_type() const
      {
        return PHY_INDEX_INTERACTIVE_AGENT;
      }
      virtual int get_next_row(const ObRow *&row);
      virtual int64_t to_string(char* buf, const int64_t buf_len) const;
      virtual int get_row_desc(const ObRowDesc *&row_desc) const{UNUSED(row_desc);return OB_SUCCESS;}

    public:
      int get_next_row(ObRow &row);
      void set_row_desc(const ObRowDesc &desc);
      /*add this function so that index builder can return failed fake range*/
      void set_failed_fake_range(const ObNewRange &range);
      int start_agent(ObScanParam &scan_param,
          ObCsInteractiveCellStream &cs_stream, const RangeServerHash *hash);
      void stop_agent();
      int get_failed_fake_range(ObNewRange &range);
    public:
      int get_cell(common::ObCellInfo** cell);
      int get_cell(common::ObCellInfo** cell, bool* is_row_changed);
      int next_cell();

    private:
      ObCsInteractiveCellStream *interactive_cell_;
      common::ObScanParam *scan_param_;
      bool inited_;
      bool not_used_;
      const RangeServerHash *range_server_hash_;
      int32_t hash_index_;
      int64_t column_count_;
      ObNewRange failed_fake_range_;
      ObRow curr_row_;
      ObRowDesc row_desc_;

    };

  }
}

#endif /* CHUNKSERVER_OB_INDEX_INTERACTIVE_AGENT_H_ */
