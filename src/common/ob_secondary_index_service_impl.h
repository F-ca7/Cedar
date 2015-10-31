/*
 * ob_secondary_index_service_impl.h
 *
 *  Created on: 2015年10月29日
 *      Author: longfei
 */

#ifndef COMMON_OB_SECONDARY_INDEX_SERVICE_IMPL_H_
#define COMMON_OB_SECONDARY_INDEX_SERVICE_IMPL_H_

#include "ob_secondry_index_service.h"

namespace oceanbase
{
  namespace common
  {
    class ObSecondaryIndexServiceImpl : public ObSecondaryIndexService
    {
      // this type copy from "ob_postfix_expression.h"
      enum ObPostExprNodeType {
        BEGIN_TYPE = 0,
        COLUMN_IDX,
        CONST_OBJ,
        PARAM_IDX,
        SYSTEM_VAR,
        TEMP_VAR,
        OP,
        CUR_TIME_OP,
        UPS_TIME_OP,
        END, /* postfix expression terminator */
        END_TYPE
      };
    public:
      ObSecondaryIndexServiceImpl();
      const ObSchemaManagerV2* getSchemaManager() const;
      void setSchemaManager(ObSchemaManagerV2* schemaManager);
    public:
      virtual int find_cid(sql::ObSqlExpression& sql_expr, uint64_t &cid);
      virtual bool is_have_main_cid(sql::ObSqlExpression& sql_expr, uint64_t main_column_id);
      virtual bool is_all_expr_cid_in_indextable(uint64_t index_tid, const sql::ObPostfixExpression& expr_, const ObSchemaManagerV2 *sm_v2);
      virtual int get_all_cloumn(sql::ObSqlExpression& sql_expr,ObArray<uint64_t> &column_index);
      virtual bool is_this_expr_can_use_index(sql::ObSqlExpression& sql_expr, uint64_t &index_tid,uint64_t main_tid,const ObSchemaManagerV2 *sm_v2);
    public:
      virtual bool is_this_table_avalibale(uint64_t tid) const ;
      virtual bool is_index_table_has_all_cid_V2(uint64_t index_tid, Expr_Array *filter_array, Expr_Array *project_array);
      virtual int64_t is_cid_in_index_table(uint64_t cid, uint64_t tid);
      virtual bool is_expr_can_use_storing_V2(sql::ObSqlExpression c_filter, uint64_t mian_tid, uint64_t &index_tid, Expr_Array * filter_array, Expr_Array *project_array);
      virtual bool is_wherecondition_have_main_cid_V2(Expr_Array *filter_array, uint64_t main_cid);
      virtual bool if_rowkey_in_expr(Expr_Array *filter_array, uint64_t main_tid);
      virtual bool decide_is_use_storing_or_not_V2(Expr_Array *filter_array, Expr_Array *project_array, uint64_t &index_table_id, uint64_t main_tid);
      virtual bool is_can_use_hint_for_storing_V2(Expr_Array *filter_array, Expr_Array *project_array, uint64_t index_table_id);
      virtual bool is_can_use_hint_index_V2(Expr_Array *filter_ayyay, uint64_t index_table_id);
    private:
      DISALLOW_COPY_AND_ASSIGN(ObSecondaryIndexServiceImpl);
    private:
      ObSchemaManagerV2* schema_manager_; // index service need schema manager to get some information about index table
    };
  }
}






#endif /* COMMON_OB_SECONDARY_INDEX_SERVICE_IMPL_H_ */
