#include "ob_variable_set_array_value_stmt.h"

namespace oceanbase
{
  namespace sql
  {
    ObVariableSetArrayValueStmt::~ObVariableSetArrayValueStmt()
    {

    }

    void ObVariableSetArrayValueStmt::print(FILE *fp, int32_t level, int32_t index)
    {
      print_indentation(fp, level);

      fprintf(fp, "<ObArrayValueList %d begin>\n", index);

      print_indentation(fp, level + 1);
      fprintf(fp, "value list: {");
      for(int64_t i = 0; i < values_.count(); ++i)
      {
        fprintf(fp, "%s ", to_cstring(values_.at(i)));
      }
      fprintf(fp, "}\n");
      print_indentation(fp, level);
      fprintf(fp, "<ObArrayValueList %d End>\n", index);
    }
  }
}

