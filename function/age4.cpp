#include <iostream>
using namespace std;
int age(int no);
main()
{
    if (age(19) == 1)
    {
        cout << "You can vote " << endl;
    }
    else
    {
        cout << "You can't vote " << endl;
    }
}
int age(int no)
{
    if (no >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}