/*
 * ob_cursor_fetch_stmt.cpp
 *
 *  Created on: 2014年8月3日
 *      Author: zhounan
 */


#include "ob_cursor_fetch_stmt.h"
using namespace oceanbase::common;
using namespace oceanbase::sql;

void ObCursorFetchStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObCursorFetchStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObCursorFetchStmt %d End>\n", index);

}

