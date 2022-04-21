#include "list.h"

int main()
{
	setlocale(LC_ALL, "");
	List test_list;
	complex_triangle test(2, 4, 4);
	triangle testt(1, 1, 3);
	test.show();
	testt.show();
	cout << "/////////////////////////" << endl;
	test_list.add(test);
	test_list.add(testt);
	test_list.view();

	cout << "/////////////////////////" << endl;
	test_list.deletion();
	test_list.view();
};
