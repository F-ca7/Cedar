#ifndef OB_INDEX_TRIGGER_H
#define OB_INDEX_TRIGGER_H

#endif // OB_INDEX_TRIGGER_H

#include "ob_single_child_phy_operator.h"
#include "ob_sql_expression.h"
#include "common/ob_row_store.h"
#include "ob_project.h"
#include "ob_insert_dbsem_filter.h"
#include "updateserver/ob_sessionctx_factory.h"
#include "updateserver/ob_ups_table_mgr.h"
#include "updateserver/ob_ups_utils.h"

namespace oceanbase
{
    namespace sql
    {
        typedef common::ObSEArray<ObSqlExpression, OB_PREALLOCATED_NUM, common::ModulePageAllocator, ObArrayExpressionCallBack<ObSqlExpression> > expr_array;
        typedef common::ObSEArray<ObObj, OB_PREALLOCATED_NUM, common::ModulePageAllocator, ObArrayExpressionCallBack<ObObj> > cast_obj_array;
        class ObIndexTrigger : public ObSingleChildPhyOperator
        {
        public:
            ObIndexTrigger();
            ~ObIndexTrigger();
            int open();
            int close();
            virtual int get_next_row(const ObRow *&row);
            int get_row_desc(const ObRowDesc *&row_desc) const;
            virtual void reset();
            virtual void reuse();
            virtual int64_t to_string(char* buf, const int64_t buf_len) const;
            virtual ObPhyOperatorType get_type() const;

            void set_sql_type(int type);
            void get_sql_type(int& type);
            void set_data_tid(int64_t table_id);
            //void set_data_row_desc(common::ObRowDesc &data_row_desc);
            //void get_data_row_desc(common::ObRowDesc *&data_row_desc);
            void set_pre_data_row_desc(common::ObRowDesc &data_row_desc);
            void get_pre_data_row_desc(common::ObRowDesc *&data_row_desc);
            void set_post_data_row_desc(common::ObRowDesc &data_row_desc);
            void get_post_data_row_desc(common::ObRowDesc *&data_row_desc);
            //void set_index_num(int64_t num);
            void set_need_modify_index_num(int64_t num);
            int cons_data_row_store();
            void add_pre_data_row(common::ObRow pre_data_row);
            void add_post_data_row(common::ObRow post_data_row);
            void get_pre_data_row_store(common::ObRowStore *&pre_data_row_store);
            void get_post_data_row_store(common::ObRowStore *&post_data_row_store);
            int add_row_desc_del(int64_t idx, common::ObRowDesc row_desc);
            int add_row_desc_ins(int64_t idx, common::ObRowDesc row_desc);
            int get_row_desc_del(int64_t idx, common::ObRowDesc &row_desc);
            int get_row_desc_ins(int64_t idx, common::ObRowDesc &row_desc);
            void set_cond_flag(bool flag);
            //for update
            //int add_set_index_column(const ObSqlExpression& expr);
            //int add_set_cast_obj(const ObObj &obj);
            //void set_replace_values_id(uint64_t replace_values_id);

            void reset_iterator();

            int handle_trigger(const ObSchemaManagerV2 *schema_mgr, updateserver::ObIUpsTableMgr *host, updateserver::RWSessionCtx &session_ctx);
            int handle_one_index_table(int64_t index_idx, const ObSchemaManagerV2 *schema_mgr, updateserver::ObIUpsTableMgr *host, updateserver::RWSessionCtx &session_ctx);

            DECLARE_PHY_OPERATOR_ASSIGN;
            NEED_SERIALIZE_AND_DESERIALIZE;
         private:
            int sql_type_;
            int64_t data_tid_;
            //common::ObRow data_row_;
            //common::ObRowDesc data_row_desc_;
            common::ObRowDesc pre_data_row_desc_;
            common::ObRowDesc post_data_row_desc_;
            //int64_t index_num;
            int64_t need_modify_index_num_;
            common::ObRowStore pre_data_row_store_;
            common::ObRowStore post_data_row_store_;
            common::ObRowDesc index_row_desc_del_[OB_MAX_INDEX_NUMS];
            common::ObRowDesc index_row_desc_ins_[OB_MAX_INDEX_NUMS];
            bool cond_flag_;
            //for update
            //expr_array set_index_column_;
            //cast_obj_array set_cast_obj_;
            //ModuleArena arena_;
            bool delete_flag_for_update_;
            bool delete_flag_for_replace_;
            //uint64_t replace_values_id_;
            //ObExprValues replace_values_;
        };
    }
}
