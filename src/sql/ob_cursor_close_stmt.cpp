/*
 * ob_close_stmt.cpp
 *
 *  Created on: 2014年11月23日
 *      Author: ZN
 */


#include "ob_cursor_close_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;

void ObCursorCloseStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObCursorCloseStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObCursorCloseStmt %d End>\n", index);

}


