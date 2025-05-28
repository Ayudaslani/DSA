#include <iostream>
using namespace std;

int age();
main()
{
    if (age() == 1)
    {
        cout << "You can vote " << endl;
    }
    else
    {
        cout << "You can't vote " << endl;
    }
}
int age()
{
    int no;
    cout << "Enter the no :- ";
    cin >> no;

    if (no >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}