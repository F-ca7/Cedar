#include "ob_ups_procedure.h"
#include "common/ob_common_stat.h"
#include "common/ob_row_fuse.h"
#include "ob_table_mgr.h"
#include "ob_ups_table_mgr.h"
#include "ob_update_server_main.h"
using namespace oceanbase::updateserver;
using namespace oceanbase::sql;

int ObUpsNewOrder::execute(int w_id, int d_id, int c_id, int item_ids[], double i_prices[],
                           int supplier_w_ids[], int order_quantities[], int o_ol_cnt, int o_all_local)
{
  int ret = OB_SUCCESS;
  int ol_i_id = 0, d_next_o_id = 0, o_id = 0;
  int s_remote_cnt_increment = 0;
  double ol_amount = 0, total_amount = 0, i_price = 0, d_tax = 0;
  int o_quantity = 0, ol_supply_w_id = 0, s_quantity = 0;
  ObString i_name, i_data;
  ObString ol_dist_info, s_data;
  ObString s_dist_info[10];
  double ol_amounts[MAX_ITEM_COUNT];
  ObString ol_dist_infos[MAX_ITEM_COUNT];

  SelectStockParam select_stock_param;
  UpdateStockParam update_stock_param;
  SelectItemParam  select_item_param;

//  UNUSED(d_next_o_id);
//  UNUSED(o_id);
//  UNUSED(d_tax);
//  UNUSED(c_id);
//  UNUSED(o_all_local);
//  UNUSED(w_id);
//  UNUSED(d_id);
//  UNUSED(item_ids);
//  UNUSED(i_prices);
//  UNUSED(supplier_w_ids);
//  UNUSED(order_quantities);
//  UNUSED(o_ol_cnt);
//  UNUSED(o_all_local);
//  UNUSED(s_data);
//  UNUSED(select_stock_param);
//  UNUSED(update_stock_param);
  UNUSED(i_prices);

  for(int itr = 0; itr < o_ol_cnt && OB_SUCCESS == ret; ++itr)
  {
    ol_i_id = item_ids[itr];
    ol_supply_w_id = supplier_w_ids[itr];
    o_quantity = order_quantities[itr];
//    i_price = i_prices[itr];

    //commit a select_item sql
    select_item_param.o_i_id_.set_int(ol_i_id);
    int64_t start_item_ts = tbsys::CTimeUtil::getTime();
    if( OB_SUCCESS != (ret = select_item(select_item_param, i_price, i_name, i_data)))
    {
      TBSYS_LOG(TRACE, "failed to select item");
      break;
    }
    OB_STAT_INC(UPDATESERVER, UPS_PROC_LOOP, tbsys::CTimeUtil::getTime() - start_item_ts);

    //commit a select_stock sql
    select_stock_param.o_i_id_.set_int(ol_i_id);
    select_stock_param.ol_supply_w_id_.set_int(ol_supply_w_id);
    int64_t start_ts = tbsys::CTimeUtil::getTime();
    if( OB_SUCCESS != (ret = select_stock(select_stock_param, s_quantity, s_data, s_dist_info)) )
    {
      TBSYS_LOG(TRACE, "failed to select stock");
      break;
    }
    OB_STAT_INC(UPDATESERVER, UPS_PROC_E, tbsys::CTimeUtil::getTime() - start_ts);

    if( s_quantity - o_quantity >= 10 )
    {
      s_quantity -= o_quantity;
    }
    else
    {
      s_quantity = s_quantity - o_quantity + 91;
    }

    if( ol_supply_w_id == w_id )
    {
      s_remote_cnt_increment = 0;
    }
    else
    {
      s_remote_cnt_increment = 1;
    }

    //commit a update_stock sql
    update_stock_param.o_i_id_.set_int(ol_i_id);
    update_stock_param.ol_supply_w_id_.set_int(ol_supply_w_id);

    update_stock_param.s_quantity_.set_int(s_quantity);
    update_stock_param.o_quantity_.set_double((double)o_quantity);
    update_stock_param.s_remote_cnt_increment_.set_int(s_remote_cnt_increment);

    int64_t upd_stock_ts = tbsys::CTimeUtil::getTime();
    if( OB_SUCCESS != ret) {}
    else if( OB_SUCCESS != (ret = update_stock(update_stock_param)) )
    {
      TBSYS_LOG(TRACE, "failed to update stock");
      break;
    }
    OB_STAT_INC(UPDATESERVER, UPS_PROC_D, tbsys::CTimeUtil::getTime() - upd_stock_ts);

    ol_amount = o_quantity * i_price;
    total_amount = total_amount + ol_amount;

    ol_dist_info = s_dist_info[d_id - 1];

    ol_amounts[itr] = ol_amount;
    ol_dist_infos[itr] = ol_dist_info;

//    TBSYS_LOG(INFO, "ol_dist_infos[%d] %p, ol_dist_info %p, s_dist_info[%d] %p", itr, ol_dist_infos[itr].ptr(),
//              ol_dist_info.ptr(), d_id, s_dist_info[d_id].ptr());
  }

  int64_t district_start_ts = tbsys::CTimeUtil::getTime();
  SelectDistrictParam select_dist_param;
  UpdateDistrictParam update_dist_param;
  select_dist_param.d_w_id_.set_int(w_id);
  select_dist_param.d_id_.set_int(d_id);
  //commit a select district;
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = select_district(select_dist_param, d_next_o_id, d_tax)))
  {
    TBSYS_LOG(TRACE, "failed to select district");
  }
  else
  {
    TBSYS_LOG(TRACE, "d_next_o_id: %d, d_tax: %lf", d_next_o_id, d_tax);
  }

  //commit a update district;
  update_dist_param.d_w_id_.set_int(w_id);
  update_dist_param.d_id_.set_int(d_id);
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = update_district(update_dist_param)))
  {
    TBSYS_LOG(TRACE, "failed to update district");
  }
  else
  {
    TBSYS_LOG(TRACE, "update district successfully");
  }

  o_id = d_next_o_id;

  //commit a replace oorder
  InsertOOrderParam insert_oorder_param;
  InsertNewOrderParam insert_neworder_param;
  InsertOrderLineParam insert_orderline_param;

  insert_oorder_param.o_id.set_int(o_id);
  insert_oorder_param.o_d_id.set_int(d_id);
  insert_oorder_param.o_w_id.set_int(w_id);
  insert_oorder_param.o_c_id.set_int(c_id);
  insert_oorder_param.o_entry_d.set_int(tbsys::CTimeUtil::getTime());
  insert_oorder_param.o_ol_cnt.set_int(o_ol_cnt);
  insert_oorder_param.o_all_local.set_int(o_all_local);
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = insert_oorder(insert_oorder_param)))
  {
    TBSYS_LOG(TRACE, "failed to insert oorder");
  }
  else
  {
    TBSYS_LOG(TRACE, "insert oorder successfully");
  }

  //commit a replace new_order
  insert_neworder_param.no_o_id_.set_int(o_id);
  insert_neworder_param.no_d_id_.set_int(d_id);
  insert_neworder_param.no_w_id_.set_int(w_id);

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = insert_neworder(insert_neworder_param)))
  {
    TBSYS_LOG(TRACE, "failed to insert neworder");
  }
  else
  {
    TBSYS_LOG(TRACE, "insert neworder successfully");
  }

  OB_STAT_INC(UPDATESERVER, UPS_PROC_IF, tbsys::CTimeUtil::getTime() - district_start_ts);

  int64_t orderline_start_ts = tbsys::CTimeUtil::getTime();
  for(int itr = 0; itr < o_ol_cnt && OB_SUCCESS == ret; ++itr)
  {
    //commit a replace order_line
    insert_orderline_param.ol_o_id_.set_int(o_id);
    insert_orderline_param.ol_d_id_.set_int(d_id);
    insert_orderline_param.ol_w_id_.set_int(w_id);
    insert_orderline_param.ol_number_.set_int(itr+1);
    insert_orderline_param.ol_i_id_.set_int(item_ids[itr]);
    insert_orderline_param.ol_supply_w_id_.set_int(supplier_w_ids[itr]);
    insert_orderline_param.ol_quantity_.set_int(order_quantities[itr]);
    insert_orderline_param.ol_amount_.set_double(ol_amounts[itr]);
    insert_orderline_param.ol_dist_info_.set_varchar(ol_dist_infos[itr]);
    if( OB_SUCCESS != ret ) {}
    else if( OB_SUCCESS != (ret = insert_orderline(insert_orderline_param)))
    {
      TBSYS_LOG(TRACE, "failed to insert orderline");
      break;
    }
    else
    {
      TBSYS_LOG(TRACE, "insert orderline successfully");
    }
  }
  OB_STAT_INC(UPDATESERVER, UPS_PROC_DW, tbsys::CTimeUtil::getTime() - orderline_start_ts);
  return ret;
}

