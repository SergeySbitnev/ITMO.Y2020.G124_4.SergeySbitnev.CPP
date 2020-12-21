#include <iostream>
#include <windows.h>
using namespace std;

struct Distance
{
    int feet;
    double inches;
};

Distance AddDist(const Distance& d1, const Distance& d2)
{
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches >= 12.0)
    {
        d.inches -= 12.0;
        d.feet++;
    }
    return d;
}

Distance InputDist()
{
    Distance d;
    cout << "\nВведите число футов: ";
    cin >> d.feet;
    cout << "\nВведите число дюймов: ";
    cin >> d.inches;
    return d;
}

void ShowDist(Distance d)
{
    cout << d.feet << "\'-" << d.inches << "\"\n";
}

int main()
{
    system("chcp 1251");
    system("cls");
    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 };

    Distance d3 = AddDist(d1, d2);
    ShowDist(d1);
    ShowDist(d2);
    ShowDist(d3);
 
    int n;
    cout << "Введите размер массива расстояний ";
    cin >> n;

    Distance* masDist = new Distance[n];
    for (int i = 0; i < n; i++)
    {
        masDist[i] = InputDist();
    }

    //Сумма всех расстоянии
    Distance d = { 0,0 };
    for (int i = 0; i < n; i++)
    {
        d = AddDist(d, masDist[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ShowDist(masDist[i]);
    }
    cout << "Сумма всех расстоянии = ";
    ShowDist(d);

    delete[] masDist;
    return 0;
}
