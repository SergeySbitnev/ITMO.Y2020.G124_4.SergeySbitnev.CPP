#include <iostream>

using namespace std;

int addNumbers(int n)
{
    if (n == 1) return 1;
    else return (n + addNumbers(n - 1));
}

int addNumbers(int k, int n)
{
    if (n == k) return k;
    else return (n + addNumbers(k, n - 1));
}

int main()
{
    system("chcp 1251");
    system("cls");
    int n;
    int k;
    cout << "Эта программа вычисляет сумму чисел от 1 до n, используя рекурсию.\n";
    cout << "Введите n: ";
    cin >> n;
    cout << "Сумма чисел от 1 до " << n << " = " << addNumbers(n) << endl << endl;
    cout << "А также сумму чисел в диапазоне.\n";
    cout << "Введите начальное и конечное значение: ";
    cin >> k >> n;
    cout << "Сумма чисел от " << k << " до " << n << " = " << addNumbers(k, n) << endl;

    return 0;
}