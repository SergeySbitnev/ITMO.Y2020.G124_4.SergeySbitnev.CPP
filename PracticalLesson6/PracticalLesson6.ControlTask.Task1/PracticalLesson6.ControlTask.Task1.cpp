#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    char ch;
    cout << "Вводите стихотворение, чтобы закончить ввод перейдите на новую строку и нажмите Ctrl+Z -> Enter. " << endl;
    ofstream out("poem.txt", ios::out | ios::binary);
    if (!out)
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    while (cin.get(ch))
    {
        out << ch;
    }
    out.close();

    cout << endl << "Ввод завершен, текст сохранен в файл.\nВывод результата:\n";
    ifstream in("poem.txt", ios::in | ios::binary);
    if (!in)
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    while (in.get(ch))
    {
        cout << ch;
    }
    in.close();
    return 0;
}


