/**
 * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * Authors:
 *   zhou nan <zn4work@gmail.com>
 *
 */

#ifndef _OB_CURSOR_HELPER_H
#define _OB_CURSOR_HELPER_H 1
#include "common/ob_row.h"
namespace oceanbase
{
  namespace sql
  {
    class ObCursorHelper
    {
      public:
        ObCursorHelper(){}
        virtual ~ObCursorHelper(){}
        virtual int get_next_row(const common::ObRow *&row) = 0;
      private:
        // disallow copy
        ObCursorHelper(const ObCursorHelper &other);
        ObCursorHelper& operator=(const ObCursorHelper &other);
    };
  } // end namespace sql
} // end namespace oceanbase

#endif /* _OB_CURSOR_HELPER_H */