int ObUpsNewOrder::prepare(BasicParam &param)
{
  int ret = OB_SUCCESS;
  ObUpdateServerMain *ups_main = ObUpdateServerMain::get_instance();
  bool is_final_mirror = false;
  uint64_t max_version = 0;
  table_mgr_ = ups_main? &ups_main->get_update_server().get_table_mgr() : NULL;

  if ( NULL == table_mgr_ )
  {
    TBSYS_LOG(ERROR, "table_mgr_ is NULL");
  }


  guard_ = new(guard_buf_)ITableEntity::Guard(table_mgr_->get_table_mgr()->get_resource_pool());

  table_mgr_->get_table_mgr()->acquire_table(param.version_range_,
                                             max_version /*max_valid_version*/,
                                             table_list_,
                                             is_final_mirror,
                                             param.table_id_);

  return ret;
}

int ObUpsNewOrder::close()
{
  if( NULL != guard_ )
  {
    guard_->~Guard();
    guard_ = NULL;
  }
  return OB_SUCCESS;
}

int ObUpsNewOrder::select_item(SelectItemParam &param, double &i_price, ObString &i_name, ObString &i_data)
{
  int ret = OB_SUCCESS;
  prepare(param);

  BaseSessionCtx *session_ctx = proc_->get_session_ctx();
  ITableEntity *table_entity;

  common::ObRow get_row;
  const common::ObRowkey *get_row_key;
  const common::ObRow *inc_row;

  ColumnFilter *get_column_filter = ITableEntity::get_tsi_columnfilter();

  get_column_filter->clear();
  for(int64_t i = 0; i < param.column_count_; ++i)
  {
    get_column_filter->add_column(param.column_ids_[i]);
  }

  get_row.set_row_desc(param.row_desc_);

  get_row.set_cell(param.table_id_, param.key_column_ids_[0], param.o_i_id_);

  get_row.get_rowkey(get_row_key);

  OB_ASSERT(table_list_.size() == 1);
  table_entity = *(table_list_.begin());

  ITableIterator *table_itr = NULL;
  ObRowIterAdaptor *table_row_iter = NULL;

  table_itr = table_entity->alloc_iterator(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);
  table_row_iter = table_entity->alloc_row_iter_adaptor(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);

  if( OB_SUCCESS != (ret = table_entity->get(*session_ctx,
                                             param.table_id_,
                                             *get_row_key,
                                             get_column_filter,
                                             param.lock_flag_,
                                             table_itr)) )
  {
    TBSYS_LOG(TRACE, "failed to read index");
  }
  else
  {
    table_row_iter->set_cell_iter(table_itr, param.row_desc_, false);
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = table_row_iter->open()))
  {
    TBSYS_LOG(WARN, "failed to open iter");
  }
  else if( OB_SUCCESS != (ret = table_row_iter->get_next_row(inc_row)))
  {
    TBSYS_LOG(WARN, "failed to get next row");
  }
  else
  {
    TBSYS_LOG(TRACE, "inc_row: %s", to_cstring(*inc_row));
  }

//  ObRowStore *row_store = NULL;
//  proc_->get_static_data_by_id(param.static_data_id_, row_store);
//  common::ObRow static_row;
//  static_row.set_row_desc(param.row_desc_);

//  if( OB_SUCCESS != ret ) {}
//  else if (OB_SUCCESS != (ret = row_store->get_next_row(static_row)))
//  {
//    TBSYS_LOG(WARN, "failed to get static row from store");
//  }
//  else
//  {
//    TBSYS_LOG(TRACE, "static row: %s", to_cstring(static_row));
//  }

  bool is_row_empty = false;
  common::ObRow result_row;
  result_row.set_row_desc(param.row_desc_);
  result_row.reset(false, ObRow::DEFAULT_NOP);
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
                            *inc_row, result_row, is_row_empty, true)))
  {
    TBSYS_LOG(WARN, "failed to fuse inc row");
  }
//  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
//                            static_row, result_row, is_row_empty, true)))
//  {
//    TBSYS_LOG(WARN, "failed to fuse static row");
//  }
  else
  {
    TBSYS_LOG(TRACE, "merge row: %s", to_cstring(result_row));
  }

  const ObObj *cell;
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = result_row.get_cell(param.table_id_, 18, cell)) )
  {
    TBSYS_LOG(WARN, "failed to get i_price");
  }
  else
  {
    cell->get_double(i_price);
    TBSYS_LOG(TRACE, "i_price: %lf", i_price);
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = result_row.get_cell(param.table_id_, 17, cell)))
  {
    TBSYS_LOG(WARN, "failed to get i_name");
  }
  else
  {
    cell->get_varchar(i_name);
    TBSYS_LOG(TRACE, "i_name: %.*s", i_name.length(), i_name.ptr());
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = result_row.get_cell(param.table_id_, 19, cell)))
  {
    TBSYS_LOG(WARN, "failed to get i_data");
  }
  else
  {
    cell->get_varchar(i_data);
    TBSYS_LOG(TRACE, "i_data: %.*s", i_data.length(), i_data.ptr());
  }
  close();
  return ret;
}


//select s_quantity, s_data, s_dist_01, s_dist_02, s_dist_03, s_dist_04,
//      s_dist_05, s_dist_06, s_dist_07, s_dist_08, s_dist_09, s_dist_10
//   from stock where s_i_id = @o_i_id and s_w_id = @ol_supply_w_id for update;
int ObUpsNewOrder::select_stock(SelectStockParam &stock_param,
                                int &s_quantity, ObString &s_data, ObString s_dist[])
{
  int ret = OB_SUCCESS;
  prepare(stock_param);
  /*********Read the Incremental Data****************/
  BaseSessionCtx *session_ctx = proc_->get_session_ctx();
  ITableEntity *table_entity;

  common::ObRow get_row;
  const common::ObRowkey *get_row_key;
  const common::ObRow *inc_row;

  ColumnFilter *get_column_filter = ITableEntity::get_tsi_columnfilter();

  get_column_filter->clear();
  for(int64_t i = 0; i < stock_param.column_count_; ++i)
  {
    get_column_filter->add_column(stock_param.column_ids_[i]);
  }

  get_row.set_row_desc(stock_param.row_desc_);
  get_row.set_cell(stock_param.table_id_, stock_param.key_column_ids_[0], stock_param.ol_supply_w_id_);
  get_row.set_cell(stock_param.table_id_, stock_param.key_column_ids_[1], stock_param.o_i_id_);

  get_row.get_rowkey(get_row_key);


  OB_ASSERT(table_list_.size() == 1);
  table_entity = *(table_list_.begin());

  /**
   * Define methods to get the table_iterator
   */
  ITableIterator *table_itr = NULL;
  ObRowIterAdaptor *table_row_iter = NULL;

  table_itr = table_entity->alloc_iterator(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);

  table_row_iter = table_entity->alloc_row_iter_adaptor(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);

  if( OB_SUCCESS != (ret = table_entity->get(*session_ctx, stock_param.table_id_, *get_row_key, get_column_filter, stock_param.lock_flag_, table_itr)) )
  {
    TBSYS_LOG(TRACE, "failed to read index");
  }

  table_row_iter->set_cell_iter(table_itr, stock_param.row_desc_, false);

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = table_row_iter->open()) )
  {
    TBSYS_LOG(TRACE, "failed to open iter");
  }
  else if( OB_SUCCESS != (ret = table_row_iter->get_next_row(inc_row)))
  {
    TBSYS_LOG(TRACE, "failed to get next row");
  }
  else
  {
    TBSYS_LOG(TRACE, "inc_row: %s", to_cstring(*inc_row));
  }

  /*********Read the Static Data*************/
