#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int N;
    cout << "¬ведите количество элементов массива: ";
    cin >> N;
    int* myArray = new int[N];

    cout << "¬ведите элеметы массива" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> myArray[i];
    }

    int min = 0;
    int buf = 0;
    for (int i = 0; i < N; i++)
    {
        cout << myArray[i] << "\t";
    }
    cout << endl;
   
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (myArray[j] < myArray[min]) ? j : min;
        if (i != min)
        {
            buf = myArray[i];
            myArray[i] = myArray[min];
            myArray[min] = buf;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << myArray[i] << "\t";
    }
    cout << endl;
    delete []myArray;
    return 0;
}