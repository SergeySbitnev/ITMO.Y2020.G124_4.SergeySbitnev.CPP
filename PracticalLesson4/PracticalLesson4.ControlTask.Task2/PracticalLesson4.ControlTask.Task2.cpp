#include <iostream>

using namespace std;
 
bool Input(int& a, int& b)
{
    cout << "¬ведите значение a и b: ";
    cin >> a >> b;
    if (a % 2 == 0 and b % 2 == 0) return true;
    else return false;
}

int main()
{
    system("chcp 1251");
    system("cls");
    int a, b;
    if (Input(a, b) == false)
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << "a + b = " << s << endl;
    return 0;
}

