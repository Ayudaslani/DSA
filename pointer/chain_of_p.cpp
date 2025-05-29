#include <iostream>
using namespace std;

main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    cout << " A  :- " << a << endl;
    cout << "A address :- " << p << " value :- " << *p << endl;
    cout << "A address :- " << q << " value :- " << **q << endl;
    cout << "A address :- " << r << " value :- " << ***r << endl;
}