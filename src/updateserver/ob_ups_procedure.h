#ifndef OBUPSPROCEDURE_H
#define OBUPSPROCEDURE_H
#include "sql/ob_sp_procedure.h"
#include "common/ob_pool.h"
#include "common/ob_pooled_allocator.h"
#include "ob_session_mgr.h"
#include "ob_table_mgr.h"
#include "ob_ups_table_mgr.h"
using namespace oceanbase::sql;
namespace oceanbase
{
  namespace updateserver
  {

    class ObUpsProcedure;

    struct BasicParam
    {
        BasicParam(uint64_t table_id, int64_t column_count, ObLockFlag flag, int64_t static_data_id) :
          table_id_(table_id), column_count_(column_count), lock_flag_(flag), static_data_id_(static_data_id)
        {
          row_desc_.reset();
        }

        //query structure
        uint64_t table_id_;
        uint64_t key_column_ids_[4];
        uint64_t column_ids_[16];
        int64_t  column_count_;

        ObLockFlag lock_flag_;
        ObVersionRange version_range_;
        ObRowDesc row_desc_;
        int64_t static_data_id_;
    };

    struct SelectStockParam : BasicParam
    {
        //runtime parameters
        ObObj o_i_id_;
        ObObj ol_supply_w_id_;

        SelectStockParam() : BasicParam(3008, 14, LF_WRITE, 1)
        {
          uint64_t temp_ids[] = {16, 17, 18, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};

          for(int64_t i = 0; i < column_count_; ++i)
            column_ids_[i] = temp_ids[i];

          key_column_ids_[0] = 16;
          key_column_ids_[1] = 17;

          row_desc_.add_column_desc(3008, 16);
          row_desc_.add_column_desc(3008, 17);
          row_desc_.add_column_desc(3008, 18);

          for(uint64_t i = 22; i <= 32; ++i)
          {
            row_desc_.add_column_desc(3008, i);
          }

          row_desc_.add_column_desc(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
          row_desc_.set_rowkey_cell_count(2);

          version_range_.border_flag_.set_inclusive_start();
          version_range_.border_flag_.set_max_value();
          version_range_.start_version_.major_ = 2;
          version_range_.start_version_.minor_ = 0;
          version_range_.start_version_.is_final_minor_ = 0;
        }
    };


    struct UpdateStockParam : BasicParam
    {
        ObObj o_i_id_;
        ObObj ol_supply_w_id_;

        ObObj s_quantity_;
        ObObj o_quantity_;
        ObObj s_remote_cnt_increment_;

        ObRowDesc write_desc_;

        UpdateStockParam() : BasicParam(3008, 6, LF_WRITE, 2)
        {
          uint64_t temp_ids[] = {16, 17, 18, 19, 20, 21};

          for(int64_t i = 0; i < column_count_; ++i)
            column_ids_[i] = temp_ids[i];

          key_column_ids_[0] = 16;
          key_column_ids_[1] = 17;

          write_desc_.reset();
          for(uint64_t i = 16; i <= 21; ++i)
          {
            write_desc_.add_column_desc(3008, i);
            row_desc_.add_column_desc(3008, i);
          }

          row_desc_.add_column_desc(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
          write_desc_.set_rowkey_cell_count(2);
          row_desc_.set_rowkey_cell_count(2);

          version_range_.border_flag_.set_inclusive_start();
          version_range_.border_flag_.set_max_value();
          version_range_.start_version_.major_ = 2;
          version_range_.start_version_.minor_ = 0;
          version_range_.start_version_.is_final_minor_ = 0;
        }
    };

    struct SelectDistrictParam : BasicParam
    {
        ObObj d_w_id_;
        ObObj d_id_;

