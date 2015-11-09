#include "ob_procedure.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "ob_ups_executor.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

/* ========================================================
 *      SpInst Definition
 * =======================================================*/
DEFINE_SERIALIZE(SpInst)
{
  UNUSED(buf);
  UNUSED(pos);
  UNUSED(buf_len);
  TBSYS_LOG(WARN, "Could not serialize inst[%d]", type_);
  return OB_ERROR;
}

DEFINE_DESERIALIZE(SpInst)
{
  UNUSED(buf);
  UNUSED(data_len);
  UNUSED(pos);
  TBSYS_LOG(WARN, "Could not deserialize inst[%d]", type_);
  return OB_ERROR;
}


/* ==============================================
 *    SpExprInst Definition
 * ===============================================*/
int SpExprInst::set_var_val(ObVarAssignVal &var)
{
  var_val_ = var;
  ws_.addVariable(var.variable_name_);
  return OB_SUCCESS;
}

const VariableSet &SpExprInst::get_read_variable_set() const
{
  return var_val_.rs_;
}

const VariableSet &SpExprInst::get_write_variable_set() const
{
  return ws_;
}

int SpExprInst::exec()
{
  int ret = OB_SUCCESS;
  TBSYS_LOG(TRACE, "sp expr inst exec()");
  common::ObRow input_row; //fake paramters
  const ObObj *val = NULL;
  if((ret=var_val_.var_value_->calc(input_row, val))!=OB_SUCCESS)
  {
    TBSYS_LOG(WARN, "sp expr compute failed");
  }
  //update the varialbe here
  else if ( OB_SUCCESS != (ret = proc_->write_variable(var_val_.variable_name_, *val)) )
  {

  }
  return ret;
}

/* ===============================================
 *    SpRdBaseInst Definition
 * ==============================================*/
const VariableSet& SpRdBaseInst::get_read_variable_set() const
{
  return rs_;
}

const VariableSet& SpRdBaseInst::get_write_variable_set() const
{
  OB_ASSERT(ws_.var_set_.count() == 0);
  return ws_;
}


void SpRdBaseInst::add_read_var(ObArray<const ObRawExpr*> &var_list)
{
  for(int64_t i = 0; i < var_list.count(); ++i)
  {
    ObItemType raw_type = var_list.at(i)->get_expr_type();
    if( T_SYSTEM_VARIABLE == raw_type || T_TEMP_VARIABLE == raw_type )
    {
      ObString var_name;
      ((const ObConstRawExpr *)var_list.at(i))->get_value().get_varchar(var_name);
      rs_.addVariable(var_name);
//      if( iskey ) rd_base_inst.add_read_var(var_name); //rowkey would be used in read baseline
//      rw_delta_inst.add_read_var(var_name);  //other values are used in update delta
    }
//    add_read_var(var_list.at(i));
  }
}

int SpRdBaseInst::set_rdbase_op(ObPhyOperator *op)
{
  int ret = OB_SUCCESS;
  OB_ASSERT(op->get_type() == PHY_VALUES);
  op_ = op;
  return ret;
}

int SpRdBaseInst::exec()
{
  int ret = OB_SUCCESS;
  //table rpc scan is in the ups_executor's inner plan that is different from the current plan
  op_->get_phy_plan()->set_curr_frozen_version(proc_->my_phy_plan_->get_curr_frozen_version());
  op_->get_phy_plan()->set_result_set(proc_->my_phy_plan_->get_result_set());

  ret = op_->open();
  return ret;
}


/* ========================================================
 *      SpRwDeltaInst Definition
 * =======================================================*/
const VariableSet& SpRwDeltaInst::get_read_variable_set() const
{
  return rs_;
}

const VariableSet& SpRwDeltaInst::get_write_variable_set() const
{
//  OB_ASSERT(ws_.var_set_.count() == 0); //since select..into inst inherit this, such assert is not valid any more
  return ws_;
}

