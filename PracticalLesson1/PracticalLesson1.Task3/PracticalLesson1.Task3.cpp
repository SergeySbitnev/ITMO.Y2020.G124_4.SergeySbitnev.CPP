#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    system("chcp 1251");
    
    double Perimeter;
    double semiPerimeter;
    double Square;
    double side;
    cout << "Введите периметр равностороннего треугольника: ";
    cin >> Perimeter;
    side = Perimeter / 3;
    semiPerimeter = Perimeter / 2;
    Square = sqrt(semiPerimeter * (semiPerimeter - side) * (semiPerimeter - side) * (semiPerimeter - side));
    cout << "Сторона\t" << "Площадь\n";
    cout.setf(ios::fixed);
    cout << setprecision(2) << side << "\t" << Square;
}

