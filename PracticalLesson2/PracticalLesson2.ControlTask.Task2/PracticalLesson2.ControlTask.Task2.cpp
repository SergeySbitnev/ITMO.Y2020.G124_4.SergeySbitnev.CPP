#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int a, b, c;
    cout << "Введите три числа для нахождения наибольшего: ";
    cin >> a >> b >> c;

    if (a < b) a = b;
    if (a < c) a = c;
    
    cout << a << " наибольшее число.";

    return 0;
}