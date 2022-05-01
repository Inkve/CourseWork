#include "Figure.h"

Figure::Figure(int _x, int _y, int _a) {
    hwnd = 0;
    if (_x < 0 || _y < 0) {
        throw(Errors("Отрицательные начальные координаты!"));
    };
    if (_x == 0 || _y == 0) {
        throw(Errors("Нулевые начальные координаты!"));
    };
    if (_a < 0) {
        throw(Errors("Отрицательная длина треугольника!"));
    };
    if (_a == 0) {
        throw(Errors("Нулевая длина треугольника!"));
    };
	x = _x;
	y = _y;
	a = _a;
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
