#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    char op;
    cout << "������ ���� �����, ������ ���� ���� �����: ";
    cin >> op;

    switch (op)
    {
    case 'V':
        cout << "���� �����������\n";
    case 'S':
        cout << "����� ������ ������\n";
    default:
        cout << "������ �������\n";
        cout << "������ ���������\n";
    }


    /*switch (op)
    {
    case 'S':
        cout << "����� ������ ������\n";
        cout << "������ �������\n";
        cout << "������ ���������\n";
        break;
    case 'V':
        cout << "���� �����������\n";
        cout << "����� ������ ������\n";
        cout << "������ �������\n";
        cout << "������ ���������\n";
        break;
    default:
        cout << "������ �������\n";
        cout << "������ ���������\n";
    }*/
}