        SelectDistrictParam() : BasicParam(3002, 4, LF_WRITE, 3)
        {
          uint64_t column_ids[] = {16, 17, 20, 19};

          for(int64_t i = 0; i < column_count_; ++i)
            column_ids_[i] = column_ids[i];

          key_column_ids_[0] = 16;
          key_column_ids_[1] = 17;

          row_desc_.add_column_desc(3002, 16);
          row_desc_.add_column_desc(3002, 17);
          row_desc_.add_column_desc(3002, 20);
          row_desc_.add_column_desc(3002, 19);

          row_desc_.add_column_desc(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
          row_desc_.set_rowkey_cell_count(2);

          version_range_.border_flag_.set_inclusive_start();
          version_range_.border_flag_.set_max_value();
          version_range_.start_version_.major_ = 2;
          version_range_.start_version_.minor_ = 0;
          version_range_.start_version_.is_final_minor_ = 0;
        }

    };

    struct UpdateDistrictParam : BasicParam
    {
        ObObj d_w_id_;
        ObObj d_id_;

        ObRowDesc write_desc_;
        UpdateDistrictParam() : BasicParam(3002, 3, LF_WRITE, 4)
        {
          uint64_t column_ids[] = {16, 17, 20};

          for(int64_t i = 0; i < column_count_; ++i)
          {
            column_ids_[i] = column_ids[i];
          }

          key_column_ids_[0] = 16;
          key_column_ids_[1] = 17;

          write_desc_.reset();

          row_desc_.add_column_desc(3002, 16);
          row_desc_.add_column_desc(3002, 17);
          row_desc_.add_column_desc(3002, 20);
          row_desc_.add_column_desc(OB_INVALID_ID, OB_ACTION_FLAG_COLUMN_ID);
          row_desc_.set_rowkey_cell_count(2);

          write_desc_.add_column_desc(table_id_, 16); //table_id_ = 3002
          write_desc_.add_column_desc(table_id_, 17);
          write_desc_.add_column_desc(table_id_, 20);
          write_desc_.set_rowkey_cell_count(2);

          version_range_.border_flag_.set_inclusive_start();
          version_range_.border_flag_.set_max_value();
          version_range_.start_version_.major_ = 2;
          version_range_.start_version_.minor_ = 0;
        }
    };

    struct InsertOOrderParam
    {
        ObObj o_id;         //16
        ObObj o_d_id;       //17
        ObObj o_w_id;       //18
        ObObj o_c_id;       //19
        ObObj o_entry_d;    //23
        ObObj o_ol_cnt;     //21
        ObObj o_all_local;  //22

        int64_t table_id_;
        ObRowDesc row_desc_;

        InsertOOrderParam() : table_id_(3006)
        {
          row_desc_.reset();
          uint64_t temp_cols[]= {16, 17, 18, 19, 23, 21, 22};
          for(int64_t i = 0; i < 7; ++i)
          {
            row_desc_.add_column_desc(table_id_, temp_cols[i]);
          }

          row_desc_.set_rowkey_cell_count(3);
        }
    };

    struct InsertNewOrderParam
    {
        ObObj no_o_id_; //18
        ObObj no_d_id_; //17
        ObObj no_w_id_; //16

        int64_t table_id_;
        ObRowDesc row_desc_;

        InsertNewOrderParam() : table_id_(3005)
        {
          row_desc_.reset();
          row_desc_.add_column_desc(table_id_, 16);
          row_desc_.add_column_desc(table_id_, 17);
          row_desc_.add_column_desc(table_id_, 18);

          row_desc_.set_rowkey_cell_count(3);
        }
    };

    struct InsertOrderLineParam
    {
        ObObj ol_o_id_;         //18
        ObObj ol_d_id_;         //17
        ObObj ol_w_id_;         //16
        ObObj ol_number_;       //19
        ObObj ol_i_id_;         //20
        ObObj ol_supply_w_id_;  //23
        ObObj ol_quantity_;     //24
        ObObj ol_amount_;       //22
        ObObj ol_dist_info_;    //25

        int64_t table_id_;
        ObRowDesc row_desc_;

        InsertOrderLineParam() : table_id_(3007)
        {
          uint64_t temp_cols[] = {16, 17, 18, 19, 20, 23, 24, 22, 25};

          row_desc_.reset();
          for(int i = 0; i < 9; ++i)
          {
            row_desc_.add_column_desc(table_id_, temp_cols[i]);
          }
          row_desc_.set_rowkey_cell_count(4);
        }
    };

