#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    system("chcp 1251");
    double x, x1, x2, y;
    cout << "x1 = ";
    cin >> x1;
    cout << "x2 = ";
    cin >> x2;

    x = x1;

    while (x <= x2)
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    } 


    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    do // Зациклится если a = b
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    } while (a != b);

    cout << "НОД = " << a << endl;
}

