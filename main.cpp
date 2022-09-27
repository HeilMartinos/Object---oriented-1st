#include <iostream>
#include "questions.h"
using namespace std;
int main()
{
    int points = 0;
    Question q[2];
    for (int i = 0; i < 2; i++)
    {
        q[i].no = i + 1;
        q[i].load();
        q[i].print();
        q[i].check();
        points += q[i].point;
    }
    cout << "Zdobyles " << points << "pkt/2pkt." << endl;
}