#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	double x, y;
	cout << "Введите координаты: ";
	cin >> x >> y;
	if (x * x + y * y < 9 && y > 0) cout << "Координата находится внутри фигуры!";
	else if (x * x + y * y > 9 || y < 0) cout << "Координата находится снаружи фигуры!";
	else cout << "Координата находится на границе фигуры!";
}
