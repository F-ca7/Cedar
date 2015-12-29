/*
 * ob_open_stmt.cpp
 *
 *  Created on: 2014年9月20日
 *      Author: ZN
 */




#include "ob_cursor_open_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;

void ObCursorOpenStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObCursorOpenStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "Statement name ::= %.*s\n", cursor_name_.length(), cursor_name_.ptr());
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObCursorOpenStmt %d End>\n", index);

}

