#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    string name;
    string last_name;
    int scores[5];

    cout << "Name: ";
    getline(cin, name);
    cout << "Last name: ";
    getline(cin, last_name);
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    IdCard* idc = new IdCard(123, "Базовый");

    Student* student02 = new Student(name, last_name, idc);

    student02->set_scores(scores);
    double average_score = sum / 5.0;
    student02->set_average_score(average_score);

    cout << "Average ball for " << student02->get_name() << " " << student02->get_last_name() << " is " << student02->get_average_score() << endl;
    cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    cout << "Category: " << student02->getIdCard().getCategory() << endl;
    delete student02;
    return 0;
}