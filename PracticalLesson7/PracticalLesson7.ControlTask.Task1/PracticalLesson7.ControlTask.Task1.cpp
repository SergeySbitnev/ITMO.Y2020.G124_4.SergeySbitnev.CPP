#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};
//Ввод времени
Time InputTime()
{
    Time newTime;
    boolean check = true;
    cout << "Введите время:\n";
    do
    {
        cout << "час(0-23): ";
        cin >> newTime.hours;
        if ((newTime.hours >= 0) and (newTime.hours <= 23)) check = false; 
        else
        {
            cout << "Ошибка. Повторите ввод значения...\n";
            check = true;
        }
    } while (check);
    do
    {
        cout << "минуты(0-59): ";
        cin >> newTime.minutes;
        if ((newTime.minutes >= 0) and (newTime.minutes <= 59)) check = false;
        else
        {
            cout << "Ошибка. Повторите ввод значения...\n";
            check = true;
        }
    } while (check);
    do
    {
        cout << "секунды(0-59): ";
        cin >> newTime.seconds;
        if ((newTime.seconds >= 0) and (newTime.seconds <= 59)) check = false;
        else
        {
            cout << "Ошибка. Повторите ввод значения...\n";
            check = true;
        }
    } while (check);
    return newTime;
}
//Подсчет секунд
int QuantitySeconds(Time t)
{
    return t.seconds + t.minutes * 60 + t.hours * 3600;
}
//Трансформация времени
Time TransformTime(int sec)
{
    Time t = { 0,0,0 };
    while (sec > 3600)
    {
        sec -= 3600;
        t.hours++;
    }
    while (sec > 60)
    {
        sec -= 60;
        t.minutes++;
    }
    t.seconds = sec;
    return t;
}
//Сложение времени
Time SumTime(Time t1, Time t2)
{
    int sec = QuantitySeconds(t1) + QuantitySeconds(t2);
    Time t = TransformTime(sec);
    return t;
}
//Вычитание времени
Time SubtractionTime(Time t1, Time t2)
{
    int sec = abs(QuantitySeconds(t1) - QuantitySeconds(t2));
    Time t = TransformTime(sec);
    return t;
}
//Вывод данных
void ShowTime(Time t)
{
    cout << t.hours << ":" << t.minutes << ":" << t.seconds;
}
int main()
{
    system("chcp 1251");
    system("cls");
    Time t1 = InputTime();
    Time t2 = InputTime();
    system("cls");
    ShowTime(t1);
    cout << " = " << QuantitySeconds(t1) << " секунд." << endl;
    ShowTime(t2);
    cout << " = " << QuantitySeconds(t2) << " секунд." << endl;

    Time sumT = SumTime(t1, t2);
    cout << "Сумма = "; 
    ShowTime(sumT);
    cout << endl;
    Time subT = SubtractionTime(t1, t2);
    cout << "Разность(по модулю) = ";
    ShowTime(subT);
    return 0;
}