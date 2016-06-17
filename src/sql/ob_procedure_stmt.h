#ifndef OCEANBASE_SQL_OB_PROCEDURE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "common/hash/ob_hashmap.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
using namespace oceanbase::common;

namespace oceanbase {
  namespace sql {

    enum ParamType
    {
      DEFAULT_TYPE=0,
      IN_TYPE = 1,
      OUT_TYPE = 2,
      INOUT_TYPE = 3
    };

    struct ObParamDef
    {
      ObString    param_name_;/*参数名称*/
      ObObjType   param_type_;/*参数类型*/
      ObObj       default_value_;/*默认值*/
      bool				is_array;
      ParamType	out_type_;/*输出类型*/
      ObObj       out_var_;
    };


    class ObProcedureStmt: public ObBasicStmt {
    public:
      ObProcedureStmt() :
              ObBasicStmt(T_PROCEDURE) {
        cursor_hash_map_.create(hash::cal_next_prime(512));
      }

      virtual ~ObProcedureStmt() {
      }

      int set_proc_name(const ObString &proc_name);

      int add_proc_param(const ObParamDef &proc_param);/*添加一个参数*/

      int add_declare_var(const ObString &var);/*添加一个变量*/

      int add_stmt(uint64_t& stmt_id);

      uint64_t get_stmt(int64_t index) const;

      const ObString& get_proc_name() const;

      const ObString& get_declare_var(int64_t index) const;

      int64_t get_param_size() const;

      int64_t get_stmt_size() const;

      int64_t get_declare_var_size() const;

//      const ObArray<ObParamDef>& get_params();

      const ObParamDef &get_param(int64_t index) const;
      virtual void print(FILE* fp, int32_t level, int32_t index);


    private:
      ObString proc_name_;
      ObArray<uint64_t> proc_block_;
      ObArray<ObParamDef> params_;/*存储过程参数*/
      ObArray<ObString> declare_variable_;/*存储过程begin-end之间所有定义的变量名*/

      hash::ObHashMap<ObString,uint64_t,hash::NoPthreadDefendMode> cursor_hash_map_;
    };
  }
}

#endif
