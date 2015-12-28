#ifndef OB_TABLET_HITOGRAM
#define OB_TABLET_HITOGRAM

#include <tblog.h>
#include "ob_define.h"
#include "ob_server.h"
#include "ob_array_helper.h"
#include "page_arena.h"
#include "ob_range2.h"
#include "ob_vector.h"
#include "ob_se_array.h"

namespace oceanbase
{
  namespace common
  {
    struct ReportCSInfo
    {
      int32_t server_info_index;
      int64_t report_timestamp;

      ReportCSInfo():server_info_index(OB_INVALID_INDEX),report_timestamp(0){}
    };

    struct ObTabletHistogramMeta
    {
      int32_t root_meta_index; //root table的索引
      ReportCSInfo report_cs_info[common::OB_SAFE_COPY_COUNT];
      int64_t hist_index;
      ObTabletHistogramMeta(): root_meta_index(OB_INVALID_INDEX), hist_index(OB_INVALID_INDEX)
      {}
      void dump() const;
    };
    struct ObTabletSample
    {
      ObNewRange range;
      int64_t row_count;

      ObTabletSample():row_count(0){}
      inline void set_range(const ObNewRange &new_range)
      {
        range = new_range;
      }
      inline const ObNewRange& get_range(void) const
      {
        return range;
      }
      inline void set_row_count(const int64_t count)
      {
        row_count = count;
      }
      inline int64_t get_row_count(void) const
      {
        return row_count;
      }

      void dump() const;

      template <typename Allocator>
      int deep_copy(Allocator &allocator, const ObTabletSample &other);
      NEED_SERIALIZE_AND_DESERIALIZE;
    };

    template <typename Allocator>
    inline int ObTabletSample::deep_copy(Allocator &allocator, const ObTabletSample &other)
    {
      int ret = OB_SUCCESS;
      this->row_count = other.row_count;

      ret = deep_copy_range(allocator, other.range, this->range);
      return ret;
    }

    //store one tablet histogram
    class ObTabletHistogram
    {
    public:
      ObTabletHistogram()
        :allocator_(NULL)
      {
        init();
      }
      ObTabletHistogram(common::ModuleArena *allocator)
        :allocator_(allocator)
      {
        init();
      }
      ~ ObTabletHistogram()
      {
        if(NULL != allocator_ && allocator_flag_)
        allocator_->free();
        allocator_ = NULL;
      }

      void reset()
      {
        sample_helper_.clear();
      }

      void set_allocator(common::ModuleArena *allocator){
        allocator_ = allocator;
      }

      void init()
      {
        sample_helper_.init(MAX_SAMPLE_BUCKET, samples_);
        allocator_flag_ = true;
      }

      int64_t get_sample_count() const
      {
        return sample_helper_.get_array_index();
      }

      void do_not_free(){allocator_flag_ = false;}

      void dump() const;

      int get_sample(const int64_t sample_index, ObTabletSample *&return_sample);
      int get_sample(const int64_t sample_index, const ObTabletSample *&return_sample) const;
      int add_sample(const ObTabletSample &index_sample);

      int add_sample_with_deep_copy(const ObTabletSample &index_sample);
      template <typename Allocator>
      int add_sample_with_deep_copy(Allocator &allocator, const ObTabletSample &index_sample);

      int deep_copy(const ObTabletHistogram &other);
      template <typename Allocator>
      int deep_copy(Allocator &allocator, const ObTabletHistogram &other);

      NEED_SERIALIZE_AND_DESERIALIZE;//反序列化时必须给allocator_赋值!!!

    public:
      static const int64_t MAX_SAMPLE_BUCKET = 256;

    private:
      common::ModuleArena *allocator_;
      ObTabletSample samples_[MAX_SAMPLE_BUCKET];
      common::ObArrayHelper<ObTabletSample> sample_helper_;
      bool allocator_flag_;
    };

    template <typename Allocator>
    int ObTabletHistogram::add_sample_with_deep_copy(Allocator &allocator, const ObTabletSample &index_sample)
    {
      int ret = OB_SUCCESS;
      ObTabletSample inner_sample;

      if (sample_helper_.get_array_index() >= MAX_SAMPLE_BUCKET){
        ret = OB_ARRAY_OUT_OF_RANGE;
        TBSYS_LOG(WARN, "too many sample in one histogram, max is %ld, now is %ld.", MAX_SAMPLE_BUCKET, sample_helper_.get_array_index());
      }
      else if(OB_SUCCESS != (ret = inner_sample.deep_copy(allocator, index_sample)))
      {
        TBSYS_LOG(WARN, "deep copy index sample failed!");
      }
      else if (!sample_helper_.push_back(inner_sample)) {
        ret = OB_ARRAY_OUT_OF_RANGE;
        TBSYS_LOG(WARN, "can not push index_sample into sample_list_");
      }
      return ret;
    }

    class ObTabletHistogramManager
    {

      public:
        ObTabletHistogramManager();

        ObTabletHistogram* alloc_hist_object();
        int add_histogram(const ObTabletHistogram &histogram, int64_t &out_index);
        int get_histogram(const int32_t hist_index, ObTabletHistogram *&out_hist) const;

        void dump(const int32_t hist_index) const;

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
        void reuse();


      public:
        static const int64_t MAX_TABLET_COUNT_PER_TABLE = 4 * 1024;
        common::ModulePageAllocator mod_;
        common::ModuleArena module_arena_;

      private:
        ObTabletHistogram* histograms_[MAX_TABLET_COUNT_PER_TABLE];
        common::ObArrayHelper<ObTabletHistogram*> histogram_helper_;


        uint64_t table_id_;
        uint64_t index_tid_;//add_histogram前检查index_tid_是否一致
        mutable tbsys::CThreadMutex alloc_mutex_;//线程锁
    };

    inline ObTabletHistogramManager::ObTabletHistogramManager()
      :mod_(ObModIds::OB_RS_TABLET_MANAGER),
      module_arena_(ModuleArena::DEFAULT_PAGE_SIZE, mod_),
      table_id_(OB_INVALID_ID), index_tid_(OB_INVALID_ID)
    {
      histogram_helper_.init(MAX_TABLET_COUNT_PER_TABLE, histograms_);
    }
  }
}


#endif // OB_TABLET_HITOGRAM

