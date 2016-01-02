/*
 * ob_global_index_handler.h
 *
 *  Created on: 2015年12月5日
 *      Author: longfei
 *  longfei1lantern@gmail.com
 */

#ifndef CHUNKSERVER_OB_GLOBAL_INDEX_HANDLER_H_
#define CHUNKSERVER_OB_GLOBAL_INDEX_HANDLER_H_

#include "ob_index_handler.h"
#include "common/ob_range2.h"
#include "common/ob_column_checksum.h"
#include "ob_index_local_agent.h"
#include "ob_index_interactive_agent.h"
#include "ob_get_cell_stream_wrapper.h"
#include "sql/ob_sort.h"

namespace oceanbase
{
  namespace chunkserver
  {
    class ObIndexHandlePool;

    class ObGlobalIndexHandler: public ObIndexHandler
    {
    public:
      ObGlobalIndexHandler(ObIndexHandlePool *pool,common::ObMergerSchemaManager *schema_mgr,ObTabletManager* tablet_mgr);
      virtual ~ObGlobalIndexHandler();

    public:
      virtual int start();
      virtual int to_string();
      virtual int init();
      int cons_global_index(ObNewRange *range);
      int fill_scan_param(ObScanParam &param);
      int write_global_index_v1();
      int cons_row_desc(ObRowDesc &desc);
      int cons_row_desc_without_virtual(ObRowDesc &desc);
      int calc_tablet_col_checksum_index(const ObRow& row, ObRowDesc desc, char *column_checksum, int64_t tid);
      int construct_index_tablet_info(ObTablet* tablet);
      int update_meta_index(ObTablet* tablet,const bool sync_meta);
      int check_tablet(const ObTablet* tablet);
      int get_failed_fake_range(ObNewRange &range);


    public:
      inline int set_handle_range(ObNewRange *handle_range);
      inline uint64_t get_table_id_test(){return table_id_;}

    private:
      ObNewRange *handle_range_;
      RangeServerHash* range_server_hash_;//指向pool中的data_multcs_range_hash_
      uint64_t table_id_;
      ObGetCellStreamWrapper ms_wrapper_; //假装这里有一个mergeserver，用来与其他的CS通信
      ObIndexInteractiveAgent interactive_agent_;//物理算子
      ObIndexLocalAgent local_agent_;//物理算子
      common::ObColumnChecksum cc;
      common::ObColumnChecksum column_checksum_;
      sql::ObSort sort_;
    };

    inline int ObGlobalIndexHandler::set_handle_range(ObNewRange *handle_range)
    {
      int ret = OB_SUCCESS;
      handle_range_ = handle_range;
      if (handle_range_ == NULL)
      {
        TBSYS_LOG(ERROR,"failed to assign handle_range_!");
        ret = OB_ERROR;
      }
      return ret;
    }

  } /* namespace chunkserver */
} /* namespace oceanbase */

#endif /* CHUNKSERVER_OB_GLOBAL_INDEX_HANDLER_H_ */
