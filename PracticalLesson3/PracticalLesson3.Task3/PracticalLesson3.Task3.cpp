#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}

int main()
{
    system("chcp 1251");
    double a;
    int n;
    cout << "ƒанна€ программа вычисл€ет корень n-й степени из числа a, использу€ вещественный бинарный поиск.\n";
    cout << "¬ведите a (большее или равное 1, не превосходит 1000) и n (не превосход€щее 10): ";
    cin >> a >> n;
    cout.setf(ios::fixed);
    cout << setprecision(6) << " орень n-й степени числа a = " << firBinSearch(a, n);
    return 0;
}
