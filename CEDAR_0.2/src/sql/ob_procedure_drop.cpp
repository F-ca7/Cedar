/**
* Copyright (C) 2013-2016 DaSE .
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_drop.cpp
* @brief this class  present a procedure "drop" physical plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2 
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#include "ob_procedure_drop.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

ObProcedureDrop::ObProcedureDrop()
{
	delete_op_=NULL;
}

ObProcedureDrop::~ObProcedureDrop()
{
}
int ObProcedureDrop::set_proc_name(ObString &proc_name)
{
	proc_name_=proc_name;
	return OB_SUCCESS;
}
int ObProcedureDrop::set_delete_op(ObPhyOperator &delete_op)
{
	delete_op_=&delete_op;
	return OB_SUCCESS;
}

void ObProcedureDrop::set_if_exists(bool flag)
{
	if_exists_=flag;
}
bool ObProcedureDrop::if_exists()
{
	return if_exists_;
}


void ObProcedureDrop::reset()
{

}
void ObProcedureDrop::reuse()
{

}
int ObProcedureDrop::close()
{
	return OB_SUCCESS;
}

int ObProcedureDrop::get_row_desc(const common::ObRowDesc *&row_desc) const
{
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(NULL == child_op_))
	{
		ret = OB_NOT_INIT;
		TBSYS_LOG(ERROR, "child_op_ is NULL");
	}
	else
	{
		ret = child_op_->get_row_desc(row_desc);
	}
	return ret;
}
int ObProcedureDrop::get_next_row(const common::ObRow *&row)
{
	int ret = OB_SUCCESS;
	if (NULL == child_op_)
	{
		ret = OB_ERR_UNEXPECTED;
		TBSYS_LOG(ERROR, "child_op_ is NULL");
	}
	else
	{
	  ret = child_op_->get_next_row(row);
	}
	return ret;
}

int ObProcedureDrop::open()
{
    TBSYS_LOG(INFO, "ObProcedureDrop open()");
	int ret = OB_SUCCESS;
	if (NULL == delete_op_)
	{
		ret = OB_ERR_GEN_PLAN;
		TBSYS_LOG(ERROR, "delete_op_ is NULL");
	}
	else
	{
		ret=delete_op_->open();
        if(!if_exists_)
		{
			ObResultSet *result_set = my_phy_plan_->get_result_set();
			ObSQLSessionInfo *session = result_set->get_session();
			ObObj val;
			int64_t value=0;
			ObString affect=ObString::make_string("affect_row_num");
			if(session->variable_exists(affect))
			{
                if ((ret = session->get_variable_value(affect, val)) != OB_SUCCESS)
				{
					 TBSYS_LOG(WARN, "Get variable %.*s faild. ret=%d", affect.length(), affect.ptr(),ret);
				}
				else if((ret=val.get_int(value))!=OB_SUCCESS)
				{
					TBSYS_LOG(WARN, "val get_int ERROR");
				}
				else
				{
                    if(ret==OB_SUCCESS&&1==value)
					{
						TBSYS_LOG(INFO, "procedure %.*s drop success",proc_name_.length(),proc_name_.ptr());
					}
                    else
					{
						ret=-5019;
						TBSYS_LOG(USER_ERROR, "procedure %.*s doesn't exist",proc_name_.length(),proc_name_.ptr());
					}
				}

			}
			else
			{
				ret=-5019;
				TBSYS_LOG(USER_ERROR, "procedure %.*s doesn't exist",proc_name_.length(),proc_name_.ptr());
			}
		}


	}
	return ret;
}

namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedureDrop, PHY_PROCEDURE_DROP);
  }
}

int64_t ObProcedureDrop::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "procedure delete(procedure name =%.*s)\n", proc_name_.length(),proc_name_.ptr());
  return pos;
}
