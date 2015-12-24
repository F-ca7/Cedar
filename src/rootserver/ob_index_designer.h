#ifndef OB_INDEX_DESIGNER_H
#define OB_INDEX_DESIGNER_H

#include <tbsys.h>
#include "rootserver/ob_root_meta2.h"
#include "rootserver/ob_root_table2.h"
#include "rootserver/ob_root_server2.h"
#include "common/ob_tablet_histogram.h"
#include "common/ob_tablet_info.h"

#define GET_ROOT_TABLE root_server_->get_root_table()
#define GET_ROOT_TABLE_LOCK root_server_->get_root_table_lock()
#define GET_ROOT_TABLE_BUILD_LOCK root_server_->get_root_table_build_lock()
namespace oceanbase
{
  namespace rootserver
  {
    class ObIndexDesigner
    {
      public:
        typedef ObTabletHistogramMeta* meta_itr;
        typedef const ObTabletHistogramMeta* const_meta_itr;

        struct ObHistgramSampleIterator
        {
          common::ObRowkey rowkey;
          const_meta_itr iter;
        };
        explicit ObIndexDesigner(rootserver::ObRootServer2 *rs, ObTabletHistogramManager *hist_manager)
          :hist_manager_(hist_manager), root_server_(rs),
           table_id_(OB_INVALID_ID), index_tid_(OB_INVALID_ID),
           cur_sri_index_(0)
        {
          data_meta_.init(ObTabletHistogramManager::MAX_TABLET_COUNT_PER_TABLE, data_holder_);
        }

        ~ObIndexDesigner()
        {
          root_server_ = NULL;
          if(NULL != hist_manager_)
          {
            OB_DELETE(ObTabletHistogramManager, ObModIds::OB_STATIC_INDEX, hist_manager_);
          }
          hist_manager_ = NULL;
          reset();
        }

        void reset()
        {
          data_meta_.clear();
          sri_array_.clear();
          sorted_hsi_list_.clear();
          table_id_ = OB_INVALID_ID;
          index_tid_ = OB_INVALID_ID;
          cur_sri_index_ = 0;
        }

        int set_table_id(const uint64_t tid, const uint64_t index_tid)
        {
          int ret = OB_SUCCESS;
          if (OB_INVALID_ID == tid || OB_INVALID_ID == index_tid)
          {
            ret = OB_INVALID_ARGUMENT;
            TBSYS_LOG(WARN, "invalid tid, tid=%lu, index_tid=%lu", tid, index_tid);
          }
          else
          {
            table_id_ = tid;
            index_tid_ = index_tid;
          }
          return ret;
        }
        uint64_t get_table_id() const
        {
          return table_id_;
        }
        uint64_t get_index_tid() const
        {
          return index_tid_;
        }
        bool has_next()
        {
          return (sorted_hsi_list_.size() > cur_sri_index_) && (0 <= cur_sri_index_);
        }

        ObTabletHistogramManager *get_hist_manager(){return hist_manager_;}

        void        dump_histogram()const;
        int         add_hist_meta(const ObTabletInfo &tablet_info,  int64_t &meta_index, const int32_t server_index);
        meta_itr    get_tablet_pos(const ObTabletInfo& info, int64_t &inner_pos);
        int         get_rt_tablet_info(const int32_t meta_index, const ObTabletInfo *&tablet_info) const;
        int         get_root_meta_index(const common::ObTabletInfo &tablet_info, int32_t &meta_index);
        int         get_root_meta(const int32_t meta_index, ObRootTable2::const_iterator &meta);
        int32_t     find_available_pos(const_meta_itr it, const int32_t server_index) const;
        int         sort_all_sample();
        int         get_next_global_tablet(const int64_t sample_num, ObTabletInfo &tablet_info, int32_t *server_index, const int32_t copy_count);
        int         allocate_chunkserver(int32_t *server_index, const int32_t copy_count, const int32_t begin_index, const int32_t end_index);
        int         set_meta_index(int64_t meta_index, int64_t hist_index);
      public:
        inline meta_itr begin()
        {
          return &(data_holder_[0]);
        }

        inline meta_itr end()
        {
          return begin() + data_meta_.get_array_index();
        }
        inline const_meta_itr begin()const
        {
          return &(data_holder_[0]);
        }

        inline const_meta_itr end() const
        {
          return begin() + data_meta_.get_array_index();
        }

      public:
        int check_report_info(const ObTabletInfo *compare_tablet, bool &is_finished) const;
        int check_local_index_build_done(const uint64_t index_tid, bool &is_finished, tbsys::CThreadMutex &mutex);
        int fill_tablet_info_list_by_server_index(ObTabletInfoList *tablet_info_list[], const int32_t list_size,
                                                  const ObTabletInfo &tablet_info, int32_t *server_index, const int32_t copy_count);
        int design_global_index(const int64_t sample_num, tbsys::CThreadMutex &mutex);
        int check_global_index_build_done(const uint64_t index_tid, bool &is_finished) const;
        int balance_index(const uint64_t index_tid);

      private:
        int add_meta(const ObTabletHistogramMeta &meta);

      private:
        ObTabletHistogramMeta data_holder_[ObTabletHistogramManager::MAX_TABLET_COUNT_PER_TABLE];
        common::ObArrayHelper<ObTabletHistogramMeta> data_meta_;
        common::ObSEArray<ObHistgramSampleIterator, ObTabletHistogramManager::MAX_TABLET_COUNT_PER_TABLE> sri_array_;
        common::ObSortedVector<ObHistgramSampleIterator *> sorted_hsi_list_;
        ObTabletHistogramManager *hist_manager_;
        rootserver::ObRootServer2* root_server_;
        uint64_t table_id_;
        uint64_t index_tid_;
        int32_t  cur_sri_index_;

    };
  }
}



#endif // OB_INDEX_DESIGNER