    class ObUpsNewOrder
    {
      public:
        ObUpsNewOrder(ObUpsProcedure *proc) : proc_(proc) {}
        int execute(int w_id, int d_id, int c_id, int item_ids[],
                    double i_prices[], int supplier_w_ids[],
                    int order_quantities[], int o_ol_cnt, int o_all_local);
      private:

        int prepare(BasicParam &param);

        int select_stock(SelectStockParam &stock_param,
                         /*get fields*/int &s_quantity,
                         ObString &data, ObString s_dist[]);

        int update_stock(UpdateStockParam &stock_param);

        int select_district(SelectDistrictParam &param,
                            /*get fileds*/ int &d_next_o_id,
                            double &d_tax);

        int update_district(UpdateDistrictParam &param);

        int insert_oorder(InsertOOrderParam &param);

        int insert_neworder(InsertNewOrderParam &param);

        int insert_orderline(InsertOrderLineParam &param);


        int write_row(RWSessionCtx &ctx, const ObRow &row, const ObRowDesc &row_desc);

        int add_int(ObObj &dest, const ObObj &sour)
        {
          int64_t a = 0, b = 0;
          dest.get_int(a);
          sour.get_int(b);
          dest.set_int(a + b);
          return OB_SUCCESS;
        }

        int add_double(ObObj &dest, const ObObj &sour)
        {
          double a = 0, b = 0;
          dest.get_double(a);
          sour.get_double(b);
          dest.set_double(a + b);
          return OB_SUCCESS;
        }

        static const int32_t MAX_ITEM_COUNT = 16;
      private:
        ObUpsProcedure *proc_;

        ObUpsTableMgr *table_mgr_;
        ITableEntity::Guard* guard_;
        char guard_buf_[sizeof(ITableEntity::Guard)];
        TableList table_list_;
        ObCellAdaptor cia_;
    };

    class SpUpsLoopInst;

    class SpUpsInstExecStrategy;
    typedef int (*UpsInstHandler)(SpUpsInstExecStrategy *host, SpInst *inst);

    class SpUpsInstExecStrategy
    {
    public:

      SpUpsInstExecStrategy();

      int execute_inst(SpInst *inst)
      {
        return inst_handler[inst->get_type()](this, inst);
      }

      int execute_block(SpBlockInsts *inst) ;

