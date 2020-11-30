#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    char op;
    cout << "Сделай свой выбор, собери авто свой мечты: ";
    cin >> op;

    switch (op)
    {
    case 'V':
        cout << "Хочу кондиционер\n";
    case 'S':
        cout << "Радио должно играть\n";
    default:
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
    }


    /*switch (op)
    {
    case 'S':
        cout << "Радио должно играть\n";
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
        break;
    case 'V':
        cout << "Хочу кондиционер\n";
        cout << "Радио должно играть\n";
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
        break;
    default:
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
    }*/
}

