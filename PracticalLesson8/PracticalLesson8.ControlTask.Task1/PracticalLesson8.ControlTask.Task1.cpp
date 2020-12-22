#include <iostream>
#include "time.h"
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int h, m, s;
    cout << "¬ведите врем€:\n";
    cout << "час: ";
    cin >> h;
    cout << "минуты: ";
    cin >> m;
    cout << "секунды: ";
    cin >> s;
    Time t1(h, m, s);
    t1.ShowTime();

    cout << "¬ведите врем€:\n";
    cout << "час: ";
    cin >> h;
    cout << "минуты: ";
    cin >> m;
    cout << "секунды: ";
    cin >> s;
    Time t2 (h, m, s);
    t2.ShowTime();

    Time t;
    t.SumTime(t1, t2);
    t.ShowTime();
    return 0;
}
