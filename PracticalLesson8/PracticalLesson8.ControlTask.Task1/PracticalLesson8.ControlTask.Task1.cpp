#include <iostream>
#include "time.h"
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int h, m, s;
    cout << "������� �����:\n";
    cout << "���: ";
    cin >> h;
    cout << "������: ";
    cin >> m;
    cout << "�������: ";
    cin >> s;
    Time t1(h, m, s);
    t1.ShowTime();

    cout << "������� �����:\n";
    cout << "���: ";
    cin >> h;
    cout << "������: ";
    cin >> m;
    cout << "�������: ";
    cin >> s;
    Time t2 (h, m, s);
    t2.ShowTime();

    Time t;
    t.SumTime(t1, t2);
    t.ShowTime();
    return 0;
}
