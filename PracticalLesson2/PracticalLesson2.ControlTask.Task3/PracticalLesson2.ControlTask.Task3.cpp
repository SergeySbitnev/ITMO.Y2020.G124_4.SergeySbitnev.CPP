#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int coin = 10;
    int quantity = 0;
    int summa;
    
    cout << "������� ����� ��� �������: ";
    cin >> summa;

    while (summa >= 0)
    {
        while ((summa > coin) || (coin >= 1))
        {
            summa -= coin;
            quantity++;
        }
        cout << "��������� " << coin << " - " << quantity << " �����\n";
        coin = coin / 2;
        quantity = 0;
    }

    return 0;
}
