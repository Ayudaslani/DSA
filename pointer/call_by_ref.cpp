#include <iostream>
using namespace std;

void inc(int *x);
main()
{
    int a = 5;
    inc(&a);
    cout << "After A Value :- " << a << endl;
}
void inc(int *x)
{
    *x = *x + 1;
    cout << "Before A Value :- " << *x << endl;
}