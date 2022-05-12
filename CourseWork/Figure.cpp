#include "Figure.h"

Figure::Figure(int _x, int _y, int _a) {
    hwnd = 0;
    if (_x < 0 || _y < 0) {
        if (_x < 0 && _y > 0) {
            throw(Errors("������������� ��������� ����������!", "x", _x, NULL));
        };
        if (_x > 0 && _y < 0) {
            throw(Errors("������������� ��������� ����������!", "y", _y, NULL));
        }
        if (_x < 0 && _y < 0) {
            throw(Errors("������������� ��������� ����������!", "x � y", _x, _y ));
        };
    };
    if (_x == 0 || _y == 0) {
        if (_x == 0 && _y != 0) {
            throw(Errors("������� ��������� ����������!", "x", 0, NULL));
        };
        if (_x != 0 && _y == 0) {
            throw(Errors("������� ��������� ����������!", "y", 0, NULL));
        }
        if (_x == 0 && _y == 0) {
            throw(Errors("������� ��������� ����������!", "x � y", 0, 0));
        };
    };
    if (_a < 0) {
        throw(Errors("������������� ����� ������������!", "a", _a, NULL));
    };
    if (_a == 0) {
        throw(Errors("������� ����� ������������!", "a", 0, NULL));
    };
	x = _x;
	y = _y;
	a = _a;
    if ((hwnd = GetConsoleWindow()) == 0){
        throw(Errors("������ ��������� �������������� ����!", "hwnd", 0, NULL));
    };

    if ((hdc = GetDC(hwnd)) == 0){
        throw(Errors("������ ��������� ��������� �����������!", "hdc", 0, NULL));
    };
    GetClientRect(hwnd, &rt);
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};
