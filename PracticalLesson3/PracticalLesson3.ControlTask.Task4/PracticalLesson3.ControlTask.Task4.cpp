#include <iostream>

using namespace std;

int RecursiveSum(int n)
{
    if (n == 1) return 5;
    else return (5 * n + RecursiveSum(n - 1));
}

int main()
{
    system("chcp 1251");
    system("cls");
    int n;
    cout << "������� �������� ��� ���������� ����� ���� ���� S=5+10+15+...+5*n: ";
    cin >> n;

    if (n > 0)
    {
        cout << "����� = " << RecursiveSum(n) << endl;
    }
    else cout << "������ ����� ��������. ��������� ��� ���. �� ��������." << endl;
    return 0;
}