void SpRwDeltaInst::add_read_var(ObArray<const ObRawExpr*> &var_list)
{
  for(int64_t i = 0; i < var_list.count(); ++i)
  {
    ObItemType raw_type = var_list.at(i)->get_expr_type();
    if( T_SYSTEM_VARIABLE == raw_type || T_TEMP_VARIABLE == raw_type )
    {
      ObString var_name;
      ((const ObConstRawExpr *)var_list.at(i))->get_value().get_varchar(var_name);
      rs_.addVariable(var_name);
    }
  }
}

int SpRwDeltaInst::set_rwdelta_op(ObPhyOperator *op)
{
  int ret = OB_SUCCESS;
  OB_ASSERT(op->get_type() == PHY_UPS_EXECUTOR);
  op_ = op;
  return ret;
}

int SpRwDeltaInst::exec()
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = op_->open()) )
  {
    TBSYS_LOG(WARN, "execute rw_delta_inst fail");
  }

  return ret;
}

/* ========================================================
 *      SpRwCompInst Definition
 * =======================================================*/
int SpRwCompInst::exec()
{
  int ret = OB_SUCCESS;
  const ObRow *row;
  if( OB_SUCCESS != (ret = op_->open()) )
  {
    TBSYS_LOG(WARN, "open rw_com_inst fail");
  }
  else if( OB_SUCCESS != (ret = op_->get_next_row(row))) //properly we need to check only one row is got
  {
    TBSYS_LOG(WARN, "get new_row fail");
  }
  else
  {
    for(int64_t var_name_it = 0; var_name_it < var_list_.count(); ++var_name_it)
    {
      const ObString &var_name = var_list_.at(var_name_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret=row->raw_get_cell(var_name_it, cell)))//取出一列
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_name_it);
      }
      else if(OB_SUCCESS !=(proc_->write_variable(var_name, *cell)))
      {
        TBSYS_LOG(WARN, "write into variables fail");
      }
    }
  }
  return ret;
}

/* ========================================================
 *      SpRwDeltaIntoInst Definition
 * =======================================================*/
int SpRwDeltaIntoVarInst::exec()
{
  int ret = OB_SUCCESS;
  const ObRow *row;

  ObRowDesc fake_desc;
  fake_desc.reset();
  //we expect the select list has the same length with the variable list
  //ups use a fake desc to deserialize the result from the ups
  for(int64_t i = 0; ret == OB_SUCCESS && i < var_list_.count(); ++i)
  {
    if ((ret = fake_desc.add_column_desc(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID + i)) != OB_SUCCESS)
    {
      TBSYS_LOG(WARN, "Generate row descriptor of RwDeltaIntoVar failed, err=%d", ret);
      break;
    }
  }
  if( (OB_SUCCESS == ret) && OB_SUCCESS != (ret = op_->open()) )
  {
    TBSYS_LOG(WARN, "open rw_delta_into_inst fail");
  }
  else if( OB_SUCCESS != (ret = (((ObUpsExecutor *)op_)->get_next_row_for_sp(row, fake_desc)))) //properly we need to check only one row is got
  {
    TBSYS_LOG(WARN, "get next_row fail, %d", ret);
  }
  else
  {
    for(int64_t var_name_it = 0; var_name_it < var_list_.count(); ++var_name_it)
    {
      const ObString &var_name = var_list_.at(var_name_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret=row->raw_get_cell(var_name_it, cell)))//取出一列
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_name_it);
      }
      else if(OB_SUCCESS !=(proc_->write_variable(var_name, *cell)))
      {
        TBSYS_LOG(WARN, "write into variables fail");
      }
    }
  }
  return ret;
}

const VariableSet& SpRwCompInst::get_read_variable_set() const
{
  return rs_;
}

const VariableSet& SpRwCompInst::get_write_variable_set() const
{
  return ws_;
}

int SpRwCompInst::set_rwcomp_op(ObPhyOperator *op)
{
  op_ = op;
  return OB_SUCCESS;
}

/* ========================================================
 *      SpBlockInsts Definition
 * =======================================================*/
/**
 * @brief SpBlockInsts::exec
 * important protocal, a group of instructions would be sent to ups
 * @return
 */
