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

    cout << "Игра будет продолжать пока вы не наберете 50 очков.\n";
    cout << "Центр мишени может оказать в одной из 4-х четвертей.\n";
    while (score < 50)
    {
        cout << "ВЫСТРЕЛ (x/y): ";
        cin >> x >> y;
        hindrance = rand() % 10 + 1;
        if (hindrance > 5)
        {
            x = x + 10 - hindrance;
            cout << "Произошла помеха. Полет пули изменен: " << x << " " << y << "\n";
        }
        hit = (pow((x - a), 2)) + (pow((y - b), 2));

        if (hit <= 1)
        {
            score += 10;
            cout << "+10 очков. Сумма очков:  " << score << "\n";
        }
        else if (hit <= 4)
        {
            score += 5;
            cout << "+5 очков. Сумма очков:  " << score << "\n";
        }
        else if (hit <= 9)
        {
            score += 1;
            cout << "+1 очко. Сумма очков:  " << score << "\n";
        }
        else cout << "МОЛОКО. Сумма очков:  " << score << "\n";

        shots++;
    }

    cout << "Игра окончена. Общая сумма очков: " << score << "\n";
    if (shots <= 7) cout << "Вы снайпер!\n";
    else if (shots <= 18) cout << "Вы стрелок!\n";
    else cout << "Сразу видно новичок\n";
    cout << "Количество выстрелов: " << shots << "\n";

    cout << a << " " << b << " " << hit;

    return 0;
}

