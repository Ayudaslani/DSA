#include <iostream>
using namespace std;

void inc(int x);
main()
{
    int a = 10;
    inc(a);
    cout << "After A value :- " << a << endl;
}
void inc(int x)
{
    x = x + 1;
    cout << "Before A Value :- " << x << endl;
}