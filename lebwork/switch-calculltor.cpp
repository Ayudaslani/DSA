#include <iostream>
using namespace std;

main()
{
    int a, b;
    char ch;
    cout << "Enter value of A :" << endl;
    cin >> a;
    cout << "Enter value of B :" << endl;
    cin >> b;

    cout << "Enter press + for  Addition" << endl;
    cout << "Enter press - for  subtraction" << endl;
    cout << "Enter press * for  multiplication" << endl;
    cout << "Enter press / for  division" << endl;

    cout << "Enter your choice :-" << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':

        cout << "Addition :-" << (a + b);
        break;
    case '-':
        cout << "subtraction :-" << (a - b);
        break;
    case '*':
        cout << "multiplication :-" << (a * b);
        break;
    case '/':
        cout << "division :-" << (a / b);
        break;
    default:
        cout << "Invalid Choice!!";
        break;
    }
}