#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    Triangle(double side1, double side2, double side3)
    {
        a = side1;
        b = side2;
        c = side3;
    }
    void SquareTriangle()
    {
        double semiPerimeter = (a + b + c) / 2;
        cout << sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
    }
private:
    double a;
    double b;
    double c;
};
class SidesTriangleError
{
public:
    SidesTriangleError() : message("����� ���� ������ �� ����� ���� ������ �������.") {}
    void printMessage() const { cout << message << endl; }
private:
    string message;
};
int main()
{
    system("chcp 1251");
    system("cls");
    double a, b, c;
    cout << "������� �������� ������ ������������: ";
    cin >> a >> b >> c;

    try
    {
        if ((a + b < c) or (a + c < b) or (b + c < a))
            throw SidesTriangleError();
        Triangle t(a, b, c);
        cout << "������� = ";
        t.SquareTriangle();
    }
    catch(SidesTriangleError& error)
    {
        cout << "������: ";
        error.printMessage();
        return 1;
    }
    return 0; 
}
