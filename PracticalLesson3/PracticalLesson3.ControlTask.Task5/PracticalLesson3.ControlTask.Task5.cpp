#include <iostream>
using namespace std;

void RecursiveBinaryCode(int num)
{
    if (num == 1) cout << "1";
    else
    {
        RecursiveBinaryCode(num / 2);
        cout << num % 2;
    }
}
int main()
{
    system("chcp 1251");
    system("cls");
    int num;
    cout << "������� ����� ������������� ���������� ����� ��� �������� � �������� ��: ";
    cin >> num;
    if (num > 1)
    {
        RecursiveBinaryCode(num);
    }
    else if (num < 0) cout << "������ ����� ��������. ��������� ��� ���. �� ��������." << endl;
    else cout << "�����: " << num << endl;
}

