#include "complex_figure.h"

complex_triangle::complex_triangle(int x_, int y_, int a_) : Figure(x_, y_, a_) {
	top = new triangle(x, y, a / 2);
	left = new triangle(x - a / 4, y / 2, a / 2);
	right = new triangle(x + a / 4, y / 2, a / 2);
};

void complex_triangle::show() {
	cout << "Это сложный треугольник" << endl;
	cout << "Верхний треугольник" << endl;
	top->show();
	cout << "Нижний левый треугольник" << endl;
	left->show();
	cout << "Нижний правый треугольник" << endl;
	right->show();
};

void complex_triangle::hide() {
	top->hide();
	left->hide();
	right->hide();
};

void complex_triangle::move(int _x, int _y) {
	this->x = _x;
	this->y = _y;
	top->move(x, y);
	left->move(x - a / 4, y / 2);
	right->move(x + a / 4, y / 2);
};