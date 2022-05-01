#include "Figure.h"

Figure::Figure(int _x, int _y, int _a) {
    hwnd = 0;
    if (_x < 0 || _y < 0) {
        throw(Errors("������������� ��������� ����������!"));
    };
    if (_x == 0 || _y == 0) {
        throw(Errors("������� ��������� ����������!"));
    };
    if (_a < 0) {
        throw(Errors("������������� ����� ������������!"));
    };
    if (_a == 0) {
        throw(Errors("������� ����� ������������!"));
    };
	x = _x;
	y = _y;
	a = _a;
    if ((hwnd = GetConsoleWindow()) == 0){
        throw(Errors("������ ��������� �������������� ����!"));
    };

    if ((hdc = GetDC(hwnd)) == 0){
        throw(Errors("������ ��������� ��������� �����������!"));
    };
    GetClientRect(hwnd, &rt);
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};
