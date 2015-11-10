#include "ob_procedure.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "ob_ups_executor.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

/* ========================================================
 *   Serialize & Deserialize methods
 * ========================================================*/
int ObProcedure::serialize_tree(char *buf, int64_t buf_len, int64_t &pos, const ObPhyOperator &root) const
{
  int ret = OB_SUCCESS;

  if (OB_SUCCESS == ret)
  {
    if (OB_SUCCESS != (ret = serialization::encode_vi32(buf, buf_len, pos, root.get_type())))
    {
      TBSYS_LOG(WARN, "fail to encode op type:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = root.serialize(buf, buf_len, pos)))
    {
      TBSYS_LOG(WARN, "fail to serialize root:ret[%d] type=%d op=%s", ret, root.get_type(), to_cstring(root));
    }
    else
    {
      TBSYS_LOG(DEBUG, "serialize operator succ, type=%d", root.get_type());
    }
  }

  for (int64_t i=0;OB_SUCCESS == ret && i<root.get_child_num();i++)
  {
    if (NULL != root.get_child(static_cast<int32_t>(i)) )
    {
      if (OB_SUCCESS != (ret = serialize_tree(buf, buf_len, pos, *(root.get_child(static_cast<int32_t>(i))))))
      {
        TBSYS_LOG(WARN, "fail to serialize tree:ret[%d]", ret);
      }
    }
    else
    {
      ret = OB_ERR_UNEXPECTED;
      TBSYS_LOG(WARN, "this operator should has child:type[%d]", root.get_type());
    }
  }
  return ret;
}

int ObProcedure::deserialize_tree(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator,
                                     ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory, ObPhyOperator *&root)
{
  int ret = OB_SUCCESS;
  int32_t phy_operator_type = 0;
  if (NULL == op_factory)
  {
    ret = OB_NOT_INIT;
    TBSYS_LOG(ERROR, "op_factory == NULL");
  }
  else if (OB_SUCCESS != (ret = serialization::decode_vi32(buf, data_len, pos, &phy_operator_type)))
  {
    TBSYS_LOG(WARN, "fail to decode phy operator type:ret[%d]", ret);
  }

  if (OB_SUCCESS == ret)
  {
    root = op_factory->get_one(static_cast<ObPhyOperatorType>(phy_operator_type), allocator);
    if (NULL == root)
    {
      ret = OB_ALLOCATE_MEMORY_FAILED;
      TBSYS_LOG(WARN, "get operator fail:type[%d]", phy_operator_type);
    }
  }
  if (OB_SUCCESS == ret)
  {
    if (OB_SUCCESS != (ret = root->deserialize(buf, data_len, pos)))
    {
      TBSYS_LOG(WARN, "fail to deserialize operator:ret[%d]", ret);
    }
    else if (OB_SUCCESS != (ret = operators_store.push_back(root)))
    {
      TBSYS_LOG(WARN, "fail to push operator to operators_store:ret[%d]", ret);
    }
  }

  if (OB_SUCCESS == ret)
  {
    if (root->get_type() <= PHY_INVALID || root->get_type() >= PHY_END)
    {
      ret = OB_ERR_UNEXPECTED;
      TBSYS_LOG(WARN, "invalid operator type:[%d]", root->get_type());
    }
  }

  if (OB_SUCCESS == ret)
  {
    for (int32_t i=0; OB_SUCCESS == ret && i<root->get_child_num(); i++)
    {
      ObPhyOperator *child = NULL;
      if (OB_SUCCESS != (ret = deserialize_tree(buf, data_len, pos, allocator, operators_store, op_factory, child)))
      {
        TBSYS_LOG(WARN, "fail to deserialize tree:ret[%d]", ret);
      }
      else if (OB_SUCCESS != (ret = root->set_child(i, *child)))
      {
        TBSYS_LOG(WARN, "fail to set child:ret[%d]", ret);
      }
    }
  }
  return ret;
}

/* ========================================================
 *      SpInst Definition
 * =======================================================*/
int SpInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  UNUSED(buf);
  UNUSED(buf_len);
  UNUSED(pos);
  TBSYS_LOG(WARN, "Could not serialize inst[%d]", type_);
  return OB_ERROR;
}

int SpInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  UNUSED(buf);
  UNUSED(data_len);
  UNUSED(pos);
  UNUSED(allocator);
  UNUSED(operators_store);
  UNUSED(op_factory);
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

int SpExprInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  int ret = OB_SUCCESS;
  if( OB_SUCCESS != (ret = var_val_.variable_name_.serialize(buf, buf_len, pos)) )
  {
    TBSYS_LOG(WARN, "serialize var_name fail, ret=%d", ret);
  }
  else if( OB_SUCCESS != (ret = var_val_.var_value_->serialize(buf, buf_len, pos)) )
  {
    TBSYS_LOG(WARN, "serialize var_value fail, ret=%d", ret);
  }
  return ret;
}


int SpExprInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  UNUSED(allocator);
  UNUSED(operators_store);
  UNUSED(op_factory);
  if( OB_SUCCESS != (ret = var_val_.variable_name_.deserialize(buf, data_len, pos)) )
  {
    TBSYS_LOG(WARN, "deserialize var name fail, ret=%d", ret);
  }
  else
  {
    ObSqlExpression* expr = ObSqlExpression::alloc(); //seems bad design, try to refactor ObVarAssignVal

    if( OB_SUCCESS != (ret = expr->deserialize(buf, data_len, pos)) )
    {
      TBSYS_LOG(WARN, "deserialize expr fail, ret=%d", ret);
    }
    else
    {
      var_val_.var_value_ = expr;
    }
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

//DEFINE_SERIALIZE(SpRwDeltaInst)
//{
//  int ret = OB_SUCCESS;
//  UNUSED(buf);
//  UNUSED(buf_len);
//  UNUSED(pos);
//  ObUpsExecutor *ups_exec = static_cast<ObUpsExecutor *>(op_);
//  ObPhyOperator *ups_main_query = ups_exec->get_inner_plan()->get_main_query();

//  if( OB_SUCCESS != (ret = serialize_tree(buf, buf_len, pos, *ups_main_query)) )
//  {
//    TBSYS_LOG(WARN, "Serialize ups main query fail: ret=%d", ret);
//  }
//  return ret;
//}

int SpRwDeltaInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  int ret = OB_SUCCESS;
  ObUpsExecutor *ups_exec = static_cast<ObUpsExecutor *>(op_);
  ObPhyOperator *ups_main_query = ups_exec->get_inner_plan()->get_main_query();

  if( OB_SUCCESS != (ret = proc_->serialize_tree(buf, buf_len, pos, *ups_main_query)) )
  {
    TBSYS_LOG(WARN, "Serialize ups main query fail: ret=%d", ret);
  }
  return ret;
}

int SpRwDeltaInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  if( OB_SUCCESS != (ret = proc_->deserialize_tree(buf, data_len, pos, allocator, operators_store, op_factory, op_)) )
  {
    TBSYS_LOG(WARN, "Deserialize rw delta inst query fail: ret=%d", ret);
  }
  return ret;
}


//DEFINE_DESERIALIZE(SpRwDeltaInst)
//{
//  int ret = OB_SUCCESS;
//  UNUSED(buf);
//  UNUSED(data_len);
//  UNUSED(pos);
//  // try to provide alloator, operators_store, op_factory
//  deserialize_tree(buf, data_len, pos, allocator, operators_store, op_factory, op_);
//  return ret;
//}

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


int SpRwDeltaIntoVarInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  int ret = OB_SUCCESS;
  ObUpsExecutor *ups_exec = static_cast<ObUpsExecutor *>(op_);
  ObPhyOperator *ups_main_query = ups_exec->get_inner_plan()->get_main_query();

  if( OB_SUCCESS != (ret = proc_->serialize_tree(buf, buf_len, pos, *ups_main_query)) )
  {
    TBSYS_LOG(WARN, "Serialize ups main query fail: ret=%d", ret);
  }
  else if ( OB_SUCCESS != (ret = serialization::encode_i64(buf, buf_len, pos, var_list_.count())) )
  {
    TBSYS_LOG(WARN, "Serialize var list count fail: ret=%d", ret);
  }
  else
  {
    for(int64_t i = 0; i < var_list_.count(); ++i)
    {
      if( OB_SUCCESS != ( ret = var_list_.at(i).serialize(buf, buf_len, pos)) )
      {
        TBSYS_LOG(WARN, "Serialize var list[%ld] fail, ret=%d", i, ret);
        break;
      }
    }
  }
  return ret;
}

int SpRwDeltaIntoVarInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;

  int64_t var_count = 0;
  if( OB_SUCCESS != (ret = proc_->deserialize_tree(buf, data_len, pos, allocator, operators_store, op_factory, op_)))
  {
    TBSYS_LOG(WARN, "Deserialize main query fail: ret=%d", ret);
  }
  else if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &var_count)))
  {
    TBSYS_LOG(WARN, "Deserialize var count fail: ret=%d", ret);
  }
  else
  {
    var_list_.reserve(var_count);
    for(int64_t i = 0; i < var_count; ++i)
    {
      if( OB_SUCCESS != (ret = var_list_.at(i).deserialize(buf, data_len, pos)) )
      {
        TBSYS_LOG(WARN, "Deserialize var list[%ld] fail, ret=%d", i, ret);
        break;
      }
    }
  }
  return ret;
}

/* ========================================================
 *      SpBlockInsts Definition
 * =======================================================*/

int SpBlockInsts::init_physical_plan(ObPhysicalPlan &exec_plan, ObPhysicalPlan &out_plan)
{
  bool start_new_trans = false;
  ObSQLSessionInfo *session = out_plan.get_result_set()->get_session();

  start_new_trans = (!session->get_autocommit() && !session->get_trans_id().is_valid());
  exec_plan.set_start_trans(start_new_trans);

//  common::ObTransReq &start_trans_req = exec_plan.get_trans_req();
  return set_trans_params(session, exec_plan.get_trans_req());
}

