#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int k, m;
    int s = 0;
    cout << "¬ведите диапазон от 1 до 100: ";
    cin >> k >> m;

    for (int i = 1; i <= 100; i++)
    {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }

    cout << "—умма чисел в диапазоне =  " << s;
    return 0;
}
