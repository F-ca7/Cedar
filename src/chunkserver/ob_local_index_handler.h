#ifndef OBLOCALINDEXHANDLER_H
#define OBLOCALINDEXHANDLER_H


//#include "ob_tablet_manager.h"
#include "common/ob_range2.h"
#include "common/ob_column_checksum.h"
#include "sstable/ob_disk_path.h"
#include "sstable/ob_sstable_writer.h"
#include "sql/ob_sort.h"
#include "sql/ob_tablet_scan.h"
#include "sql/ob_sstable_scan.h"
#include "sql/ob_sql_scan_param.h"
#include "ob_index_reporter.h"
//#include "ob_index_handle_pool.h" //del longfei:解决重复引用编译问题

namespace oceanbase
{
  namespace chunkserver
  {
    class ObTabletManager;
    class ObIndexHandlePool;
    using namespace common;
    using namespace sql;
    using namespace sstable;
    class ObLocalIndexHandler
    {
      static const int64_t DEFAULT_ESTIMATE_ROW_COUNT = 256*1024LL;
      static const int64_t DEFAULT_MEMORY_LIMIT = 256*1024*1024LL;
    public:
      ObLocalIndexHandler(
          ObIndexHandlePool *pool,
          common::ObMergerSchemaManager *schema_mgr,
          ObTabletManager* tablet_mgr,
          ObTabletHistogramReportInfoList* report_info_list);
      ~ObLocalIndexHandler();
      inline int set_tablet(ObTablet* tablet);
      inline int set_sample_rate(int64_t sample_rate);
      inline ObIndexReporter* get_index_reporter();
      inline common::ModuleArena* get_allocator();
      int create_new_sstable(const uint64_t table_id, const int32_t disk_no);
      int cons_index_data_row_desc(ObRowDesc &index_data_row_desc, uint64_t index_tid);
      int push_cid_in_desc_and_ophy(uint64_t data_tid, const ObRowDesc index_data_row_desc, ObArray<uint64_t> &basic_columns);
      int trans_row_to_sstrow(ObRowDesc &row_desc, const ObRow &row);
      int cons_column_checksum_row_desc_for_data(ObRowDesc &column_checksum_row_desc, uint64_t tid);
      int calc_column_checksum_for_data(const ObRow& row, ObRowDesc &column_checksum_row_desc, char *column_checksum, uint64_t tid);

      int write_partitional_index(
          ObNewRange range,
          uint64_t index_tid,
          int32_t disk_no,
          int64_t tablet_row_count,
          int64_t sample_rate);

      int cons_local_index(ObTablet *tablet, int64_t sample_rate);
      virtual int start();
      int save_current_row();

    private:
      uint64_t table_id_;
      ObNewRange new_range_;
      ObSSTableId sstable_id_;
      char sstable_path_[OB_MAX_FILE_NAME_LENGTH];
      ObSSTableSchema sstable_schema_;
      ObSSTableWriter sstable_writer_;
      int64_t sstable_size_;
      int64_t frozen_version_;
      ObSort sort_;
      ObSSTableRow sst_row_;
      ObTabletManager* tablet_manager_;
      const common::ObTableSchema* new_table_schema_;
      const common::ObSchemaManagerV2* schema_manager_;
      common::ObMergerSchemaManager *merger_schema_manager_;
      ObColumnChecksum column_checksum_;
      ModuleArena allocator_;
      ObTablet* tablet_;
      int64_t sample_rate_;

      ObIndexReporter index_reporter_;
      ObIndexHandlePool *handle_pool_;
    };

    inline int ObLocalIndexHandler::set_tablet(ObTablet* tablet)
    {
      int ret = OB_SUCCESS;
      tablet_ = tablet;
      if (NULL == tablet_)
      {
        TBSYS_LOG(ERROR,"failed to set tablet_!");
        ret = OB_ERROR;//@todo(maoxx)
      }
      return ret;
    }

    inline int ObLocalIndexHandler::set_sample_rate(int64_t sample_rate)
    {
      int ret = OB_SUCCESS;
      sample_rate_ = sample_rate;
      if (0 == sample_rate_)
      {
        TBSYS_LOG(ERROR,"failed to set sample_rate_!");
        ret = OB_ERROR;//@todo(maoxx)
      }
      return ret;
    }

    inline common::ModuleArena* ObLocalIndexHandler::get_allocator()
    {
      return &allocator_;
    }

    inline ObIndexReporter* ObLocalIndexHandler::get_index_reporter()
    {
      return &index_reporter_;
    }
  }
}

#endif // OBLOCALINDEXHANDLER_H
