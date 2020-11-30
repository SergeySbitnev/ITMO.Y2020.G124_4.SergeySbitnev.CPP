#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    string name;
    double x;
    //int x;
    double a, b;
    cout << "\nВведите a и b:\n";
    cin >> a;
    //cin >> name;
    cin >> b;
    x = a / b;
    cout.precision(2);
    cout << "\nx = " << x << endl;
    //cout << "Привет, " << name << "!\n";
    cout << sizeof(a / b) << ends << sizeof(x) << endl;
    return 0;
}