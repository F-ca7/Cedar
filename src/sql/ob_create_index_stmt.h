/**
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 *
 * ob_create_table_stmt.h
 *
 * Authors:
 *   fei long <feilong_nobug@163.com>
 *
 */
#ifndef OCEANBASE_SQL_OB_CREATE_INDEX_STMT_H
#define OCEANBASE_SQL_OB_CREATE_INDEX_STMT_H

#include "common/ob_array.h"
#include "common/ob_object.h"
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_hint.h"
#include "sql/ob_basic_stmt.h"
#include "parse_node.h"
#include "sql/ob_column_def.h"
#include "ob_schema_checker.h"
#include "ob_create_table_stmt.h"
#include "common/ob_strings.h"

using namespace oceanbase::common;

namespace oceanbase{
	namespace sql{
		class ObCreateIndexStmt : public ObCreateTableStmt{
			public:
			explicit ObCreateIndexStmt(ObStringBuf* name_pool):ObCreateTableStmt(name_pool){
				has_storing_col_ = true;
				has_option_list_ = true;
				set_stmt_type(ObBasicStmt::T_CREATE_INDEX);
			}
			virtual ~ObCreateIndexStmt(){}
			// get
			const ObString& get_original_table_name() const;
			const ObString& get_index_columns(int64_t index) const;
			const ObString& get_storing_columns(int64_t subscript) const;
			int64_t get_index_columns_count() const;
			int64_t get_storing_columns_count() const;
			// set
            void set_has_storing(bool val){
                    has_storing_col_ = val;
            }
			void set_has_option_list(bool hasOptionList) {
				has_option_list_ = hasOptionList;
			}
			int append_expire_col_to_storing_columns(const ObString& storing_name);
			int set_original_table_name(ResultPlan& result_plan, const common::ObString& original_table_name);
			int set_storing_columns(ResultPlan& result_plan,const ObString& table_name,const ObString& storing_column);
			int set_index_columns(ResultPlan& result_plan,const ObString& table_name,const ObString& column_name);
			int push_hit_rowkey(uint64_t cid);
			// return bool
			bool has_storing();
			bool is_rowkey_hit(uint64_t cid);
			bool is_expire_col_in_storing(ObString& col);
			bool is_has_option_list() const {
				return has_option_list_;
			};
			int generate_inner_index_table_name(ObString& index_name, ObString& raw_table_name, char *out_buff, int64_t& str_len);
			int generate_expire_col_list(ObString& input, ObStrings& out);
			int set_storing_columns_simple(const common::ObString storing_name);

			protected:
			private:
				common::ObArray<common::ObString> index_columns_;
				common::ObArray<common::ObString> storing_columns_;
				ObString original_table_name_;
				bool has_storing_col_;
				bool has_option_list_;
				common::ObArray<uint64_t> hit_rowkey_;
			};
	}

}
#endif // OB_CREATE_INDEX_STMT_H
