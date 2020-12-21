#include <iostream>
#include <windows.h>
using namespace std;

struct Distance
{
    int feet;
    double inches;

    void ShowDist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }
};

Distance AddDist(const Distance &d1, const Distance &d2)
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
    cout << "\n������� ����� �����: ";
    cin >> d.feet;
    cout << "\n������� ����� ������: ";
    cin >> d.inches;
    return d;
}

//void ShowDist(Distance d)
//{
//    cout << d.feet << "\'-" << d.inches << "\"\n";
//}

int main()
{
    system("chcp 1251");
    system("cls");
    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 };

    Distance d3 = AddDist(d1, d2);
    /*ShowDist(d1);
    ShowDist(d2);
    ShowDist(d3);*/
    d1.ShowDist();
    d2.ShowDist();
    d3.ShowDist();

    return 0;
}
