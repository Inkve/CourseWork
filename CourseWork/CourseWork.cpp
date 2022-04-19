#include "complex_figure.h"
#include <list>

int main()
{
	setlocale(LC_ALL, "");
	list<Figure*> test_list;
	complex_triangle test(2, 4, 4);
	triangle testt(1, 1, 3);
	test.show();
	testt.show();
	cout << "/////////////////////////" << endl;
	test_list.push_back(&test);
	test_list.push_back(&testt);
	for (Figure* element : test_list) {
		element->show();
	};
};
