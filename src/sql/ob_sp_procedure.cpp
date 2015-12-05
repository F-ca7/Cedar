#include "ob_sp_procedure.h"
#include "ob_physical_plan.h"

using namespace oceanbase::sql;
using namespace oceanbase::common;

/* ========================================================
 *      SpVar Definition
 * =======================================================*/

int64_t SpVar::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "SpVar: ");
  pos += var_name_.to_string(buf + pos, buf_len - pos);

  if( idx_value_ != NULL )
  {
    databuff_printf(buf, buf_len, pos, ", idx[%p]: ", idx_value_);
    pos += idx_value_->to_string(buf + pos, buf_len - pos);
  }
  return pos;
}

int SpVar::serialize(char *buf, int64_t buf_len, int64_t &pos) const
{
   int ret = OB_SUCCESS;
  if( OB_SUCCESS != (ret = var_name_.serialize(buf, buf_len, pos)) )
  {
    TBSYS_LOG(WARN, "serialize var_name fail, ret=%d", ret);
  }
  else if( OB_SUCCESS != (ret = serialization::encode_bool(buf, buf_len, pos, idx_value_ != NULL)) )
  {
    TBSYS_LOG(WARN, "serialize idx flag fail, ret=%d", ret);
  }
  else if( idx_value_ != NULL )
  {
    ret = idx_value_->serialize(buf, buf_len, pos);
  }
  return ret;
}

int SpVar::deserialize(const char *buf, int64_t data_len, int64_t &pos, SpProcedure *proc)
{
  int ret = OB_SUCCESS;
  bool has_idx = false;
  if( OB_SUCCESS != (ret = var_name_.deserialize(buf, data_len, pos)))
  {
    TBSYS_LOG(WARN, "deserialize var_name fail, ret=%d", ret);
  }
  else if( OB_SUCCESS != (ret = serialization::decode_bool(buf, data_len, pos, &has_idx)))
  {
    TBSYS_LOG(WARN, "deserialize idx flag fail, ret=%d", ret);
  }
  else if( has_idx )
  {
    ret = idx_value_->deserialize(buf, data_len, pos);
    idx_value_->set_owner_op(proc);
  }
  return ret;
}

int SpVar::assign(const SpVar &other)
{
  var_name_ = other.var_name_;
  if( other.idx_value_ != NULL )
  {
    idx_value_ = ObSqlExpression::alloc();
    *idx_value_ = *(other.idx_value_);
  }
  return OB_SUCCESS;
}

void SpVar::clear()
{
  if( idx_value_ != NULL )
  {
    ObSqlExpression::free(idx_value_);
    idx_value_ = NULL;
  }
}

SpVar::~SpVar()
{
  /**
    *  do not release sql memory here,
    *  because we allow the copy and copy construction function
    *  there would be multiple SpVar object share the same idx_value_ pointer
    *  once one of them is deconstructed, the idx_value_ becomes wild pointer
    *  so, we manully use clear function to release memory
    * */
  idx_value_ = NULL;
}

int64_t SpVarInfo::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  if( using_method_ == VM_FUL_ARY )
  {
    databuff_printf(buf, buf_len, pos, "%.*s (var)", var_name_.length(), var_name_.ptr());
  }
  else
  {
    databuff_printf(buf, buf_len, pos, "%.*s (arr)", var_name_.length(), var_name_.ptr());
  }
  return pos;
}

int SpVariableSet::add_tmp_var(const ObString &var_name)
{
  return add_var_info(SpVarInfo(var_name, VM_TMP_VAR));
}

int SpVariableSet::add_tmp_var(const ObIArray<ObString> &var_set)
{
  int ret = OB_SUCCESS;
  for(int64_t i = 0; OB_SUCCESS == ret && i < var_set.count(); ++i)
  {
    const ObString &var_name = var_set.at(i);
    ret = add_tmp_var(var_name);
  }
  return ret;
}

int SpVariableSet::add_array_var(const ObString &arr_name)
{
  return  add_var_info(SpVarInfo(arr_name, VM_FUL_ARY));
}

int SpVariableSet::add_var_info(const SpVarInfo &var_info)
{
  int ret = OB_SUCCESS;
  bool flag = false;
  for(int64_t i = 0; i < var_info_set_.count(); ++i)
  {
    const SpVarInfo &info = var_info_set_.at(i);
    if( info.var_name_.compare(var_info.var_name_) && info.using_method_ == var_info.using_method_)
    {
      flag = true;
      break;
    }
  }
  if( !flag ) ret = var_info_set_.push_back(var_info);
  return ret;
}

int SpVariableSet::add_var_info_set(const SpVariableSet &var_set)
{
  int ret = OB_SUCCESS;
  for(int64_t i = 0; OB_SUCCESS == ret && i < var_set.var_info_set_.count(); ++i)
  {
    ret = add_var_info(var_set.var_info_set_.at(i));
  }
  return ret;
}

int64_t SpVariableSet::to_string(char *buf, int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "[ ");
  for(int64_t i = 0; i < var_info_set_.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, "%s ", to_cstring(var_info_set_.at(i)));
  }
  databuff_printf(buf, buf_len, pos, "]");
  return pos;
}



/*===================================================================
 *                       SpInst Definition
 * ==================================================================*/
SpInst::~SpInst()
{
  proc_ = NULL;
}

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
SpExprInst::~SpExprInst()
{
  left_var_.clear();
}

