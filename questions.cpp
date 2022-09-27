#include <iostream>
#include <fstream>
#include <string>
#include "questions.h"
using namespace std;
void Question::load()
{
    fstream in;
    in.open("questions.txt", ios::in);
    int start_line = (no - 1) * 5 + 1;
    int counter = 0;
    string line;

    while (getline(in, line))
    {
        counter++;
        if (counter == start_line)
        {
            body = line;
        }
        if (counter == start_line + 1)
        {
            a = line;
        }
        if (counter == start_line + 2)
        {
            b = line;
        }
        if (counter == start_line + 3)
        {
            c = line;
        }
        if (counter == start_line + 4)
        {
            proper_answer = line;
        }
    }
    in.close();
}
void Question::print()
{
    cout << no << ".:" << body << endl
         << "a:" << a << endl
         << "b:" << b << endl
         << "c:" << c << endl;
    cin >> user_answer;
}
void Question::check()
{
    if (user_answer == proper_answer)
    {
        point = 1;
    }
    else
    {
        point = 0;
    }
}