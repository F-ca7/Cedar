#include "ob_ups_procedure.h"

using namespace oceanbase::updateserver;
using namespace oceanbase::sql;
//int SpExprInst::ups_exec()
int SpUpsInstExecStrategy::execute_expr(SpExprInst *inst)
{
  int ret = OB_SUCCESS;
  TBSYS_LOG(TRACE, "sp expr inst exec on ups()");
  common::ObRow input_row;
  const ObObj *val = NULL;
  if((ret= inst->get_val()->calc(input_row, val))!=OB_SUCCESS)
  {
    TBSYS_LOG(WARN, "sp expr compute failed");
  }
  //update the varialbe here
  else if ( OB_SUCCESS != (ret = inst->get_ownner()->write_variable(inst->get_var(), *val)) )
  {}
  return ret;
}


//int SpRwDeltaInst::ups_exec()
int SpUpsInstExecStrategy::execute_rw_delta(SpRwDeltaInst *inst)
{
  int ret = OB_SUCCESS;
  //it should be a ObUpsModify
  TBSYS_LOG(TRACE, "rw delta inst plan: %s", to_cstring(*(inst->get_rwdelta_op())));
  if( OB_SUCCESS != (ret = inst->get_rwdelta_op()->open()) )
  {
    TBSYS_LOG(WARN, "execute rw_delta_inst on ups");
  }
  return ret;
}

//int SpRwDeltaIntoVarInst::ups_exec()
int SpUpsInstExecStrategy::execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst)
{
  int ret = OB_SUCCESS;
  const common::ObRow *row;
  ObPhyOperator *op_ = inst->get_rwdelta_op();
  const ObArray<ObString> &var_list_ = inst->get_var_list();
  SpProcedure *proc = inst->get_ownner();
  TBSYS_LOG(TRACE, "rw_delta_into_var inst plan: %s", to_cstring(*op_));
  if(NULL != op_)
  {
    op_->open();
    ret = op_->get_next_row(row);

    if( ret == OB_ITER_END )
    {
      ret = OB_ERROR; //does not get row
    }
    else if( ret == OB_SUCCESS )
    {
      for(int64_t i = 0; i < var_list_.count() && OB_SUCCESS == ret; ++i)
      {
        const ObString &var_name = var_list_.at(i);
        const ObObj *cell = NULL;
        if(OB_SUCCESS !=(ret=row->raw_get_cell(i, cell)))//取出一列
        {
          TBSYS_LOG(WARN, "raw_get_cell %ld failed", i);
        }
        else if(OB_SUCCESS !=(proc->write_variable(var_name, *cell)))
        {
          TBSYS_LOG(WARN, "write into variables fail");
        }

      }
    }
  }
  return ret;
}

//int SpBlockInsts::ups_exec()
int SpUpsInstExecStrategy::execute_block(SpBlockInsts* inst)
{
  int ret = OB_SUCCESS;
  ObArray<SpInst*> inst_list_ = inst->get_inst_list();
  const SpProcedure *proc_ = inst->get_ownner();
  for(int64_t i = 0; i < inst_list_.count() && OB_SUCCESS == ret; ++i)
  {
    SpInst *inst = inst_list_.at(i);
    SpInstType type = inst->get_type();
    switch(type)
    {
    case SP_E_INST:
      ret = execute_expr(static_cast<SpExprInst*>(inst));
      break;
    case SP_B_INST:
    case SP_A_INST:
//      ret = strategy.execute_rd_base(static_cast<SpRdBaseInst*>(inst));
      ret = OB_ERROR;
      break;
    case SP_D_INST:
      ret = execute_rw_delta(static_cast<SpRwDeltaInst*>(inst));
      break;
    case SP_DE_INST:
      ret = execute_rw_delta_into_var(static_cast<SpRwDeltaIntoVarInst*>(inst));
      break;
    case SP_BLOCK_INST:
      ret = execute_block(static_cast<SpBlockInsts*>(inst));
      break;
    default:
      TBSYS_LOG(WARN, "Unsupport execute inst[%d] on mergeserver", type);
      break;
    }
    proc_->debug_status(inst);
  }
  return ret;
}

/*============================================================================
 *                    ObUpsProcedure  Definition
 * ==========================================================================*/
