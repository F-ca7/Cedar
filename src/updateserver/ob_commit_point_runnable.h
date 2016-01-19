/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file ob_commit_point_runnable.h
 * @brief flush commit point to disk asynchronously
 *
 * @version __DaSE_VERSION
 * @author liubozhong <51141500077@edu.cn>
 *         guojinwei <guojinwei@stu.ecnu.edu.cn>
 * @date 2015_12_30
 */
#ifndef OCEANBASE_UPDATESERVER_OB_COMMIT_POINT_RUNNABLE_H_
#define OCEANBASE_UPDATESERVER_OB_COMMIT_POINT_RUNNABLE_H_

#include "common/ob_define.h"
#include "tbsys.h"

//add lbzhong [Commit Point] 20150820:b
/**
 * @brief write commitpoint thread
 */
namespace oceanbase
{
  namespace updateserver
  {
    /**
     * @brief ObCommitPointRunnable
     * This class is designed for flushing commit log to disk at intervals.
     */
    class ObCommitPointRunnable : public tbsys::CDefaultRunnable
    {
      public:
        /**
         * @brief constructor
         */
        ObCommitPointRunnable();

        /**
         * @brief destructor
         */
        virtual ~ObCommitPointRunnable();
      public:
        /**
         * @brief [overwrite]
         * flush commit point to disk at intervals
         */
        void run(tbsys::CThread * thread, void * arg);
    };
  }
}
//add:e

#endif
