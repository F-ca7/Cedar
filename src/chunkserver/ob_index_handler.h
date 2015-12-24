/*
 * ob_index_handler.h
 *
 *  Created on: 2015年12月5日
 *      Author: longfei
 *  longfei1lantern@gmail.com
 */

#ifndef CHUNKSERVER_OB_INDEX_HANDLER_H_
#define CHUNKSERVER_OB_INDEX_HANDLER_H_

#include "ob_index_handle_pool.h"
#include "ob_tablet.h"
#include "sstable/ob_sstable_writer.h"
#include "sstable/ob_sstable_reader.h"


namespace oceanbase
{
  namespace chunkserver
  {
    using namespace sstable;

    class ObIndexHandler
    {
    public:
      static const int64_t DEFAULT_ESTIMATE_ROW_COUNT = 256*1024LL;
      static const int64_t DEFAULT_MEMORY_LIMIT = 256*1024*1024LL;
    public:
      ObIndexHandler(ObIndexHandlePool *pool,common::ObMergerSchemaManager *schema_mgr,ObTabletManager* tablet_mgr);
      virtual ~ObIndexHandler();
    public:
      virtual int init() = 0;  //每个子类对象使用之前必须初始化
      virtual int start() = 0; //开始处理索引构建过程
      int create_new_sstable(uint64_t table_id, int32_t disk);
      int fill_sstable_schema(const uint64_t table_id,
          const common::ObSchemaManagerV2& common_schema,
          sstable::ObSSTableSchema& sstable_schema);
      int save_current_row();
      int trans_row_to_sstrow(ObRowDesc &desc, const ObRow &row, ObSSTableRow &sst_row);
    public:
      ///get() series
      inline int32_t get_disk_no() const
      {
        return disk_no_;
      }
      //@todo(longfei):why i cannot use const here?
      inline common::ObNewRange get_new_range()
      {
        return new_range_;
      }
      inline ObSSTableSchema& get_sstable_schema()
      {
        return sstable_schema_;
      }
      inline ObSSTableRow& get_sstable_row()
      {
        return row_;
      }
      inline int64_t get_frozen_version() const
      {
        return frozen_version_;
      }
      inline ObTabletExtendInfo& get_tablet_extend_info()
      {
        return index_extend_info_;
      }
      inline int64_t get_cur_sstable_size()
      {
        return current_sstable_size_;
      }
      inline const common::ObSchemaManagerV2* get_schema_mgr() const
      {
        return current_schema_manager_;
      }
      inline common::ObMergerSchemaManager* get_merge_schema_mgr()
      {
        return manager_;
      }
      inline ObSSTableId& get_sstable_id()
      {
        return sstable_id_;
      }
      inline ObTabletManager* get_tablet_mgr()
      {
        return tablet_manager_;
      }
      inline const common::ObTableSchema* get_table_schema() const
      {
        return new_table_schema_;
      }
      inline ObSSTableWriter& get_sstable_writer()
      {
        return sstable_writer_;
      }
      inline ObIndexHandlePool* get_handle_pool()
      {
        return handle_pool_;
      }

    public:
      ///set() series
      inline void set_frozen_version(int64_t frozen_version)
      {
        frozen_version_ = frozen_version;
      }
      inline void set_sstable_size(int64_t tmp_size)
      {
        current_sstable_size_ = tmp_size;
      }
      inline void set_schema_mgr(const common::ObSchemaManagerV2* cur_schema_mgr)
      {
        current_schema_manager_ = cur_schema_mgr;
      }
      inline void set_disk_no(int32_t disk_no)
      {
        disk_no_ = disk_no;
      }
      inline void set_handle_pool(ObIndexHandlePool *handle_pool)
      {
        handle_pool_ = handle_pool;
      }
      inline void set_new_range(const ObNewRange& new_range)
      {
        new_range_ = new_range;
      }

    private:
      ObIndexHandlePool *handle_pool_; //为handler分配空间使用
      common::ObMergerSchemaManager* manager_;
      const common::ObSchemaManagerV2* current_schema_manager_; //当前版本的schema_manager_
      common::ObNewRange new_range_;
      ObTabletManager* tablet_manager_;
      ObSSTableId sstable_id_;
      ObSSTableSchema sstable_schema_;
      const common::ObTableSchema* new_table_schema_;
      char path_[common::OB_MAX_FILE_NAME_LENGTH];
      ObString path_string_;
      ObString compressor_string_;
      int64_t frozen_version_;
      ObSSTableWriter sstable_writer_;
      int32_t disk_no_;
      ObSSTableRow row_;
      int64_t current_sstable_size_;
      ObTabletExtendInfo index_extend_info_;    
    };

  } /* namespace chunkserver */
} /* namespace oceanbase */

#endif /* CHUNKSERVER_OB_INDEX_HANDLER_H_ */
