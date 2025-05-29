#include <iostream>
using namespace std;

main()
{
    int x = 50;
    int &ref = x;

    cout << "X :- " << x << endl;
    cout << "ref :- " << ref << endl;
    cout << "add of ref :- " << &ref << endl;
    cout << "add of x :- " << &x << endl;

}