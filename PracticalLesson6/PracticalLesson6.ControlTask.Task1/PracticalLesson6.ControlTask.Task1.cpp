#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    char ch;
    ofstream out("poem.txt", ios::out | ios::binary);
    if (!out)
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    
    /*ch = cin.get();
    int ich = (int)ch;
    cout << ich << endl << ch;*/

    /*cin >> ch;
    cout << ch;
    out << ch;*/

    while (ch = cin.get() != EOF)
    {
        cout << ch;
        out << ch;

    }

    out.close();

    cout << endl;
    ifstream in("poem.txt", ios::in);
    if (!in)
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    while (ch = in.get() != EOF)
    {
        cout << ch;
    }

    out.close();


    /*in.read((char*)&nums, sizeof(nums));
    int k = sizeof(nums) / sizeof(double);
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
        cout << nums[i] << "\t";
    }
    cout << "\nsum = " << sum << endl;
    in.close();*/

    return 0;
}