ObUpsProcedure::ObUpsProcedure() :
  is_var_tab_created(false),
  block_allocator_(SMALL_BLOCK_SIZE, common::OB_MALLOC_BLOCK_SIZE),
  var_name_val_map_allocer_(SMALL_BLOCK_SIZE, ObWrapperAllocator(&block_allocator_)),
  name_pool_()
{}

ObUpsProcedure::~ObUpsProcedure()
{

}

int ObUpsProcedure::create_variable_table()
{
  return var_name_val_map_.create(hash::cal_next_prime(16), &var_name_val_map_allocer_, &block_allocator_);
}

int ObUpsProcedure::open()
{
  int ret = OB_SUCCESS;
  SpUpsInstExecStrategy strategy;
  pc_ = 0;
  for(; pc_ < inst_list_.count() && OB_SUCCESS == ret; ++pc_)
  {
    SpInst *inst = inst_list_.at(pc_);
    SpInstType type = inst->get_type();
    switch(type)
    {
    case SP_E_INST:
      ret = strategy.execute_expr(static_cast<SpExprInst*>(inst));
      break;
    case SP_B_INST:
//      ret = strategy.execute_rd_base(static_cast<SpRdBaseInst*>(inst));
      ret = OB_ERROR;
      break;
    case SP_D_INST:
      ret = strategy.execute_rw_delta(static_cast<SpRwDeltaInst*>(inst));
      break;
    case SP_DE_INST:
      ret = strategy.execute_rw_delta_into_var(static_cast<SpRwDeltaIntoVarInst*>(inst));
      break;
    case SP_A_INST:
//      ret = strategy.execute_rw_comp(static_cast<SpRwCompInst*>(inst));
      ret = OB_ERROR;
      break;
    case SP_BLOCK_INST:
      ret = strategy.execute_block(static_cast<SpBlockInsts*>(inst));
      break;
    default:
      TBSYS_LOG(WARN, "Unsupport execute inst[%d] on mergeserver", type);
      break;
    }
    debug_status(inst);
  }
  return ret;
}

int ObUpsProcedure::close()
{
  return OB_SUCCESS;
}

void ObUpsProcedure::reset()
{
  pc_ = 0;
}

void ObUpsProcedure::reuse()
{
  pc_ = 0;
}

int ObUpsProcedure::write_variable(const ObString &var_name, const ObObj &val)
{
  int ret = OB_SUCCESS;
  ObString tmp_var;
  ObObj tmp_val;
  if( OB_UNLIKELY(!is_var_tab_created) )
  {
    if( OB_SUCCESS != (ret = create_variable_table()) )
    {
      TBSYS_LOG(WARN, "create variable table fail, ret=%d", ret);
    }
    else
    {
      is_var_tab_created = true;
    }
  }
  if( OB_SUCCESS == ret )
  {}
  else if (var_name.length() <= 0)
  {
    ret = OB_ERROR;
    TBSYS_LOG(ERROR, "Empty variable name");
  }
  else if ((ret = name_pool_.write_string(var_name, &tmp_var)) != OB_SUCCESS
           || (ret = name_pool_.write_obj(val, &tmp_val)) != OB_SUCCESS
           || ((ret = var_name_val_map_.set(tmp_var, tmp_val, 1)) != hash::HASH_INSERT_SUCC
               && ret != hash::HASH_OVERWRITE_SUCC))
  {
    ret = OB_ERROR;
    TBSYS_LOG(ERROR, "Add variable %.*s error", var_name.length(), var_name.ptr());
  }
  else
  {
    ret = OB_SUCCESS;
  }
  return ret;
}

int ObUpsProcedure::read_variable(const ObString &var_name, ObObj &val) const
{
  int ret = OB_SUCCESS;
  if( OB_UNLIKELY(!is_var_tab_created) )
    ret = OB_ERR_VARIABLE_UNKNOWN;
  else if (var_name_val_map_.get(var_name, val) != hash::HASH_EXIST)
    ret = OB_ERR_VARIABLE_UNKNOWN;
  return ret;
}

int ObUpsProcedure::read_variable(const ObString &var_name, const ObObj *&val) const
{
  val =  var_name_val_map_.get(var_name);
  return val == NULL ? OB_ENTRY_NOT_EXIST : OB_SUCCESS;
}
