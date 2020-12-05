#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int s = 0;
    int sNeg = 0;
    int sPos = 0;
    int sOdd = 0;
    int sEven = 0;
    int maxIndex = 0;
    int minIndex = 0;
    int comp = 1;

    for (int i = 0; i < n; i++)
    {
        s += mas[i];
        if (mas[i] > 0) sPos += mas[i]; else sNeg += mas[i];
        if (i % 2 == 0) sEven += mas[i]; else sOdd += mas[i];
        if (mas[i] > mas[maxIndex]) maxIndex = i;
        if (mas[i] < mas[minIndex]) minIndex = i;
    }

    for (int i = min(minIndex, maxIndex); i <= max(minIndex, maxIndex); i++)
    {
        comp *= mas[i];
    }

    cout << "Сумма элементов массива = " << s << endl;
    cout << "Среднее значение масиива = " << s / n << endl;
    cout << "Сумма положительных элементов = " << sPos << endl;
    cout << "Сумма отрицательных элементов = " << sNeg << endl;
    cout << "Сумма элементов с четными индексами = " << sEven << endl;
    cout << "Сумма элементов с нечетными индексами = " << sOdd << endl;
    cout << "Индекс максимального элемента массива = " << maxIndex << endl;
    cout << "Индекс минимального элемента массива = " << minIndex << endl;
    cout << "Произведение элементов массива между минимальным и максимальным = " << comp << endl;

    return 0;
}