//  ObRowStore *stock_row_store = NULL;
//  proc_->get_static_data_by_id(stock_param.static_data_id_, stock_row_store);
//  common::ObRow static_row;
//  static_row.set_row_desc(stock_param.row_desc_);
//  if( OB_SUCCESS != ret ) {}
//  else if( OB_SUCCESS != (ret = stock_row_store->get_next_row(static_row)) )
//  {
//    TBSYS_LOG(WARN, "failed to get static row from store");
//  }
//  else
//  {
//    TBSYS_LOG(TRACE, "static_row: %s", to_cstring(static_row));
//  }

  /********Merge the Incremental and Static********/
  bool is_row_empty = false;
  common::ObRow result_row;
  result_row.set_row_desc(stock_param.row_desc_);
  result_row.reset(false, ObRow::DEFAULT_NOP);
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(*inc_row, result_row, is_row_empty, true)))
  {
    TBSYS_LOG(WARN, "failed to fuse inc row");
  }
//  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(static_row, result_row, is_row_empty, true)))
//  {
//    TBSYS_LOG(WARN, "failed to fuse static row");
//  }
  else
  {
   TBSYS_LOG(TRACE, "merge result: %s", to_cstring(result_row));
  }

  /********Project input row********/
  const ObObj *cell;
  double s_tmp = 0;
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = result_row.get_cell(stock_param.table_id_, 18, cell)) )
  {
    TBSYS_LOG(WARN, "failed to get s_quantity");
  }
  else
  {
    cell->get_double(s_tmp);
    s_quantity = (int)s_tmp;
    TBSYS_LOG(TRACE, "s_quantity: %d", s_quantity);
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = result_row.get_cell(stock_param.table_id_, 22, cell)))
  {
    TBSYS_LOG(WARN, "failed to get s_data");
  }
  else
  {
    cell->get_varchar(s_data);
    TBSYS_LOG(TRACE, "s_data: %.*s", s_data.length(), s_data.ptr());
  }


  for(int i = 0; i < 10 && OB_SUCCESS == ret; ++i)
  {
    if( OB_SUCCESS != (ret = result_row.get_cell(stock_param.table_id_, 23 + i, cell)) )
    {
      TBSYS_LOG(WARN, "failed to get s_dist_info");
    }
    else
    {
      cell->get_varchar(s_dist[i]);
//      void *old_ptr = s_dist[i].ptr();
      ob_write_string(str_buf_, s_dist[i], s_dist[i]);
//      TBSYS_LOG(INFO, "s_dist[%d] %p -> %p", i, old_ptr, s_dist[i].ptr());
      TBSYS_LOG(TRACE, "s_dist_%d: %.*s", i, s_dist[i].length(), s_dist[i].ptr());
    }
  }

  /********Write back to the MemTable*******/

  close();
  return ret;
}

int ObUpsNewOrder::update_stock(UpdateStockParam &param)
{
  int ret = OB_SUCCESS;
  prepare(param);

  BaseSessionCtx *session_ctx = proc_->get_session_ctx();
  ITableEntity *table_entity;

  common::ObRow get_row;
  const common::ObRowkey *get_row_key;
  const common::ObRow *inc_row;

  ColumnFilter *get_column_filter = ITableEntity::get_tsi_columnfilter();

  get_column_filter->clear();
  for(int64_t i = 0; i < param.column_count_; ++i)
  {
    get_column_filter->add_column(param.column_ids_[i]);
  }

  get_row.set_row_desc(param.row_desc_);

  get_row.set_cell(param.table_id_, param.key_column_ids_[0], param.ol_supply_w_id_);
  get_row.set_cell(param.table_id_, param.key_column_ids_[1], param.o_i_id_);

  get_row.get_rowkey(get_row_key);

  OB_ASSERT(table_list_.size() == 1);
  table_entity = *(table_list_.begin());

  ITableIterator *table_itr = NULL;
  ObRowIterAdaptor *table_row_iter = NULL;

  table_itr = table_entity->alloc_iterator(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);
  table_row_iter = table_entity->alloc_row_iter_adaptor(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);

  if( OB_SUCCESS != (ret = table_entity->get(*session_ctx,
                                             param.table_id_,
                                             *get_row_key,
                                             get_column_filter,
                                             param.lock_flag_,
                                             table_itr)) )
  {
    TBSYS_LOG(TRACE, "failed to read index");
  }
  else
  {
    table_row_iter->set_cell_iter(table_itr, param.row_desc_, false);
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = table_row_iter->open()))
  {
    TBSYS_LOG(WARN, "failed to open iter");
  }
  else if( OB_SUCCESS != (ret = table_row_iter->get_next_row(inc_row)))
  {
    TBSYS_LOG(WARN, "failed to get next row");
  }
  else
  {
    TBSYS_LOG(TRACE, "inc_row: %s", to_cstring(*inc_row));
  }

//  ObRowStore *row_store = NULL;
//  proc_->get_static_data_by_id(param.static_data_id_, row_store);
//  common::ObRow static_row;
//  static_row.set_row_desc(param.row_desc_);

//  if( OB_SUCCESS != ret ) {}
//  else if (OB_SUCCESS != (ret = row_store->get_next_row(static_row)))
//  {
//    TBSYS_LOG(WARN, "failed to get static row from store");
//  }
//  else
//  {
//    TBSYS_LOG(TRACE, "static row: %s", to_cstring(static_row));
//  }

  bool is_row_empty = false;
  common::ObRow result_row;
  result_row.set_row_desc(param.row_desc_);
  result_row.reset(false, ObRow::DEFAULT_NOP);
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
                            *inc_row, result_row, is_row_empty, true)))
  {
    TBSYS_LOG(WARN, "failed to fuse inc row");
  }
//  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
//                            static_row, result_row, is_row_empty, true)))
//  {
//    TBSYS_LOG(WARN, "failed to fuse static row");
//  }
  else
  {
    TBSYS_LOG(TRACE, "merge row: %s", to_cstring(result_row));

    //project and generate new input
    const ObObj *cell;

    result_row.set_cell(param.table_id_, 18, param.s_quantity_);

    result_row.get_cell(param.table_id_, 19, cell);
    add_double(param.o_quantity_, *cell);
    result_row.set_cell(param.table_id_, 19, param.o_quantity_);

    result_row.get_cell(param.table_id_, 20, cell);
    ObObj tmp;
    tmp.set_int(1);
    add_int(tmp, *cell);
    result_row.set_cell(param.table_id_, 20, tmp);

    result_row.get_cell(param.table_id_, 21, cell);
    add_int(param.s_remote_cnt_increment_, *cell);
    result_row.set_cell(param.table_id_, 21, param.s_remote_cnt_increment_);

    result_row.set_row_desc(param.write_desc_);
  }

  //write back the result_row;
  TBSYS_LOG(TRACE, "result_row: %s", to_cstring(result_row));
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = write_row(dynamic_cast<RWSessionCtx&>(*session_ctx),result_row, param.write_desc_)) )
  {
    TBSYS_LOG(TRACE, "failed to write row");
  }
  close();
  return ret;
}

