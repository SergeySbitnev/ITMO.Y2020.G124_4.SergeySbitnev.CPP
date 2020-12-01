#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int k, m;
    cout << "¬ведите диапазон от 1 до 100: ";
    cin >> k >> m; 

    for (int i = 1; i <= n; i++)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;

        if (a * b != c)
        {
            k++;
            cout << "Error!";
            cout << a << " * " << b << " = " << a * b << endl;
        }

    }

    cout << "Count error: " << k << endl;
    return 0;
}
