#ifndef OB_PROCEDURE_VARIABLE_TABLE_H
#define OB_PROCEDURE_VARIABLE_TABLE_H

#include "common/ob_pooled_allocator.h"
#include "common/hash/ob_hashmap.h"
#include "common/ob_string_buf.h"
#include "common/ob_se_array.h"

using namespace oceanbase::common;
namespace oceanbase{

  namespace sql
  {
    class ObProcedureVariableTable
    {
    public:
      ObProcedureVariableTable();

      inline int create();

      inline int clear();

      int create_variable(const ObString &var_name, const ObObjType type);

      int create_array(const ObString &array, const ObObjType type);

      int write(const ObString &var_name, const ObObj &val);

      int write(const ObString &array_name, int64_t idx, const ObObj &val);

      int write(const ObString &array_name, const ObIArray<ObObj> &other) const;

      int read(const ObString &var_name, const ObObj *&val) const;

      int read(const ObString &array_name, int64_t idx, const ObObj *&val) const;

      int read(const ObString &array_name, const ObIArray<ObObj> *&array) const;

    private:

      static const int64_t SMALL_BLOCK_SIZE = 4 * 1024LL;
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
      typedef ObSEArray<ObObj, 8> ObProcedureArray;

      common::ObSmallBlockAllocator<> block_allocator_;
      VarNameValMapAllocer var_name_val_map_allocer_;
      common::ObStringBuf name_pool_;

      VarNameValMap var_name_val_map_;
      ObSEArray<ObProcedureArray, 4> array_table_;
    };

    int ObProcedureVariableTable::create()
    {
      return var_name_val_map_.create(hash::cal_next_prime(16), &var_name_val_map_allocer_, &block_allocator_);
    }

    int ObProcedureVariableTable::clear()
    {
      for(int64_t i = 0; i < array_table_.count(); ++i)
      {
        array_table_.at(i).clear();
      }
      array_table_.clear();
      var_name_val_map_.clear();
      name_pool_.clear();

      return OB_SUCCESS;
    }
  }
}

#endif // OB_PROCEDURE_VARIABLE_TABLE_H
