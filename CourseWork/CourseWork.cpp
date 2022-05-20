#include "list.h"
const int NotUsed = system("color F1");

int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_15_Figures");
	setlocale(LC_ALL, "");
	try {
		List figures_list;
		triangle first(50, 100, 50);
		figures_list.add(first);
		complex_triangle complex_first(350, 25, 200);
		figures_list.add(complex_first);
		figures_list.view();
		Sleep(3000);
		first.move(250, 30);
		complex_first.move(150, 50);
		Sleep(3000);
		figures_list.remove();
		figures_list.view();
	}
	catch (Figure::Errors error) {
		cout << error.cause << endl;
		cout << error.var << " : " << error.value1 << " " << error.value2 << endl;
	}
	catch (List::Errors error) {
		cout << error.cause << endl;
		cout << error.var << " : " << error.value1 << " " << error.value2 << endl;
	};
};
