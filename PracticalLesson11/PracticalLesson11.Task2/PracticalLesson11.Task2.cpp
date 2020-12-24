#include <iostream>
#include <cmath>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
    const float MTF;
public:
    /*Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}*/
    Distance() : feet(0), inches(0.0), MTF(3.280833F) {}
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);


    }
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
    operator float() const
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }
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
   
    Distance dist1 = 2.35F;
    cout << "\ndist1 = " << dist1 << endl;
    float mtrs;
    mtrs = static_cast<float>(dist1);
    cout << mtrs;
    mtrs = dist1;
    cout << "\ndist1 = " << dist1 << endl;
    cout << mtrs;
    return 0;
}

