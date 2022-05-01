#include "list.h"
const int NotUsed = system("color F1");

int main()
{
	setlocale(LC_ALL, "");
	List test_list;
	complex_triangle test(200, 400, 100);
	triangle testt(500, 500, 100);
	test.show();
	testt.show();
	test_list.add(test);
	test_list.add(testt);
	test_list.view();
	Sleep(3000);
	test.move(300, 400);
	test_list.deletion();
};
