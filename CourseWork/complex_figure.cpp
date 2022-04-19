#include "complex_figure.h"

complex_triangle::complex_triangle(int x_, int y_, int a_) : Figure(x_, y_, a_) {
	top = new triangle(x, y, a / 2);
	left = new triangle(x - a / 4, y / 2, a / 2);
	right = new triangle(x + a / 4, y / 2, a / 2);
};

void complex_triangle::show() {
	cout << "��� ������� �����������" << endl;
	cout << "������� �����������" << endl;
	top->show();
	cout << "������ ����� �����������" << endl;
	left->show();
	cout << "������ ������ �����������" << endl;
	right->show();
};