int ObUpsNewOrder::select_district(SelectDistrictParam &param, int &d_next_o_id, double &d_tax)
{
  int ret = OB_SUCCESS;
  prepare(param);

  BaseSessionCtx *session_ctx = proc_->get_session_ctx();
  ITableEntity *table_entity;

  common::ObRow get_row;
  const common::ObRowkey *get_row_key;
  const common::ObRow *inc_row;

  ColumnFilter *get_column_filter = ITableEntity::get_tsi_columnfilter();

  get_column_filter->clear();
  for(int64_t i = 0; i < param.column_count_; ++i)
  {
    get_column_filter->add_column(param.column_ids_[i]);
  }

  get_row.set_row_desc(param.row_desc_);

  get_row.set_cell(param.table_id_, param.key_column_ids_[0], param.d_w_id_);
  get_row.set_cell(param.table_id_, param.key_column_ids_[1], param.d_id_);

  get_row.get_rowkey(get_row_key);

  OB_ASSERT(table_list_.size() == 1);
  table_entity = *(table_list_.begin());

  ITableIterator *table_itr = NULL;
  ObRowIterAdaptor *table_row_iter = NULL;

  table_itr = table_entity->alloc_iterator(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);
  table_row_iter = table_entity->alloc_row_iter_adaptor(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);

  if( OB_SUCCESS != (ret = table_entity->get(*session_ctx,
                                             param.table_id_,
                                             *get_row_key,
                                             get_column_filter,
                                             param.lock_flag_,
                                             table_itr)) )
  {
    TBSYS_LOG(TRACE, "failed to read index");
  }
  else
  {
    table_row_iter->set_cell_iter(table_itr, param.row_desc_, false);
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = table_row_iter->open()))
  {
    TBSYS_LOG(WARN, "failed to open iter");
  }
  else if( OB_SUCCESS != (ret = table_row_iter->get_next_row(inc_row)))
  {
    TBSYS_LOG(WARN, "failed to get next row");
  }
  else
  {
    TBSYS_LOG(TRACE, "inc_row: %s", to_cstring(*inc_row));
  }

//  ObRowStore *row_store = NULL;
//  proc_->get_static_data_by_id(param.static_data_id_, row_store);
//  common::ObRow static_row;
//  static_row.set_row_desc(param.row_desc_);

//  if( OB_SUCCESS != ret ) {}
//  else if (OB_SUCCESS != (ret = row_store->get_next_row(static_row)))
//  {
//    TBSYS_LOG(WARN, "failed to get static row from store");
//  }
//  else
//  {
//    TBSYS_LOG(TRACE, "static row: %s", to_cstring(static_row));
//  }

  bool is_row_empty = false;
  common::ObRow result_row;
  result_row.set_row_desc(param.row_desc_);
  result_row.reset(false, ObRow::DEFAULT_NOP);
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
                            *inc_row, result_row, is_row_empty, true)))
  {
    TBSYS_LOG(WARN, "failed to fuse inc row");
  }
//  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
//                            static_row, result_row, is_row_empty, true)))
//  {
//    TBSYS_LOG(WARN, "failed to fuse static row");
//  }
  else
  {
    TBSYS_LOG(TRACE, "merge row: %s", to_cstring(result_row));
  }

  const ObObj *cell;
  int64_t i_tmp = 0;
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = result_row.get_cell(param.table_id_, 20, cell)) )
  {
    TBSYS_LOG(WARN, "failed to get d_next_o_id");
  }
  else
  {
    cell->get_int(i_tmp);
    d_next_o_id = (int)i_tmp;
    TBSYS_LOG(TRACE, "d_next_o_id: %d", d_next_o_id);
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = result_row.get_cell(param.table_id_, 19, cell)))
  {
    TBSYS_LOG(WARN, "failed to get d_tax");
  }
  else
  {
    cell->get_double(d_tax);
    TBSYS_LOG(TRACE, "d_tax: %lf", d_tax);
  }
  close();
  return ret;
}

int ObUpsNewOrder::update_district(UpdateDistrictParam &param)
{
  int ret = OB_SUCCESS;
  prepare(param);

  BaseSessionCtx *session_ctx = proc_->get_session_ctx();
  ITableEntity *table_entity;

  common::ObRow get_row;
  const common::ObRowkey *get_row_key;
  const common::ObRow *inc_row;

  ColumnFilter *get_column_filter = ITableEntity::get_tsi_columnfilter();

  get_column_filter->clear();
  for(int64_t i = 0; i < param.column_count_; ++i)
  {
    get_column_filter->add_column(param.column_ids_[i]);
  }

  get_row.set_row_desc(param.row_desc_);

  get_row.set_cell(param.table_id_, param.key_column_ids_[0], param.d_w_id_);
  get_row.set_cell(param.table_id_, param.key_column_ids_[1], param.d_id_);

  get_row.get_rowkey(get_row_key);

  OB_ASSERT(table_list_.size() == 1);
  table_entity = *(table_list_.begin());

  ITableIterator *table_itr = NULL;
  ObRowIterAdaptor *table_row_iter = NULL;

  table_itr = table_entity->alloc_iterator(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);
  table_row_iter = table_entity->alloc_row_iter_adaptor(table_mgr_->get_table_mgr()->get_resource_pool(), *guard_);

  if( OB_SUCCESS != (ret = table_entity->get(*session_ctx,
                                             param.table_id_,
                                             *get_row_key,
                                             get_column_filter,
                                             param.lock_flag_,
                                             table_itr)) )
  {
    TBSYS_LOG(TRACE, "failed to read index");
  }
  else
  {
    table_row_iter->set_cell_iter(table_itr, param.row_desc_, false);
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = table_row_iter->open()))
  {
    TBSYS_LOG(WARN, "failed to open iter");
  }
  else if( OB_SUCCESS != (ret = table_row_iter->get_next_row(inc_row)))
  {
    TBSYS_LOG(WARN, "failed to get next row");
  }
  else
  {
    TBSYS_LOG(TRACE, "inc_row: %s", to_cstring(*inc_row));
  }

//  ObRowStore *row_store = NULL;
//  proc_->get_static_data_by_id(param.static_data_id_, row_store);
//  common::ObRow static_row;
//  static_row.set_row_desc(param.row_desc_);

//  if( OB_SUCCESS != ret ) {}
//  else if (OB_SUCCESS != (ret = row_store->get_next_row(static_row)))
//  {
//    TBSYS_LOG(WARN, "failed to get static row from store");
//  }
//  else
//  {
//    TBSYS_LOG(TRACE, "static row: %s", to_cstring(static_row));
//  }

  bool is_row_empty = false;
  common::ObRow result_row;
  result_row.set_row_desc(param.row_desc_);
  result_row.reset(false, ObRow::DEFAULT_NOP);
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
                            *inc_row, result_row, is_row_empty, true)))
  {
    TBSYS_LOG(WARN, "failed to fuse inc row");
  }
//  else if( OB_SUCCESS != (ret = common::ObRowFuse::fuse_row(
//                            static_row, result_row, is_row_empty, true)))
//  {
//    TBSYS_LOG(WARN, "failed to fuse static row");
//  }
  else
  {
    TBSYS_LOG(TRACE, "merge row: %s", to_cstring(result_row));

    //project and generate new input
    const ObObj *cell;
    ObObj next_o_id;

    next_o_id.set_int(1);

    result_row.get_cell(param.table_id_, 20, cell);
    add_int(next_o_id, *cell);
    result_row.set_cell(param.table_id_, 20, next_o_id);


    result_row.set_row_desc(param.write_desc_);
  }

  //write back the result_row;
  TBSYS_LOG(TRACE, "result_row: %s", to_cstring(result_row));
  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = write_row(dynamic_cast<RWSessionCtx&>(*session_ctx),result_row, param.write_desc_)) )
  {
    TBSYS_LOG(WARN, "failed to write row");
  }
  close();
  return ret;
}

int ObUpsNewOrder::insert_oorder(InsertOOrderParam &param)
{
  int ret = OB_SUCCESS;
  common::ObRow result_row;
  BaseSessionCtx *ctx = proc_->get_session_ctx();
  result_row.set_row_desc(param.row_desc_);

  result_row.set_cell(param.table_id_, 16, param.o_w_id);
  result_row.set_cell(param.table_id_, 17, param.o_d_id);
  result_row.set_cell(param.table_id_, 18, param.o_id);
  result_row.set_cell(param.table_id_, 19, param.o_c_id);
  result_row.set_cell(param.table_id_, 23, param.o_entry_d);
  result_row.set_cell(param.table_id_, 21, param.o_ol_cnt);
  result_row.set_cell(param.table_id_, 22, param.o_all_local);

  TBSYS_LOG(TRACE, "result_row: %s", to_cstring(result_row));
  if( OB_SUCCESS != (ret = write_row(dynamic_cast<RWSessionCtx&>(*ctx), result_row, param.row_desc_)))
  {
    TBSYS_LOG(WARN, "failed to write row");
  }
  return ret;
}