    private:
      int execute_expr(SpExprInst *inst) ;
      int execute_rd_base(SpRdBaseInst *inst)  { UNUSED(inst); return OB_ERROR; }
      int execute_rw_delta(SpRwDeltaInst *inst) ;
      int execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst) ;
      int execute_rw_comp(SpRwCompInst *inst) { UNUSED(inst); return OB_ERROR; }
      int execute_if_ctrl(SpIfCtrlInsts *inst);
      int execute_loop(SpLoopInst *inst) { UNUSED(inst); return OB_ERROR; }
      int execute_casewhen(SpCaseInst *inst);
      int execute_multi_inst(SpMultiInsts *mul_inst);
      int execute_ups_loop(SpUpsLoopInst *inst);
    private:
      static int pexecute_expr(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_rw_delta(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_rw_delta_into_var(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_if_ctrl(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_loop(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_block(SpUpsInstExecStrategy *host, SpInst *inst);
      static int pexecute_casewhen(SpUpsInstExecStrategy *host, SpInst *inst);
    private:
      UpsInstHandler inst_handler[SP_UNKOWN];
    };

    class SpUpsLoopInst : public sql::SpInst
    {
    public:
      SpUpsLoopInst() : SpInst(SP_L_INST), expanded_loop_body_(this) {}
      virtual ~SpUpsLoopInst();

      virtual void get_read_variable_set(SpVariableSet &read_set) const { UNUSED(read_set); }
      virtual void get_write_variable_set(SpVariableSet &write_set) const { UNUSED(write_set); }

      virtual int deserialize_inst(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      virtual int serialize_inst(char *buf, int64_t buf_len, int64_t &pos) const;
      virtual int deserialize_loop_body(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);
      int deserialize_loop_template(const char *buf, int64_t data_len, int64_t &pos, ModuleArena &allocator, ObPhysicalPlan::OperatorStore &operators_store, ObPhyOperatorFactory *op_factory);


//      int64_t get_iteration_count() const { return expanded_loop_body_.count(); }
      int64_t get_inst_count() const { return expanded_loop_body_.inst_count(); }
      int64_t get_lowest_number() const { return lowest_number_; }
      int64_t get_highest_number() const { return highest_number_; }
      const SpVar & get_loop_counter_var() const { return loop_counter_var_; }
//      SpMultiInsts & get_loop_body(int64_t itr) { return expanded_loop_body_.at(itr); }

      SpInst *get_inst(int64_t idx) { return expanded_loop_body_.get_inst(idx); }
      SpMultiInsts * get_loop_body() { return &expanded_loop_body_; }
      bool get_flag(int64_t idx) const { return flags.at(idx); }
      int64_t get_body_size() const { return flags.count(); }

      virtual int64_t to_string(char *buf, const int64_t buf_len) const;
      virtual int assign(const SpInst *inst);

    private:
      SpVar loop_counter_var_;
      int64_t lowest_number_;
      int64_t highest_number_;
//      ObArray<SpMultiInsts> expanded_loop_body_;
      ObSEArray<bool, 16> flags;
      SpMultiInsts expanded_loop_body_;
    };

   class ObUpsProcedure : public sql::SpProcedure
    {
    public:
      ObUpsProcedure(BaseSessionCtx& session_ctx);
      virtual ~ObUpsProcedure();
      virtual void reset();
      virtual void reuse();
      virtual int open();
      virtual int close();

      int create_variable_table();
      virtual int write_variable(const ObString &var_name, const ObObj &val);
      virtual int write_variable(const SpVar &var, const ObObj &val);
      virtual int write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val);

      virtual int read_variable(const ObString &var_name, const ObObj *&val) const;
      virtual int read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const;

      int create_static_data(StaticData *&static_data);
      int64_t get_static_data_count() const;
      int get_static_data_by_id(uint64_t static_data_id, ObRowStore *&row_store_ptr);

      //specially handle the loop inst creataion
      virtual SpInst * create_inst(SpInstType type, SpMultiInsts *mul_inst);

      virtual int64_t to_string(char* buf, const int64_t buf_len) const;

      BaseSessionCtx * get_session_ctx() { return session_ctx_; }
    private:
      //disallow copy
      static const int64_t SMALL_BLOCK_SIZE = 4 * 1024LL;
      ObUpsProcedure(const ObUpsProcedure &other);
      ObUpsProcedure& operator=(const ObUpsProcedure &other);
    private:

      typedef common::ObPooledAllocator<common::hash::HashMapTypes<common::ObString, common::ObObj>::AllocType, common::ObWrapperAllocator> VarNameValMapAllocer;
      typedef common::hash::ObHashMap<common::ObString,
      common::ObObj,
      common::hash::NoPthreadDefendMode,
      common::hash::hash_func<common::ObString>,
      common::hash::equal_to<common::ObString>,
      VarNameValMapAllocer,
      common::hash::NormalPointer,
      common::ObSmallBlockAllocator<>
      > VarNameValMap;

      //save the variables
      bool is_var_tab_created;
      common::ObSmallBlockAllocator<> block_allocator_;
      VarNameValMapAllocer var_name_val_map_allocer_;
      VarNameValMap var_name_val_map_;
      common::ObStringBuf name_pool_;

      struct ObUpsArray
      {
        ObString array_name_;
        ObSEArray<ObObj, 8> array_values_;
      };

      ObSEArray<ObUpsArray, 4> array_table_;

      ModuleArena static_store_area_;
      ObSEArray<StaticData*, 64> static_store_;
      //be careful use of static_ptr.
      //For now, I assume static data is consumed in ascending order.
      int64_t static_ptr_;

      BaseSessionCtx *session_ctx_;
    };

  }
}
#endif // OBUPSPROCEDURE_H
