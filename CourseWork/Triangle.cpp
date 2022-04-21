#include "Triangle.h"

triangle::triangle(int x_, int y_, int a_) : Figure(x_, y_, a_){};

void triangle::show() {
	int x_1 = x;
	int y_1 = y;
	int x_2 = x - (a / 2);
	int y_2 = y - a;
	int x_3 = x + (a / 2);
	int y_3 = y - a;
	cout << "Верхняя координата: (" << x_1 << ";" << y_1 << ")" << endl;
	cout << "Нижняя левая координата: (" << x_2 << ";" << y_2 << ")" << endl;
	cout << "Нижняя правая координата: (" << x_3 << ";" << y_3 << ")" << endl;
};

void triangle::hide() {
};

void triangle::move(int _x, int _y) {
	this->hide();
	this->x = _x;
	this->y = _y;
	this->show();
};
