/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 * @file     ob_ups_timer_task.h
 * @brief
 *           add a timertask ObUpsSetMajorityCountTask to execute setting majority_count.
 * @version __DaSE_VERSION
 * @author   zhangcd<zhangcd_ecnu@ecnu.cn>
 * @date     2015-12-25
 */
/**
  * (C) 2007-2010 Taobao Inc.
  *
  * This program is free software; you can redistribute it and/or modify
  * it under the terms of the GNU General Public License version 2 as
  * published by the Free Software Foundation.
  *
  * Version: $Id$
  *
  * Authors:
  *   rongxuan <rongxuan.lc@taobao.com>
  *     - some work details if you want
  */

#ifndef __OB_UPDATESERVER_OB_UPS_TIMER_TASK_H__
#define __OB_UPDATESERVER_OB_UPS_TIMER_TASK_H__

#include "common/ob_timer.h"

namespace oceanbase
{
  namespace updateserver
  {
    class ObUpsCheckKeepAliveTask : public common::ObTimerTask
    {
      public:
        ObUpsCheckKeepAliveTask();
        virtual ~ObUpsCheckKeepAliveTask();
        virtual void runTimerTask(void);
    };

    class ObUpsGrantKeepAliveTask : public common::ObTimerTask
    {
      public:
        ObUpsGrantKeepAliveTask() {};
        virtual ~ObUpsGrantKeepAliveTask() {};
        virtual void runTimerTask();
    };
    class ObUpsLeaseTask : public common::ObTimerTask
    {
      public:
        ObUpsLeaseTask() {};
        virtual ~ObUpsLeaseTask() {};
        virtual void runTimerTask();
    };

    // add by zhangcd [majority_count_init] 20151118:b
    class ObUpsSetMajorityCountTask : public common::ObTimerTask
    {
      public:
        ObUpsSetMajorityCountTask() {};
        virtual ~ObUpsSetMajorityCountTask() {};
        virtual void runTimerTask();
    };
    // add:e
  }
}

#endif /* __OB_UPDATESERVER_OB_UPS_TIMER_TASK_H__ */