int SpBlockInsts::set_trans_params(ObSQLSessionInfo *session, common::ObTransReq &req)
{
  int ret = OB_SUCCESS;
  // get isolation level etc. from session
  ObObj val;
  ObString isolation_str;
  int64_t tx_timeout_val = 0;
  int64_t tx_idle_timeout = 0;
  if (OB_SUCCESS != (ret = session->get_sys_variable_value(ObString::make_string("tx_isolation"), val)))
  {
    TBSYS_LOG(WARN, "failed to get tx_isolation value, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = val.get_varchar(isolation_str)))
  {
    TBSYS_LOG(WARN, "wrong obj type, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else if (OB_SUCCESS != (ret = req.set_isolation_by_name(isolation_str)))
  {
    TBSYS_LOG(WARN, "failed to set isolation level, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else if (OB_SUCCESS != (ret = session->get_sys_variable_value(ObString::make_string("ob_tx_timeout"), val)))
  {
    TBSYS_LOG(WARN, "failed to get tx_timeout value, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = val.get_int(tx_timeout_val)))
  {
    TBSYS_LOG(WARN, "wrong obj type, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else if (OB_SUCCESS != (ret = session->get_sys_variable_value(ObString::make_string("ob_tx_idle_timeout"), val)))
  {
    TBSYS_LOG(WARN, "failed to get tx_idle_timeout value, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = val.get_int(tx_idle_timeout)))
  {
    TBSYS_LOG(WARN, "wrong obj type, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else
  {
    req.timeout_ = tx_timeout_val;
    req.idle_time_ = tx_idle_timeout;
  }
  return ret;
}


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
  ObPhysicalPlan exec_plan;
  ObProcedure proc;
  ObUpsResult result;

  init_physical_plan(exec_plan, *proc_->my_phy_plan_);

  proc.add_inst(this);
  exec_plan.add_phy_query(&proc, NULL, true); //add as the main query

  //adjust the serialize methods for ObExprValues/ ObPostfixExpression
  proc_->get_phy_plan()->set_proc_exec(true);
  /******************************************************
    * the procedure rpc call protocal should be modified
    *****************************************************/
  int64_t remain_us = 0;
  ObPhysicalPlan *out_plan = proc_->get_phy_plan();
  if (OB_LIKELY(OB_SUCCESS == ret))
  {
    if (out_plan->is_timeout(&remain_us))
    {
      ret = OB_PROCESS_TIMEOUT;
      TBSYS_LOG(WARN, "ups execute timeout. remain_us[%ld]", remain_us);
    }
    else if (OB_UNLIKELY(NULL != out_plan && out_plan->is_terminate(ret)))
    {
      TBSYS_LOG(WARN, "execution was terminated ret is %d", ret);
    }
    else if (OB_SUCCESS != (ret = proc_->rpc_->ups_plan_execute(remain_us, exec_plan, result)))
    {
      TBSYS_LOG(WARN, "failed to execute plan on updateserver, err=%d", ret);
      if (OB_TRANS_ROLLBACKED == ret)
      {
        // when updateserver returning TRANS_ROLLBACKED, it cannot get local_result_ to fill error message
        TBSYS_LOG(USER_ERROR, "transaction is rolled back");
        // reset transaction id
        ObTransID invalid_trans;
        out_plan->get_result_set()->get_session()->set_trans_id(invalid_trans);
      }
    }
  }
  proc_->get_phy_plan()->set_proc_exec(false);
  return ret;
}

int SpBlockInsts::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
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
      inst->serialize_inst(buf, buf_len,pos);
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

//DEFINE_DESERIALIZE(SpBlockInsts)
int SpBlockInsts::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena& allocator,
                                   ObPhysicalPlan::OperatorStore& operators_store, ObPhyOperatorFactory *op_factory)
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
      inst->deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory);
      break;
    case SP_D_INST:
      inst = proc_->create_inst<SpRwDeltaInst>();
      inst->deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory);
      break;
    case SP_DE_INST:
      inst = proc_->create_inst<SpRwDeltaIntoVarInst>();
      inst->deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory);
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

  //Varialbles are saved in ObSqlSessionInfo on ms
  // 	and saved in ObProcedure on ups
  int64_t rd_var_count = 0;
  serialization::decode_i64(buf, data_len, pos, &rd_var_count);

  for(int64_t i = 0; i < rd_var_count && OB_SUCCESS == ret; ++i)
  {
    ObString var_name;
    ObObj obj;
    var_name.deserialize(buf, data_len, pos);
    obj.deserialize(buf, data_len, pos);

    proc_->write_variable(var_name, obj);
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

/**
 * @brief ObProcedure::optimize
 *  adjust the execution path of instructions
 *  here we first try to group the instructions
 *  scan the original instructions list, and save
 *  into the real execution list
 * @return
 */
int ObProcedure::optimize()
{
  if( proc_name_.compare("ups_proc_test"))
  {
    // 0 2 6 8 { 1 3 4 5 7 9 }
    exec_list_.reserve(5);
    exec_list_.push_back(inst_list_.at(0));
    exec_list_.push_back(inst_list_.at(2));
    exec_list_.push_back(inst_list_.at(6));
    exec_list_.push_back(inst_list_.at(8));

    SpBlockInsts *block_inst =  create_inst<SpBlockInsts>();
    block_inst->add_inst(inst_list_.at(1));
    block_inst->add_inst(inst_list_.at(3));
    block_inst->add_inst(inst_list_.at(4));
    block_inst->add_inst(inst_list_.at(5));
    block_inst->add_inst(inst_list_.at(7));
    block_inst->add_inst(inst_list_.at(9));
    exec_list_.push_back(block_inst);
  }
  //else do nothing
  else
  {
    exec_list_.reserve(inst_list_.count());
    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      exec_list_.push_back(inst_list_.at(i));
    }
  }
  TBSYS_LOG(INFO, "Procedure optimized\n: %s", to_cstring(*this));
  return OB_SUCCESS;
}


int ObProcedure::open()
{
  int ret = OB_SUCCESS;
  optimize();
  if( OB_SUCCESS != (ret = create_variables()))
  {}
  else
  {
    pc_ = 0;
//    for(; pc_ < inst_list_.count() && OB_SUCCESS == ret; ++pc_)
//    {
//      ret = inst_list_.at(pc_)->exec();

//      debug_status();
//    }
    for(; pc_ < exec_list_.count() && OB_SUCCESS == ret; ++pc_)
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
//  const SpInst *inst = inst_list_.at(pc_);
  const SpInst *inst = exec_list_.at(pc_);

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

DEFINE_SERIALIZE(ObProcedure)
{
  //must be only one block inst
  int ret = OB_SUCCESS;
  if( inst_list_.at(0)->get_type() != SP_BLOCK_INST )
  {
    TBSYS_LOG(WARN, "unexpected ups procedure execution");
  }
  else
  {
    inst_list_.at(0)->serialize_inst(buf, buf_len, pos);
  }
  return ret;
}

DEFINE_DESERIALIZE(ObProcedure)
{
  //must be only one block inst
  int ret = OB_SUCCESS;
  SpBlockInsts* block_inst = create_inst<SpBlockInsts>();
  if( OB_SUCCESS != (ret = block_inst->deserialize_inst(
                       buf, data_len, pos, *my_phy_plan_->allocator_,
                       my_phy_plan_->operators_store_,  my_phy_plan_->op_factory_)) )
  {
    TBSYS_LOG(WARN, "deserialize instruction fail");
  }
  return ret;
}

DEFINE_GET_SERIALIZE_SIZE(ObProcedure)
{
  OB_ASSERT(0);
  TBSYS_LOG(WARN, "do not get here, i do not implement");
  return 0;
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
  return pos;
}
