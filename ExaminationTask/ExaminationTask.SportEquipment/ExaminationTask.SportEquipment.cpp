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
        cout << "Выбирите количество инвентаря, которое вы хотите внести в список: ";
        cin >> quantity;

        for (int i = 0; i < quantity; i++)
        {
            system("cls");
            cout << "Введите значения " << i + 1 << " инвентаря" << endl;
            equipment.push_back(addEquipment());
        }

        system("cls");
        unsigned int vSize = equipment.size();
        ofstream fout("equipment.txt", ios::out);
        cout << "Список вашего инвентаря: " << endl;
        fout << "Список вашего инвентаря: " << endl;
        for (int i = 0; i < vSize; i++)
        {
            cout << equipment[i] << endl;
            fout << equipment[i] << endl;
        }
        fout.close();

        cout << "\nВаш список сохранен в файле: equipment.txt";
    }

    string addEquipment()
    {
        string info = "Ошибка выбора типа инвентаря. Инвентарь не сохранен.";
        cout << "Введите название инвентаря: ";
        cin >> name;
        cout << "Введите модель инвентаря: ";
        cin >> model;
        cout << "Укажите размеры инвентаря (если указанный параметр не требуется установите 0): " << endl;
        cout << "Размер убуви: ";
        cin >> shoeSize;
        cout << "Высота: ";
        cin >> height;
        cout << "Ширина: ";
        cin >> width;
        cout << "Длина: ";
        cin >> length;

        cout << "Выберите тип инвентаря (1-3):\n1.Для спортивного зала\n2.Для улицы(лето)\n3.Для улицы(зима)\nОтвет: ";
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

    cout << "Здравствуйте, данная программа формирует список спортивного инвентаря." << endl;
    cout << "Желаете продолжить? (y-YES)";
    cin >> choice;
    if (choice == 'y' or choice == 'Y')
    {
        cout << "\nНачинаем";
        Work start;
        start.doWork();

    }
    cout << "\nЗавершаем работу\n";

    return 0;
}