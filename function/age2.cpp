#include <iostream>
using namespace std;
void age(int no);
main()
{
    age(17);
    age(77);
}
void age(int no)
{
    if (no >= 18)
    {
        cout << "you can vote" << endl;
    }
    else
    {
        cout << "you can't vote" << endl;
    }
}