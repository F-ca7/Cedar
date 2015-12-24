#ifndef OB_TABLET_HISTOGRAM_REPORT_INFO
#define OB_TABLET_HISTOGRAM_REPORT_INFO
#include <tblog.h>
#include "ob_define.h"
#include "ob_server.h"
#include "ob_array_helper.h"
#include "page_arena.h"
#include "ob_range2.h"
#include "common/ob_tablet_info.h"
#include "common/ob_tablet_histogram.h"


namespace oceanbase
{
  namespace common
  {
    struct ObTabletHistogramReportInfo
    {
      ObTabletInfo tablet_info;
      ObTabletLocation tablet_location;
      ObTabletHistogram static_index_histogram;
      bool operator== (const ObTabletReportInfo &other) const;
      NEED_SERIALIZE_AND_DESERIALIZE;
    };

    struct ObTabletHistogramReportInfoList
    {
      ObTabletHistogramReportInfo tablets[OB_MAX_TABLET_LIST_NUMBER];
      ObArrayHelper<ObTabletHistogramReportInfo> tablet_list;
      ModuleArena allocator;
      mutable tbsys::CRWLock lock;

      ObTabletHistogramReportInfoList()
      {
        reset();
      }

      void reset()
      {
        tablet_list.init(OB_MAX_TABLET_LIST_NUMBER, tablets);
        tablet_list.clear();
      }

      int get_tablet_histogram(ObTabletHistogramReportInfo &tablet,int64_t index)
      {
        int ret = OB_SUCCESS;
        if(index >=0 && index < tablet_list.get_array_index())
        {
          tablet=tablets[index];
          if(index == (tablet_list.get_array_index()-1))
          {
            ret = OB_ITER_END;
          }
        }
        return ret;
      }

      inline int add_tablet(const ObTabletHistogramReportInfo& tablet)
      {
        int ret = OB_SUCCESS;
        tbsys::CWLockGuard guard(lock);
        if (!tablet_list.push_back(tablet))
          ret = OB_ARRAY_OUT_OF_RANGE;

        return ret;
      }
      NEED_SERIALIZE_AND_DESERIALIZE;
    };

  } // end namespace common
} // end namespace oceanbase



#endif // OB_TABLET_HISTOGRAM_REPORT_INFO

