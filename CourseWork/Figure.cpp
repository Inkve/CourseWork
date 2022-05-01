#include "Figure.h"

Figure::Figure(int x_, int y_, int a_) {
	x = x_;
	y = y_;
	a = a_;
    hwnd = 0;
    if ((hwnd = GetConsoleWindow()) == 0){
        throw(Errors("Ошибка получения идентификатора окна!"));
    };

    if ((hdc = GetDC(hwnd)) == 0){
        throw(Errors("Ошибка получения контекста отображения!"));
    };
    GetClientRect(hwnd, &rt);
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};
