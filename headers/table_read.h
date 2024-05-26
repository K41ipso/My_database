#pragma once
#include <string>
#include "list_func.h"

using namespace std;

//структуры для стандартной реализации таблиц:

struct store_t {
	int id;
	string name;
	string type;
	string city_adress;
	string street_adress;
	double street_number_adress;
	double rent;
	bool music;
	string color;
	bool for_invalids;
	string open_hour;
};
struct workers_t {
	int id;
	int store_id;
	string surname;
	string name;
	string male;
	int birth_year;
	int birth_mounth;
	int birth_day;
	string phone_number;
	bool criminal_record;
	string post;
	int salary;
	string city_adress;
};
struct products_t {
	int id;
	int id_maker;
	string name;
	double cost;
	string type_product;
	string type_package;
	double weight;
	int warehouse_count;
};
struct maker_t {
	int id;
	string name;
	string country_adress;
	double dilivery_hour_time;
};
struct accounting_prodict_t {
	int id;
	int id_product;
	int id_store;
	int store_count;
};

//структуры для мерджа:

struct merge_table_sa {
	int id;
	string name_store;
	string type;
	string city_adress;
	string street_adress;
	double street_number_adress;
	double rent;
	bool music;
	string color;
	bool for_invalids;
	string open_hour;
	string product;
	int store_count;
};

struct merge_table_pa {
	int id;
	string maker;
	string name_product;
	double cost;
	string type_product;
	string type_package;
	double weight;
	int warehouse_count;
	string name_store;
	int store_count;
};

struct merge_table_spa {
	int id;
	string name_store;
	string type_store;
	string city_adress;
	string open_hour;
	string maker;
	string name_product;
	double cost_product;
	string type_product;
	string type_package;
	double weight_product;
	int warehouse_count;
	int store_count;
};

//общий класс таблиц:

template<typename T>
class table {

public:

	int index_table;
	List<T> lineL;
};

table<store_t> store_t_var_upload(string file_name);
table<workers_t> workers_t_var_upload(string file_name);
table<products_t> products_t_var_upload(string file_name);
table<maker_t> maker_t_var_upload(string file_name);
table<accounting_prodict_t> accounting_prodict_t_var_upload(string file_name);

void print_store_t();
void print_workers_t();
void print_products_t();
void print_maker_t();
void print_accounting_prodict_t();
void choice_merge();

table<merge_table_sa> merge_backend_sa();
table<merge_table_pa> merge_backend_pa();
table<merge_table_spa> merge_backend_spa();

void cout_store_t(store_t& table);
string get_attr_switch_store_t(store_t& tab, int choice_col);
void solo_case_store_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<store_t>& tab, table<store_t>& boofer_tab);

void cout_products_t(products_t& tab, table<maker_t>& mak_table);
string get_attr_switch_products_t(products_t& tab, int choice_col, table<maker_t>& mak_table);
void solo_case_products_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<products_t>& tab, table<products_t>& boofer_tab, table<maker_t>& maker_tab);

void cout_accounting_prodict_t(accounting_prodict_t& tab, table<products_t>& prod_table, table<store_t>& store_table);
string get_attr_switch_accounting_prodict_t(accounting_prodict_t& tab, int choice_col, table<products_t>& prod_table, table<store_t>& store_table);
void solo_case_accounting_prodict_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<accounting_prodict_t>& tab, table<accounting_prodict_t>& boofer_tab, table<products_t>& prod_table, table<store_t>& store_table);

void cout_spa_t(merge_table_spa& tab);
string get_attr_switch_spa_t(merge_table_spa& tab, int choice_col);
void solo_case_spa_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<merge_table_spa>& tab, table<merge_table_spa>& boofer_tab);

void cout_sa_t(merge_table_sa& tab);
string get_attr_switch_sa_t(merge_table_sa& tab, int choice_col);
void solo_case_sa_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<merge_table_sa>& tab, table<merge_table_sa>& boofer_tab);

void cout_pa_t(merge_table_pa& tab);
string get_attr_switch_pa_t(merge_table_pa& tab, int choice_col);
void solo_case_pa_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<merge_table_pa>& tab, table<merge_table_pa>& boofer_tab);

List<int> choice_column_list(int max_col_n);

void multiple_choice_store_t(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<store_t>& store_tab, table<store_t>& boofer_store_tab);
void multiple_choice_products_t(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<products_t>& store_tab, table<products_t>& boofer_store_tab, table<maker_t>& maker_tab);
void multiple_choice_accounting_prodict_t(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<accounting_prodict_t>& store_tab, table<accounting_prodict_t>& boofer_store_tab, table<products_t>& products_tab, table<store_t> store_tab2);
void multiple_choice_spa(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<merge_table_spa>& store_tab, table<merge_table_spa>& boofer_store_tab);
void multiple_choice_sa(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<merge_table_sa>& store_tab, table<merge_table_sa>& boofer_store_tab);
void multiple_choice_pa(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<merge_table_pa>& store_tab, table<merge_table_pa>& boofer_store_tab);


void choice_col_str(int merge_state);