void SpExprInst::get_read_variable_set(SpVariableSet &read_set) const
{
  read_set.add_var_info_set(rs_);
}

void SpExprInst::get_write_variable_set(SpVariableSet &write_set) const
{
  write_set.add_tmp_var(left_var_.var_name_);
}

int SpExprInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = left_var_.serialize(buf, buf_len, pos)) )
  {
    TBSYS_LOG(WARN, "serialize left_var_ fail, ret=%d", ret);
  }
  else if( OB_SUCCESS != (ret = right_val_.serialize(buf, buf_len, pos)) )
  {
    TBSYS_LOG(WARN, "serialize right_val_ fail, ret=%d", ret);
  }
  return ret;
}

int SpExprInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  UNUSED(allocator);
  UNUSED(operators_store);
  UNUSED(op_factory);
  TBSYS_LOG(TRACE, "deserialize expr inst");

  if( OB_SUCCESS != (ret = left_var_.deserialize(buf, data_len, pos, proc_)) )
  {
    TBSYS_LOG(WARN, "deserialize left_var_ fail, ret=%d", ret);
  }
  else if( OB_SUCCESS != (ret = right_val_.deserialize(buf, data_len, pos)) )
  {
    TBSYS_LOG(WARN, "deserialize right_val_ fail, ret=%d", ret);
  }
  else
  {
    right_val_.set_owner_op(proc_);
  }
  return ret;
}

int SpExprInst::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;
  const SpExprInst *old_expr = static_cast<const SpExprInst*>(inst);

  left_var_.assign(old_expr->left_var_);
  if( left_var_.idx_value_ != NULL ) left_var_.idx_value_ ->set_owner_op(proc_);
  right_val_ = old_expr->right_val_;
  right_val_.set_owner_op(proc_);

  return ret;
}

/* ===============================================
 *    SpRdBaseInst Definition
 * ==============================================*/
SpRdBaseInst::~SpRdBaseInst()
{}

void SpRdBaseInst::get_read_variable_set(SpVariableSet &read_set) const
{
  read_set.add_var_info_set(rs_);
}

void SpRdBaseInst::get_write_variable_set(SpVariableSet &write_set) const
{
  UNUSED(write_set);
}

void SpRdBaseInst::add_read_var(const ObArray<const ObRawExpr*> &var_list)
{
  for(int64_t i = 0; i < var_list.count(); ++i)
  {
    const ObItemType &raw_type = var_list.at(i)->get_expr_type();
    if( T_SYSTEM_VARIABLE == raw_type || T_TEMP_VARIABLE == raw_type )
    {
      ObString var_name;
      ((const ObConstRawExpr *)var_list.at(i))->get_value().get_varchar(var_name);
      rs_.add_tmp_var(var_name);
    }
  }
}

int SpRdBaseInst::set_rdbase_op(ObPhyOperator *op, int32_t query_id)
{
  int ret = OB_SUCCESS;
  OB_ASSERT(op->get_type() == PHY_VALUES);
  op_ = op;
  query_id_ = query_id;
  return ret;
}

int SpRdBaseInst::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;

  const SpRdBaseInst *old_inst = static_cast<const SpRdBaseInst*>(inst);

  op_ = NULL; //get the op_ from query_id_'s inner plan
  query_id_ = old_inst->query_id_;
  rs_ = old_inst->rs_;
//  ws_ = old_inst->ws_;
  table_id_ = old_inst->table_id_;
  return ret;
}

/* ========================================================
 *      SpRwDeltaInst Definition
 * =======================================================*/
SpRwDeltaInst::~SpRwDeltaInst()
{}


void SpRwDeltaInst::get_read_variable_set(SpVariableSet &read_set) const
{
  read_set.add_var_info_set(rs_);
}

void SpRwDeltaInst::get_write_variable_set(SpVariableSet &write_set) const
{
//  OB_ASSERT(ws_.var_set_.count() == 0); //since select..into inst inherit this, such assert is not valid any more
  write_set.add_var_info_set(ws_);
}

void SpRwDeltaInst::add_read_var(const ObArray<const ObRawExpr*> &var_list)
{
  for(int64_t i = 0; i < var_list.count(); ++i)
  {
    const ObItemType &raw_type = var_list.at(i)->get_expr_type();
    if( T_SYSTEM_VARIABLE == raw_type || T_TEMP_VARIABLE == raw_type )
    {
      ObString var_name;
      ((const ObConstRawExpr *)var_list.at(i))->get_value().get_varchar(var_name);
      rs_.add_tmp_var(var_name);
    }
  }
}

int SpRwDeltaInst::set_rwdelta_op(ObPhyOperator *op)
{
  int ret = OB_SUCCESS;
//  OB_ASSERT(op->get_type() == PHY_UPS_EXECUTOR);
  op_ = op;
  return ret;
}

int SpRwDeltaInst::set_ups_exec_op(ObPhyOperator *op, int32_t query_id)
{
 int ret = OB_SUCCESS;
  OB_ASSERT(op->get_type() == PHY_UPS_EXECUTOR);
  ups_exec_op_ = op;
  query_id_ = query_id;
  return ret;
}

int SpRwDeltaInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  int ret = OB_SUCCESS;
//  ObUpsExecutor *ups_exec = static_cast<ObUpsExecutor *>(op_);
//  ObPhyOperator *ups_main_query = ups_exec->get_inner_plan()->get_main_query();

  //op_'s phyplan is different with proc_'s phyplan, op_ is in the ups_executor's innerplan
  op_->get_phy_plan()->set_proc_exec(true);
  if( OB_SUCCESS != (ret = proc_->serialize_tree(buf, buf_len, pos, *op_)) )
  {
    TBSYS_LOG(WARN, "Serialize ups main query fail: ret=%d", ret);
  }
  return ret;
}

int SpRwDeltaInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  TBSYS_LOG(TRACE, "deserialize rwdelta");
  if( OB_SUCCESS != (ret = proc_->deserialize_tree(buf, data_len, pos, allocator, operators_store, op_factory, op_)) )
  {
    TBSYS_LOG(WARN, "Deserialize rw delta inst query fail: ret=%d", ret);
  }
  return ret;
}

int SpRwDeltaInst::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;
  const SpRwDeltaInst *old_inst = static_cast<const SpRwDeltaInst*>(inst);
  op_ = NULL;
  ups_exec_op_ = NULL;
  query_id_ = old_inst->query_id_;
  rs_ = old_inst->rs_;
  ws_ = old_inst->ws_;
  table_id_ = old_inst->table_id_;
  return ret;
}

/* ========================================================
 *      SpRwDeltaIntoInst Definition
 * =======================================================*/
SpRwDeltaIntoVarInst::~SpRwDeltaIntoVarInst()
{
  for(int64_t i = 0; i < var_list_.count(); ++i)
  {
    var_list_.at(i).clear();
  }
}

int SpRwDeltaIntoVarInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  int ret = OB_SUCCESS;
//  ObUpsExecutor *ups_exec = static_cast<ObUpsExecutor *>(op_);
//  ObPhyOperator *ups_main_query = ups_exec->get_inner_plan()->get_main_query();

  //op_'s phyplan is different with proc_'s phyplan, op_ is in the ups_executor's innerplan
  op_->get_phy_plan()->set_proc_exec(true);
  /**
   * serialize the main query[ObUpsModifyWithDmlType] to the ups
   * caution. not the ups_executor
   * */
  if( OB_SUCCESS != (ret = proc_->serialize_tree(buf, buf_len, pos, *op_)) )
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
  TBSYS_LOG(TRACE, "deserialize RwDeltaInto");
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
//      ObString var_name;
      SpVar tmp_var;
      var_list_.push_back(tmp_var);
      if( OB_SUCCESS != (ret = var_list_.at(i).deserialize(buf, data_len, pos, proc_)) )
      {
        TBSYS_LOG(WARN, "Deserialize var list[%ld] fail, ret=%d", i, ret);
        break;
      }
    }
  }
  return ret;
}

int SpRwDeltaIntoVarInst::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;
  ret = SpRwDeltaInst::assign(inst);
//  var_list_ = static_cast<const SpRwDeltaIntoVarInst*>(inst)->var_list_;
  const ObArray<SpVar>& old_var_list = static_cast<const SpRwDeltaIntoVarInst*>(inst)->var_list_;

  int64_t var_count = old_var_list.count();

  var_list_.reserve(var_count);
  for(int64_t i = 0; i < var_count; ++i)
  {
    SpVar tmp_var;
    var_list_.push_back(tmp_var);
    if( OB_SUCCESS != (ret = var_list_.at(i).assign(old_var_list.at(i))) )
    {
      TBSYS_LOG(WARN, "assign failure, at %ld", i);
    }
    else
    {
      if( var_list_.at(i).idx_value_ != NULL )
        var_list_.at(i).idx_value_->set_owner_op(proc_); //important
    }
  }
  return ret;
}

/* ========================================================
 *      SpRwCompInst Definition
 * =======================================================*/
SpRwCompInst::~SpRwCompInst()
{
  for(int64_t i = 0; i < var_list_.count(); ++i)
  {
    var_list_.at(i).clear();
  }
}

void SpRwCompInst::get_read_variable_set(SpVariableSet &read_set) const
{
  read_set.add_var_info_set(rs_);
}

void SpRwCompInst::get_write_variable_set(SpVariableSet &write_set) const
{
  for(int64_t i = 0; i < var_list_.count(); ++i)
  {
    const SpVar & var = var_list_.at(i);
    //TODO we have not handle the variables used in array idx
    if( var.is_array() ) write_set.add_array_var(var.var_name_);
    else write_set.add_tmp_var(var.var_name_);
  }
}

int SpRwCompInst::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;

  const SpRwCompInst *old_inst = static_cast<const SpRwCompInst*>(inst);
  op_ = NULL;
  query_id_ = old_inst->query_id_;
  rs_ = old_inst->rs_;
//  ws_ = old_inst->ws_;
  table_id_ = old_inst->table_id_;

  int64_t var_count = old_inst->var_list_.count();

  var_list_.reserve(var_count);
  for(int64_t i = 0; i < var_count; ++i)
  {
    SpVar tmp_var;
    var_list_.push_back(tmp_var);
    if( OB_SUCCESS != (ret = var_list_.at(i).assign(old_inst->var_list_.at(i))) )
    {
      TBSYS_LOG(WARN, "assign failure, at %ld", i);
    }
    else
    {
      if( var_list_.at(i).idx_value_ != NULL )
        var_list_.at(i).idx_value_->set_owner_op(proc_); //important
    }
  }
  return ret;
}

/* ========================================================
 *      SpBlockInsts Definition
 * =======================================================*/
SpBlockInsts::~SpBlockInsts()
{
  //sp_block_insts doesn't really own the memory of inst_list_
}

