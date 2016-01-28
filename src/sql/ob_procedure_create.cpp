/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure_create.cpp
* @brief this class  present a procedure "create" physical plan in oceanbase
*
* Created by zhujun: support procedure
*
* @version __DaSE_VERSION
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#include "ob_procedure_create.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

ObProcedureCreate::ObProcedureCreate()
{
	insert_op_=NULL;
}

ObProcedureCreate::~ObProcedureCreate()
{
}
int ObProcedureCreate::set_proc_name(ObString &proc_name)
{
	proc_name_=proc_name;
	return OB_SUCCESS;
}
int ObProcedureCreate::set_insert_op(ObPhyOperator &insert_op)
{
	insert_op_=&insert_op;
	return OB_SUCCESS;
}

void ObProcedureCreate::reset()
{

}
void ObProcedureCreate::reuse()
{

}
int ObProcedureCreate::close()
{
	return OB_SUCCESS;
}

int ObProcedureCreate::get_row_desc(const common::ObRowDesc *&row_desc) const
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
int ObProcedureCreate::get_next_row(const common::ObRow *&row)
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

int ObProcedureCreate::open()
{
    TBSYS_LOG(INFO, "ObProcedureCreate open()");
	int ret = OB_SUCCESS;
	if (NULL == child_op_)
	{
		ret = OB_ERR_GEN_PLAN;
		TBSYS_LOG(ERROR, "child_op_ is NULL");
	}
	else
	{
		//ret=child_op_->open();
		/*
		ObPhyOperator* old_main_query = my_phy_plan_->get_main_query();
		my_phy_plan_->set_main_query(child_op_);
		my_phy_plan_->remove_phy_query(old_main_query);
		TBSYS_LOG(INFO, "prepare main query=%p", child_op_);
		ObResultSet *result_set = my_phy_plan_->get_result_set();
		ObSQLSessionInfo *session = result_set->get_session();
		if ((ret = session->store_plan(proc_name_, *result_set)) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN, "Store current result failed.");
		}
		else
		{
            TBSYS_LOG(INFO, "ObProcedureCreate store proc_name_=%s plan  success!",proc_name_.ptr());
		}
		*/
    if((ret=insert_op_->open())!=OB_SUCCESS)//insert into __all_procedure
    {
      ret=-17;
      ObResultSet *result_set = my_phy_plan_->get_result_set();
      result_set->set_message("procedure exist!");
      TBSYS_LOG(USER_ERROR, "procedure exist!");
    }
//		TBSYS_LOG(INFO, "procedure plan is %s",buff);
	}
	return ret;
}

namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedureCreate, PHY_PROCEDURE_CREATE);
  }
}

int64_t ObProcedureCreate::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "procedure create(child_num_=%s)\n", proc_name_.ptr());
  int64_t pos_temp=0;
  pos_temp=child_op_->to_string(buf+pos, buf_len-pos);
  pos+=pos_temp;

  pos_temp=insert_op_->to_string(buf+pos,buf_len-pos);
  pos+=pos_temp;
  return pos;
}
