#ifndef OCEANBASE_SQL_OB_PROCEDURE_CREATE_H
#define OCEANBASE_SQL_OB_PROCEDURE_CREATE_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"

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

			int set_insert_op(ObPhyOperator &insert_op);
		private:
			//disallow copy
			ObProcedureCreate(const ObProcedureCreate &other);
			ObProcedureCreate& operator=(const ObProcedureCreate &other);
			//function members

		private:
			ObString proc_name_;

			ObPhyOperator *insert_op_;

		};



	}
}

#endif



