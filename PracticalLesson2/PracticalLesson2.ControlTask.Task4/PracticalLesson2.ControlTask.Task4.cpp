#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    system("chcp 1251");
    srand(time(NULL));
    double x, y, hit;
    int score = 0;
    int shots = 0;
    int a = rand() % 20 - 10;
    int b = rand() % 20 - 10;
    int hindrance;
    cout << a << " " << b << "\n";

    cout << "���� ����� ���������� ���� �� �� �������� 50 �����.\n";
    cout << "����� ������ ����� ������� � ����� �� 4-� ���������.\n";
    while (score < 50)
    {
        cout << "������� (x/y): ";
        cin >> x >> y;
        hindrance = rand() % 10 + 1;
        if (hindrance > 5)
        {
            x = x + 10 - hindrance;
            cout << "��������� ������. ����� ���� �������: " << x << " " << y << "\n";
        }
        hit = (pow((x - a), 2)) + (pow((y - b), 2));

        if (hit <= 1)
        {
            score += 10;
            cout << "+10 �����. ����� �����:  " << score << "\n";
        }
        else if (hit <= 4)
        {
            score += 5;
            cout << "+5 �����. ����� �����:  " << score << "\n";
        }
        else if (hit <= 9)
        {
            score += 1;
            cout << "+1 ����. ����� �����:  " << score << "\n";
        }
        else cout << "������. ����� �����:  " << score << "\n";

        shots++;
    }

    cout << "���� ��������. ����� ����� �����: " << score << "\n";
    if (shots <= 7) cout << "�� �������!\n";
    else if (shots <= 18) cout << "�� �������!\n";
    else cout << "����� ����� �������\n";
    cout << "���������� ���������: " << shots << "\n";

    cout << a << " " << b << " " << hit;

    return 0;
}

