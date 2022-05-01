#include "Figure.h"

Figure::Figure(int x_, int y_, int a_) {
	x = x_;
	y = y_;
	a = a_;

    hwnd = 0;

    if ((hwnd = GetConsoleWindow()) == 0) // получаем идентификатор окна
    {
        cout << "Window not found!!!" << endl;
        return;
    }

    if ((hdc = GetDC(hwnd)) == 0)       // получаем контекст отображения
    {
        cout << "Error!!!" << endl;
        return;
    }

    GetClientRect(hwnd, &rt);   // получаем размер окна
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};
