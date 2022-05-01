#include "Figure.h"

Figure::Figure(int x_, int y_, int a_) {
	x = x_;
	y = y_;
	a = a_;

    hwnd = 0;

    if ((hwnd = GetConsoleWindow()) == 0) // �������� ������������� ����
    {
        cout << "Window not found!!!" << endl;
        return;
    }

    if ((hdc = GetDC(hwnd)) == 0)       // �������� �������� �����������
    {
        cout << "Error!!!" << endl;
        return;
    }

    GetClientRect(hwnd, &rt);   // �������� ������ ����
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};
