#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    double sum = 0;
    int const n = 100;
    double nums[n];

    for (int i = 0; i < n; i++)
    {
        nums[i] = (rand() % 100);
        cout << nums[i] << "\t";
    }

    ofstream out("test", ios::out | ios::binary);
    if (!out)
    {
        cout << "���� ������� ����������\n";
        return 1;
    }

    out.write((char*)nums, sizeof(nums));
    out.close();

    cout << endl;
    ifstream in("test", ios::in | ios::binary);
    if (!in)
    {
        cout << "���� ������� ����������\n";
        return 1;
    }

    in.read((char*)&nums, sizeof(nums));
    int k = sizeof(nums) / sizeof(double);
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
        cout << nums[i] << "\t";
    }
    cout << "\nsum = " << sum << endl;
    in.close();

    return 0;
}
    

