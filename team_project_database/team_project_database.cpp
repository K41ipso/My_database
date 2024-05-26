#include <iostream>
#include "../headers/list_func.h"
#include "../headers/table_read.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int torch = 9;
	int print_torch;
	
	string info_print_list_str = "========================================\n(1)--Print 'Store' table---------------|\n(2)--Print 'Workers' table-------------|\n(3)--Print 'Products' table------------|\n(4)--Print 'Maker' table---------------|\n(5)--Print 'Accounting product' table--|\n(0)--Exit.-----------------------------|\n========================================";
	string info_main_list_str = "================================================\n| (1) Print table from data base.              |\n| (2) Search on lines filter & choice columns. |\n| (3) Edit a table from data base.             |\n| (0) Exit.                                    |\n================================================";

	cout << ">>> Hello! My name is data base.\n>>> To start use my functions, you need choice a number in next list:" << endl;

	while (torch != 0) {

		cout << info_main_list_str << endl;
		cin >> torch;
		switch (torch)
		{
		case 1:
			print_torch = 9;
			while (print_torch != 0) {

				cout << ">>> Please, choice a table to show:" << endl << info_print_list_str << endl;
				cin >> print_torch;
				switch (print_torch)
				{
				case 1:
					print_store_t();
					break;
				case 2:
					print_workers_t();
					break;
				case 3:
					print_products_t();
					break;
				case 4:
					print_maker_t();
					break;
				case 5:
					print_accounting_prodict_t();
					break;
				default:
					cout << ">>> This table not found in data base.\n>>> To return in main menu - choice '0'.\n" << endl;
					break;
				}
			}
			break;
		case 2:
			choice_merge();
			break;
		case 3:
			merge_backend_spa();
		default:
			cout << ">>> Not found this function.\n>>> Try again or choice '0' to exit from data base.\n" << endl;
			break;
		}
	}

	/*print_store_t();
	cout << endl;
	print_workers_t();
	cout << endl;
	print_products_t();
	cout << endl;
	print_maker_t();
	cout << endl;
	print_accounting_prodict_t();*/
	
	//cout << store_t.index_table << " " << store_t.lineL.GetSize() << endl;

	/*int sizeL_store_t = store_t.lineL.GetSize();
	for (int i = 0; i < sizeL_store_t; i++) {
		store_t.lineL.pop_front();
	}*/

	return 1;
}