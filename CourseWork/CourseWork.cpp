#include "list.h"
const int NotUsed = system("color F1");

int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_15_Figures");
	setlocale(LC_ALL, "");
	try {
		List figures_list;
		complex_triangle complex_first(200, 400, 100);
		figures_list.add(complex_first);
		triangle first(500, 500, 100);
		figures_list.add(first);
		triangle second(170, 600, 50);
		figures_list.add(second);
		figures_list.view();
		Sleep(3000);
		complex_first.move(300, 400);
		Sleep(3000);
		first.move(600, 600);
		figures_list.deletion();
	}
	catch (Figure::Errors error) {
		cout << error.cause << endl;
	};
};
