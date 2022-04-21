#pragma once
using namespace std;
#include <iostream>

class Figure {
protected:
	int x;
	int y;
	int a;
public:
	Figure(int, int, int);
	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void move(int, int) = 0;
};
