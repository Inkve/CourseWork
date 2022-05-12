#include "Figure.h"

Figure::Figure(int _x, int _y, int _a) {
    hwnd = 0;
    if (_x < 0 || _y < 0) {
        if (_x < 0 && _y > 0) {
            throw(Errors("Отрицательная начальная координата!", "x", _x, NULL));
        };
        if (_x > 0 && _y < 0) {
            throw(Errors("Отрицательная начальная координата!", "y", _y, NULL));
        }
        if (_x < 0 && _y < 0) {
            throw(Errors("Отрицательные начальные координаты!", "x и y", _x, _y ));
        };
    };
    if (_x == 0 || _y == 0) {
        if (_x == 0 && _y != 0) {
            throw(Errors("Нулевая начальная координата!", "x", 0, NULL));
        };
        if (_x != 0 && _y == 0) {
            throw(Errors("Нулевая начальная координата!", "y", 0, NULL));
        }
        if (_x == 0 && _y == 0) {
            throw(Errors("Нулевые начальные координаты!", "x и y", 0, 0));
        };
    };
    if (_a < 0) {
        throw(Errors("Отрицательная длина треугольника!", "a", _a, NULL));
    };
    if (_a == 0) {
        throw(Errors("Нулевая длина треугольника!", "a", 0, NULL));
    };
	x = _x;
	y = _y;
	a = _a;
    if ((hwnd = GetConsoleWindow()) == 0){
        throw(Errors("Ошибка получения идентификатора окна!", "hwnd", 0, NULL));
    };

    if ((hdc = GetDC(hwnd)) == 0){
        throw(Errors("Ошибка получения контекста отображения!", "hdc", 0, NULL));
    };
    GetClientRect(hwnd, &rt);
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};
