#include "list.h"
const int NotUsed = system("color F1");

int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_15_Figures");
	setlocale(LC_ALL, "");
	try {
		List figures_list;
		complex_triangle complex_first(200, 200, 100);
		figures_list.add(complex_first);
		triangle first(100, 100, 100);
		figures_list.add(first);
		triangle second(180, 310, 45);
		figures_list.add(second);
		figures_list.view();
		Sleep(3000);
		first.move(300, 150);
		Sleep(3000);
		complex_first.move(100, 100);
		Sleep(3000);
		second.move(50, 350);
		figures_list.deletion();
	}
	catch (Figure::Errors error) {
		cout << error.cause << endl;
		cout << error.var << " : " << error.value1 << " " << error.value2 << endl;
	};
};