int ObUpsNewOrder::insert_neworder(InsertNewOrderParam &param)
{
  int ret = OB_SUCCESS;
  common::ObRow result_row;
  BaseSessionCtx *ctx = proc_->get_session_ctx();
  result_row.set_row_desc(param.row_desc_);

  result_row.set_cell(param.table_id_, 16, param.no_w_id_);
  result_row.set_cell(param.table_id_, 17, param.no_d_id_);
  result_row.set_cell(param.table_id_, 18, param.no_o_id_);

  TBSYS_LOG(TRACE, "result_row: %s", to_cstring(result_row));
  if( OB_SUCCESS != (ret = write_row(dynamic_cast<RWSessionCtx&>(*ctx), result_row, param.row_desc_)))
  {
    TBSYS_LOG(WARN, "failed to write row");
  }
  return ret;
}

int ObUpsNewOrder::insert_orderline(InsertOrderLineParam &param)
{
  int ret = OB_SUCCESS;
  common::ObRow result_row;
  BaseSessionCtx *ctx = proc_->get_session_ctx();
  result_row.set_row_desc(param.row_desc_);

  result_row.set_cell(param.table_id_, 16, param.ol_w_id_);
  result_row.set_cell(param.table_id_, 17, param.ol_d_id_);
  result_row.set_cell(param.table_id_, 18, param.ol_o_id_);
  result_row.set_cell(param.table_id_, 19, param.ol_number_);
  result_row.set_cell(param.table_id_, 20, param.ol_i_id_);
  result_row.set_cell(param.table_id_, 23, param.ol_supply_w_id_);
  result_row.set_cell(param.table_id_, 24, param.ol_quantity_);
  result_row.set_cell(param.table_id_, 22, param.ol_amount_);
  result_row.set_cell(param.table_id_, 25, param.ol_dist_info_);

  TBSYS_LOG(TRACE, "result_row: %s", to_cstring(result_row));
  if( OB_SUCCESS != (ret = write_row(dynamic_cast<RWSessionCtx&>(*ctx), result_row, param.row_desc_)))
  {
    TBSYS_LOG(WARN, "failed to write row");
  }
  return ret;
}

int ObUpsNewOrder::write_row(RWSessionCtx &ctx, const ObRow &row, const ObRowDesc &row_desc)
{
  int ret = OB_SUCCESS;
  UpsSchemaMgrGuard sm_guard;
  const ObSchemaManagerV2 *schem_mgr = table_mgr_->get_schema_mgr().get_schema_mgr(sm_guard);

  cia_.reset();
  cia_.get_och().reset(row_desc, *schem_mgr);
  cia_.set_row(&row, row_desc.get_rowkey_cell_count());

  if( OB_SUCCESS != (ret = table_mgr_->apply(
                       ctx,
                       cia_,
                       OB_DML_UPDATE)) )
  {
    TBSYS_LOG(WARN, "failed to write memtable");
  }
  return ret;
}

SpUpsInstExecStrategy::SpUpsInstExecStrategy()
{
  inst_handler[SP_E_INST] = pexecute_expr;
  inst_handler[SP_C_INST] = pexecute_if_ctrl;
  inst_handler[SP_L_INST] = pexecute_loop;
  inst_handler[SP_B_INST] = NULL;
  inst_handler[SP_D_INST] = pexecute_rw_delta;
  inst_handler[SP_DE_INST] = pexecute_rw_delta_into_var;
  inst_handler[SP_A_INST] = NULL;
  inst_handler[SP_BLOCK_INST] = pexecute_block;
  inst_handler[SP_CW_INST] = pexecute_casewhen;
}

