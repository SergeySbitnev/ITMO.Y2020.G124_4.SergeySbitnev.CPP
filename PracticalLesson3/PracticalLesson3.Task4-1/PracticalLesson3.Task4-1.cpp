#include <iostream>

using namespace std;

int addNumbers(int n)
{
    if (n == 1) return 1;
    else return (n + addNumbers(n - 1));
}

int addNumbers(int k, int n)
{
    if (n == k) return k;
    else return (n + addNumbers(k, n - 1));
}

int main()
{
    system("chcp 1251");
    system("cls");
    int n;
    int k;
    cout << "��� ��������� ��������� ����� ����� �� 1 �� n, ��������� ��������.\n";
    cout << "������� n: ";
    cin >> n;
    cout << "����� ����� �� 1 �� " << n << " = " << addNumbers(n) << endl << endl;
    cout << "� ����� ����� ����� � ���������.\n";
    cout << "������� ��������� � �������� ��������: ";
    cin >> k >> n;
    cout << "����� ����� �� " << k << " �� " << n << " = " << addNumbers(k, n) << endl;

    return 0;
}