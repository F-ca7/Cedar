#ifndef OB_INDEX_REPORTER_H
#define OB_INDEX_REPORTER_H

#include "common/ob_tablet_histogram.h"
#include "common/ob_tablet_histogram_report_info.h"
#include "common/ob_mod_define.h"
//#include "ob_tablet_manager.h"


namespace oceanbase
{
  namespace chunkserver
  {
    class ObTabletManager;
    class ObIndexReporter
    {
    public:
      ObIndexReporter()
      {

      }

      //void init(ObTabletManager* tablet_manager){tablet_manager_ = tablet_manager;}

      common::ObTabletHistogram *get_tablet_histogram()
      {
        return &static_index_histogram_;
      }

      common::ObTabletHistogramReportInfo *get_tablet_histogram_report_info()
      {
        return &static_index_report_info_;
      }

      common::ObTabletHistogramReportInfoList *&get_tablet_histogram_report_info_list()
      {
        return static_index_report_info_list_;
      }

      void reset_report_info();

      static int send_local_index_info(ObTabletManager *tablet_manager, common::ObTabletHistogramReportInfoList* report_info_list);

      static int  send_index_info(ObTabletManager *tablet_manager, uint64_t index_tid);

    private:
      common::ObTabletHistogram static_index_histogram_;
      common::ObTabletHistogramReportInfo static_index_report_info_;
      common::ObTabletHistogramReportInfoList *static_index_report_info_list_;
      //ObTabletManager *tablet_manager_;
    };
  }
}

#endif // OB_INDEX_REPORTER_H
