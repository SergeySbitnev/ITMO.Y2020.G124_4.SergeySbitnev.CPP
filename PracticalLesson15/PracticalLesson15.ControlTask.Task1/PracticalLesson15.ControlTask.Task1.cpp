#include <iostream>
#include <map>
using namespace std;

struct StudentGrade
{
    string name;
    char value;
};

map<string, char> StudentGradeMap;

void add_valueMap(StudentGrade sg)
{
    if (StudentGradeMap.find(sg.name) == StudentGradeMap.end())
    {
        StudentGradeMap.insert(pair<string, char>(sg.name, sg.value));
        cout << "������� " << sg.name << "  ��������." << endl;
    }
    else
    {
        cout << "������� � �������� " << sg.name << " ��� ���������� � ����������." << endl;
    }
}

void show_valueMap()
{
    for (auto iter = StudentGradeMap.begin(); iter != StudentGradeMap.end(); ++iter)
    {
        cout << endl << iter->first << " : " << iter->second << endl;
    }
}

int main()
{
    system("chcp 1251");
    system("cls");

    StudentGrade stud[5] =
    {
        { "������", 'a' },
        { "������", 'b' },
        { "�������", 'a' },
        { "�����", 'c' },
        { "������", 'b' }
    };

    
    for (int i = 0; i < sizeof(stud)/sizeof(stud[0]); i++)
    {
        add_valueMap(stud[i]);
    }
    
    show_valueMap();

    return 0;
}