void SpBlockInsts::get_read_variable_set(SpVariableSet &read_set) const
{
  read_set.add_var_info_set(rs_);
}

void SpBlockInsts::get_write_variable_set(SpVariableSet &write_set) const
{
  write_set.add_var_info_set(ws_);
}

int SpBlockInsts::add_inst(SpInst *inst)
{
  int ret = OB_SUCCESS;
  if( OB_SUCCESS != inst_list_.push_back(inst) )
  {
    TBSYS_LOG(WARN, "add instruction fail");
  }
  inst->get_read_variable_set(rs_);
  inst->get_write_variable_set(ws_);
//  else if ( OB_SUCCESS !=  (ret=rs_.addVariable(inst->get_read_variable_set())) )
//  {}
//  else if ( OB_SUCCESS != (ret = ws_.addVariable(inst->get_write_variable_set())) )
//  {}
//  else
//  {}
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
    if( OB_SUCCESS != (ret = serialization::encode_i32(buf, buf_len, pos, type)) )
    {
      TBSYS_LOG(WARN, "serialize inst type fail, %ld", i);
    }
    else if (OB_SUCCESS != (ret = inst->serialize_inst(buf, buf_len,pos)) )
    {
      TBSYS_LOG(WARN, "serialize inst fail, %ld", i);
    }
  }

  //serialize read variables
  //TODO
  int64_t rd_var_count = rs_.count();
  TBSYS_LOG(TRACE, "Block inst serialization, rd_var count: %ld", rd_var_count);
  if( OB_SUCCESS != (ret = serialization::encode_i64(buf, buf_len, pos, rd_var_count)))
  {
    TBSYS_LOG(WARN, "serialize read variables count fail");
  }
  //serialize the variable set to ups
//  for(int64_t rd_var_itr = 0; rd_var_itr < rs_.var_set_.count() && OB_SUCCESS == ret; ++rd_var_itr)
//  {
//    const ObString &var_name = rs_.var_set_.at(rd_var_itr);
//    const ObObj *obj;
//    proc_->read_variable(var_name, obj);
//    if( NULL == obj )
//    {
//      TBSYS_LOG(WARN, "variable[%.*s] does not found in session", var_name.length(), var_name.ptr());
//    }
//    else if( OB_SUCCESS != (ret = var_name.serialize(buf, buf_len, pos)) )
//    {
//      TBSYS_LOG(WARN, "variable name serialization fail");
//    }
//    else if( OB_SUCCESS != (ret = obj->serialize(buf, buf_len, pos)) )
//    {
//      TBSYS_LOG(WARN, "variable value serialization fail");
//    }
//    else
//    {
//      TBSYS_LOG(TRACE, "Block inst seralization, %.*s = %s", var_name.length(), var_name.ptr(), to_cstring(*obj));
//    }
//  }

  return ret;
}

int SpBlockInsts::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena& allocator,
                                   ObPhysicalPlan::OperatorStore& operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  int64_t count = 0;

  if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &count)) )
  {
    TBSYS_LOG(WARN, "deserialize inst count fail");
  }
  inst_list_.reserve(count);
  for(int64_t i = 0; i < count && OB_SUCCESS == ret; ++i)
  {
    SpInstType type;
    SpInst *inst = NULL;
    int32_t type_int_value = 0;
    serialization::decode_i32(buf, data_len, pos, &type_int_value);
    type = static_cast<SpInstType>(type_int_value);

    inst = proc_->create_inst(type, NULL);
    if(OB_SUCCESS != (ret = inst->deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory)))
    {
      TBSYS_LOG(WARN, "deserialize inst [%ld] fail, type: %d", i, type_int_value);
    }

    if( OB_SUCCESS == ret )
      add_inst(inst);
    else
    {
      TBSYS_LOG(WARN, "Deserialize instructions %ld fail, ret=%d", i, ret);
      break;
    }
  }

  //Varialbles are saved in ObSqlSessionInfo on ms
  // 	and saved in ObProcedure on ups
  int64_t rd_var_count = 0;
  if( OB_SUCCESS == ret )
  {
    ret = serialization::decode_i64(buf, data_len, pos, &rd_var_count);
    TBSYS_LOG(TRACE, "block inst, rd_var count: %ld", rd_var_count);
    for(int64_t i = 0; i < rd_var_count && OB_SUCCESS == ret; ++i)
    {
      ObString var_name;
      ObObj obj;
      if( OB_SUCCESS != (ret = var_name.deserialize(buf, data_len, pos)) )
      {
        TBSYS_LOG(WARN, "Deserialize var_name fail");
      }
      else if( OB_SUCCESS != (ret = obj.deserialize(buf, data_len, pos)) )
      {
        TBSYS_LOG(WARN, "Deserialize val fail");
      }
      else if( OB_SUCCESS != (ret = proc_->write_variable(var_name, obj)))
      {
        TBSYS_LOG(WARN, "write variables into table fail");
      }
			else 
			{
        TBSYS_LOG(TRACE, "try to write variables var_name: %.*s = %s", var_name.length(), var_name.ptr(), to_cstring(obj));
			}
    }
  }
  return ret;
}

