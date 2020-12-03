#include <iostream>
#include <cmath>

using namespace std;

double Side(double, double, double, double);
double SquareTriangle(double, double, double);

int main()
{
    system("chcp 1251");
    system("cls");
    double x1 = 5;
    double y1 = 11;
    double x2 = 3;
    double y2 = 4;
    double x3 = 5;
    double y3 = 6;
    double x4 = 9;
    double y4 = 5;
    double x5 = 12;
    double y5 = 8;
    double a, b, c, d, e, f, g;
    cout << "������ ��������� ��������� ������� ��������� �������������, ����� ����� �������� ��� �������������.\n";
    cout << "���������� ������ ������� � ������ ���������.\n";
    a = Side(x1, y1, x2, y2);
    b = Side(x2, y2, x3, y3);
    c = Side(x3, y3, x4, y4);
    d = Side(x4, y4, x5, y5);
    e = Side(x5, y5, x1, y1);
    f = Side(x1, y1, x3, y3);
    g = Side(x1, y1, x4, y4);
    double SquarePolygon = SquareTriangle(a, b, f) + SquareTriangle(c, f, g) + SquareTriangle(d, e, g);
    //cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl;
    cout << "������� ������ ����������� = " << SquarePolygon << endl;
    return 0;
}

double Side(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double SquareTriangle(double a, double b, double c)
{
    double semiPerimeter = (a + b + c) / 2;
    return sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
}