#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int a, b, c;
    cout << "������� ��� ����� ��� ���������� �����������: ";
    cin >> a >> b >> c;

    if (a < b) a = b;
    if (a < c) a = c;
    
    cout << a << " ���������� �����.";

    return 0;
}