int SpBlockInsts::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;
  const SpBlockInsts *old_inst = static_cast<const SpBlockInsts*>(inst);

  inst_list_.clear();
  for(int64_t i = 0; i < old_inst->inst_list_.count(); ++i)
  {
    SpInst *inner_inst = old_inst->inst_list_.at(i);

    SpInst *new_inst = proc_->create_inst(inner_inst->get_type(), NULL);

    if( new_inst != NULL )
    {
      new_inst->assign(inner_inst);
      inst_list_.push_back(new_inst);
    }
  }
  rs_ = old_inst->rs_;
  ws_ = old_inst->ws_;
  return ret;
}

/*================================================
 *				SpMultiInsts Definition
 * ===============================================*/
SpMultiInsts::~SpMultiInsts()
{
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    //release the memory, placement allocated, manually release
    inst_list_.at(i)->~SpInst();
  }
}

int SpMultiInsts::get_inst(int64_t idx, SpInst *&inst)
{
  if( idx < 0 || idx >= inst_list_.count() ) inst = NULL;
  else inst = inst_list_.at(idx);
  return inst == NULL ? OB_ENTRY_NOT_EXIST : OB_SUCCESS;
}

SpInst* SpMultiInsts::get_inst(int64_t idx)
{
  OB_ASSERT(idx >= 0 && idx < inst_list_.count() );
  return inst_list_.at(idx);
}

int SpMultiInsts::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
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
    ret = serialization::encode_i32(buf, buf_len, pos, type);
    inst->serialize_inst(buf, buf_len,pos);
  }
  return ret;
}

int SpMultiInsts::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  int64_t count = inst_list_.count();
  SpProcedure *proc_ = ownner_->get_ownner();
  if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &count)) )
  {
    TBSYS_LOG(WARN, "deserialize inst count fail");
  }
  inst_list_.reserve(count);
  for(int64_t i = 0; i < count && OB_SUCCESS == ret; ++i)
  {
    SpInstType type;
    SpInst *inst = NULL;
    int32_t type_int_value = 0;
    serialization::decode_i32(buf, data_len, pos, &type_int_value);
    type = static_cast<SpInstType>(type_int_value);

    inst = proc_->create_inst(type, this);
    ret = inst->deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory);

    if( OB_SUCCESS != ret )
    {
      TBSYS_LOG(WARN, "Deserialize instructions %ld fail, ret=%d", i, ret);
      break;
    }
  }
  return ret;
}

int SpMultiInsts::assign(const SpMultiInsts &mul_inst)
{
  int ret = OB_SUCCESS;
//  SpProcedure *proc = mul_inst.ownner_->get_ownner(); //wtf, why would I ever use the old inst's proc pointer
  SpProcedure *proc = ownner_->get_ownner();
  for(int64_t i = 0; i < mul_inst.inst_list_.count(); ++i)
  {
    SpInst *inner_inst = mul_inst.inst_list_.at(i);
    SpInst *new_inst = NULL;

    new_inst = proc->create_inst(inner_inst->get_type(), this);

    if( new_inst != NULL )
    {
      new_inst->assign(inner_inst);
    }
  }
  return ret;
}

int SpMultiInsts::optimize(SpInstList &exec_list)
{
  int ret = OB_SUCCESS;

  for(int64_t inst_itr = 0; inst_itr < inst_list_.count(); ++inst_itr)
  {
    if( inst_list_.at(inst_itr)->get_type() == SP_B_INST ) //clear the B instruction
    {
      exec_list.push_back(inst_list_.at(inst_itr));
      inst_list_.remove(inst_itr);
      inst_itr --;
    }
  }
  return ret;
}

/*================================================
 * 					SpIfContrlInsts Definition
 * ==============================================*/
SpIfBlock::~SpIfBlock()
{}

SpIfCtrlInsts::~SpIfCtrlInsts()
{}

void SpIfCtrlInsts::add_read_var(const ObArray<const ObRawExpr*> &var_list)
{
  for(int64_t i = 0; i < var_list.count(); ++i)
  {
    ObItemType raw_type = var_list.at(i)->get_expr_type();
    if( T_SYSTEM_VARIABLE == raw_type || T_TEMP_VARIABLE == raw_type )
    {
      ObString var_name;
      ((const ObConstRawExpr *)var_list.at(i))->get_value().get_varchar(var_name);
      expr_rs_set_.add_tmp_var(var_name);
    }
  }
}

void SpIfCtrlInsts::get_read_variable_set(SpVariableSet &read_set) const
{
  read_set.add_var_info_set(expr_rs_set_);
  for(int64_t i = 0; i < then_branch_.inst_count(); ++i)
  {
    const SpInst *inst = const_cast<SpIfBlock&>(then_branch_).get_inst(i);
    inst->get_read_variable_set(read_set);
  }
  for(int64_t i = 0; i < else_branch_.inst_count(); ++i)
  {
    const SpInst *inst = const_cast<SpIfBlock&>(else_branch_).get_inst(i);
    inst->get_read_variable_set(read_set);
  }
}

void SpIfCtrlInsts::get_write_variable_set(SpVariableSet &write_set) const
{
  for(int64_t i = 0; i < else_branch_.inst_count(); ++i)
  {
    const SpInst *inst = const_cast<SpIfBlock&>(then_branch_).get_inst(i);
    inst->get_write_variable_set(write_set);
  }
  for(int64_t i = 0; i < else_branch_.inst_count(); ++i)
  {
    const SpInst *inst = const_cast<SpIfBlock&>(else_branch_).get_inst(i);
    inst->get_write_variable_set(write_set);
  }
}

