#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"

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
    student* stud = new student("Петров", "Иван", "Алексеевич", scores);
    cout << stud->get_full_name() << endl;
    cout << "Средний балл: " << stud->get_average_score() << endl;

    return 0;
}
