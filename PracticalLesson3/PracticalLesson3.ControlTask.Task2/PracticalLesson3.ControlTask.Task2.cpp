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
    double start = 0;
    double finish = a / 3;
    while (start != finish)
    {
        start = finish;
        finish = (1.0 / 3) * (a / (finish * finish) + 2 * finish);
    }
    return start;
}
