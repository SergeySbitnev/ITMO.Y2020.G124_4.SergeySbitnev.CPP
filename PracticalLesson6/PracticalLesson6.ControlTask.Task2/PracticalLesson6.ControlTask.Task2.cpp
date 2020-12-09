#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int min = 0;
    int buf = 0;

    ofstream out("test.txt", ios::out | ios::binary);
    if (!out)
    {
        cout << "���� ������� ����������\n";
        return 1;
    }
    cout << "�������� ������: " << endl;
    for (int i : a)
    {
        cout << i << "\t";
        out << i << "\t";
    }
    out << endl;
        
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    cout << "��������������� ������: " << endl;
    for (int i : a)
    {
        cout << i << "\t";
        out << i << "\t";
    }
    out.close();
    cout << "\n������ ������ � ���� ���������." << endl;
    cout << "\n�������� ���������� ������: " << endl;
    ifstream in("test.txt", ios::in | ios::binary);
    if (!in)
    {
        cout << "���� ������� ����������\n";
        return 1;
    }
    char ch;
    while (in.get(ch))
    {
        cout << ch;
    }
    in.close();
    return 0;
}