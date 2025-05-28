#include <iostream>
using namespace std;

void sum(int a, int b);
main()
{
    sum(1, 5);
    sum(6, 6);
    sum(10, 40);
}

void sum(int a, int b)
{
    cout << "sum :- " << a + b << endl;
}