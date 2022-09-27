#include <iostream>
#include "questions.h"
using namespace std;
int main()
{
    Question q[2];
    for (int i = 1; i <= 2; i++)
    {
        q[i].load();
        q[i].print();
        q[i].check();
    }
}