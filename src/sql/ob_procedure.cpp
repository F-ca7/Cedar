#include "ob_procedure.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

ObProcedure::ObProcedure()
{
	child_num_ = 0;
}

ObProcedure::~ObProcedure()
{
}
int ObProcedure::set_proc_name(ObString &proc_name)
{
	proc_name_=proc_name;
	return OB_SUCCESS;
}
int ObProcedure::set_params(ObArray<ObParamDef*> &params)
{
	params_=params;
	return OB_SUCCESS;
}

int ObProcedure::add_param(ObParamDef &proc_param)
{
	return params_.push_back(&proc_param);
}
int ObProcedure::add_declare_var(ObString &var)
{
	int ret=OB_SUCCESS;
	for (int64_t i = 0;i < declare_variable_.count();i++)//判断变量是否重复定义了
	{
		TBSYS_LOG(INFO, "declare %ld %.*s compare with %.*s  ret=%d",i,declare_variable_.at(i).length(),declare_variable_.at(i).ptr(),var.length(),var.ptr(),declare_variable_.at(i).compare(var));
		if(declare_variable_.at(i).compare(var)==0)
		{
			TBSYS_LOG(WARN, "same variable");
			ret=OB_ENTRY_EXIST;
			break;
		}
	}
	if(ret==OB_SUCCESS)
	{
		declare_variable_.push_back(var);
	}
	return ret;
}


ObString& ObProcedure::get_declare_var(int64_t index)
{
	return declare_variable_.at(index);
}
ObArray<ObParamDef*>& ObProcedure::get_params()
{
	return params_;
}
ObParamDef* ObProcedure::get_param(int64_t index)
{
	return params_.at(index);
}
int64_t ObProcedure::get_param_num()
{
	return params_.count();
}
int64_t ObProcedure::get_declare_var_num()
{
	return declare_variable_.count();
}
void ObProcedure::reset()
{
	child_num_ = 0;
	ObMultiChildrenPhyOperator::reset();
}
void ObProcedure::reuse()
{
	child_num_ = 0;
	ObMultiChildrenPhyOperator::reset();
}
int ObProcedure::close()
{
	return ObMultiChildrenPhyOperator::close();
}

int ObProcedure::get_row_desc(const common::ObRowDesc *&row_desc) const
{
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(get_child(0) == NULL))
	{
		ret = OB_NOT_INIT;
		TBSYS_LOG(ERROR, "children_ops_[0] is NULL");
	}
	else
	{
		ret = get_child(0)->get_row_desc(row_desc);
	}
	return ret;
}
int ObProcedure::get_next_row(const common::ObRow *&row)
{
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(ObMultiChildrenPhyOperator::get_child_num() <= 0))
	{
		ret = OB_NOT_INIT;
		TBSYS_LOG(WARN, "ObProcedureCreate has no child, ret=%d", ret);
	}
	else
	{
		/*返回第一个操作符的next_row*/
		ret = get_child(0)->get_next_row(row);
	}
	return ret;
}
int ObProcedure::set_child(int32_t child_idx, ObPhyOperator &child_operator)
{
	  int ret = OB_SUCCESS;
	  if ((ret = ObMultiChildrenPhyOperator::set_child(child_idx, child_operator)) == OB_SUCCESS)
	  {
	    if (ObMultiChildrenPhyOperator::get_child_num() > child_num_)
	    {
	      child_num_++;
	    }
	  }
	  return ret;
}
int32_t ObProcedure::get_child_num() const
{
      int child_num = child_num_;
      if (child_num_ < ObMultiChildrenPhyOperator::get_child_num())
      {
        child_num = ObMultiChildrenPhyOperator::get_child_num();
      }
      return child_num;
}
int ObProcedure::open()
{
	TBSYS_LOG(INFO, "zz:ObProcedure::open");
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(ObMultiChildrenPhyOperator::get_child_num() <= 0))
	{
	    ret = OB_ITEM_NOT_SETTED;
	    TBSYS_LOG(WARN, "ObProcedure has 0 child operator,this is a empty procedure");
	    TBSYS_LOG(USER_ERROR, "ObProcedure has 0 child operator,this is a empty procedure");
	}
	else
	{
		TBSYS_LOG(INFO, "zz:ObProcedure op child_num =%d",ObMultiChildrenPhyOperator::get_child_num());
		for (int32_t i = 0; ret == OB_SUCCESS && i < ObMultiChildrenPhyOperator::get_child_num(); i++)
		{
	      TBSYS_LOG(INFO, "zz:op index=%d",i);
		  ObPhyOperator *op = NULL;
		  if ((op = get_child(i)) == NULL)
		  {
			ret = OB_ERR_GEN_PLAN;
			TBSYS_LOG(WARN, "Can not get %dth child of ObProcedure ret=%d", i, ret);
			break;
		  }
		  else if ((ret = op->open()) != OB_SUCCESS)
		  {

			TBSYS_LOG(ERROR, "Open the %dth child of ObProcedure failed, ret=%d", i, ret);
			break;
		  }
		  else
		  {
			  TBSYS_LOG(INFO, "zz:ObProcedure::open success! i=%d",i);
		  }
		}
		TBSYS_LOG(INFO, "zz:foreach over");

	}

	return ret;
}

namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedure, PHY_PROCEDURE);
  }
}

int64_t ObProcedure::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "procedure (child_num_=%d)\n", child_num_);
  int64_t pos_temp=0;
  for (int32_t i = 0; i < ObMultiChildrenPhyOperator::get_child_num(); i++)
	{
	  ObPhyOperator *op = NULL;
	  if ((op = get_child(i)) == NULL)
	  {
		  break;
	  }
	  else
	  {
		  pos_temp=op->to_string(buf+pos, buf_len-pos);
		  pos+=pos_temp;
	  }
	}
  return pos;
}
