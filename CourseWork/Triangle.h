#include "Figure.h"
#pragma once


class triangle : public Figure{
protected:
	int x;
	int y;
	int a;

public:
	triangle(int, int, int);
	void show() override;
};