int SpUpsInstExecStrategy::pexecute_expr(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_expr(static_cast<SpExprInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_rw_delta(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_rw_delta(static_cast<SpRwDeltaInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_rw_delta_into_var(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_rw_delta_into_var(static_cast<SpRwDeltaIntoVarInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_if_ctrl(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_if_ctrl(static_cast<SpIfCtrlInsts*>(inst));
}

int SpUpsInstExecStrategy::pexecute_loop(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_ups_loop(static_cast<SpUpsLoopInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_casewhen(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_casewhen(static_cast<SpCaseInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_block(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_block(static_cast<SpBlockInsts*>(inst));
}

//int SpUpsInstExecStrategy::execute_inst(SpInst *inst)
//{
//  int ret = OB_SUCCESS;
//  SpInstType type = inst->get_type();
//  TBSYS_LOG(TRACE, "execute inst[%ld]", i);
//  switch(type)
//  {
//  case SP_E_INST:
//    ret = execute_expr(static_cast<SpExprInst*>(inst));
//    break;
//  case SP_D_INST:
//    ret = execute_rw_delta(static_cast<SpRwDeltaInst*>(inst));
//    break;
//  case SP_DE_INST:
//    ret = execute_rw_delta_into_var(static_cast<SpRwDeltaIntoVarInst*>(inst));
//    break;
//  case SP_C_INST:
//    ret = execute_if_ctrl(static_cast<SpIfCtrlInsts*>(inst));
//    break;
//  case SP_L_INST:
//    ret = execute_ups_loop(static_cast<SpUpsLoopInst*>(inst));
//    break;
//  default:
//    ret = OB_NOT_SUPPORTED;
////    TBSYS_LOG(WARN, "Unsupport execute inst[%d] on updateserver", type);
//    break;
//  }
//  ret = inst_handler[inst->get_type()](inst);
//  return ret;
//}

int SpUpsInstExecStrategy::execute_expr(SpExprInst *inst)
{
  int ret = OB_SUCCESS;
  int64_t start_ts = tbsys::CTimeUtil::getTime();
//  TBSYS_LOG(TRACE, "expr plan: \n%s", to_cstring(inst->get_val()));
  common::ObRow input_row;
  const ObObj *val = NULL;
  if((ret= inst->get_val().calc(input_row, val))!=OB_SUCCESS)
  {
//    TBSYS_LOG(WARN, "sp expr compute failed");
  }
  //update the varialbe here
  else if ( OB_SUCCESS != (ret = inst->get_ownner()->write_variable(inst->get_var(), *val)) )
  {}
  OB_STAT_INC(UPDATESERVER, UPS_PROC_E, tbsys::CTimeUtil::getTime() - start_ts);
  return ret;
}

int SpUpsInstExecStrategy::execute_rw_delta(SpRwDeltaInst *inst)
{
  int ret = OB_SUCCESS;
  int err = OB_SUCCESS;
  //it should be a ObUpsModify
//  TBSYS_LOG(TRACE, "rw delta inst plan: \n%s", to_cstring(*(inst->get_rwdelta_op())));
  int64_t start_ts = tbsys::CTimeUtil::getTime();
  if( OB_SUCCESS != (ret = inst->get_rwdelta_op()->open()) )
  {
//    TBSYS_LOG(WARN, "execute rw_delta_inst on ups");
  }

  if ( OB_SUCCESS != (err = inst->get_rwdelta_op()->close() ))
  {
    if( OB_SUCCESS == ret )
    {
      ret = err;
    }
  }

  OB_STAT_INC(UPDATESERVER, UPS_PROC_D, tbsys::CTimeUtil::getTime() - start_ts);
  return ret;
}

int SpUpsInstExecStrategy::execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst)
{
  int ret = OB_SUCCESS, err = OB_SUCCESS;
  int64_t start_ts = tbsys::CTimeUtil::getTime();
  const common::ObRow *row;
  ObPhyOperator *op = inst->get_rwdelta_op();
  const ObIArray<SpVar> &var_list_ = inst->get_var_list();
  SpProcedure *proc = inst->get_ownner();
//  TBSYS_LOG(TRACE, "rw_delta_into_var inst plan: \n%s", to_cstring(*op_));
  if(NULL != op)
  {
    if( OB_SUCCESS != (ret = op->open()) )
    {
//      TBSYS_LOG(WARN, "failed to open read_delta_into_var operator");
    }
    else if( OB_SUCCESS != (ret = op->get_next_row(row)) )
    {
//      TBSYS_LOG(WARN, "failed to get next row");
    }
//    else
//    {
//      TBSYS_LOG(INFO, "read row: [%s]", to_cstring(*row));
//    }

  OB_STAT_INC(UPDATESERVER, UPS_PROC_DW, tbsys::CTimeUtil::getTime() - start_ts);
    if( ret == OB_SUCCESS )
    {
      for(int64_t i = 0; i < var_list_.count() && OB_SUCCESS == ret; ++i)
      {
        const SpVar &var = var_list_.at(i);
        const ObObj *cell = NULL;
        if(OB_SUCCESS !=(ret=row->raw_get_cell(i, cell)))
        {
//          TBSYS_LOG(WARN, "raw_get_cell %ld failed", i);
        }
        else if(OB_SUCCESS !=(proc->write_variable(var, *cell)))
        {
//          TBSYS_LOG(WARN, "write into variables fail");
        }

      }
    }

    if ( OB_SUCCESS != (err = op->close() ))
    {
      if( OB_SUCCESS == ret )
      {
        ret = err;
      }
    }
  }
  return ret;
}

int SpUpsInstExecStrategy::execute_block(SpBlockInsts* inst)
{
  int ret = OB_SUCCESS;
  ObIArray<SpInst*>& inst_list_ = inst->get_inst_list();
//  const SpProcedure *proc_ = inst->get_ownner();
  for(int64_t i = 0; i < inst_list_.count() && OB_SUCCESS == ret; ++i)
  {
//    TBSYS_LOG(TRACE, "execute inst[%ld]", i);
    if( OB_SUCCESS != (ret = execute_inst(inst_list_.at(i))) )
    {
//      TBSYS_LOG(WARN, "execute instruction fail idx[%ld]", i);
    }
  }
  return ret;
}

int SpUpsInstExecStrategy::execute_if_ctrl(SpIfCtrlInsts *inst)
{
  int ret = OB_SUCCESS;
  int64_t start_ts = tbsys::CTimeUtil::getTime();
  common::ObRow fake_row;
  const ObObj *flag = NULL;
//  TBSYS_LOG(TRACE, "if_ctrl inst:\n%s", to_cstring(inst->get_if_expr()));
  if(OB_SUCCESS != (ret = inst->get_if_expr().calc(fake_row, flag)) )
  {
//    TBSYS_LOG(WARN, "if expr evalute failed");
  }
  OB_STAT_INC(UPDATESERVER, UPS_PROC_IF, tbsys::CTimeUtil::getTime() - start_ts);
  if( OB_SUCCESS != ret ) {}
  else if( flag->is_true() )
  { //execute the then branch
    if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_then_block())) )
    {
//      TBSYS_LOG(WARN, "execute then block fail");
    }
  }
  else
  { //execute the fail branch
    if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_else_block())) )
    {
//      TBSYS_LOG(WARN, "execute else block fail");
    }
  }
  return ret;
}

int SpUpsInstExecStrategy::execute_multi_inst(SpMultiInsts *mul_inst)
{
  int ret = OB_SUCCESS;
  int64_t pc = 0;
  for(; pc < mul_inst->inst_count() && OB_SUCCESS == ret; ++pc)
  {
    SpInst *inst = NULL;
    mul_inst->get_inst(pc, inst);
    if( inst != NULL )
    {
      ret = execute_inst(inst);
    }
    else
    {
      ret = OB_ERR_ILLEGAL_INDEX;
//      TBSYS_LOG(WARN, "does not fetch inst[%ld]", pc);
    }
  }
  return ret;
}

//int SpUpsInstExecStrategy::execute_ups_loop(SpUpsLoopInst *inst)
//{
//  int ret = OB_SUCCESS;
//  int64_t start_ts = tbsys::CTimeUtil::getTime();
//  ObObj itr_obj;
//  int64_t current_value = inst->get_lowest_number();
//  const SpVar & var = inst->get_loop_counter_var();
//  for(int64_t i = 0; OB_SUCCESS == ret && i < inst->get_iteration_count(); ++i, ++current_value)
//  {
//    SpMultiInsts & loop_body_itr = inst->get_loop_body(i);
//    itr_obj.set_int(current_value);
//    if( OB_SUCCESS != (ret = inst->get_ownner()->write_variable(var, itr_obj)) )
//    {
////      TBSYS_LOG(WARN, "update loop couter var failed");
//    }
//    if( OB_SUCCESS != (ret = execute_multi_inst(&loop_body_itr)) )
//    {
////      TBSYS_LOG(WARN, "execute loop inst failed at iteration: %ld", i);
//    }
//  }
//  OB_STAT_INC(UPDATESERVER, UPS_PROC_LOOP, tbsys::CTimeUtil::getTime() - start_ts);
//  return ret;
//}


int SpUpsInstExecStrategy::execute_ups_loop(SpUpsLoopInst *inst)
{
  int ret = OB_SUCCESS;

  ObObj itr_obj;
  int64_t itr_value = inst->get_lowest_number();
  int64_t loop_size = inst->get_highest_number() - itr_value;
//  int64_t body_size  = inst->get_body_size();
  const SpVar &loop_var = inst->get_loop_counter_var();

//  int64_t expanded_inst_itr = 0;
  for(int64_t i = 0; OB_SUCCESS == ret && i < loop_size; ++i)
  {
    itr_obj.set_int(itr_value++);
    if( OB_SUCCESS != (ret = inst->get_ownner()->write_variable(loop_var, itr_obj)) )
    {
//      TBSYS_LOG(WARN, "update loop counter var failed");
    }

    if( OB_SUCCESS != ret ) {}
    else if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_loop_body())) )
    {
//      TBSYS_LOG(WARN, "failed to execute loop body");
    }
/*    for(int64_t j = 0; OB_SUCCESS == ret && j < body_size; ++j)
    {
      SpInst *exec_inst = NULL;
      if( inst->get_flag(j) || i == 0 )
      {
        exec_inst = inst->get_inst(expanded_inst_itr);
        ++expanded_inst_itr;
      }
      else
      {
        exec_inst = inst->get_inst(j);
      }

      if( OB_SUCCESS != (ret = execute_inst(exec_inst)) )
      {
        TBSYS_LOG(WARN, "execute loop inst failed at itr[%ld] idx[%ld]", i, j);
      }
      //need not to explicitly close, open will reset temp var
//      else if( exec_inst->get_type() == SP_D_INST && !inst->get_flag(j) )
//      {
//        static_cast<SpRwDeltaInst*>(exec_inst)->get_rwdelta_op()->close();
//      }
    }*/
  }
  return ret;
}

/*============================================================================
 *                     SpUpsCaseInst  Definition
 * ==========================================================================*/
int SpUpsInstExecStrategy::execute_casewhen(SpCaseInst *inst)
{
  int ret = OB_SUCCESS;
  common::ObRow fake_row;
  const ObObj *flag = NULL;
  const ObObj *when_value = NULL;
  bool else_flag = true;
  if(OB_SUCCESS != (ret = inst->get_case_expr().calc(fake_row, flag)) )
  {
    TBSYS_LOG(WARN, "fail to execute case expr");
  }
  else
  {
    for( int64_t i = 0; i < inst->get_when_count(); i++ )
    {
      SpWhenBlock *when_block = inst->get_when_block(i);
      if(OB_SUCCESS != (ret = when_block->get_when_expr().calc(fake_row, when_value)))
      {
        TBSYS_LOG(WARN, "fail to compute when expr at %ld", i);
      }
      else if( when_value->compare(*flag) == 0 )
      {
        TBSYS_LOG(TRACE, "get into when block %ld", i);
        if( OB_SUCCESS != (ret = execute_multi_inst(when_block)) )
        {
          TBSYS_LOG(WARN, "fail to execute when block[%ld]", i);
        }
        else_flag = false;
        break;
      }
    }
    if( else_flag )
    {
      if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_else_block())) )
      {
        TBSYS_LOG(WARN, "fail to execute else block");
      }
    }
  }
  return ret;
}