int SpBlockInsts::exec()
{
  int ret = OB_SUCCESS;
  /**
    * sub_procedure_ should be serializable and deserializable
    * local_result_ should contains variables calculated by ups
    */
//  proc_->rpc_->procedure_execute(remain_us, *sub_procedure_, local_result);
  return ret;
}

DEFINE_SERIALIZE(SpBlockInsts)
{
  int ret = OB_SUCCESS;
  int64_t count = inst_list_.count();

  if( OB_SUCCESS != (ret = serialization::encode_i64(buf, buf_len, pos, count)) )
  {
    TBSYS_LOG(WARN, "serialize inst count fail");
  }

  //serialize instructions
  for(int64_t i = 0; i < count && OB_SUCCESS == ret; ++i)
  {
    SpInst *inst = inst_list_.at(i);
    SpInstType type = inst->get_type();
    switch(type)
    {
    case SP_E_INST:
    case SP_D_INST:
    case SP_DE_INST:
      ret = serialization::encode_i32(buf, buf_len, pos, type);
      inst->serialize(buf, buf_len,pos);
      break;
    default:
      TBSYS_LOG(WARN, "Unsupport serialize inst[%d] to UPS", type);
      break;
    }
  }

  //serialize read variables
//  rs_.serialize(buf, buf_len, pos);
  int64_t rd_var_count = rs_.var_set_.count();
  if( OB_SUCCESS != (ret = serialization::encode_i64(buf, buf_len, pos, rd_var_count)))
  {
    TBSYS_LOG(WARN, "serialize read variables count fail");
  }
  ObSQLSessionInfo *session_info = proc_->get_phy_plan()->get_result_set()->get_session();
  for(int64_t rd_var_itr = 0; rd_var_itr < rs_.var_set_.count() && OB_SUCCESS == ret; ++rd_var_itr)
  {
    const ObString &var_name = rs_.var_set_.at(rd_var_itr);
    const ObObj* obj = session_info->get_variable_value(var_name);
    if( NULL == obj )
    {
      TBSYS_LOG(WARN, "variable[%.*s] does not found in session", var_name.length(), var_name.ptr());
    }
    else if( OB_SUCCESS != (ret = var_name.serialize(buf, buf_len, pos)) )
    {
      TBSYS_LOG(WARN, "variable name serialization fail");
    }
    else if( OB_SUCCESS != (ret = obj->serialize(buf, buf_len, pos)) )
    {
      TBSYS_LOG(WARN, "variable value serialization fail");
    }
  }
  return ret;
}

DEFINE_DESERIALIZE(SpBlockInsts)
{
  int ret = OB_SUCCESS;
  int64_t count = 0;

  if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &count)) )
  {
    TBSYS_LOG(WARN, "deserialize inst count fail");
  }
  for(int64_t i = 0; i < count && OB_SUCCESS == ret; ++i)
  {
    SpInstType type;
    SpInst *inst = NULL;
    int32_t type_int_value = 0;
    serialization::decode_i32(buf, data_len, pos, &type_int_value);
    type = static_cast<SpInstType>(type_int_value);
    switch (type) {
    case SP_E_INST:
      inst = proc_->create_inst<SpExprInst>();
      inst->deserialize(buf, data_len, pos);
      break;
    case SP_D_INST:
      inst = proc_->create_inst<SpRwDeltaInst>();
      inst->deserialize(buf, data_len, pos);
      break;
    case SP_DE_INST:
      inst = proc_->create_inst<SpRwDeltaIntoVarInst>();
      inst->deserialize(buf, data_len, pos);
      break;
    default:
      TBSYS_LOG(WARN, "Unsupport deserialize inst[%d]", type);
      ret = OB_ERROR;
      break;
    }
    if( OB_SUCCESS == ret )
      add_inst(inst);
    else
      break;
  }

  //how to keep the variable set on ups remains a problem,
  //it should be consider with the expr execution
  int64_t rd_var_count = 0;
  serialization::decode_i64(buf, data_len, pos, &rd_var_count);
  for(int64_t i = 0; i < rd_var_count && OB_SUCCESS == ret; ++i)
  {

  }
  return ret;
}


