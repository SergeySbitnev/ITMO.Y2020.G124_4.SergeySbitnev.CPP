#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "SummerSportsEquipment.h"
#include "WinterSportsEquipment.h"
#include "GymEquipment.h"

using namespace std;

class Work
{
private:
    int quantity;
    int type;
    string model;
    string name;
    float shoeSize = 0;
    float height = 0;
    float width = 0;
    float length = 0;
    vector<string> equipment;

public:

    void doWork()
    {
        system("cls");
        cout << "�������� ���������� ���������, ������� �� ������ ������ � ������: ";
        cin >> quantity;

        for (int i = 0; i < quantity; i++)
        {
            system("cls");
            cout << "������� �������� " << i + 1 << " ���������" << endl;
            equipment.push_back(addEquipment());
        }

        system("cls");
        unsigned int vSize = equipment.size();
        ofstream fout("equipment.txt", ios::out);
        cout << "������ ������ ���������: " << endl;
        fout << "������ ������ ���������: " << endl;
        for (int i = 0; i < vSize; i++)
        {
            cout << equipment[i] << endl;
            fout << equipment[i] << endl;
        }
        fout.close();

        cout << "\n��� ������ �������� � �����: equipment.txt";
    }

    string addEquipment()
    {
        string info = "������ ������ ���� ���������. ��������� �� ��������.";
        cout << "������� �������� ���������: ";
        cin >> name;
        cout << "������� ������ ���������: ";
        cin >> model;
        cout << "������� ������� ��������� (���� ��������� �������� �� ��������� ���������� 0): " << endl;
        cout << "������ �����: ";
        cin >> shoeSize;
        cout << "������: ";
        cin >> height;
        cout << "������: ";
        cin >> width;
        cout << "�����: ";
        cin >> length;

        cout << "�������� ��� ��������� (1-3):\n1.��� ����������� ����\n2.��� �����(����)\n3.��� �����(����)\n�����: ";
        cin >> type;
        if (type == 1)
        {
            GymEquipment eq(name, model, shoeSize, height, width, length);
            info = eq.get_info();
        }
        else if (type == 2)
        {
            SummerSportEquipment eq(name, model, shoeSize, height, width, length);
            info = eq.get_info();
        }
        else if (type == 3)
        {
            WinterSportEquipment eq(name, model, shoeSize, height, width, length);
            info = eq.get_info();
        }

        return info;
    }

};

int main()
{
    system("chcp 1251");
    system("cls");
    char choice;

    cout << "������������, ������ ��������� ��������� ������ ����������� ���������." << endl;
    cout << "������� ����������? (y-YES)";
    cin >> choice;
    if (choice == 'y' or choice == 'Y')
    {
        cout << "\n��������";
        Work start;
        start.doWork();

    }
    cout << "\n��������� ������\n";

    return 0;
}