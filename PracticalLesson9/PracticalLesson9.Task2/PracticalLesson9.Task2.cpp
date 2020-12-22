#include <iostream>
#include <string>

using namespace std;

class DivideByZeroError
{
public:
    DivideByZeroError() : message("Деление на нуль") {}
    void printMessage() const { cout << message << endl; }
private:
    string message;
};

float quotient(int num1, int num2)
{
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)num1 / num2;
}

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "Введите одно числа для расчета частного:\n";
    int number1;
    cin >> number1;
    for (int i = -10; i < 10; i++)
    {
        try
        {
            float result = quotient(number1, i);
            cout << "Частное равно " << result << endl;
        }
        catch (DivideByZeroError& error)
        {
            cout << "ОШИБКА: ";
            error.printMessage();
            return 1;
        }
    }
    
    return 0;
}