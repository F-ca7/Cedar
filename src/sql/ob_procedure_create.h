#ifndef OCEANBASE_SQL_OB_PROCEDURE_CREATE_H
#define OCEANBASE_SQL_OB_PROCEDURE_CREATE_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"

//add by wangdonghui 20160119
#include "sql/ob_sql_context.h"
//add :e

namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObProcedureCreate : public ObSingleChildPhyOperator
		{
		public:
			ObProcedureCreate();
			virtual ~ObProcedureCreate();
            //add by wangdonghui 20160120 init :b
            void set_sql_context(const ObSqlContext &context);
            //add :e
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_CREATE;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);

			int set_proc_name(ObString &proc_name);/*设置存储过程名*/
            //add by wangdonghui 20160121 :b
            int set_proc_source_code(ObString &source_code);
            //add :e

            //delete by wangdonghui 20160128 :b
            //int set_insert_op(ObPhyOperator &insert_op);
            //delete :e

		private:
			//disallow copy
			ObProcedureCreate(const ObProcedureCreate &other);
			ObProcedureCreate& operator=(const ObProcedureCreate &other);
			//function members

		private:
			ObString proc_name_;
            //add by wangdonghui :b
            ObString proc_source_code_;
            //add :e

            //delete by wangdonghui we dont need this operation :b
            //ObPhyOperator *insert_op_;
            //delete :e

        //add by wangdonghui 20160119 data members :b
        private:
            bool if_not_exists_;
            ObSqlContext local_context_;
		};
        //add :e
	}
}

#endif



