#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}


int main()
{
    system("chcp 1251");
    system("cls");
    int m;
    int n;
    cout << "��� ��������� ��������� ���, ��������� �������� ������� � ��������.\n";
    cout << "������� ��� �����: ";
    cin >> m >> n;
    cout << "��� " << m << " � " << n << " = " << gcd(m, n) << endl;
    return 0;
}