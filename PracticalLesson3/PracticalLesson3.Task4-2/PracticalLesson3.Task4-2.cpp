#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}


int main()
{
    system("chcp 1251");
    system("cls");
    int m;
    int n;
    cout << "Эта программа вычисляет НОД, используя алгоритм Евклида и рекурсию.\n";
    cout << "Введите два числа: ";
    cin >> m >> n;
    cout << "НОД " << m << " и " << n << " = " << gcd(m, n) << endl;
    return 0;
}