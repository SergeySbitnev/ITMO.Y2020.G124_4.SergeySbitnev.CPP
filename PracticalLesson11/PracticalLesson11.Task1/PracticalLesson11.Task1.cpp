#include <iostream>
#include <cmath>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}

    void getdist()
    {
        cout << "¬ведите число футов: ";
        cin >> feet;
        cout << "¬ведите число дюймов: ";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }
    Distance operator+ (const Distance&) const;
    Distance operator- (const Distance&) const;
    friend ostream& operator<< (ostream& out, const Distance& dist);
};

Distance Distance::operator+ (const Distance& d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}
Distance Distance::operator- (const Distance& d2) const
{
    float i = abs((feet * 12.0 + inches) - (d2.feet * 12.0 + d2.inches));
    int f = 0;
    while (i >= 12)
    {
        i -= 12;
        f++;
    }
    return Distance(f, i);
}
ostream& operator<< (ostream& out, const Distance& dist)
{
    out << dist.feet << "\'-" << dist.inches << "\"\n";
    return out;
}


int main()
{
    system("chcp 1251");
    system("cls");
    Distance dist1, dist2, dist3, dist4;
    dist1.getdist();
    dist2.getdist();
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;

    cout << "\ndist1 = " << dist1;
    cout << "\ndist1 = " << dist2;
    cout << "\ndist1 = " << dist3;
    cout << "\ndist1 = " << dist4;
    /*cout << "\ndist1 = ";
    dist1.showdist();
    cout << "\ndist2 = ";
    dist2.showdist();
    cout << "\ndist3 = ";
    dist3.showdist();
    cout << "\ndist4 = ";
    dist4.showdist();*/

    dist3 = dist1 - dist2;
    cout << "\ndist1 = " << dist3;
   /* cout << "\ndist3 = ";
    dist3.showdist();*/
    return 0;
}

