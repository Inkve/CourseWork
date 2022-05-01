#include "Triangle.h"

triangle::triangle(int x_, int y_, int a_) : Figure(x_, y_, a_){};

void triangle::show() {
	int x_1 = x;
	int y_1 = y;
	int x_2 = x - (a / 2);
	int y_2 = y + a;
	int x_3 = x + (a / 2);
	int y_3 = y + a;
	/*cout << "Верхняя координата: (" << x_1 << ";" << y_1 << ")" << endl;
	cout << "Нижняя левая координата: (" << x_2 << ";" << y_2 << ")" << endl;
	cout << "Нижняя правая координата: (" << x_3 << ";" << y_3 << ")" << endl;*/
	
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
	this->x = _x;
	this->y = _y;
	this->show();
};