/*=================================================
 *           ObProcedure Definition
===================================================*/

ObProcedure::ObProcedure()
{
//  child_num_ = 0;
}

ObProcedure::~ObProcedure()
{
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    inst_list_.at(i)->~SpInst();
  }
  arena_.free();
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
    TBSYS_LOG(TRACE, "declare %ld %.*s compare with %.*s  ret=%d",i,declare_variable_.at(i).length(),declare_variable_.at(i).ptr(),var.length(),var.ptr(),declare_variable_.at(i).compare(var));
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
//  child_num_ = 0;
//  ObMultiChildrenPhyOperator::reset();
}
void ObProcedure::reuse()
{
//  child_num_ = 0;
//  ObMultiChildrenPhyOperator::reset();
}
int ObProcedure::close()
{
//  return ObMultiChildrenPhyOperator::close();
  return OB_SUCCESS;
}

int ObProcedure::get_row_desc(const common::ObRowDesc *&row_desc) const
{
//  int ret = OB_SUCCESS;
//  if (OB_UNLIKELY(get_child(0) == NULL))
//  {
//    ret = OB_NOT_INIT;
//    TBSYS_LOG(ERROR, "children_ops_[0] is NULL");
//  }
//  else
//  {
//    ret = get_child(0)->get_row_desc(row_desc);
//  }
  //does not return desc now
  UNUSED(row_desc);
  return OB_SUCCESS;
//  return ret;
}
int ObProcedure::get_next_row(const common::ObRow *&row)
{
  int ret = OB_SUCCESS;
  UNUSED(row);
//  if (OB_UNLIKELY(ObMultiChildrenPhyOperator::get_child_num() <= 0))
//  {
//    ret = OB_NOT_INIT;
//    TBSYS_LOG(WARN, "ObProcedureCreate has no child, ret=%d", ret);
//  }
//  else
//  {
//    /*返回第一个操作符的next_row*/
//    ret = get_child(0)->get_next_row(row);
//  }
  return ret;
}

/**
  create declared variables for the procedure
 * @brief ObProcedure::create_variables
 * @return
 */
int ObProcedure::create_variables()
{
  int ret = OB_SUCCESS;
  if( defs_.count() > 0 )
  {
    ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();
    for (int64_t i = 0; i < defs_.count() && OB_SUCCESS == ret; ++i)
    {
      ObVariableDef &var= defs_.at(i);

      if(var.is_default_)
      {
        if((ret=session->replace_variable(var.variable_name_,var.default_value_))!=OB_SUCCESS)
        {
          TBSYS_LOG(WARN, "replace_variable default_value_  ERROR");
        }
        else
        {
          TBSYS_LOG(TRACE, "declare %.*s and set default_value",
                    var.variable_name_.length(),var.variable_name_.ptr());
        }
      }
      else
      {
        ObObj new_value_obj;
        new_value_obj.set_null();
        new_value_obj.set_type(var.variable_type_);
        if((ret=session->replace_variable(var.variable_name_,new_value_obj))!=OB_SUCCESS)
        {
          TBSYS_LOG(WARN, "replace_variable default_value_  ERROR");
        }
        else
        {
          TBSYS_LOG(TRACE, "declare %.*s and set  default_value null",
                    var.variable_name_.length(),var.variable_name_.ptr());
        }
      }
    }
  }
  return ret;
}

int ObProcedure::open()
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = create_variables()))
  {}
  else
  {
    pc_ = 0;
    for(; pc_ < inst_list_.count() && OB_SUCCESS == ret; ++pc_)
    {
      ret = inst_list_.at(pc_)->exec();

      debug_status();
    }
  }
  return ret;
}

int ObProcedure::write_variable(const ObString &var_name, const ObObj &val)
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  return session->replace_variable(var_name, val);
}

