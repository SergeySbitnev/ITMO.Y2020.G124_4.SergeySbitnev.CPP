#include <iostream>
#include <cmath>

using namespace std;

struct Roots
{
    double x1;
    double x2;
};

Roots EquationRoots(double a, double b, double c)
{
    Roots r = { 0,0 };
    double D;
    D = pow(b, 2) - 4 * a * c;
    if (D > 0)
    {
        r.x1 = ((-b) + sqrt(D)) / (2 * a);
        r.x2 = ((-b) - sqrt(D)) / (2 * a);
    }
    if (D == 0)
    {
        r.x1 = r.x2 = -(b / (2 * a));
    }
    return r;
}

int main()
{
    system("chcp 1251");
    system("cls");
    double a, b, c;
    Roots r;
    cout << "��������� ��������� ������� ���������� ������ ����������� ���������.\n";
    cout << "������� �������� a, b, c: ";
    cin >> a >> b >> c;
    if (a != 0)
    {
        if ((b == 0) and (c == 0)) cout << "������ ��������� �� ������. ������ ��������� ����� ����� 0." << endl;
        else
        {
            r = EquationRoots(a, b, c);
                if ((r.x1 == 0) and (r.x2 == 0)) cout << "������ ��������� �� ����� ������." << endl;
                if ((r.x1 == r.x2) and (r.x1 != 0)) cout << "������ ��������� ����� 1 ������.\nx = " << r.x1 << endl;
                if (r.x1 != r.x2) cout << "������ ��������� ����� 2 �����.\nx1 = " << r.x1 << "\nx2 = " << r.x2 << endl;
        }
    }
    else cout << "�� ����� �� ���������� ���������. ���������� ��� ���."; 
}
