#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    char ch;
    cout << "������� �������������, ����� ��������� ���� ��������� �� ����� ������ � ������� Ctrl+Z -> Enter. " << endl;
    ofstream out("poem.txt", ios::out | ios::binary);
    if (!out)
    {
        cout << "���� ������� ����������\n";
        return 1;
    }
    while (cin.get(ch))
    {
        out << ch;
    }
    out.close();

    cout << endl << "���� ��������, ����� �������� � ����.\n����� ����������:\n";
    ifstream in("poem.txt", ios::in | ios::binary);
    if (!in)
    {
        cout << "���� ������� ����������\n";
        return 1;
    }
    while (in.get(ch))
    {
        cout << ch;
    }
    in.close();
    return 0;
}


