#ifndef OB_INDEX_CONTROL_UNIT_H
#define OB_INDEX_CONTROL_UNIT_H
#include "common/ob_define.h"
#include "common/ob_array.h"
#include "ob_root_server2.h"
#include "ob_index_cs_handler.h"
#include "ob_index_service.h"
#include "ob_index_designer.h"

namespace oceanbase
{
  namespace rootserver
  {
    class ObRootWorker;
    class ObIndexControlUnit
    {
      public:
        ObIndexControlUnit();
        ~ObIndexControlUnit();
        void    init(ObRootWorker *worker);
        void    start();
        void    stop();
        int     start_mission();
        int     schedule();
        void    set_version(int64_t start_version);
        inline  bool  is_start(){return start_;}

      public:
        int     generate_job_list();
        int     handle_histograms(const common::ObTabletHistogramReportInfoList& add_tablets, const int server_index);
        void    run_job();
        int     stage_prepare(uint64_t index_tid);
        int     pipe_run_job(uint64_t index_tid);

        IndexBeat& get_beat(){return ch_.get_beat();}
        ObCSHandler& get_cs_handler(){return ch_;}

      public:
        int     fill_all_samples();
        int     clean_mess(const uint64_t idx_id, const bool need_delete_rt);
        inline  void set_start_version(int64_t version){version_ = version;}
        ObIndexService &get_service(){return service_;}
      private:

        int64_t version_;
        int64_t finish_index_num_;
        volatile int64_t mission_start_time_;
        bool start_;
        bool job_running_;
        ObRootWorker    *root_woker_;
        ObIndexService  service_;
        ObIndexDesigner *designer_;
        ObCSHandler     ch_;
        ObArray<uint64_t> job_list_;
        ObArray<uint64_t> failed_list_;
        tbsys::CThreadMutex icu_mutex_;
        mutable tbsys::CThreadMutex designer_mutex_;
    };
  }
}


#endif // OB_INDEX_CONTROL_UNIT_H

