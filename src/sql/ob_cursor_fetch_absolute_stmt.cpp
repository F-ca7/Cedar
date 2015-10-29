/*
 * ob_fetch_absolute_stmt.cpp
 *
 *  Created on: 2014年12月2日
 *      Author: ZN
 */

#include "ob_cursor_fetch_absolute_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;

void ObFetchAbsoluteStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObFetchAbsoluteStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObFetchAbsoluteStmt %d End>\n", index);

}

