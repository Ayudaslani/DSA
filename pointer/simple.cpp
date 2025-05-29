#include <iostream>
using namespace std;

main()
{
    int x = 10;
    int *p = &x;

    cout << "x  Address :- " << p << "x Value :- " << *p;
}