int SpIfCtrlInsts::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  int ret = OB_SUCCESS;
  if( OB_SUCCESS != (ret = if_expr_.serialize(buf, buf_len, pos)) )
  {
    TBSYS_LOG(WARN, "serialize if_expr fail");
  }
  else if( OB_SUCCESS != (ret = then_branch_.serialize_inst(buf, buf_len, pos)))
  {
    TBSYS_LOG(WARN, "serialize then_branch fail");
  }
  else if( OB_SUCCESS != (ret = else_branch_.serialize_inst(buf, buf_len, pos)))
  {
    TBSYS_LOG(WARN, "serialize else_branch fail");
  }
  return ret;
}

int SpIfCtrlInsts::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, common::ModuleArena &allocator,
                                    ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  if( OB_SUCCESS != (ret = if_expr_.deserialize(buf, data_len, pos)))
  {
    TBSYS_LOG(WARN, "deserialize i_expr fail");
  }
  else if( OB_SUCCESS != (ret = then_branch_.deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory)))
  {
    TBSYS_LOG(WARN, "deserialize then_branch fail");
  }
  else if( OB_SUCCESS != (ret = else_branch_.deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory)))
  {
    TBSYS_LOG(WARN, "deserialize else_branch fail");
  }
  else
  {
    if_expr_.set_owner_op(proc_);
  }
  return ret;
}

int SpIfCtrlInsts::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;

  const SpIfCtrlInsts *old_inst = static_cast<const SpIfCtrlInsts*>(inst);
  if_expr_ = old_inst->if_expr_;
  if_expr_.set_owner_op(proc_);
  expr_rs_set_ = old_inst->expr_rs_set_;
//  rs_set_ = old_inst->rs_set_;
//  ws_set_ = old_inst->ws_set_;
  if( OB_SUCCESS != (ret = then_branch_.assign(old_inst->then_branch_)) )
  {
    TBSYS_LOG(WARN, "assign then branch fail");
  }
  else if( OB_SUCCESS != (ret = else_branch_.assign(old_inst->else_branch_)) )
  {
    TBSYS_LOG(WARN, "assign else branch fail");
  }
  return ret;
}

int SpIfBlock::optimize(SpInstList &exec_list)
{
  int ret = OB_SUCCESS;

  for(int64_t inst_itr = 0; inst_itr < inst_list_.count(); ++inst_itr)
  {
    if( inst_list_.at(inst_itr)->get_type() == SP_B_INST )
    {
      exec_list.push_back(inst_list_.at(inst_itr));
      inst_list_.remove(inst_itr);
      inst_itr --;
    }
  }
  return ret;
}

/**
 * @brief SpIfCtrlInsts::optimize
 * 	try to optimize the if execution here
 * @param inst_list
 * @return
 */
int SpIfCtrlInsts::optimize(SpInstList &exec_list)
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = then_branch_.optimize(exec_list)) )
  {
    TBSYS_LOG(WARN, "optimize then_branch fail");
  }
  else if ( OB_SUCCESS != (ret = else_branch_.optimize(exec_list)) )
  {
    TBSYS_LOG(WARN, "optimize else_branch fail");
  }
  else
  {
    //construct read set
    exec_list.push_back(this);

    for(int64_t i = 0; i < then_branch_.inst_count(); ++i)
    {
      SpInst *inst;
      then_branch_.get_inst(i, inst);
    }
    for(int64_t i = 0; i < else_branch_.inst_count(); ++i)
    {
      SpInst *inst;
      else_branch_.get_inst(i, inst);
    }
  }
  return ret;
}

/*=================================================
 * 					SpLoopInst Defintion
 * ===============================================*/
SpLoopInst::~SpLoopInst()
{
  loop_counter_var_.clear();
}

void SpLoopInst::get_read_variable_set(SpVariableSet &read_set) const
{
  read_set.add_tmp_var(loop_counter_var_.var_name_);
  for(int64_t i = 0; i < loop_body_.inst_count(); ++i)
  {
    const_cast<SpMultiInsts&>(loop_body_).get_inst(i)->get_read_variable_set(read_set);
  }
}

void SpLoopInst::get_write_variable_set(SpVariableSet &write_set) const
{
  write_set.add_tmp_var(loop_counter_var_.var_name_);
  for(int64_t i = 0; i < loop_body_.inst_count(); ++i)
  {
    const_cast<SpMultiInsts&>(loop_body_).get_inst(i)->get_write_variable_set(write_set);
  }
}

int SpLoopInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;

  UNUSED(buf);
  UNUSED(data_len);
  UNUSED(pos);
  UNUSED(allocator);
  UNUSED(operators_store);
  UNUSED(op_factory);

  return ret;
}


/**
 * In essential, loop could not be serialized. Here, we are trying
 * to expand the loop body, serialize each instruction,
 * the baseline read instruction is automaiclly called.
 * Here the loop must be a normalization one, see wiki
 * @brief SpLoopInst::serialize_inst
 * @param buf
 * @param buf_len
 * @param pos
 * @return
 */
int SpLoopInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos)
{
  int ret = OB_SUCCESS;

  ObObj itr_var;
  int64_t itr = lowest_number_, itr_end = highest_number_;
  if( OB_SUCCESS != (ret = serialization::encode_i64(buf, buf_len, pos, itr_end - itr)) )
  {
    TBSYS_LOG(WARN, "serialize expansion loop size fail");
  }
  else
  {
    for(; itr < itr_end && OB_SUCCESS == ret; itr ++)
    {
      itr_var.set_int(itr);
      if( OB_SUCCESS != (ret = const_cast<SpProcedure *>(proc_)->write_variable(loop_counter_var_, itr_var )))
      {
        TBSYS_LOG(WARN, "update iterate variable fail");
      }
      else if( OB_SUCCESS != (ret = loop_body_.serialize_inst(buf, buf_len, pos)) )
      {
        TBSYS_LOG(WARN, "serialize loop body fail");
      }
      else if( OB_SUCCESS != (ret = const_cast<SpProcedure *>(proc_)->get_exec_strategy()->close(this)) ) //close body inst operation
      {
        TBSYS_LOG(WARN, "reset loop body inst operation fail");
      }
    }
  }
  return ret;
}

int SpLoopInst::assign(const SpInst *inst)
{
  int ret = OB_SUCCESS;
  const SpLoopInst *old_inst = static_cast<const SpLoopInst *>(inst);

  loop_counter_var_.assign(old_inst->loop_counter_var_);

  //carefull handle the ownner op
  //useless now, just in case
  if( loop_counter_var_.idx_value_ != NULL )
    loop_counter_var_.idx_value_->set_owner_op(proc_);

  lowest_expr_ = old_inst->lowest_expr_;
  lowest_expr_.set_owner_op(proc_);

  highest_expr_ = old_inst->highest_expr_;
  highest_expr_.set_owner_op(proc_);

  step_size_ = old_inst->step_size_;
  reverse_ = old_inst->reverse_;

  loop_body_.assign(old_inst->loop_body_);
  return ret;
}

int SpLoopInst::optimize(SpInstList &exec_list)
{
  int ret = OB_SUCCESS;

  //get out the B instruction
  if( OB_SUCCESS != (ret = loop_body_.optimize(exec_list)) )
  {
    TBSYS_LOG(WARN, "optimize loop body fail");
  }

  return ret;
}

/*=================================================
             SpProcedure Defintion
 * ===============================================*/

int SpInstExecStrategy::close(SpInst *inst)
{
  UNUSED(inst);
  return OB_NOT_SUPPORTED;
}

SpProcedure::SpProcedure(){}

SpProcedure::~SpProcedure()
{
  reset();
}

void SpProcedure::reset()
{
  for(int64_t i = 0 ; i < inst_list_.count(); ++i)
  {
    inst_list_.at(i)->~SpInst();
  }
  inst_list_.clear();
  arena_.free();
}


int SpProcedure::write_variable(const ObString &var_name, const ObObj &val)
{
  UNUSED(var_name);
  UNUSED(val);
  return OB_NOT_SUPPORTED;
}

int SpProcedure::write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val)
{
  UNUSED(array_name);
  UNUSED(idx_value);
  UNUSED(val);
  return OB_NOT_SUPPORTED;
}

int SpProcedure::write_variable(SpVar &var, const ObObj &val)
{
  UNUSED(var);
  UNUSED(val);
  return OB_NOT_SUPPORTED;
}

int SpProcedure::read_variable(const ObString &var_name, const ObObj *&val) const
{
  UNUSED(var_name);
  UNUSED(val);
  return OB_NOT_SUPPORTED;
}

int SpProcedure::read_variable(const ObString &var_name, ObObj &val) const
{
  UNUSED(var_name);
  UNUSED(val);
  return OB_NOT_SUPPORTED;
}

int SpProcedure::read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const
{
  UNUSED(array_name);
  UNUSED(val);
  UNUSED(idx_value);
  return OB_NOT_SUPPORTED;
}

int SpProcedure::read_variable(SpVar &var, const ObObj *&val) const
{
  UNUSED(var);
  UNUSED(val);
  return OB_NOT_SUPPORTED;
}

SpInst* SpProcedure::create_inst(SpInstType type, SpMultiInsts *mul_inst)
{
  SpInst *new_inst = NULL;
  switch(type)
  {
  case SP_E_INST:
    new_inst = create_inst<SpExprInst>(mul_inst);
    break;
  case SP_B_INST:
    new_inst = create_inst<SpRdBaseInst>(mul_inst);
    break;
  case SP_A_INST:
    new_inst = create_inst<SpRwCompInst>(mul_inst);
    break;
  case SP_C_INST:
    new_inst = create_inst<SpIfCtrlInsts>(mul_inst);
    break;
  case SP_D_INST:
    new_inst = create_inst<SpRwDeltaInst>(mul_inst);
    break;
  case SP_DE_INST:
    new_inst = create_inst<SpRwDeltaIntoVarInst>(mul_inst);
    break;
  case SP_BLOCK_INST:
    new_inst = create_inst<SpBlockInsts>(mul_inst);
    break;
  case SP_L_INST:
    new_inst = create_inst<SpLoopInst>(mul_inst);
    break;
  case SP_UNKOWN:
    new_inst = NULL;
    TBSYS_LOG(WARN, "unknown type here");
    break;
  }
  return new_inst;
}