/*============================================================================
 *                     SpUpsLoopInst  Definition
 * ==========================================================================*/
SpUpsLoopInst::~SpUpsLoopInst()
{}

//int SpUpsLoopInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
//{
//  int ret = OB_SUCCESS;
//  int64_t itr_count = 0;
//  if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &lowest_number_)) )
//  {
////    TBSYS_LOG(WARN, "deserialize lowest number failed");
//  }
//  else if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &highest_number_)))
//  {
////    TBSYS_LOG(WARN, "deserialize highest number failed");
//  }
//  else if( OB_SUCCESS != (ret = loop_counter_var_.deserialize(buf, data_len, pos)) )
//  {
////    TBSYS_LOG(WARN, "deserialize loop counter variable failed");
//  }
//  else
//  {
////    TBSYS_LOG(TRACE, "expanded loop iteration %s in (%ld  %ld)", to_cstring(loop_counter_var_), lowest_number_, highest_number_);
//    itr_count = highest_number_ - lowest_number_;
//    expanded_loop_body_.reserve(itr_count);
//  }
//  for(int64_t i = 0; OB_SUCCESS == ret && i < itr_count; ++i)
//  {
//    SpMultiInsts mul_inst(this);
//    if( OB_SUCCESS != (ret = expanded_loop_body_.push_back(mul_inst)) )
//    {
////      TBSYS_LOG(WARN, "add iteration failed");
//    }
//    else if( OB_SUCCESS != (ret = expanded_loop_body_.at(expanded_loop_body_.count() - 1).
//                            deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory)) )
//    {
////      TBSYS_LOG(WARN, "deserialize loop body failed at iteration: %ld", i);
//    }
//  }
//  return ret;
//}

int SpUpsLoopInst::deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
//  int64_t itr_count = 0;
  if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &lowest_number_)) )
  {
//    TBSYS_LOG(WARN, "deserialize lowest number failed");
  }
  else if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &highest_number_)))
  {
//    TBSYS_LOG(WARN, "deserialize highest number failed");
  }
  else if( OB_SUCCESS != (ret = loop_counter_var_.deserialize(buf, data_len, pos)) )
  {
//    TBSYS_LOG(WARN, "deserialize loop counter variable failed");
  }
  else if( OB_SUCCESS != (ret = deserialize_loop_template(buf, data_len, pos, allocator, operators_store, op_factory)))
  {
//    TBSYS_LOG(TRACE, "expanded loop iteration %s in (%ld  %ld)", to_cstring(loop_counter_var_), lowest_number_, highest_number_);
//    itr_count = highest_number_ - lowest_number_;
//    expanded_loop_body_.reserve(itr_count);
  }
  return ret;
}

int SpUpsLoopInst::deserialize_loop_body(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  int64_t end_flag = 0;
  int64_t body_inst_count = 0;
  if( OB_SUCCESS != (ret = serialization::decode_i64(buf, data_len, pos, &body_inst_count)))
  {
  }
  else
  {
    bool flag = false;
    flags.reserve(body_inst_count);
    for(int64_t i = 0; OB_SUCCESS == ret && i < body_inst_count; ++i)
    {
      ret = serialization::decode_bool(buf, data_len, pos, &flag);
      flags.push_back(flag);
    }
  }

  if( OB_SUCCESS != ret ) {}
  else if( OB_SUCCESS != (ret = expanded_loop_body_.
        deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory)))
  {
    TBSYS_LOG(WARN,	"deserialize expanded loop_body_ failed");
  }
  serialization::decode_i64(buf, data_len, pos, &end_flag);
  OB_ASSERT(end_flag == 1723);
  return ret;
}

int SpUpsLoopInst::deserialize_loop_template(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory)
{
  int ret = OB_SUCCESS;
  if( OB_SUCCESS != (ret = expanded_loop_body_.deserialize_inst(buf, data_len, pos, allocator, operators_store, op_factory)))
  {
    TBSYS_LOG(WARN, "failed to deserialize loop_body");
  }
  return ret;
}

int SpUpsLoopInst::serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const
{
  UNUSED(buf);
  UNUSED(buf_len);
  UNUSED(pos);
  return OB_NOT_SUPPORTED;
}

int64_t SpUpsLoopInst::to_string(char *buf, const int64_t buf_len) const
{
  UNUSED(buf);
  UNUSED(buf_len);
  return 0ll;
}

int SpUpsLoopInst::assign(const SpInst *inst)
{
  UNUSED(inst);
  return OB_NOT_SUPPORTED;
}

/*============================================================================
 *                    ObUpsProcedure  Definition
 * ==========================================================================*/
ObUpsProcedure::ObUpsProcedure(BaseSessionCtx &session_ctx) :
  is_var_tab_created(false),
  block_allocator_(SMALL_BLOCK_SIZE, common::OB_MALLOC_BLOCK_SIZE),
  var_name_val_map_allocer_(SMALL_BLOCK_SIZE, ObWrapperAllocator(&block_allocator_)),
  name_pool_(), static_ptr_(0), session_ctx_(&session_ctx)
{}

ObUpsProcedure::~ObUpsProcedure()
{
  reset();
//  TBSYS_LOG(INFO, "release ob_ups_procedure");
}

int ObUpsProcedure::create_variable_table()
{
  return var_name_val_map_.create(hash::cal_next_prime(16), &var_name_val_map_allocer_, &block_allocator_);
}

int ObUpsProcedure::open()
{
  int ret = OB_SUCCESS;
  SpUpsInstExecStrategy strategy;
  int64_t start_proc_exec_ts = tbsys::CTimeUtil::getTime();
//  TBSYS_LOG(TRACE, "UpsProcedure open, inst list:\n %s", to_cstring(*this));
  pc_ = 0;
  //we need only to execute the block instructions

  SpBlockInsts *inst = dynamic_cast<SpBlockInsts*>(inst_list_.at(0));
  if( inst->get_name().compare(ObString::make_string("neworder")) == 0 )
  {
    int64_t tmp = 0;
    int w_id;
    int d_id;
    int c_id;
    int item_ids[16];
    double i_prices[16];
    int supplier_w_ids[16];
    int order_quantities[16];
    int o_ol_cnt;
    int o_all_local;

    const ObObj *val;
    this->read_variable(ObString::make_string("__w_id"), val);
    val->get_int(tmp); w_id = (int)tmp;
    this->read_variable(ObString::make_string("__d_id"), val);
    val->get_int(tmp); d_id = (int)tmp;
    this->read_variable(ObString::make_string("__c_id"), val);
    val->get_int(tmp); c_id = (int)tmp;
    this->read_variable(ObString::make_string("__o_ol_cnt"), val);
    val->get_int(tmp); o_ol_cnt =(int)tmp;
    this->read_variable(ObString::make_string("__o_all_local"), val);
    val->get_int(tmp); o_all_local = (int)tmp;

    for(int64_t i = 0; i < o_ol_cnt; ++i)
    {
      this->read_variable(ObString::make_string("__item_ids"), i, val);
      val->get_int(tmp); item_ids[i] = (int)tmp;
//      this->read_variable(ObString::make_string("__i_prices"), i, val);
//      val->get_double(i_prices[i]);
      this->read_variable(ObString::make_string("__supplier_wids"), i, val);
      val->get_int(tmp); supplier_w_ids[i] = (int)tmp;
      this->read_variable(ObString::make_string("__order_quantities"), i, val);
      val->get_int(tmp); order_quantities[i] = (int)tmp;
    }
    ObUpsNewOrder neworder(this);
    ret = neworder.execute(w_id, d_id, c_id, item_ids, i_prices, supplier_w_ids, order_quantities, o_ol_cnt, o_all_local);
  }
  else
  {
    ret = strategy.execute_block(inst);
  }

  int64_t cost_ts = tbsys::CTimeUtil::getTime() - start_proc_exec_ts;
  OB_STAT_INC(UPDATESERVER, UPS_PROC_EXEC_COUNT, 1);
  OB_STAT_INC(UPDATESERVER, UPS_PROC_EXEC_TIME, cost_ts);
  return ret;
}

