#ifndef OCEANBASE_SQL_OB_CURSOR_FETCH_ABS_INTO_H
#define OCEANBASE_SQL_OB_CURSOR_FETCH_ABS_INTO_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObCursorFetchAbsInto : public ObSingleChildPhyOperator
		{
		public:
			ObCursorFetchAbsInto();
			virtual ~ObCursorFetchAbsInto();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_CURSOR_FETCH_ABS_INTO;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);

			int add_variable(ObString &var);/*添加一个变量*/

		private:
			//disallow copy
			ObCursorFetchAbsInto(const ObCursorFetchAbsInto &other);
			ObCursorFetchAbsInto& operator=(const ObCursorFetchAbsInto &other);
			//function members

		private:
			ObArray<ObString> variables_;/*fetch first into定义变量列表*/

		};



	}
}

#endif



