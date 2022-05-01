#pragma once
using namespace std;
#include <iostream>
#include <windows.h>
#include <windowsx.h>

class Figure {
protected:
	int x;
	int y;
	int a;
	HWND hwnd;
	HDC hdc;
	RECT rt;

public:
	Figure(int, int, int);
	virtual ~Figure() = 0;
	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void move(int, int) = 0;
	class Errors {
	public:
		string cause;
		Errors(string _cause) {
			cause = _cause;
		};
	};
};
