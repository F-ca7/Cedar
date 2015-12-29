#include "ob_procedure_elseif.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

ObProcedureElseIf::ObProcedureElseIf():child_num_(0)
{
}

ObProcedureElseIf::~ObProcedureElseIf()
{
}

//add by zz 2014-12-3
int ObProcedureElseIf::set_expr(ObSqlExpression& expr)
{
	expr_=expr;
	expr_.set_owner_op(this);
	return OB_SUCCESS;
}

void ObProcedureElseIf::reset()
{
	child_num_=0;
	ObMultiChildrenPhyOperator::reset();
}
void ObProcedureElseIf::reuse()
{
	child_num_=0;
	ObMultiChildrenPhyOperator::reset();
}
int ObProcedureElseIf::close()
{
	return ObMultiChildrenPhyOperator::close();
}

int ObProcedureElseIf::set_child(int32_t child_idx, ObPhyOperator &child_operator)
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
int32_t ObProcedureElseIf::get_child_num() const
{
      int child_num = child_num_;
      if (child_num_ < ObMultiChildrenPhyOperator::get_child_num())
      {
        child_num = ObMultiChildrenPhyOperator::get_child_num();
      }
      return child_num;
}

int ObProcedureElseIf::get_row_desc(const common::ObRowDesc *&row_desc) const
{
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(get_child(0) == NULL))
	{
		ret = OB_NOT_INIT;
		TBSYS_LOG(WARN, "children_ops_[0] is NULL");
	}
	else
	{
		ret = get_child(0)->get_row_desc(row_desc);
	}
	return ret;
}
int ObProcedureElseIf::get_next_row(const common::ObRow *&row)
{
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(ObMultiChildrenPhyOperator::get_child_num() <= 0))
	{
		ret = OB_NOT_INIT;
		TBSYS_LOG(WARN, "zz:ObProcedureElseIf has no child, ret=%d", ret);
	}
	else
	{
		ret = get_child(0)->get_next_row(row);
	}
	return ret;
}


int ObProcedureElseIf::open()
{
	TBSYS_LOG(INFO, "zz:ObProcedureElseIf::open()");
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(ObMultiChildrenPhyOperator::get_child_num() <= 0))
	{
	    ret = OB_NOT_INIT;
	    TBSYS_LOG(ERROR, "zz:ObProcedureElseIf has no child operator, ret=%d", ret);
	}
	else
	{
		common::ObRow tmp_row;
		const ObObj *result = NULL;
		if((ret=expr_.calc(tmp_row, result))!=OB_SUCCESS)
		{
			TBSYS_LOG(ERROR, "zz:ObProcedureElseIf expr compute failed");
		}
		else if(result->is_true())
		{
			TBSYS_LOG(INFO, "zz:ObProcedureElseIf expr value is true");
			/*依次打开else if then*/
			for (int32_t i = 0; ret == OB_SUCCESS && i < ObMultiChildrenPhyOperator::get_child_num(); i++)
			{
			  ObPhyOperator *op = NULL;
			  if ((op = get_child(i)) == NULL)
			  {
				ret = OB_ERR_GEN_PLAN;
				TBSYS_LOG(WARN, "Can not get %dth child of ObWhenFilter ret=%d", i, ret);
				break;
			  }
			  else if ((ret = op->open()) != OB_SUCCESS)
			  {
				if (!IS_SQL_ERR(ret))
				{
				  TBSYS_LOG(WARN, "Open the %dth child of ObWhenFilter failed, ret=%d", i, ret);
				}
				break;
			  }
			  else
			  {
				  TBSYS_LOG(INFO, "Open the %dth child of ObWhenFilter success", i);
			  }
			}
		}
		else/*elseif没有执行成功就返会无效的错误值*/
		{
			TBSYS_LOG(INFO, "zz:else if not ok!");
			ret=OB_INVALID_ERROR;
		}
	}

	return ret;
}




namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedureElseIf, PHY_PROCEDURE_ELSEIF);
  }
}

int64_t ObProcedureElseIf::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "ObProcedureElseIf (child_num_=%d)\n", child_num_);
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
