#include "Triangle.h"

triangle::triangle(int x_, int y_, int a_) {
	x = x_;
	y = y_;
	a = a_;
}

void triangle::show() {
	int x_1 = x;
	int y_1 = y;
	int x_2 = x - (a / 2);
	int y_2 = y - a;
	int x_3 = x + (a / 2);
	int y_3 = y - a;
	cout << "������� ����������: (" << x_1 << ";" << y_1 << ")" << endl;
	cout << "������ ����� ����������: (" << x_2 << ";" << y_2 << ")" << endl;
	cout << "������ ������ ����������: (" << x_3 << ";" << y_3 << ")" << endl;
};