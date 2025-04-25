#include <iostream>
using namespace std;

main()
{
    cout << "Operator " << endl;

    int a = 10, b = 10;

    cout << "Sum :- " << a + b << endl;
    cout << "Sub :- " << a - b << endl;
    cout << "mul :- " << a * b << endl;
    cout << "div :- " << a / b << endl;
    cout << "mod :- " << a % b << endl;

    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    cout << !(a == b) << endl;
}