int ObUpsProcedure::close()
{
  return OB_SUCCESS;
}

void ObUpsProcedure::reset()
{
  pc_ = 0;

  for(int64_t i = 0; i < static_store_.count(); ++i)
  {
    static_store_.at(i)->store.clear();
  }

  static_store_.clear();
  static_store_area_.free();
  static_ptr_ = 0;

  SpProcedure::reset();
  name_pool_.clear();
  var_name_val_map_.destroy();
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
//      TBSYS_LOG(WARN, "create variable table fail, ret=%d", ret);
    }
    else
    {
//      TBSYS_LOG(TRACE, "create var table successful");
      is_var_tab_created = true;
    }
  }
  if( OB_SUCCESS != ret )
  {}
  else if (var_name.length() <= 0)
  {
    ret = OB_ERROR;
//    TBSYS_LOG(ERROR, "Empty variable name");
  }
  else if ((ret = name_pool_.write_string(var_name, &tmp_var)) != OB_SUCCESS
           || (ret = name_pool_.write_obj(val, &tmp_val)) != OB_SUCCESS
           || ((ret = var_name_val_map_.set(tmp_var, tmp_val, 1)) != hash::HASH_INSERT_SUCC
               && ret != hash::HASH_OVERWRITE_SUCC))
  {
    ret = OB_ERROR;
//    TBSYS_LOG(ERROR, "Add variable %.*s error", var_name.length(), var_name.ptr());
  }
  else
  {
    TBSYS_LOG(TRACE, "write variable %.*s = %s", var_name.length(), var_name.ptr(), to_cstring(val));
    ret = OB_SUCCESS;
  }
  return ret;
}

int ObUpsProcedure::write_variable(const SpVar &var, const ObObj &val)
{
  int ret = OB_SUCCESS;
  if( !var.is_array() )
  {
    ret = write_variable(var.var_name_, val);
  }
  else //write array variables
  {
    int64_t idx = 0;
    if( OB_SUCCESS != (ret = read_index_value(var.idx_value_, idx)))
    {
//      TBSYS_LOG(WARN, "read index value failed");
    }
    else if( OB_SUCCESS != (ret = write_variable(var.var_name_, idx, val)))
    {
      TBSYS_LOG(WARN, "write %.*s[%ld] = %s failed", var.var_name_.length(), var.var_name_.ptr(), idx, to_cstring(val));
    }
  }
  return ret;
}

int ObUpsProcedure::write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val)
{
  int ret = OB_SUCCESS;
  bool find = false;

  //check array existence
  const ObObj *array_loc_obj;
  if( OB_SUCCESS != (ret = read_variable(array_name, array_loc_obj)) )
  {
    //array is not created
  }
  else
  {
    int64_t array_loc = -1;
    find = true;
    array_loc_obj->get_int(array_loc);
    ObUpsArray &array = array_table_.at(array_loc);
    if( idx_value < 0 )
    {
      ret = OB_ERR_ILLEGAL_INDEX;
    }
    else if( idx_value >= array.array_values_.count() )
    {
      while( OB_SUCCESS == ret && idx_value >= array.array_values_.count() )
      {
        ObObj tmp_obj;
        tmp_obj.set_null();
        ret = array.array_values_.push_back(tmp_obj);
      }
    }
    if( OB_SUCCESS == ret )
    {
      array.array_values_.at(idx_value) = val;
    }
  }

  if ( !find && OB_ERR_VARIABLE_UNKNOWN == ret )
  {
    ObUpsArray tmp_array;
    ObObj loc;
    tmp_array.array_name_ = array_name;
    array_table_.push_back(tmp_array);
    loc.set_int(array_table_.count() - 1);
    ObUpsArray &array = array_table_.at(array_table_.count() - 1);
    if( OB_SUCCESS != (ret = write_variable(array_name, loc)))
    {
      //udpate array_name location fail
    }
    else if( idx_value < 0 )
    {
      ret = OB_ERR_ILLEGAL_INDEX;
    }
    else if( idx_value >= array.array_values_.count() )
    {
      while( OB_SUCCESS == ret && idx_value >= array.array_values_.count() )
      {
        ObObj tmp_obj;
        tmp_obj.set_null();
        ret = array.array_values_.push_back(tmp_obj);
      }
    }

    if( OB_SUCCESS == ret )
    {
      array.array_values_.at(idx_value) = val;
    }
  }
  return ret;
}

int ObUpsProcedure::read_variable(const ObString &var_name, const ObObj *&val) const
{
	int ret = OB_SUCCESS;
  if( OB_UNLIKELY(!is_var_tab_created) )
	{
//		TBSYS_LOG(WARN, "var_table does not create");
    ret = OB_ERR_VARIABLE_UNKNOWN;
	}
  else if ((val=var_name_val_map_.get(var_name)) == NULL)
	{
//		TBSYS_LOG(WARN, "var does not exist");
    ret = OB_ERR_VARIABLE_UNKNOWN;
  }
  else
  {
    TBSYS_LOG(TRACE, "read var %.*s = %s", var_name.length(), var_name.ptr(), to_cstring(*val));
  }
	return ret;
}

int ObUpsProcedure::read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = read_variable(array_name, val)))
  {
    //table may not exist
  }
  else
  {
    int64_t i = -1;
    val->get_int(i);
    const ObUpsArray &arr = array_table_.at(i);
    if( idx_value >= 0 && idx_value < arr.array_values_.count() )
    {
      val = & (arr.array_values_.at(idx_value));
    }
    else
    {
      TBSYS_LOG(WARN, "array index is invalid, %ld", idx_value);
      ret = OB_ERR_ILLEGAL_INDEX;
    }
  }
  return ret;
}

int ObUpsProcedure::create_static_data(StaticData *&static_data)
{
  int ret = OB_SUCCESS;
  StaticData *item = (StaticData*)static_store_area_.alloc(sizeof(StaticData));
  item = new(item) StaticData();
  ret = static_store_.push_back(item);
  static_data = (static_store_.at(static_store_.count() - 1));
  return ret;
}

int64_t ObUpsProcedure::get_static_data_count() const
{
  return static_store_.count();
}

int ObUpsProcedure::get_static_data_by_id(uint64_t static_data_id, ObRowStore *&row_store_ptr)
{
  int ret = OB_ERR_ILLEGAL_ID;
  TBSYS_LOG(TRACE, "[find] static_data_id=%ld", static_data_id);
  for(; static_ptr_ < static_store_.count(); ++static_ptr_)
  {

    TBSYS_LOG(TRACE, "[test] static_ptr_=%ld", static_ptr_);
    if( static_data_id == static_store_.at(static_ptr_)->id )
    {
//      TBSYS_LOG(TRACE, "[hit] static_ptr_=%ld", static_ptr_);
      ret = OB_SUCCESS;
      break;
    }
  }
  if( OB_SUCCESS == ret )
  {
    row_store_ptr = &(static_store_.at(static_ptr_++)->store);
  }
  return ret;
}

SpInst * ObUpsProcedure::create_inst(SpInstType type, SpMultiInsts *mul_inst)
{
  SpInst *new_inst = NULL;
  if( type == SP_L_INST )
  { //loop have a different deserialization methods
    void *ptr = arena_.alloc(sizeof(SpUpsLoopInst));
    new_inst = new(ptr) SpUpsLoopInst();
    new_inst->set_owner_procedure(this);
    if( NULL != mul_inst )
      mul_inst->add_inst(new_inst);
    else
      inst_list_.push_back(new_inst);
  }
  else
  {
    new_inst = SpProcedure::create_inst(type, mul_inst);
  }
  return new_inst;
}

int64_t ObUpsProcedure::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "Procedure instruction list:\n");
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
  databuff_printf(buf, buf_len, pos, "Procedure variable status:\n");
  return pos;
}