int SpProcedure::debug_status(const SpInst *inst) const
{
  int ret = OB_SUCCESS;

  SpVariableSet rs, ws;
  if( inst != NULL && inst->get_ownner() == this )
  {
    inst->get_read_variable_set(rs);
    inst->get_write_variable_set(ws);
    char debug_buf[1024];
    int64_t buf_len = 1024, pos = 0;

    databuff_printf(debug_buf, buf_len, pos, "\ninst %ld\n", pc_);

    for(int64_t i = 0; i < rs.count(); ++i)
    {
      const SpVarInfo &var_info = rs.get_var_info(i);

      if( var_info.using_method_ == VM_TMP_VAR )
      {
        //read temp variable
        ObObj val;
        if( OB_SUCCESS == read_variable(var_info.var_name_, val) )
        {
          databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] = %s\n",
                          var_info.var_name_.length(), var_info.var_name_.ptr(), to_cstring(val));
        }
        else
        {
          databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] not found.\n",
                          var_info.var_name_.length(), var_info.var_name_.ptr());
        }
      }
      else if( var_info.using_method_ == VM_FUL_ARY )
      {
        //read full array
        ObObj *val;
        int64_t arr_size = 0;
        read_array_size(var_info.var_name_, arr_size);
        databuff_printf(debug_buf, buf_len, pos, "\tvar [");
        for(int64_t j = 0; j <  arr_size; ++j)
        {
          read_variable(var_info.var_name_, j, val);
          databuff_printf(debug_buf, buf_len, pos, "%s ", to_cstring(*val));
        }
        pos -= 1; //elimate the last white space
        databuff_printf(debug_buf, buf_len, pos, "]\n");
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
    TBSYS_LOG(TRACE, "%s", debug_buf);
  }
  return ret;
}

int SpProcedure::serialize_tree(char *buf, int64_t buf_len, int64_t &pos, const ObPhyOperator &root) const
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

int SpProcedure::deserialize_tree(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator,
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
    else
    {
      root->set_phy_plan(my_phy_plan_); //set the phyplan, used when expr calculation
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

DEFINE_SERIALIZE(SpProcedure)
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

DEFINE_DESERIALIZE(SpProcedure)
{
  //must be only one block inst
  int ret = OB_SUCCESS;
  SpBlockInsts* block_inst = create_inst<SpBlockInsts>(NULL);
  if( OB_SUCCESS != (ret = block_inst->deserialize_inst(
                       buf, data_len, pos, *my_phy_plan_->allocator_,
                       my_phy_plan_->operators_store_,  my_phy_plan_->op_factory_)) )
  {
    TBSYS_LOG(WARN, "deserialize instruction fail");
  }
  else
  {
    my_phy_plan_->set_proc_exec(true); //help the ups to determine the execution strategy
  }
  return ret;
}

DEFINE_GET_SERIALIZE_SIZE(SpProcedure)
{
  OB_ASSERT(0);
  TBSYS_LOG(WARN, "do not get here, i do not implement");
  return 0;
}

int64_t SpProcedure::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "Procedure\n");
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
  return pos;
}

/*=======================================================================
 * 			to_string methods
 * =====================================================================*/
int64_t SpExprInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  SpVariableSet write_set, read_set;
  get_write_variable_set(write_set);
  get_read_variable_set(read_set);
  databuff_printf(buf, buf_len, pos, "type [E], ws: %s, rs: %s\n", to_cstring(write_set), to_cstring(read_set));
  return pos;
}

int64_t SpRdBaseInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  SpVariableSet write_set, read_set;
  get_write_variable_set(write_set);
  get_read_variable_set(read_set);
  databuff_printf(buf, buf_len, pos, "type [B], ws: %s, rs: %s, tid[%ld]\n", to_cstring(write_set), to_cstring(read_set), table_id_);
  return pos;
}

int64_t SpRwDeltaInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  SpVariableSet write_set, read_set;
  get_write_variable_set(write_set);
  get_read_variable_set(read_set);
  databuff_printf(buf, buf_len, pos, "type [B], ws: %s, rs: %s, tid[%ld]\n", to_cstring(write_set), to_cstring(read_set), table_id_);
  return pos;
}


int64_t SpRwCompInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  SpVariableSet write_set, read_set;
  get_write_variable_set(write_set);
  get_read_variable_set(read_set);
  databuff_printf(buf, buf_len, pos, "type [B], ws: %s, rs: %s, tid[%ld]\n", to_cstring(write_set), to_cstring(read_set), table_id_);
  return pos;
}

int64_t SpRwDeltaIntoVarInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  SpVariableSet write_set, read_set;
  get_write_variable_set(write_set);
  get_read_variable_set(read_set);
  databuff_printf(buf, buf_len, pos, "type [B], ws: %s, rs: %s, tid[%ld]\n", to_cstring(write_set), to_cstring(read_set), table_id_);
  return pos;
}

int64_t SpBlockInsts::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [Block]\n");
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "\t sub-inst %ld: ", i);

    pos += inst->to_string(buf + pos, buf_len - pos);
  }
  databuff_printf(buf, buf_len, pos, "End Block\n");
  return pos;
}

int64_t SpMultiInsts::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "\t\tsub-inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
  return pos;
}

int64_t SpIfCtrlInsts::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [If]\n");
  databuff_printf(buf, buf_len, pos, "\tThen\n");

  pos += then_branch_.to_string(buf + pos, buf_len - pos);

  databuff_printf(buf, buf_len, pos, "\tElse\n");

  pos += else_branch_.to_string(buf + pos, buf_len - pos);

  databuff_printf(buf, buf_len, pos, "End If\n");
  return pos;
}

int64_t SpLoopInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [for], begin: %s, end: %s\n", to_cstring(lowest_expr_), to_cstring(highest_expr_));
  databuff_printf(buf, buf_len, pos, "\tLoop Body\n");

  pos += loop_body_.to_string(buf + pos, buf_len - pos);
  databuff_printf(buf, buf_len, pos, "\tEnd loop");
  return pos;
}
