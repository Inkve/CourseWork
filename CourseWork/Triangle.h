#include "Figure.h"
#pragma once

class triangle : public Figure{
public:
	triangle(int, int, int);
	void show() override;
	void hide() override;
	void move(int, int) override;
};


