#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int year;
    cout << "Введите год для проверки на високосный: ";
    cin >> year;

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        cout << "Год " << year << " високосный!";
    else
        cout << "Год " << year << " не високосный!";

    return 0;
}