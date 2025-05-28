#include <iostream>
using namespace std;
void age();
main()
{
    age();
}
void age()
{
    int no;
    cout << "Enter the no :- ";
    cin >> no;

    if (no >= 18)
    {
        cout << "You can vote " << endl;
    }
    else
    {
        cout << "You can't vote " << endl;
    }
}