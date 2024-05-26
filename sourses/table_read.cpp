#include <iostream>
#include <fstream>
#include <string>
#include "../headers/list_func.h"
#include "../headers/table_read.h"

using namespace std;

table<store_t> store_t_var_upload(string file_name) {

	table<store_t> res_table;	//заполняемый класс для return;
	res_table.index_table = 1;	//индекс данной таблицы вместо заголовка для работы в GUI и HUI;

	string line;            //берет строку из txt;
	ifstream in(file_name); //для подключения;
	const string space_counter = "                                "; //чтобы добавить пробелы в строки, которые получатся короткими (для человекочитаемого вывода информации в таблицах);
	if (in.is_open()) 
	{
		while (getline(in, line)) 
		{
			store_t local_struct;	//здесь собирается вся строка а после этого она добавляется в List<store_t>;
			string localsave_ = "";	//обнуляем строку под текущее, побуквенно считаенное, значение в строке;
			int count_columns = 0;	//понадобится нам чтобы понимать, в какой стоолбик относить информацию;
			
			for (int i = 0; i < line.length(); i++) //через оператор for пробегаемся по всей строке в таблице;
			{
				if (line.at(i) == ';') {
					localsave_ += space_counter.substr(0, 22 - localsave_.length());
					switch (count_columns)
					{
					case 0:
						local_struct.id = stoi(localsave_);
						break;
					case 1:
						local_struct.name = localsave_;
						break;
					case 2:
						local_struct.type = localsave_;
						break;
					case 3:
						local_struct.city_adress = localsave_;
						break;
					case 4:
						local_struct.street_adress = localsave_;
						break;
					case 5:
						local_struct.street_number_adress = stod(localsave_);
						break;
					case 6:
						local_struct.rent = stod(localsave_);
						break;
					case 7:
						local_struct.music = stoi(localsave_);
						break;
					case 8:
						local_struct.color = localsave_;
						break;
					case 9:
						local_struct.for_invalids = stoi(localsave_);
						break;
					case 10:
						local_struct.open_hour = localsave_;
						break;
					default:
						cout << "Not found this table" << endl;
						return res_table;
					}
					count_columns++;
					localsave_ = "";
				}
				else {
					localsave_ += line.at(i);
				}
			}
			res_table.lineL.push_back(local_struct);
		}
	}
	in.close();
	return res_table;
}
table<workers_t> workers_t_var_upload(string file_name) {

	table<workers_t> res_table;	//заполняемый класс для return;
	res_table.index_table = 2;	//индекс данной таблицы вместо заголовка для работы в GUI и HUI;

	string line;            //берет строку из txt;
	ifstream in(file_name); //для подключения;
	const string space_counter = "                                "; //чтобы добавить пробелы в строки, которые получатся короткими (для человекочитаемого вывода информации в таблицах);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			workers_t local_struct;	//здесь собирается вся строка а после этого она добавляется в List<store_t>;
			string localsave_ = "";	//обнуляем строку под текущее, побуквенно считаенное, значение в строке;
			int count_columns = 0;	//понадобится нам чтобы понимать, в какой стоолбик относить информацию;

			for (int i = 0; i < line.length(); i++) //через оператор for пробегаемся по всей строке в таблице;
			{
				if (line.at(i) == ';') {
					localsave_ += space_counter.substr(0, 22 - localsave_.length());
					switch (count_columns)
					{
					case 0:
						local_struct.id = stoi(localsave_);
						break;
					case 1:
						local_struct.store_id = stoi(localsave_);
						break;
					case 2:
						local_struct.surname = localsave_;
						break;
					case 3:
						local_struct.name = localsave_;
						break;
					case 4:
						local_struct.male = localsave_;
						break;
					case 5:
						local_struct.birth_year = stoi(localsave_);
						break;
					case 6:
						local_struct.birth_mounth = stoi(localsave_);
						break;
					case 7:
						local_struct.birth_day = stoi(localsave_);
						break;
					case 8:
						local_struct.phone_number = localsave_;
						break;
					case 9:
						local_struct.criminal_record = stoi(localsave_);
						break;
					case 10:
						local_struct.post = localsave_;
						break;
					case 11:
						local_struct.salary = stoi(localsave_);
						break;
					case 12:
						local_struct.city_adress = localsave_;
						break;
					default:
						cout << "WARNING! -> Not found this table..." << endl;
						return res_table;
					}
					count_columns++;
					localsave_ = "";
				}
				else {
					localsave_ += line.at(i);
				}
			}
			res_table.lineL.push_back(local_struct);
		}
	}
	in.close();
	return res_table;
}
table<products_t> products_t_var_upload(string file_name) {

	table<products_t> res_table;	//заполняемый класс для return;
	res_table.index_table = 3;	//индекс данной таблицы вместо заголовка для работы в GUI и HUI;

	string line;            //берет строку из txt;
	ifstream in(file_name); //для подключения;
	const string space_counter = "                                "; //чтобы добавить пробелы в строки, которые получатся короткими (для человекочитаемого вывода информации в таблицах);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			products_t local_struct;	//здесь собирается вся строка а после этого она добавляется в List<store_t>;
			string localsave_ = "";	//обнуляем строку под текущее, побуквенно считаенное, значение в строке;
			int count_columns = 0;	//понадобится нам чтобы понимать, в какой стоолбик относить информацию;

			for (int i = 0; i < line.length(); i++) //через оператор for пробегаемся по всей строке в таблице;
			{
				if (line.at(i) == ';') {
					localsave_ += space_counter.substr(0, 22 - localsave_.length());
					switch (count_columns)
					{
					case 0:
						local_struct.id = stoi(localsave_);
						break;
					case 1:
						local_struct.id_maker = stoi(localsave_);
						break;
					case 2:
						local_struct.name = localsave_;
						break;
					case 3:
						local_struct.cost = stod(localsave_);
						break;
					case 4:
						local_struct.type_product = localsave_;
						break;
					case 5:
						local_struct.type_package = localsave_;
						break;
					case 6:
						local_struct.weight = stod(localsave_);
						break;
					case 7:
						local_struct.warehouse_count = stoi(localsave_);
						break;
					default:
						cout << "WARNING! -> Not found this table..." << endl;
						return res_table;
					}
					count_columns++;
					localsave_ = "";
				}
				else {
					localsave_ += line.at(i);
				}
			}
			res_table.lineL.push_back(local_struct);
		}
	}
	in.close();
	return res_table;
}
table<maker_t> maker_t_var_upload(string file_name) {

	table<maker_t> res_table;	//заполняемый класс для return;
	res_table.index_table = 4;	//индекс данной таблицы вместо заголовка для работы в GUI и HUI;

	string line;            //берет строку из txt;
	ifstream in(file_name); //для подключения;
	const string space_counter = "                                "; //чтобы добавить пробелы в строки, которые получатся короткими (для человекочитаемого вывода информации в таблицах);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			maker_t local_struct;	//здесь собирается вся строка а после этого она добавляется в List<store_t>;
			string localsave_ = "";	//обнуляем строку под текущее, побуквенно считаенное, значение в строке;
			int count_columns = 0;	//понадобится нам чтобы понимать, в какой стоолбик относить информацию;

			for (int i = 0; i < line.length(); i++) //через оператор for пробегаемся по всей строке в таблице;
			{
				if (line.at(i) == ';') {
					localsave_ += space_counter.substr(0, 22 - localsave_.length());
					switch (count_columns)
					{
					case 0:
						local_struct.id = stoi(localsave_);
						break;
					case 1:
						local_struct.name = localsave_;
						break;
					case 2:
						local_struct.country_adress = localsave_;
						break;
					case 3:
						local_struct.dilivery_hour_time = stod(localsave_);
						break;
					default:
						cout << "WARNING! -> Not found this table..." << endl;
						return res_table;
					}
					count_columns++;
					localsave_ = "";
				}
				else {
					localsave_ += line.at(i);
				}
			}
			res_table.lineL.push_back(local_struct);
		}
	}
	in.close();
	return res_table;
}
table<accounting_prodict_t> accounting_prodict_t_var_upload(string file_name) {

	table<accounting_prodict_t> res_table;	//заполняемый класс для return;
	res_table.index_table = 5;	//индекс данной таблицы вместо заголовка для работы в GUI и HUI;

	string line;            //берет строку из txt;
	ifstream in(file_name); //для подключения;
	const string space_counter = "                                "; //чтобы добавить пробелы в строки, которые получатся короткими (для человекочитаемого вывода информации в таблицах);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			accounting_prodict_t local_struct;	//здесь собирается вся строка а после этого она добавляется в List<store_t>;
			string localsave_ = "";	//обнуляем строку под текущее, побуквенно считаенное, значение в строке;
			int count_columns = 0;	//понадобится нам чтобы понимать, в какой стоолбик относить информацию;

			for (int i = 0; i < line.length(); i++) //через оператор for пробегаемся по всей строке в таблице;
			{
				if (line.at(i) == ';') {
					localsave_ += space_counter.substr(0, 22 - localsave_.length());
					switch (count_columns)
					{
					case 0:
						local_struct.id = stoi(localsave_);
						break;
					case 1:
						local_struct.id_product = stoi(localsave_);
						break;
					case 2:
						local_struct.id_store = stoi(localsave_);
						break;
					case 3:
						local_struct.store_count = stoi(localsave_);
						break;
					default:
						cout << "WARNING! -> Not found this table..." << endl;
						return res_table;
					}
					count_columns++;
					localsave_ = "";
				}
				else {
					localsave_ += line.at(i);
				}
			}
			res_table.lineL.push_back(local_struct);
		}
	}
	in.close();
	return res_table;
}
void print_store_t() {

	table<store_t> tab = store_t_var_upload("store_t.txt");

	const string disign = "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	const string column_names = "| Магазин\t\t| Тип\t\t\t| Город\t\t\t| Улица\t\t\t| Дом\t| Аренда| Музыка\t| Цвет\t\t\t|Для инвалидов\t| Часы работы\t\t|";
	const string header = ">>> You may see 'Store' table:";

	cout << header << endl << disign << endl << column_names << endl << disign << endl;

	for (int i = 0; i < tab.lineL.GetSize(); i++)
	{
		cout << "|" << tab.lineL[i].name << "\t|"
			<< tab.lineL[i].type << "\t|"
			<< tab.lineL[i].city_adress << "\t|"
			<< tab.lineL[i].street_adress << "\t|"
			<< tab.lineL[i].street_number_adress << "\t|"
			<< tab.lineL[i].rent << "\t|"
			<< tab.lineL[i].music << "\t\t|"
			<< tab.lineL[i].color << "\t|"
			<< tab.lineL[i].for_invalids << "\t\t|"
			<< tab.lineL[i].open_hour << "\t|" << endl;
	}
	cout << disign << endl;

	tab.lineL.clear();
}
void print_workers_t() {

	table<store_t> store_tab = store_t_var_upload("store_t.txt");
	table<workers_t> tab = workers_t_var_upload("workers_t.txt");

	string disign = "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	string column_names = "| Магазин\t\t| Фамилия\t\t| Имя\t\t\t| Пол\t\t\t| Год\t| Месяц\t| День\t| Номер телефона\t| Судимость\t| Должность\t\t| Зарплата\t| Город проживания\t|";
	string header = ">>> You may see 'Workers' table:";
	
	cout << header << endl << disign << endl << column_names << endl << disign << endl;

	for (int i = 0; i < tab.lineL.GetSize(); i++)
	{
		cout << "|" << store_tab.lineL[tab.lineL[i].store_id].name << "\t|"
			<< tab.lineL[i].surname << "\t|"
			<< tab.lineL[i].name << "\t|"
			<< tab.lineL[i].male << "\t|"
			<< tab.lineL[i].birth_year << "\t|"
			<< tab.lineL[i].birth_mounth << "\t|"
			<< tab.lineL[i].birth_day << "\t|"
			<< tab.lineL[i].phone_number << "\t|"
			<< tab.lineL[i].criminal_record << "\t\t|"
			<< tab.lineL[i].post << "\t|" 
			<< tab.lineL[i].salary << "\t\t|"
			<< tab.lineL[i].city_adress << "\t|" << endl;
	}
	cout << disign << endl;

	store_tab.lineL.clear();
	tab.lineL.clear();
}
void print_products_t() {

	table<products_t> tab = products_t_var_upload("products_t.txt");
	table<maker_t> maker_tab = maker_t_var_upload("maker_t.txt");

	string disign = "---------------------------------------------------------------------------------------------------------------------------------";
	string column_names = "| Производитель\t\t| Товар \t\t| Стоимость\t| Тип\t\t\t| Тип упаковки\t\t| Вес\t| Всего\t|";
	string header = ">>> You may see 'Products' table:";
	
	cout << header << endl << disign << endl << column_names << endl << disign << endl;
	
	for (int i = 0; i < tab.lineL.GetSize(); i++)
	{
		cout << "|" << maker_tab.lineL[tab.lineL[i].id_maker].name << "\t|"
			<< tab.lineL[i].name << "\t|"
			<< tab.lineL[i].cost << "\t\t|"
			<< tab.lineL[i].type_product << "\t|"
			<< tab.lineL[i].type_package << "\t|"
			<< tab.lineL[i].weight << "\t|"
			<< tab.lineL[i].warehouse_count << "\t|" << endl;
	}
	cout << disign << endl;

	tab.lineL.clear();
	maker_tab.lineL.clear();
}
void print_maker_t() {

	table<maker_t> tab = maker_t_var_upload("maker_t.txt");

	string disign = "------------------------------------------------------------------";
	string column_names = "| Производитель\t\t| Город\t\t\t| Время доставки |";
	string header = ">>> You may see 'Maker' table:";

	cout << header << endl << disign << endl << column_names << endl << disign << endl;

	for (int i = 0; i < tab.lineL.GetSize(); i++)
	{
		cout << "|" << tab.lineL[i].name << "\t|"
			<< tab.lineL[i].country_adress << "\t|"
			<< tab.lineL[i].dilivery_hour_time << "\t\t |" << endl;
	}
	cout << disign << endl;

	tab.lineL.clear();
}
void print_accounting_prodict_t() {

	table<accounting_prodict_t> tab = accounting_prodict_t_var_upload("accounting_prodict_t.txt");
	table<products_t> product_tab = products_t_var_upload("products_t.txt");
	table<store_t> store_tab = store_t_var_upload("store_t.txt");

	string disign = "-----------------------------------------------------------------";
	string column_names = "| Продукт\t\t| Магазин\t\t| Кол-во шт\t|";
	string header = ">>> You may see 'Accounting_product' table:";

	cout << header << endl << disign << endl << column_names << endl << disign << endl;

	for (int i = 0; i < tab.lineL.GetSize(); i++)
	{
		cout << "|" << product_tab.lineL[tab.lineL[i].id_product].name << "\t|"
			<< store_tab.lineL[tab.lineL[i].id_store].name << "\t|"
			<< tab.lineL[i].store_count << "\t\t|" << endl;
	}
	cout << disign << endl;

	tab.lineL.clear();
	product_tab.lineL.clear();
	store_tab.lineL.clear();
}
void choice_merge() {

	int torch = 9;
	int choice_state = 0;
	string while_table_list;

	const string first_text_choice_table = ">>> Please select the tables that will participate in the merge:";
	const string while_table_list_nul = "_______________________________________\n| (1) Store              table; [ ]\n| (3) Products           table; [ ]\n| (5) Accounting product table; [ ]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string while_table_list_s = "_______________________________________\n| (1) Store              table; [X]\n| (3) Products           table; [ ]\n| (5) Accounting product table; [ ]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string while_table_list_p	= "_______________________________________\n| (1) Store              table; [ ]\n| (3) Products           table; [X]\n| (5) Accounting product table; [ ]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string while_table_list_a	= "_______________________________________\n| (1) Store              table; [ ]\n| (3) Products           table; [ ]\n| (5) Accounting product table; [X]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string while_table_list_sp = "_______________________________________\n| (1) Store              table; [X]\n| (3) Products           table; [X]\n| (5) Accounting product table; [ ]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string while_table_list_sa = "_______________________________________\n| (1) Store              table; [X]\n| (3) Products           table; [ ]\n| (5) Accounting product table; [X]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string while_table_list_pa = "_______________________________________\n| (1) Store              table; [ ]\n| (3) Products           table; [X]\n| (5) Accounting product table; [X]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string while_table_list_spa = "_______________________________________\n| (1) Store              table; [X]\n| (3) Products           table; [X]\n| (5) Accounting product table; [X]\n|\n| (6) Continue.\n| (7) Again.\n| (0) Exit and close.\n_______________________________________";
	const string hello_line_text = ">>> Please, choice the number of line table:";
	const string not_found_text	= ">> Not found this table.\n>>> Try again.";

	while_table_list += while_table_list_nul;
	cout << first_text_choice_table << endl;

	while (torch != 0) {
		cout << while_table_list << endl;
		cin >> torch;
		switch (torch)
		{
		case 1:
			if (while_table_list == while_table_list_nul) {
				while_table_list.clear();
				while_table_list += while_table_list_s;
				choice_state = 1;
			}
			else {
				if (while_table_list == while_table_list_s) {
					while_table_list.clear();
					while_table_list += while_table_list_nul;
					choice_state = 0;
				}
				else {
					if (while_table_list == while_table_list_p) {
						while_table_list.clear();
						while_table_list += while_table_list_sp;
						choice_state = 4;
					}
					else {
						if (while_table_list == while_table_list_a) {
							while_table_list.clear();
							while_table_list += while_table_list_sa;
							choice_state = 5;
						}
						else {
							if (while_table_list == while_table_list_sp) {
								while_table_list.clear();
								while_table_list += while_table_list_p;
								choice_state = 2;
							}
							else {
								if (while_table_list == while_table_list_sa) {
									while_table_list.clear();
									while_table_list += while_table_list_a;
									choice_state = 3;
								}
								else {
									if (while_table_list == while_table_list_pa) {
										while_table_list.clear();
										while_table_list += while_table_list_spa;
										choice_state = 7;
									}
									else {
										if (while_table_list == while_table_list_spa) {
											while_table_list.clear();
											while_table_list += while_table_list_pa;
											choice_state = 6;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (while_table_list == while_table_list_nul) {
				while_table_list.clear();
				while_table_list += while_table_list_p;
				choice_state = 2;
			}
			else {
				if (while_table_list == while_table_list_s) {
					while_table_list.clear();
					while_table_list += while_table_list_sp;
					choice_state = 4;
				}
				else {
					if (while_table_list == while_table_list_p) {
						while_table_list.clear();
						while_table_list += while_table_list_nul;
						choice_state = 0;
					}
					else {
						if (while_table_list == while_table_list_a) {
							while_table_list.clear();
							while_table_list += while_table_list_pa;
							choice_state = 6;
						}
						else {
							if (while_table_list == while_table_list_sp) {
								while_table_list.clear();
								while_table_list += while_table_list_s;
								choice_state = 1;
							}
							else {
								if (while_table_list == while_table_list_sa) {
									while_table_list.clear();
									while_table_list += while_table_list_spa;
									choice_state = 7;
								}
								else {
									if (while_table_list == while_table_list_pa) {
										while_table_list.clear();
										while_table_list += while_table_list_a;
										choice_state = 3;
									}
									else {
										if (while_table_list == while_table_list_spa) {
											while_table_list.clear();
											while_table_list += while_table_list_sa;
											choice_state = 5;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 5:
			if (while_table_list == while_table_list_nul) {
				while_table_list.clear();
				while_table_list += while_table_list_a;
				choice_state = 3;
			}
			else {
				if (while_table_list == while_table_list_s) {
					while_table_list.clear();
					while_table_list += while_table_list_sa;
					choice_state = 5;
				}
				else {
					if (while_table_list == while_table_list_p) {
						while_table_list.clear();
						while_table_list += while_table_list_pa;
						choice_state = 6;
					}
					else {
						if (while_table_list == while_table_list_a) {
							while_table_list.clear();
							while_table_list += while_table_list_nul;
							choice_state = 0;
						}
						else {
							if (while_table_list == while_table_list_sp) {
								while_table_list.clear();
								while_table_list += while_table_list_spa;
								choice_state = 7;
							}
							else {
								if (while_table_list == while_table_list_sa) {
									while_table_list.clear();
									while_table_list += while_table_list_s;
									choice_state = 1;
								}
								else {
									if (while_table_list == while_table_list_pa) {
										while_table_list.clear();
										while_table_list += while_table_list_p;
										choice_state = 2;
									}
									else {
										if (while_table_list == while_table_list_spa) {
											while_table_list.clear();
											while_table_list += while_table_list_sp;
											choice_state = 4;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 6:
			if (choice_state == 0) {
				cout << not_found_text << endl;
			}
			else {
				choice_col_str(choice_state);
				torch = 0;
			}
			break;
		case 7:
			while_table_list.clear();
			while_table_list += while_table_list_nul;
			choice_state = 0;
			break;
		default:
			cout << not_found_text << endl;
		}
	}
}

table<merge_table_sa> merge_backend_sa() {

	table<store_t> store_tab = store_t_var_upload("store_t.txt");
	table<accounting_prodict_t> accounting_prodict_tab = accounting_prodict_t_var_upload("accounting_prodict_t.txt");
	table<products_t> products_tab = products_t_var_upload("products_t.txt");

	table<merge_table_sa> result;
	merge_table_sa res_line;
	result.index_table = 6;
	int index_store_t;
	int new_index = 0;

	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		index_store_t = store_tab.lineL[i].id;
		for (int j = 0; j < accounting_prodict_tab.lineL.GetSize(); j++) {
			if (index_store_t == accounting_prodict_tab.lineL[j].id_store) {
				res_line.id = new_index;
				res_line.name_store = store_tab.lineL[i].name;
				res_line.type = store_tab.lineL[i].type;
				res_line.city_adress = store_tab.lineL[i].city_adress;
				res_line.street_adress = store_tab.lineL[i].street_adress;
				res_line.street_number_adress = store_tab.lineL[i].street_number_adress;
				res_line.rent = store_tab.lineL[i].rent;
				res_line.music = store_tab.lineL[i].music;
				res_line.color = store_tab.lineL[i].color;
				res_line.for_invalids = store_tab.lineL[i].for_invalids;
				res_line.open_hour = store_tab.lineL[i].open_hour;
				res_line.product = products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].name;
				res_line.store_count = accounting_prodict_tab.lineL[j].store_count;

				/*cout << res_line.id << "\t"
					<< res_line.name << "\t"
					<< res_line.type << "\t"
					<< res_line.city_adress << "\t"
					<< res_line.street_adress << "\t"
					<< res_line.street_number_adress << "\t"
					<< res_line.rent << "\t"
					<< res_line.music << "\t"
					<< res_line.color << "\t"
					<< res_line.for_invalids << "\t"
					<< res_line.open_hour << "\t"
					<< res_line.product << "\t"
					<< res_line.store_count << endl;*/

				new_index++;
				result.lineL.push_back(res_line);
			}
		}
	}
	store_tab.lineL.clear();
	accounting_prodict_tab.lineL.clear();
	products_tab.lineL.clear();

	return result;
}
table<merge_table_pa> merge_backend_pa() {

	table<products_t> products_tab = products_t_var_upload("products_t.txt");
	table<accounting_prodict_t> accounting_prodict_tab = accounting_prodict_t_var_upload("accounting_prodict_t.txt");
	table<maker_t> maker_tab = maker_t_var_upload("maker_t.txt");
	table<store_t> store_tab = store_t_var_upload("store_t.txt");

	table<merge_table_pa> result;
	merge_table_pa res_line;
	result.index_table = 7;
	int index_store_p;
	int new_index = 0;

	for (int i = 0; i < products_tab.lineL.GetSize(); i++) {
		index_store_p = products_tab.lineL[i].id;
		for (int j = 0; j < accounting_prodict_tab.lineL.GetSize(); j++) {
			if (index_store_p == accounting_prodict_tab.lineL[j].id_product) {
				res_line.id = new_index;
				res_line.maker = maker_tab.lineL[products_tab.lineL[i].id_maker].name;
				res_line.name_product = products_tab.lineL[i].name;
				res_line.cost = products_tab.lineL[i].cost;
				res_line.type_product = products_tab.lineL[i].type_product;
				res_line.type_package = products_tab.lineL[i].type_package;
				res_line.weight = products_tab.lineL[i].weight;
				res_line.warehouse_count = products_tab.lineL[i].warehouse_count;
				res_line.name_store = store_tab.lineL[accounting_prodict_tab.lineL[j].id_store].name;
				res_line.store_count = accounting_prodict_tab.lineL[j].store_count;

				/*cout << res_line.id << "\t"
					<< res_line.maker << "\t"
					<< res_line.name_product << "\t"
					<< res_line.cost << "\t"
					<< res_line.type_product << "\t"
					<< res_line.type_package << "\t"
					<< res_line.weight << "\t"
					<< res_line.warehouse_count << " \t"
					<< res_line.name_store << "\t"
					<< res_line.store_count << endl;*/

				new_index++;
				result.lineL.push_back(res_line);
			}
		}
	}
	
	products_tab.lineL.clear();
	accounting_prodict_tab.lineL.clear();
	maker_tab.lineL.clear();
	store_tab.lineL.clear();

	return result;
}
table<merge_table_spa> merge_backend_spa() {

	table<store_t> store_tab = store_t_var_upload("store_t.txt");
	table<products_t> products_tab = products_t_var_upload("products_t.txt");
	table<accounting_prodict_t> accounting_prodict_tab = accounting_prodict_t_var_upload("accounting_prodict_t.txt");
	table<maker_t> maker_tab = maker_t_var_upload("maker_t.txt");
	

	table<merge_table_spa> result;
	merge_table_spa res_line;
	result.index_table = 9;
	int index_store_s;
	int new_index = 0;

	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		index_store_s = store_tab.lineL[i].id;
		for (int j = 0; j < accounting_prodict_tab.lineL.GetSize(); j++) {
			if (index_store_s == accounting_prodict_tab.lineL[j].id_store) {
				res_line.id = new_index;
				res_line.name_store = store_tab.lineL[i].name;
				res_line.type_store = store_tab.lineL[i].type;
				res_line.city_adress = store_tab.lineL[i].city_adress;
				res_line.open_hour = store_tab.lineL[i].open_hour;
				res_line.maker = maker_tab.lineL[products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].id_maker].name;
				res_line.name_product = products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].name;
				res_line.cost_product = products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].cost;
				res_line.type_product = products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].type_product;
				res_line.type_package = products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].type_package;
				res_line.weight_product = products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].weight;
				res_line.warehouse_count = products_tab.lineL[accounting_prodict_tab.lineL[j].id_product].warehouse_count;
				res_line.store_count = accounting_prodict_tab.lineL[j].store_count;

				/*cout << res_line.id << "\t"
					<< res_line.name_store << "\t"
					<< res_line.type_store << "\t"
					<< res_line.city_adress << "\t"
					<< res_line.open_hour << "\t"
					<< res_line.maker << "\t"
					<< res_line.name_product << "\t"
					<< res_line.cost_product << "\t"
					<< res_line.type_product << "\t"
					<< res_line.type_package << "\t"
					<< res_line.weight_product << "\t"
					<< res_line.warehouse_count << "\t"
					<< res_line.store_count << endl;*/

				new_index++;
				result.lineL.push_back(res_line);
			}
		}
	}
	store_tab.lineL.clear();
	products_tab.lineL.clear();
	accounting_prodict_tab.lineL.clear();
	maker_tab.lineL.clear();
	
	return result;
}

void cout_store_t(store_t& table) {
	// Функция для визуализации выбранных фильтров;
	cout << "|" 
		<< table.name << "\t|"
		<< table.type << "\t|"
		<< table.city_adress << "\t|"
		<< table.street_adress << "\t|"
		<< table.street_number_adress << "\t|"
		<< table.rent << "\t|"
		<< table.music << "\t\t|"
		<< table.color << "\t|"
		<< table.for_invalids << "\t\t|"
		<< table.open_hour << "\t|" << endl;
}
string get_attr_switch_store_t(store_t& tab, int choice_col) {
	// Функция для отправки нужного атрибута (столбца) по выбранному столбцу в мердже таблиц: store_t;
	string result_string;
	switch (choice_col)
	{
	case 1:
		return tab.name;
	case 2:
		return tab.type;
	case 3:
		return tab.city_adress;
	case 4:
		return tab.street_adress;
	case 5:
		return to_string(tab.street_number_adress);
	case 6:
		return to_string(tab.rent);
	case 7:
		return to_string(tab.music);
	case 8:
		return tab.color;
	case 9:
		return to_string(tab.for_invalids);
	case 10:
		return tab.open_hour;
	default:
		return ">>> Not Found This Column (???)\n";
	}
}
void solo_case_store_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<store_t>& tab, table<store_t>& boofer_tab)
{
	//функция для 1 шага по фильтрации;
	bool is_unique;											// уникальное-ли значение текущей строки (для первичной фильтрации);
	int choice_line;										// для выбранной синии, т.е. для выбранного индекса;
	int c_all_index = 0;									// размер листа отфильтрованных индексов;
	List<int> not_pop_list;									// сохраняем те индексы, которые не будем убирать из листа уже отфильтрованных индексов, т.е. - которые подходят;
	List<int> delete_index;									// для сбора индексов, которые будут удаляться;

	if (is_first) {
		for (int i = 0; i < tab.lineL.GetSize(); i++) {
			if (unique_indexes.GetSize() > 0) {
				is_unique = true;
				for (int j = 0; j < unique_indexes.GetSize(); j++) {
					if (get_attr_switch_store_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_store_t(tab.lineL[i], choice_col)) {
						is_unique = false;
						break;
					}
				}
				if (is_unique) {
					unique_indexes.push_back(tab.lineL[i].id);
				}
			}
			else {
				unique_indexes.push_back(tab.lineL[i].id);
			}
		}
	}
	else {
		for (int i = 0; i < unique_indexes.GetSize(); i++) {
			not_pop_list.push_back(unique_indexes[i]);
			is_unique = true;
			for (int j = i + 1; j < unique_indexes.GetSize(); j++) {
				if (get_attr_switch_store_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_store_t(tab.lineL[unique_indexes[i]], choice_col)) {
					is_unique = false;
					break;
				}
			}
			if (!is_unique) {
				not_pop_list.pop_back();
			}
		}
		unique_indexes.clear();
		for (int i = 0; i < not_pop_list.GetSize(); i++) {
			unique_indexes.push_back(not_pop_list[i]);
		}
		not_pop_list.clear();
	}

	if (manual)
		cout << abrams_line_store_t << endl << line_names << endl;
	for (int i = 0; i < unique_indexes.GetSize(); i++) {
		cout << " [" << i << "] " << get_attr_switch_store_t(tab.lineL[unique_indexes[i]], choice_col) << ";" << endl;
	}
	cin >> choice_line;
	if (manual)
		cout << abrams_line_store_t << endl << column_names << endl;

	c_all_index = all_index.GetSize();
	for (int i = 0; i < tab.lineL.GetSize(); i++) {
		if (get_attr_switch_store_t(tab.lineL[unique_indexes[choice_line]], choice_col) == get_attr_switch_store_t(tab.lineL[i], choice_col)) {
			if (is_first) {
				boofer_tab.lineL.push_back(tab.lineL[i]);
				if (manual)
					cout_store_t(tab.lineL[i]);
				all_index.push_back(tab.lineL[i].id);
			}
			else {
				for (int j = 0; j < c_all_index; j++) {
					if (all_index[j] == tab.lineL[i].id) {
						boofer_tab.lineL.push_back(tab.lineL[i]);
						if (manual)
							cout_store_t(tab.lineL[i]);
						delete_index.push_back(tab.lineL[i].id);
					}
				}
			}
		}
	}
	if (!is_first) {
		all_index.clear();
		for (int push_this_itter = 0; push_this_itter < delete_index.GetSize(); push_this_itter++) {
			all_index.push_back(delete_index[push_this_itter]);
		}
		delete_index.clear();
	}

	unique_indexes.clear();
	if (manual)
		cout << abrams_line_store_t << endl;

	for (int i = 0; i < boofer_tab.lineL.GetSize(); i++) {
		unique_indexes.push_back(boofer_tab.lineL[i].id);
	}
	boofer_tab.lineL.clear();
}

void cout_products_t(products_t& tab, table<maker_t>& mak_table) {
	// Функция для визуализации выбранных фильтров;
	cout << "|"
		<< mak_table.lineL[tab.id_maker].name << "\t|"
		<< tab.name << "\t|"
		<< tab.cost << "\t\t|"
		<< tab.type_product << "\t|"
		<< tab.type_package << "\t|"
		<< tab.weight << "\t|"
		<< tab.warehouse_count << "\t|" << endl;
}
string get_attr_switch_products_t(products_t& tab, int choice_col, table<maker_t>& mak_table) {
	// Функция для отправки нужного атрибута (столбца) по выбранному столбцу в мердже таблиц: products_t;
	string result_string;
	switch (choice_col)
	{
	case 1:
		return mak_table.lineL[tab.id_maker].name;
	case 2:
		return tab.name;
	case 3:
		return to_string(tab.cost);
	case 4:
		return tab.type_product;
	case 5:
		return tab.type_package;
	case 6:
		return to_string(tab.weight);
	case 7:
		return to_string(tab.warehouse_count);
	default:
		return ">>> Not Found This Column (???)\n";
	}
}
void solo_case_products_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<products_t>& tab, table<products_t>& boofer_tab, table<maker_t>& maker_tab)
{
	//функция для 1 шага по фильтрации;
	bool is_unique;											// уникальное-ли значение текущей строки (для первичной фильтрации);
	int choice_line;										// для выбранной синии, т.е. для выбранного индекса;
	int c_all_index = 0;									// размер листа отфильтрованных индексов;
	List<int> not_pop_list;									// сохраняем те индексы, которые не будем убирать из листа уже отфильтрованных индексов, т.е. - которые подходят;
	List<int> delete_index;									// для сбора индексов, которые будут удаляться;

	if (is_first) {
		for (int i = 0; i < tab.lineL.GetSize(); i++) {
			if (unique_indexes.GetSize() > 0) {
				is_unique = true;
				for (int j = 0; j < unique_indexes.GetSize(); j++) {
					if (get_attr_switch_products_t(tab.lineL[unique_indexes[j]], choice_col, maker_tab) == get_attr_switch_products_t(tab.lineL[i], choice_col, maker_tab)) {
						is_unique = false;
						break;
					}
				}
				if (is_unique) {
					unique_indexes.push_back(tab.lineL[i].id);
				}
			}
			else {
				unique_indexes.push_back(tab.lineL[i].id);
			}
		}
	}
	else {
		for (int i = 0; i < unique_indexes.GetSize(); i++) {
			not_pop_list.push_back(unique_indexes[i]);
			is_unique = true;
			for (int j = i + 1; j < unique_indexes.GetSize(); j++) {
				if (get_attr_switch_products_t(tab.lineL[unique_indexes[j]], choice_col, maker_tab) == get_attr_switch_products_t(tab.lineL[unique_indexes[i]], choice_col, maker_tab)) {
					is_unique = false;
					break;
				}
			}
			if (!is_unique) {
				not_pop_list.pop_back();
			}
		}
		unique_indexes.clear();
		for (int i = 0; i < not_pop_list.GetSize(); i++) {
			unique_indexes.push_back(not_pop_list[i]);
		}
		not_pop_list.clear();
	}

	if (manual)
		cout << abrams_line_store_t << endl << line_names << endl;
	for (int i = 0; i < unique_indexes.GetSize(); i++) {
		cout << " [" << i << "] " << get_attr_switch_products_t(tab.lineL[unique_indexes[i]], choice_col, maker_tab) << ";" << endl;
	}
	cin >> choice_line;
	if (manual)
		cout << abrams_line_store_t << endl << column_names << endl;

	c_all_index = all_index.GetSize();
	for (int i = 0; i < tab.lineL.GetSize(); i++) {
		if (get_attr_switch_products_t(tab.lineL[unique_indexes[choice_line]], choice_col, maker_tab) == get_attr_switch_products_t(tab.lineL[i], choice_col, maker_tab)) {
			if (is_first) {
				boofer_tab.lineL.push_back(tab.lineL[i]);
				if (manual)
					cout_products_t(tab.lineL[i], maker_tab);
				all_index.push_back(tab.lineL[i].id);
			}
			else {
				for (int j = 0; j < c_all_index; j++) {
					if (all_index[j] == tab.lineL[i].id) {
						boofer_tab.lineL.push_back(tab.lineL[i]);
						if (manual)
							cout_products_t(tab.lineL[i], maker_tab);
						delete_index.push_back(tab.lineL[i].id);
					}
				}
			}
		}
	}
	if (!is_first) {
		all_index.clear();
		for (int push_this_itter = 0; push_this_itter < delete_index.GetSize(); push_this_itter++) {
			all_index.push_back(delete_index[push_this_itter]);
		}
		delete_index.clear();
	}

	unique_indexes.clear();
	if (manual)
		cout << abrams_line_store_t << endl;

	for (int i = 0; i < boofer_tab.lineL.GetSize(); i++) {
		unique_indexes.push_back(boofer_tab.lineL[i].id);
	}
	boofer_tab.lineL.clear();
}

void cout_accounting_prodict_t(accounting_prodict_t& tab, table<products_t>& prod_table, table<store_t>& store_table) {
	// Функция для визуализации выбранных фильтров;
	cout << "|"
		<< prod_table.lineL[tab.id_product].name << "\t|"
		<< store_table.lineL[tab.id_store].name << "\t|"
		<< tab.store_count << "\t\t|" << endl;
}
string get_attr_switch_accounting_prodict_t(accounting_prodict_t& tab, int choice_col, table<products_t>& prod_table, table<store_t>& store_table) {
	// Функция для отправки нужного атрибута (столбца) по выбранному столбцу в мердже таблиц: products_t;
	string result_string;
	switch (choice_col)
	{
	case 1:
		return prod_table.lineL[tab.id_product].name;
	case 2:
		return store_table.lineL[tab.id_store].name;
	case 3:
		return to_string(tab.store_count);
	default:
		return ">>> Not Found This Column (???)\n";
	}
}
void solo_case_accounting_prodict_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<accounting_prodict_t>& tab, table<accounting_prodict_t>& boofer_tab, table<products_t>& prod_table, table<store_t>& store_table)
{
	//функция для 1 шага по фильтрации;
	bool is_unique;											// уникальное-ли значение текущей строки (для первичной фильтрации);
	int choice_line;										// для выбранной синии, т.е. для выбранного индекса;
	int c_all_index = 0;									// размер листа отфильтрованных индексов;
	List<int> not_pop_list;									// сохраняем те индексы, которые не будем убирать из листа уже отфильтрованных индексов, т.е. - которые подходят;
	List<int> delete_index;									// для сбора индексов, которые будут удаляться;

	if (is_first) {
		for (int i = 0; i < tab.lineL.GetSize(); i++) {
			if (unique_indexes.GetSize() > 0) {
				is_unique = true;
				for (int j = 0; j < unique_indexes.GetSize(); j++) {
					if (get_attr_switch_accounting_prodict_t(tab.lineL[unique_indexes[j]], choice_col, prod_table, store_table) == get_attr_switch_accounting_prodict_t(tab.lineL[i], choice_col, prod_table, store_table)) {
						is_unique = false;
						break;
					}
				}
				if (is_unique) {
					unique_indexes.push_back(tab.lineL[i].id);
				}
			}
			else {
				unique_indexes.push_back(tab.lineL[i].id);
			}
		}
	}
	else {
		for (int i = 0; i < unique_indexes.GetSize(); i++) {
			not_pop_list.push_back(unique_indexes[i]);
			is_unique = true;
			for (int j = i + 1; j < unique_indexes.GetSize(); j++) {
				if (get_attr_switch_accounting_prodict_t(tab.lineL[unique_indexes[j]], choice_col, prod_table, store_table) == get_attr_switch_accounting_prodict_t(tab.lineL[unique_indexes[i]], choice_col, prod_table, store_table)) {
					is_unique = false;
					break;
				}
			}
			if (!is_unique) {
				not_pop_list.pop_back();
			}
		}
		unique_indexes.clear();
		for (int i = 0; i < not_pop_list.GetSize(); i++) {
			unique_indexes.push_back(not_pop_list[i]);
		}
		not_pop_list.clear();
	}

	if (manual)
		cout << abrams_line_store_t << endl << line_names << endl;
	for (int i = 0; i < unique_indexes.GetSize(); i++) {
		cout << " [" << i << "] " << get_attr_switch_accounting_prodict_t(tab.lineL[unique_indexes[i]], choice_col, prod_table, store_table) << ";" << endl;
	}
	cin >> choice_line;
	if (manual)
		cout << abrams_line_store_t << endl << column_names << endl;

	c_all_index = all_index.GetSize();
	for (int i = 0; i < tab.lineL.GetSize(); i++) {
		if (get_attr_switch_accounting_prodict_t(tab.lineL[unique_indexes[choice_line]], choice_col, prod_table, store_table) == get_attr_switch_accounting_prodict_t(tab.lineL[i], choice_col, prod_table, store_table)) {
			if (is_first) {
				boofer_tab.lineL.push_back(tab.lineL[i]);
				if (manual)
					cout_accounting_prodict_t(tab.lineL[i], prod_table, store_table);
				all_index.push_back(tab.lineL[i].id);
			}
			else {
				for (int j = 0; j < c_all_index; j++) {
					if (all_index[j] == tab.lineL[i].id) {
						boofer_tab.lineL.push_back(tab.lineL[i]);
						if (manual)
							cout_accounting_prodict_t(tab.lineL[i], prod_table, store_table);
						delete_index.push_back(tab.lineL[i].id);
					}
				}
			}
		}
	}
	if (!is_first) {
		all_index.clear();
		for (int push_this_itter = 0; push_this_itter < delete_index.GetSize(); push_this_itter++) {
			all_index.push_back(delete_index[push_this_itter]);
		}
		delete_index.clear();
	}

	unique_indexes.clear();
	if (manual)
		cout << abrams_line_store_t << endl;

	for (int i = 0; i < boofer_tab.lineL.GetSize(); i++) {
		unique_indexes.push_back(boofer_tab.lineL[i].id);
	}
	boofer_tab.lineL.clear();
}

void cout_spa_t(merge_table_spa& tab) {
	// Функция для визуализации выбранных фильтров;
	cout << "|"
		<< tab.name_store << "\t|"
		<< tab.type_store << "\t|"
		<< tab.city_adress << "\t|"
		<< tab.open_hour << "\t|"
		<< tab.maker << "\t|"
		<< tab.name_product << "\t|"
		<< tab.cost_product << "\t\t|" 
		<< tab.type_product << "\t|"
		<< tab.type_package << "\t|"
		<< tab.weight_product << "\t\t|"
		<< tab.warehouse_count << "\t\t|"
		<< tab.store_count << "\t\t|"
		<< endl;
}
string get_attr_switch_spa_t(merge_table_spa& tab, int choice_col) {
	// Функция для отправки нужного атрибута (столбца) по выбранному столбцу в мердже таблиц: products_t;
	string result_string;
	switch (choice_col)
	{
	case 1:
		return tab.name_store;
	case 2:
		return tab.type_store;
	case 3:
		return tab.city_adress;
	case 4:
		return tab.open_hour;
	case 5:
		return tab.maker;
	case 6:
		return tab.name_product;
	case 7:
		return to_string(tab.cost_product);
	case 8:
		return tab.type_product;
	case 9:
		return tab.type_package;
	case 10:
		return to_string(tab.weight_product);
	case 11:
		return to_string(tab.warehouse_count);
	case 12:
		return to_string(tab.store_count);
	default:
		return ">>> Not Found This Column (???)\n";
	}
}
void solo_case_spa_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<merge_table_spa>& tab, table<merge_table_spa>& boofer_tab)
{
	//функция для 1 шага по фильтрации;
	bool is_unique;											// уникальное-ли значение текущей строки (для первичной фильтрации);
	int choice_line;										// для выбранной синии, т.е. для выбранного индекса;
	int c_all_index = 0;									// размер листа отфильтрованных индексов;
	List<int> not_pop_list;									// сохраняем те индексы, которые не будем убирать из листа уже отфильтрованных индексов, т.е. - которые подходят;
	List<int> delete_index;									// для сбора индексов, которые будут удаляться;

	if (is_first) {
		for (int i = 0; i < tab.lineL.GetSize(); i++) {
			if (unique_indexes.GetSize() > 0) {
				is_unique = true;
				for (int j = 0; j < unique_indexes.GetSize(); j++) {
					if (get_attr_switch_spa_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_spa_t(tab.lineL[i], choice_col)) {
						is_unique = false;
						break;
					}
				}
				if (is_unique) {
					unique_indexes.push_back(tab.lineL[i].id);
				}
			}
			else {
				unique_indexes.push_back(tab.lineL[i].id);
			}
		}
	}
	else {
		for (int i = 0; i < unique_indexes.GetSize(); i++) {
			not_pop_list.push_back(unique_indexes[i]);
			is_unique = true;
			for (int j = i + 1; j < unique_indexes.GetSize(); j++) {
				if (get_attr_switch_spa_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_spa_t(tab.lineL[unique_indexes[i]], choice_col)) {
					is_unique = false;
					break;
				}
			}
			if (!is_unique) {
				not_pop_list.pop_back();
			}
		}
		unique_indexes.clear();
		for (int i = 0; i < not_pop_list.GetSize(); i++) {
			unique_indexes.push_back(not_pop_list[i]);
		}
		not_pop_list.clear();
	}

	if (manual)
		cout << abrams_line_store_t << endl << line_names << endl;
	for (int i = 0; i < unique_indexes.GetSize(); i++) {
		cout << " [" << i << "] " << get_attr_switch_spa_t(tab.lineL[unique_indexes[i]], choice_col) << ";" << endl;
	}
	cin >> choice_line;
	if (manual)
		cout << abrams_line_store_t << endl << column_names << endl;

	c_all_index = all_index.GetSize();
	for (int i = 0; i < tab.lineL.GetSize(); i++) {
		if (get_attr_switch_spa_t(tab.lineL[unique_indexes[choice_line]], choice_col) == get_attr_switch_spa_t(tab.lineL[i], choice_col)) {
			if (is_first) {
				boofer_tab.lineL.push_back(tab.lineL[i]);
				if (manual)
					cout_spa_t(tab.lineL[i]);
				all_index.push_back(tab.lineL[i].id);
			}
			else {
				for (int j = 0; j < c_all_index; j++) {
					if (all_index[j] == tab.lineL[i].id) {
						boofer_tab.lineL.push_back(tab.lineL[i]);
						if (manual)
							cout_spa_t(tab.lineL[i]);
						delete_index.push_back(tab.lineL[i].id);
					}
				}
			}
		}
	}
	if (!is_first) {
		all_index.clear();
		for (int push_this_itter = 0; push_this_itter < delete_index.GetSize(); push_this_itter++) {
			all_index.push_back(delete_index[push_this_itter]);
		}
		delete_index.clear();
	}

	unique_indexes.clear();
	if (manual)
		cout << abrams_line_store_t << endl;

	for (int i = 0; i < boofer_tab.lineL.GetSize(); i++) {
		unique_indexes.push_back(boofer_tab.lineL[i].id);
	}
	boofer_tab.lineL.clear();
}

void cout_sa_t(merge_table_sa& tab) {
	// Функция для визуализации выбранных фильтров;
	cout << "|"
		<< tab.name_store << "\t|"
		<< tab.type << "\t|"
		<< tab.city_adress << "\t|"
		<< tab.street_adress << "\t|"
		<< tab.street_number_adress << "\t\t|"
		<< tab.rent << "\t\t|"
		<< tab.music << "\t\t|"
		<< tab.color << "\t|"
		<< tab.for_invalids << "\t\t|"
		<< tab.open_hour << "\t|"
		<< tab.product << "\t|"
		<< tab.store_count << "\t\t|"
		<< endl;
}
string get_attr_switch_sa_t(merge_table_sa& tab, int choice_col) {
	// Функция для отправки нужного атрибута (столбца) по выбранному столбцу в мердже таблиц: products_t;
	string result_string;
	switch (choice_col)
	{
	case 1:
		return tab.name_store;
	case 2:
		return tab.type;
	case 3:
		return tab.city_adress;
	case 4:
		return tab.street_adress;
	case 5:
		return to_string(tab.street_number_adress);
	case 6:
		return to_string(tab.rent);
	case 7:
		return to_string(tab.music);
	case 8:
		return tab.color;
	case 9:
		return to_string(tab.for_invalids);
	case 10:
		return tab.open_hour;
	case 11:
		return tab.product;
	case 12:
		return to_string(tab.store_count);
	default:
		return ">>> Not Found This Column (???)\n";
	}
}
void solo_case_sa_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<merge_table_sa>& tab, table<merge_table_sa>& boofer_tab)
{
	//функция для 1 шага по фильтрации;
	bool is_unique;											// уникальное-ли значение текущей строки (для первичной фильтрации);
	int choice_line;										// для выбранной синии, т.е. для выбранного индекса;
	int c_all_index = 0;									// размер листа отфильтрованных индексов;
	List<int> not_pop_list;									// сохраняем те индексы, которые не будем убирать из листа уже отфильтрованных индексов, т.е. - которые подходят;
	List<int> delete_index;									// для сбора индексов, которые будут удаляться;

	if (is_first) {
		for (int i = 0; i < tab.lineL.GetSize(); i++) {
			if (unique_indexes.GetSize() > 0) {
				is_unique = true;
				for (int j = 0; j < unique_indexes.GetSize(); j++) {
					if (get_attr_switch_sa_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_sa_t(tab.lineL[i], choice_col)) {
						is_unique = false;
						break;
					}
				}
				if (is_unique) {
					unique_indexes.push_back(tab.lineL[i].id);
				}
			}
			else {
				unique_indexes.push_back(tab.lineL[i].id);
			}
		}
	}
	else {
		for (int i = 0; i < unique_indexes.GetSize(); i++) {
			not_pop_list.push_back(unique_indexes[i]);
			is_unique = true;
			for (int j = i + 1; j < unique_indexes.GetSize(); j++) {
				if (get_attr_switch_sa_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_sa_t(tab.lineL[unique_indexes[i]], choice_col)) {
					is_unique = false;
					break;
				}
			}
			if (!is_unique) {
				not_pop_list.pop_back();
			}
		}
		unique_indexes.clear();
		for (int i = 0; i < not_pop_list.GetSize(); i++) {
			unique_indexes.push_back(not_pop_list[i]);
		}
		not_pop_list.clear();
	}

	if (manual)
		cout << abrams_line_store_t << endl << line_names << endl;
	for (int i = 0; i < unique_indexes.GetSize(); i++) {
		cout << " [" << i << "] " << get_attr_switch_sa_t(tab.lineL[unique_indexes[i]], choice_col) << ";" << endl;
	}
	cin >> choice_line;
	if (manual)
		cout << abrams_line_store_t << endl << column_names << endl;

	c_all_index = all_index.GetSize();
	for (int i = 0; i < tab.lineL.GetSize(); i++) {
		if (get_attr_switch_sa_t(tab.lineL[unique_indexes[choice_line]], choice_col) == get_attr_switch_sa_t(tab.lineL[i], choice_col)) {
			if (is_first) {
				boofer_tab.lineL.push_back(tab.lineL[i]);
				if (manual)
					cout_sa_t(tab.lineL[i]);
				all_index.push_back(tab.lineL[i].id);
			}
			else {
				for (int j = 0; j < c_all_index; j++) {
					if (all_index[j] == tab.lineL[i].id) {
						boofer_tab.lineL.push_back(tab.lineL[i]);
						if (manual)
							cout_sa_t(tab.lineL[i]);
						delete_index.push_back(tab.lineL[i].id);
					}
				}
			}
		}
	}
	if (!is_first) {
		all_index.clear();
		for (int push_this_itter = 0; push_this_itter < delete_index.GetSize(); push_this_itter++) {
			all_index.push_back(delete_index[push_this_itter]);
		}
		delete_index.clear();
	}

	unique_indexes.clear();
	if (manual)
		cout << abrams_line_store_t << endl;

	for (int i = 0; i < boofer_tab.lineL.GetSize(); i++) {
		unique_indexes.push_back(boofer_tab.lineL[i].id);
	}
	boofer_tab.lineL.clear();
}

void cout_pa_t(merge_table_pa& tab) {
	// Функция для визуализации выбранных фильтров;
	cout << "|"
		<< tab.maker << "\t|"
		<< tab.name_product << "\t|"
		<< tab.cost << "\t\t|"
		<< tab.type_product << "\t|"
		<< tab.type_package << "\t|"
		<< tab.weight << "\t\t|"
		<< tab.warehouse_count << "\t\t|"
		<< tab.name_store << "\t|"
		<< tab.store_count << "\t\t|"
		<< endl;
}
string get_attr_switch_pa_t(merge_table_pa& tab, int choice_col) {
	// Функция для отправки нужного атрибута (столбца) по выбранному столбцу в мердже таблиц: products_t;
	string result_string;
	switch (choice_col)
	{
	case 1:
		return tab.maker;
	case 2:
		return tab.name_product;
	case 3:
		return to_string(tab.cost);
	case 4:
		return tab.type_product;
	case 5:
		return tab.type_package;
	case 6:
		return to_string(tab.weight);
	case 7:
		return to_string(tab.warehouse_count);
	case 8:
		return tab.name_store;
	case 9:
		return to_string(tab.store_count);
	default:
		return ">>> Not Found This Column (???)\n";
	}
}
void solo_case_pa_t(bool manual, int merge_state, int choice_col, bool is_first, List<int>& all_index, List<int>& unique_indexes, const string line_names, const string abrams_line_store_t, const string choice_columns_text, const string column_names, table<merge_table_pa>& tab, table<merge_table_pa>& boofer_tab)
{
	//функция для 1 шага по фильтрации;
	bool is_unique;											// уникальное-ли значение текущей строки (для первичной фильтрации);
	int choice_line;										// для выбранной синии, т.е. для выбранного индекса;
	int c_all_index = 0;									// размер листа отфильтрованных индексов;
	List<int> not_pop_list;									// сохраняем те индексы, которые не будем убирать из листа уже отфильтрованных индексов, т.е. - которые подходят;
	List<int> delete_index;									// для сбора индексов, которые будут удаляться;

	if (is_first) {
		for (int i = 0; i < tab.lineL.GetSize(); i++) {
			if (unique_indexes.GetSize() > 0) {
				is_unique = true;
				for (int j = 0; j < unique_indexes.GetSize(); j++) {
					if (get_attr_switch_pa_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_pa_t(tab.lineL[i], choice_col)) {
						is_unique = false;
						break;
					}
				}
				if (is_unique) {
					unique_indexes.push_back(tab.lineL[i].id);
				}
			}
			else {
				unique_indexes.push_back(tab.lineL[i].id);
			}
		}
	}
	else {
		for (int i = 0; i < unique_indexes.GetSize(); i++) {
			not_pop_list.push_back(unique_indexes[i]);
			is_unique = true;
			for (int j = i + 1; j < unique_indexes.GetSize(); j++) {
				if (get_attr_switch_pa_t(tab.lineL[unique_indexes[j]], choice_col) == get_attr_switch_pa_t(tab.lineL[unique_indexes[i]], choice_col)) {
					is_unique = false;
					break;
				}
			}
			if (!is_unique) {
				not_pop_list.pop_back();
			}
		}
		unique_indexes.clear();
		for (int i = 0; i < not_pop_list.GetSize(); i++) {
			unique_indexes.push_back(not_pop_list[i]);
		}
		not_pop_list.clear();
	}

	if (manual)
		cout << abrams_line_store_t << endl << line_names << endl;
	for (int i = 0; i < unique_indexes.GetSize(); i++) {
		cout << " [" << i << "] " << get_attr_switch_pa_t(tab.lineL[unique_indexes[i]], choice_col) << ";" << endl;
	}
	cin >> choice_line;
	if (manual)
		cout << abrams_line_store_t << endl << column_names << endl;

	c_all_index = all_index.GetSize();
	for (int i = 0; i < tab.lineL.GetSize(); i++) {
		if (get_attr_switch_pa_t(tab.lineL[unique_indexes[choice_line]], choice_col) == get_attr_switch_pa_t(tab.lineL[i], choice_col)) {
			if (is_first) {
				boofer_tab.lineL.push_back(tab.lineL[i]);
				if (manual)
					cout_pa_t(tab.lineL[i]);
				all_index.push_back(tab.lineL[i].id);
			}
			else {
				for (int j = 0; j < c_all_index; j++) {
					if (all_index[j] == tab.lineL[i].id) {
						boofer_tab.lineL.push_back(tab.lineL[i]);
						if (manual)
							cout_pa_t(tab.lineL[i]);
						delete_index.push_back(tab.lineL[i].id);
					}
				}
			}
		}
	}
	if (!is_first) {
		all_index.clear();
		for (int push_this_itter = 0; push_this_itter < delete_index.GetSize(); push_this_itter++) {
			all_index.push_back(delete_index[push_this_itter]);
		}
		delete_index.clear();
	}

	unique_indexes.clear();
	if (manual)
		cout << abrams_line_store_t << endl;

	for (int i = 0; i < boofer_tab.lineL.GetSize(); i++) {
		unique_indexes.push_back(boofer_tab.lineL[i].id);
	}
	boofer_tab.lineL.clear();
}

List<int> choice_column_list(int max_col_n) {
	string boofer_str = "";
	string column_string;
	List<int> column_list;
	cout << ">>> Пожалуйста, введите через (;) все столбцы, с которыми хотите провести фильртрацию:" << endl;
	cin >> column_string;
	for (int i = 0; i < column_string.length(); i++) {
		if (column_string.at(i) == ';') {
			if (boofer_str.length() < 1) {
				continue;
			}
			else {
				if (stoi(boofer_str) <= max_col_n) {
					column_list.push_back(stoi(boofer_str));
				}
				else {
					cout << ">>> Такого столбца тут не существует. Он не учитывается." << endl;
				}
				boofer_str = "";
			}
		}
		else {
			if (!isdigit(column_string.at(i))) {
				boofer_str = "";
				continue;
			}
			else {
				boofer_str += column_string.at(i);
			}
		}

	}
	return column_list;
}

void multiple_choice_store_t(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<store_t>& store_tab, table<store_t>& boofer_store_tab) {
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		cout_store_t(store_tab.lineL[i]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
	List<int> res_list = choice_column_list(10);

	for (size_t i = 0; i < res_list.GetSize(); i++) {
		choice_col = res_list[i];
		if (choice_col != 0) {
			solo_case_store_t(false, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_store_t, choice_columns_text, column_names, store_tab, boofer_store_tab);
		}
		else {
			break;
		}
		is_first = false;
		if (!is_first && unique_indexes.GetSize() == 0)
			choice_col = 0;
	}
	res_list.clear();
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < all_index.GetSize(); i++) {
		cout_store_t(store_tab.lineL[all_index[i]]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
}
void multiple_choice_products_t(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<products_t>& store_tab, table<products_t>& boofer_store_tab, table<maker_t>& maker_tab) {
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		cout_products_t(store_tab.lineL[i], maker_tab);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
	List<int> res_list = choice_column_list(10);

	for (size_t i = 0; i < res_list.GetSize(); i++) {
		choice_col = res_list[i];
		if (choice_col != 0) {
			solo_case_products_t(false, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_store_t, choice_columns_text, column_names, store_tab, boofer_store_tab, maker_tab);
		}
		else {
			break;
		}
		is_first = false;
		if (!is_first && unique_indexes.GetSize() == 0)
			choice_col = 0;
	}
	res_list.clear();
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < all_index.GetSize(); i++) {
		cout_products_t(store_tab.lineL[all_index[i]], maker_tab);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
}
void multiple_choice_accounting_prodict_t(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<accounting_prodict_t>& store_tab, table<accounting_prodict_t>& boofer_store_tab, table<products_t>& products_tab, table<store_t> store_tab2) {
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		cout_accounting_prodict_t(store_tab.lineL[i], products_tab, store_tab2);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
	List<int> res_list = choice_column_list(10);

	for (size_t i = 0; i < res_list.GetSize(); i++) {
		choice_col = res_list[i];
		if (choice_col != 0) {
			solo_case_accounting_prodict_t(false, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_store_t, choice_columns_text, column_names, store_tab, boofer_store_tab, products_tab, store_tab2);
		}
		else {
			break;
		}
		is_first = false;
		if (!is_first && unique_indexes.GetSize() == 0)
			choice_col = 0;
	}
	res_list.clear();
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < all_index.GetSize(); i++) {
		cout_accounting_prodict_t(store_tab.lineL[all_index[i]], products_tab, store_tab2);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
}
void multiple_choice_spa(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<merge_table_spa>& store_tab, table<merge_table_spa>& boofer_store_tab) {
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		cout_spa_t(store_tab.lineL[i]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
	List<int> res_list = choice_column_list(10);

	for (size_t i = 0; i < res_list.GetSize(); i++) {
		choice_col = res_list[i];
		if (choice_col != 0) {
			solo_case_spa_t(false, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_store_t, choice_columns_text, column_names, store_tab, boofer_store_tab);
		}
		else {
			break;
		}
		is_first = false;
		if (!is_first && unique_indexes.GetSize() == 0)
			choice_col = 0;
	}
	res_list.clear();
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < all_index.GetSize(); i++) {
		cout_spa_t(store_tab.lineL[all_index[i]]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
}
void multiple_choice_sa(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<merge_table_sa>& store_tab, table<merge_table_sa>& boofer_store_tab) {
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		cout_sa_t(store_tab.lineL[i]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
	List<int> res_list = choice_column_list(10);

	for (size_t i = 0; i < res_list.GetSize(); i++) {
		choice_col = res_list[i];
		if (choice_col != 0) {
			solo_case_sa_t(false, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_store_t, choice_columns_text, column_names, store_tab, boofer_store_tab);
		}
		else {
			break;
		}
		is_first = false;
		if (!is_first && unique_indexes.GetSize() == 0)
			choice_col = 0;
	}
	res_list.clear();
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < all_index.GetSize(); i++) {
		cout_sa_t(store_tab.lineL[all_index[i]]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
}
void multiple_choice_pa(string abrams_line_store_t, string column_names, string choice_columns_text, string line_names, int merge_state, int choice_col, bool is_first, List<int>& unique_indexes, List<int>& all_index, table<merge_table_pa>& store_tab, table<merge_table_pa>& boofer_store_tab) {
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < store_tab.lineL.GetSize(); i++) {
		cout_pa_t(store_tab.lineL[i]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
	List<int> res_list = choice_column_list(10);

	for (size_t i = 0; i < res_list.GetSize(); i++) {
		choice_col = res_list[i];
		if (choice_col != 0) {
			solo_case_pa_t(false, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_store_t, choice_columns_text, column_names, store_tab, boofer_store_tab);
		}
		else {
			break;
		}
		is_first = false;
		if (!is_first && unique_indexes.GetSize() == 0)
			choice_col = 0;
	}
	res_list.clear();
	cout << abrams_line_store_t << endl << column_names << endl << abrams_line_store_t << endl;
	for (int i = 0; i < all_index.GetSize(); i++) {
		cout_pa_t(store_tab.lineL[all_index[i]]);
	}
	cout << abrams_line_store_t << endl << choice_columns_text << endl;
}


void choice_col_str(int merge_state) {

	List<int> unique_indexes;	
	List<int> all_index;		//запоминание разрывной информации в память программы и чистка другой переменной
	int choice_col = 1;			//переменные для переключения внутренних состояний обработчика отображеения merge
	bool is_first = true;
	//интерфейс для пользователя - GUI
	const string line_names = ">>> Выберите уникальное значение, по которому произойдет фильтрация всех строк в таблице:";
	if (merge_state == 1) {
		// мердж таблицы store_t (1)
		table<store_t> store_tab = store_t_var_upload("store_t.txt");	// таблица store_t;
		table<store_t> boofer_store_tab;								// буферная таблица;
		boofer_store_tab.index_table = 1;								// заполняем буферную таблицу индификатором;
		//интерфейс для пользователя - GUI для данного типа merge (1);
		string abrams_line_store_t = "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		string choice_columns_text = ">>> Выберите категорию, по которой будет произведена фильтрация:\n--------------------------------------------------------------\n [1] - Наименование магазина;\n [2] - Тип магазина;\n [3] - Город;\n [4] - Улица;\n [5] - Номер улицы;\n [6] - Стоимость аренды;\n [7] - Наличие музыки;\n [8] - Цвет оформления здания;\n [9] - Наличие пандусов для инвалидов;\n [10] - Часы работы;\n [0] - Выход.\n----------------------------------------";
		string column_names = "| Магазин\t\t| Тип\t\t\t| Город\t\t\t| Улица\t\t\t| Дом\t| Аренда| Музыка\t| Цвет\t\t\t| Для инвалидов\t| Часы работы\t\t|";

		multiple_choice_store_t(abrams_line_store_t, column_names, choice_columns_text, line_names, merge_state, choice_col, is_first, unique_indexes, all_index, store_tab, boofer_store_tab);
		cin >> choice_col;
		while (choice_col != 0) {
			cout << choice_columns_text << endl;
			cin >> choice_col;
			if (choice_col != 0)
				solo_case_store_t(true, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_store_t, choice_columns_text, column_names, store_tab, boofer_store_tab);
			is_first = false;
			if (!is_first && unique_indexes.GetSize() == 0)
				choice_col = 0;
		}
		unique_indexes.clear();
		all_index.clear();
		store_tab.lineL.clear();
		boofer_store_tab.lineL.clear();
	}
	else {
		if (merge_state == 2) {
			// мердж таблицы products_t (2)
			table<maker_t> maker_tab = maker_t_var_upload("maker_t.txt");				// таблица maker_t;
			table<products_t> products_tab = products_t_var_upload("products_t.txt");	// таблица products_t;
			table<products_t> boofer_products_tab;										// буферная таблица;
			boofer_products_tab.index_table = 1;										// заполняем буферную таблицу индификатором;
			//интерфейс для пользователя - GUI для данного типа merge (2);
			string abrams_line_products_t = "---------------------------------------------------------------------------------------------------------------------------------";
			string choice_columns_text = ">>> Выберите категорию, по которой будет произведена фильтрация:\n--------------------------------------------------------------\n [1] - Производитель;\n [2] - Товар;\n [3] - Стоимость;\n [4] - Тип;\n [5] - Тип упаковки;\n [6] - Вес;\n [7] - Всего;\n [0] - Выход.\n----------------------------------------";
			string column_names = "| Производитель\t\t| Товар \t\t| Стоимость\t| Тип\t\t\t| Тип упаковки\t\t| Вес\t| Всего\t|";

			multiple_choice_products_t(abrams_line_products_t, column_names, choice_columns_text, line_names, merge_state, choice_col, is_first, unique_indexes, all_index, products_tab, boofer_products_tab, maker_tab);
			cin >> choice_col;
			while (choice_col != 0) {
				cout << choice_columns_text << endl;
				cin >> choice_col;
				if (choice_col != 0)
					solo_case_products_t(true, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_products_t, choice_columns_text, column_names, products_tab, boofer_products_tab, maker_tab);
				is_first = false;
				if (!is_first && unique_indexes.GetSize() == 0)
					choice_col = 0;
			}
			unique_indexes.clear();
			all_index.clear();
			maker_tab.lineL.clear();
			products_tab.lineL.clear();
			boofer_products_tab.lineL.clear();
		}
		else {
			if (merge_state == 3) {
				// мердж таблицы accounting_prodict_t (3)
				table<accounting_prodict_t> accounting_prodict_tab = accounting_prodict_t_var_upload("accounting_prodict_t.txt");
				table<products_t> products_tab = products_t_var_upload("products_t.txt");	// таблица products_t;
				table<store_t> store_tab = store_t_var_upload("store_t.txt");				// таблица store_t;
				table<accounting_prodict_t> boofer_products_tab;							// буферная таблица;
				boofer_products_tab.index_table = 1;										// заполняем буферную таблицу индификатором;
				//интерфейс для пользователя - GUI для данного типа merge (2);
				string abrams_line_products_t = "-----------------------------------------------------------------";
				string choice_columns_text = ">>> Выберите категорию, по которой будет произведена фильтрация:\n-----------------------------------------------------------------\n [1] - Продукт;\n [2] - Магазин;\n [3] - Кол-во шт;\n [0] - Выход.\n-----------------------------------------------------------------";
				string column_names = "| Продукт\t\t| Магазин\t\t| Кол-во шт\t|";

				multiple_choice_accounting_prodict_t(abrams_line_products_t, column_names, choice_columns_text, line_names, merge_state, choice_col, is_first, unique_indexes, all_index, accounting_prodict_tab, boofer_products_tab, products_tab, store_tab);
				cin >> choice_col;
				while (choice_col != 0) {
					cout << choice_columns_text << endl;
					cin >> choice_col;
					if (choice_col != 0)
						solo_case_accounting_prodict_t(true, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_products_t, choice_columns_text, column_names, accounting_prodict_tab, boofer_products_tab, products_tab, store_tab);
					is_first = false;
					if (!is_first && unique_indexes.GetSize() == 0)
						choice_col = 0;
				}
				unique_indexes.clear();
				all_index.clear();
				accounting_prodict_tab.lineL.clear();
				products_tab.lineL.clear();
				store_tab.lineL.clear();
				boofer_products_tab.lineL.clear();
			}
			else {
				if (merge_state == 4) {
					// мердж таблицы merge_backend_spa (4)
					table<merge_table_spa> merge_tab_spa = merge_backend_spa();
					table<merge_table_spa> boofer_products_tab;							// буферная таблица;

					string abrams_line_products_t = "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
					string choice_columns_text = ">>> Выберите категорию, по которой будет произведена фильтрация:\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n [ 1] - Название магазина;\n [ 2] - Тип магазина;\n [ 3] - Город;\n [ 4] - Часы работы;\n [ 5] - Производитель;\n [ 6] - Продукт;\n [ 7] - Стоимость за шт;\n [ 8] - Тип продукта;\n [ 9] - Тип упаковки;\n [10] - Вес шт;\n [11] - На складе шт;\n [12] - В магазине шт;\n [ 0] - Выход.\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
					string column_names = "| Название магазина\t| Тип магазина\t\t| Город\t\t\t| Часы работы\t\t| Производитель\t\t| Продукт\t\t| Стоимость шт\t| Тип продукта\t\t| Тип упаковки\t\t| Вес шт\t| На складе шт\t| В магазине шт\t|";

					multiple_choice_spa(abrams_line_products_t, column_names, choice_columns_text, line_names, merge_state, choice_col, is_first, unique_indexes, all_index, merge_tab_spa, boofer_products_tab);
					cin >> choice_col;
					while (choice_col != 0) {
						cout << choice_columns_text << endl;
						cin >> choice_col;
						if (choice_col != 0)
							solo_case_spa_t(true, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_products_t, choice_columns_text, column_names, merge_tab_spa, boofer_products_tab);
						is_first = false;
						if (!is_first && unique_indexes.GetSize() == 0)
							choice_col = 0;
					}
					unique_indexes.clear();
					all_index.clear();
					boofer_products_tab.lineL.clear();
					merge_tab_spa.lineL.clear();
				}
				else {
					if (merge_state == 5) {
						// мердж таблицы merge_backend_sa (5)
						table<merge_table_sa> merge_tab_sa = merge_backend_sa();	// merge 1+5;
						table<merge_table_sa> boofer_products_tab;					// буферная таблица;

						string abrams_line_products_t = "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
						string choice_columns_text = ">>> Выберите категорию, по которой будет произведена фильтрация:\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n [ 1] - Название магазина;\n [ 2] - Тип магазина;\n [ 3] - Город;\n [ 4] - Улица;\n [ 5] - Дом;\n [ 6] - Аренда;\n [ 7] - Музыка;\n [ 8] - Цвет;\n [ 9] - Пандусы;\n [10] - Часы работы;\n [11] - Продукт;\n [12] - В магазине шт;\n [ 0] - Выход.\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
						string column_names = "| Название магазина\t| Тип магазина\t\t| Город\t\t\t| Улица\t\t\t| Дом\t\t| Аренда\t| Музыка\t| Цвет\t\t\t| Пандусы\t| Часы работы\t\t| Продукт\t\t| В магазине шт\t|";

						multiple_choice_sa(abrams_line_products_t, column_names, choice_columns_text, line_names, merge_state, choice_col, is_first, unique_indexes, all_index, merge_tab_sa, boofer_products_tab);
						cin >> choice_col;
						while (choice_col != 0) {
							cout << choice_columns_text << endl;
							cin >> choice_col;
							if (choice_col != 0)
								solo_case_sa_t(true, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_products_t, choice_columns_text, column_names, merge_tab_sa, boofer_products_tab);
							is_first = false;
							if (!is_first && unique_indexes.GetSize() == 0)
								choice_col = 0;
						}
						unique_indexes.clear();
						all_index.clear();
						merge_tab_sa.lineL.clear();
						boofer_products_tab.lineL.clear();
					}
					else {
						if (merge_state == 6) {
							// мердж таблицы merge_backend_pa (6)
							table<merge_table_pa> merge_tab_pa = merge_backend_pa();	// merge 3+5;
							table<merge_table_pa> boofer_products_tab;					// буферная таблица;

							string abrams_line_products_t = "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
							string choice_columns_text = ">>> Выберите категорию, по которой будет произведена фильтрация:\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n [ 1] - Производитель;\n [ 2] - Товар;\n [ 3] - Стоимость шт;\n [ 4] - Тип товара;\n [ 5] - Тип упаковки;\n [ 6] - Вес шт;\n [ 7] - Кол-во на складе;\n [ 8] - Магазин;\n [ 9] - Кол-во в магазине;\n [ 0] - Выход.\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
							string column_names = "| Производитель\t\t| Товар\t\t\t| Стоимость шт\t| Тип товара\t\t| Тип упаковки\t\t| Вес шт\t| Склад (шт)\t| Магазин\t\t| Магазин (шт)\t|";

							multiple_choice_pa(abrams_line_products_t, column_names, choice_columns_text, line_names, merge_state, choice_col, is_first, unique_indexes, all_index, merge_tab_pa, boofer_products_tab);
							cin >> choice_col;
							while (choice_col != 0) {
								cout << choice_columns_text << endl;
								cin >> choice_col;
								if (choice_col != 0)
									solo_case_pa_t(true, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_products_t, choice_columns_text, column_names, merge_tab_pa, boofer_products_tab);
								is_first = false;
								if (!is_first && unique_indexes.GetSize() == 0)
									choice_col = 0;
							}
							unique_indexes.clear();
							all_index.clear();
							merge_tab_pa.lineL.clear();
							boofer_products_tab.lineL.clear();
						}
						else {
							// мердж таблицы merge_backend_spa (7)
							table<merge_table_spa> merge_tab_spa = merge_backend_spa();	
							table<merge_table_spa> boofer_products_tab;					// буферная таблица;


							string abrams_line_products_t = "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
							string choice_columns_text = ">>> Выберите категорию, по которой будет произведена фильтрация:\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n [ 1] - Название магазина;\n [ 2] - Тип магазина;\n [ 3] - Город;\n [ 4] - Часы работы;\n [ 5] - Производитель;\n [ 6] - Продукт;\n [ 7] - Стоимость за шт;\n [ 8] - Тип продукта;\n [ 9] - Тип упаковки;\n [10] - Вес шт;\n [11] - На складе шт;\n [12] - В магазине шт;\n [ 0] - Выход.\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
							string column_names = "| Название магазина\t| Тип магазина\t\t| Город\t\t\t| Часы работы\t\t| Производитель\t\t| Продукт\t\t| Стоимость шт\t| Тип продукта\t\t| Тип упаковки\t\t| Вес шт\t| На складе шт\t| В магазине шт\t|";

							multiple_choice_spa(abrams_line_products_t, column_names, choice_columns_text, line_names, merge_state, choice_col, is_first, unique_indexes, all_index, merge_tab_spa, boofer_products_tab);
							cin >> choice_col;
							while (choice_col != 0) {
								cout << choice_columns_text << endl;
								cin >> choice_col;
								if (choice_col != 0)
									solo_case_spa_t(true, merge_state, choice_col, is_first, all_index, unique_indexes, line_names, abrams_line_products_t, choice_columns_text, column_names, merge_tab_spa, boofer_products_tab);
								is_first = false;
								if (!is_first && unique_indexes.GetSize() == 0)
									choice_col = 0;
							}
							unique_indexes.clear();
							all_index.clear();
							boofer_products_tab.lineL.clear();
							merge_tab_spa.lineL.clear();
						}
					}
				}
			}
		}
	}
}