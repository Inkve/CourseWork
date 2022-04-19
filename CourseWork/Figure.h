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
};
