#include <iostream>
using namespace std;

class Question
{
public:
    int no;
    string body;
    string a, b, c, user_answer, proper_answer;
    int point;

    void load();
    void print();
    void check();
};