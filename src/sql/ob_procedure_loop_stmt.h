#ifndef OBPROCEDURELOOPSTMT_H
#define OBPROCEDURELOOPSTMT_H

#include "common/ob_string.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"

using namespace oceanbase::common;
namespace oceanbase
{
  namespace sql
  {
    //create by zt 20151128
    class ObProcedureLoopStmt : public ObBasicStmt {
    public:
      ObProcedureLoopStmt() :
              ObBasicStmt(T_PROCEDURE_LOOP),
              lowest_expr_id_(OB_INVALID_ID),
              highest_expr_id_(OB_INVALID_ID),
              step_size_(1),
              reverse_(false)
      {
      }

      virtual ~ObProcedureLoopStmt();

      virtual void print(FILE* fp, int32_t level, int32_t index);

      int add_loop_stmt(uint64_t stmt_id) { return loop_body_stmts_.push_back(stmt_id); }

      void set_lowest_expr(uint64_t lowest_expr_id) { lowest_expr_id_ = lowest_expr_id; }
      void set_highest_expr(uint64_t highest_expr_id) { highest_expr_id_ = highest_expr_id; }

      void set_reverse(bool rev) { reverse_ = rev; }

      void set_loop_count_name(const ObString &count_name) { loop_count_ = count_name; }

      uint64_t get_lowest_expr_id() const { return lowest_expr_id_; }
      uint64_t get_highest_expr_id() const { return highest_expr_id_ ; }

      uint64_t get_loop_stmt(int64_t idx) const;

      int64_t get_loop_body_size() const { return loop_body_stmts_.count(); }

      const ObString & get_loop_counter_name() const { return loop_count_; }

      bool is_reverse() const { return reverse_; }

      int64_t get_step_size() const { return step_size_; }

    private:

      ObString loop_count_; 		//loop variable name

      uint64_t lowest_expr_id_; //the start loop value
      uint64_t highest_expr_id_; //the end loop value

      int64_t step_size_;     //now the step_size is default set to 1

      bool reverse_; 			//is loop in the reverse order, for high to low

      ObArray<uint64_t> loop_body_stmts_;		/*loop body */
    };
  }
}

#endif // OBPROCEDURELOOPSTMT_H
