#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    student* stud = new student("������", "����", "����������", scores);
    cout << stud->get_full_name() << endl;
    cout << "������� ����: " << stud->get_average_score() << endl;

    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("�������", "�������", "���������", teacher_work_time);
    cout << tch->get_full_name() << endl;
    cout << "���������� �����: " << tch->get_work_time() << endl;
    return 0;
}
