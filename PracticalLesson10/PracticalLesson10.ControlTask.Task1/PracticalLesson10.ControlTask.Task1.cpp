#include <iostream>
#include "Dot.h"
#include "Triangle.h"
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    double x, y;
    cout << "������� ���������� ������ ������������: " << endl;
    cout << "������� a (x y) = ";
    cin >> x >> y;
    Dot a(x, y);
    cout << "������� b (x y) = ";
    cin >> x >> y;
    Dot b(x, y);
    cout << "������� c (x y) = ";
    cin >> x >> y;
    Dot c(x, y);

    Triangle* t = new Triangle(a, b, c);
    t->ShowSides();
    cout << "�������� ������������ = " << t->Perimeter() << endl;
    cout << "������� ������������ = " << t->Square() << endl;
    return 0;
}