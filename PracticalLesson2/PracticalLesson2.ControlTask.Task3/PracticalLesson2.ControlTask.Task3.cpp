#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    int coin = 10;
    int quantity = 0;
    int summa;
    
    cout << "Введите сумму для размена: ";
    cin >> summa;

    while (summa != 0)
    {
        while (summa >= coin)
        {
            summa -= coin;
            quantity++;
        }

        if (quantity > 0) cout << "Номиналом " << coin << " - " << quantity << " монет\n";

        coin = coin / 2;
        quantity = 0; 
    }
    return 0;
}
