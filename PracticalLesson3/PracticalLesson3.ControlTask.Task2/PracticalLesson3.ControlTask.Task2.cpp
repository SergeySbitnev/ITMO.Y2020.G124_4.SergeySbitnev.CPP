#include <iostream>
#include <cmath>

using namespace std;

double CubicRoot(double);

int main()
{
    system("chcp 1251");
    system("cls");

    double a;
    cout << "����� ��������� ��������� ���������� ������ � ���� ���������.\n";
    cout << "������� �����: ";
    cin >> a;

    cout << "������ �������: " << pow(a, 1.0 / 3) << endl;
    cout << "������ �������: " << CubicRoot(a) << endl;
    return 0;
}


double CubicRoot(double a)
{

    return 0;
}
