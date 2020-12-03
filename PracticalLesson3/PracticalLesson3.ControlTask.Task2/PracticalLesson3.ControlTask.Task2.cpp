#include <iostream>
#include <cmath>

using namespace std;

double CubicRoot(double);

int main()
{
    system("chcp 1251");
    system("cls");

    double a;
    cout << "Дання программа вычисляет кубический корень в двух вариантах.\n";
    cout << "Введите число: ";
    cin >> a;

    cout << "Первый вариант: " << pow(a, 1.0 / 3) << endl;
    cout << "Второй вариант: " << CubicRoot(a) << endl;
    return 0;
}


double CubicRoot(double a)
{

    return 0;
}
