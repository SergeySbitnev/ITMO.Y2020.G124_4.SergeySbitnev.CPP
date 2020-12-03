#include <iostream>
#include <cmath>
using namespace std;

double SquareTriangle(double);
double SquareTriangle(double, double, double);

int main()
{
    system("chcp 1251");
    system("cls");
    int choice;
    double a, b, c;
    cout << "������ ��������� ������������ ������� ������������ ���� �����: ��������������� � ���������������.\n";
    cout << "������� ������ ������������ �� ������ ����������?\n1.���������������\n2.���������������\n�������� �����: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "������� �������� ������� ��������������� ������������: ";
        cin >> a;
        cout << "������� = " << SquareTriangle(a);
        break;
    case 2:
        cout << "������� �������� ������ ��������������� ������������: ";
        cin >> a >> b >> c;
        cout << "������� = " << SquareTriangle(a, b, c);
        break;
    default:
        cout << "������ ������. ��������� ��� ���. �� ��������.";
    }
    return 0;
}

double SquareTriangle(double a)
{
    double semiPerimeter = (a * 3) / 2;
    return sqrt(semiPerimeter * pow(semiPerimeter - a, 3));
}

double SquareTriangle(double a, double b, double c)
{
    double semiPerimeter = (a + b + c) / 2;
    return sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
}
