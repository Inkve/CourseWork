#pragma once
#include "Triangle.h"

class complex_triangle : public Figure {
protected:
	int x;
	int y;
	int a;
	triangle* top;
	triangle* left;
	triangle* right;

public:
	complex_triangle(int, int, int);
	void show() override;
};