int ObProcedure::read_variable(const ObString &var_name, ObObj &val) const
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  return session->get_variable_value(var_name, val);
}

int ObProcedure::read_variable(const ObString &var_name, const ObObj *&val) const
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  val = session->get_variable_value(var_name);

  return val == NULL ? OB_ENTRY_NOT_EXIST : OB_SUCCESS;
}

int ObProcedure::debug_status() const
{
  int ret = OB_SUCCESS;
  const SpInst *inst = inst_list_.at(pc_);

  if( inst != NULL )
  {
    const VariableSet &rs = inst->get_read_variable_set();
    const VariableSet &ws = inst->get_write_variable_set();
    char debug_buf[1024];
    int64_t buf_len = 1024, pos = 0;

    databuff_printf(debug_buf, buf_len, pos, "inst %ld\n", pc_);

    for(int64_t i = 0; i < rs.var_set_.count(); ++i)
    {
      ObObj val;
      const ObString &var_name = rs.var_set_.at(i);
      if( OB_SUCCESS == read_variable(var_name, val))
      {
        databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] = %s\n",
                        var_name.length(), var_name.ptr(), to_cstring(val));
      }
      else
      {
         databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] not found.\n",
                         var_name.length(), var_name.ptr());
      }
    }

    for(int64_t i = 0; i < ws.var_set_.count(); ++i)
    {
      ObObj val;
      const ObString &var_name = ws.var_set_.at(i);
      if( OB_SUCCESS == read_variable(var_name, val))
      {
         databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] = %s\n",
                         var_name.length(), var_name.ptr(), to_cstring(val));
      }
      else
      {
         databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] not found.\n",
                         var_name.length(), var_name.ptr());
      }
    }
    TBSYS_LOG(INFO, "%s", debug_buf);
  }
  return ret;
}

namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedure, PHY_PROCEDURE);
  }
}


int64_t SpExprInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [E], ws [%.*s], rs [", var_val_.variable_name_.length(), var_val_.variable_name_.ptr());
  const ObArray<ObString> &rs = var_val_.rs_.var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, "\n");
  return pos;
}

int64_t SpRdBaseInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [B], ws [], rs [");
  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}

int64_t SpRwDeltaInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [D], ws [], rs [");
  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}


int64_t SpRwCompInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [A], ws [");

  const ObArray<ObString> &ws = get_write_variable_set().var_set_;
  for(int64_t i = 0; i < ws.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", ws.at(i).length(), ws.at(i).ptr(), ((i == ws.count()-1) ? ']' : ','));
  }
  if ( ws.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");

  databuff_printf(buf, buf_len, pos, ", rs [");

  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}

int64_t SpRwDeltaIntoVarInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [D], ws [");

  const ObArray<ObString> &ws = get_write_variable_set().var_set_;
  for(int64_t i = 0; i < ws.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", ws.at(i).length(), ws.at(i).ptr(), ((i == ws.count()-1) ? ']' : ','));
  }
  if ( ws.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");

  databuff_printf(buf, buf_len, pos, ", rs [");

  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}

int64_t SpBlockInsts::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type[Block]\n");
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "\t sub-inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
  return pos;
}

int64_t ObProcedure::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "Procedure %.*s\n", proc_name_.length(), proc_name_.ptr());
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
//  for(int64_t i = 0; i < inst_seq_.count(); ++i)
//  {
//    SpPtr ptr = inst_seq_.at(i);
//    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
//    switch(ptr.type_)
//    {
//    case SP_E_INST:
//      pos += inst_e_.at(ptr.idx_).to_string(buf + pos, buf_len - pos);
//      break;
//    case SP_A_INST:
//      break;
//    case SP_D_INST:
//      pos += inst_d_.at(ptr.idx_).to_string(buf + pos, buf_len - pos);
//      break;
//    case SP_B_INST:
//      pos += inst_b_.at(ptr.idx_).to_string(buf + pos, buf_len - pos);
//      break;
//    case SP_C_INST:
//      break;
//    default:
//      break;
//    }
//  }
  return pos;
}
