#include "Triangle.h"

triangle::triangle(int x_, int y_, int a_) : Figure(x_, y_, a_){};

void triangle::show() {
	int x_1 = x;
	int y_1 = y;
	int x_2 = x - (a / 2);
	int y_2 = y + a;
	int x_3 = x + (a / 2);
	int y_3 = y + a;
	if (y_1 <= rt.top || x_2 <= rt.left || x_3 >= rt.right || y_3 >= rt.bottom) {
		if (x_2 <= rt.left && x_3 <= rt.right && y_1 >= rt.top && y_3 >= rt.bottom) {
			throw(Errors("Выход за левую границу области при рисовании!", "x_2", x_2, NULL));
		};
		if (x_2 >= rt.left && x_3 >= rt.right && y_1 >= rt.top && y_3 >= rt.bottom) {
			throw(Errors("Выход за правую границу области при рисовании!", "x_3", x_3, NULL));
		};
		if (x_2 >= rt.left && x_3 <= rt.right && y_1 <= rt.top && y_3 >= rt.bottom) {
			throw(Errors("Выход за верхнюю границу области при рисовании!", "y_1", y_1, NULL));
		};
		if (x_2 >= rt.left && x_3 <= rt.right && y_1 >= rt.top && y_3 <= rt.bottom) {
			throw(Errors("Выход за нижнюю границу области при рисовании!", "y_3", y_3, NULL));
		};
		throw(Errors("Выход за границы области при рисовании! Исходные данные", "x или y", x, y));
	};
	HPEN pen;
	pen = CreatePen(PS_SOLID, 3, RGB(0, 128, 0));
	SelectObject(hdc, pen);
	POINT points[] = {{x_1, y_1}, {x_2, y_2}, {x_3, y_3}};
	Polygon(hdc, points, 3);
	DeleteObject(pen);
};

void triangle::hide() {
	int x_1 = x;
	int y_1 = y;
	int x_2 = x - (a / 2);
	int y_2 = y + a;
	int x_3 = x + (a / 2);
	int y_3 = y + a;
	HPEN pen;
	HBRUSH  brush;
	pen = CreatePen(PS_SOLID, 3, RGB(243, 243, 243));
	brush = CreateSolidBrush(RGB(243, 243, 243));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	POINT points[] = { {x_1, y_1}, {x_2, y_2}, {x_3, y_3} };
	Polygon(hdc, points, 3);
	DeleteObject(pen);
	DeleteObject(brush);
};

void triangle::move(int _x, int _y) {
	this->hide();
	if (_x <= rt.left || _x >= rt.right || _y <= rt.top || _y >= rt.bottom) {
		if (_x <= rt.left && _x <= rt.right && _y >= rt.top && _y >= rt.bottom) {
			throw(Errors("Выход за левую границу области при перемещении!", "_x", _x, NULL));
		};
		if (_x >= rt.left && _x >= rt.right && _y >= rt.top && _y >= rt.bottom) {
			throw(Errors("Выход за правую границу области при перемещении!", "_x", _x, NULL));
		};
		if (_x >= rt.left && _x <= rt.right && _y <= rt.top && _y >= rt.bottom) {
			throw(Errors("Выход за верхнюю границу области при перемещении!", "_y", _y, NULL));
		};
		if (_x >= rt.left && _x <= rt.right && _y >= rt.top && _y <= rt.bottom) {
			throw(Errors("Выход за нижнюю границу области при перемещении!", "_y", _y, NULL));
		};
		throw(Errors("Выход за границы области при перемещении!", "x или y", _x, _y));
	};
	this->x = _x;
	this->y = _y;
	this->show();
};

triangle::~triangle() {};
