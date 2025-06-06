#include <iostream>
using namespace std;
#include "function.cpp"
main()
{
    int ch;
    int num1, num2;
    do
    {
        cout << "\nPress  1 for + :- " << endl;
        cout << "Press  2 for - :- " << endl;
        cout << "Press  3 for * :- " << endl;
        cout << "Press  4 for / :- " << endl;
        cout << "Press  5 for % :- " << endl;
        cout << "Press  0 for the exit :- " << endl;

        cout << "\n Enter your chioce :- ";
        cin >> ch;

        if (ch < 0 || ch > 5)
        {
            cout << "Invalid choice ..!!";
            continue;
        }

        if (ch == 0)
        {
            break;
        }

        cout << "Enter the First Number :- ";
        cin >> num1;
        cout << "Enter the Second Number :- ";
        cin >> num2;

        switch (ch)
        {
        case 1:

            cout << "Addition of " << num1 << " and " << num2 << " is " << sum(num1, num2);
            break;

        case 2:
            cout << "subtraction of " << num1 << " and " << num2 << " is " << sub(num1, num2);
            break;

        case 3:
            cout << "multiplication of " << num1 << " and " << num2 << " is " << mul(num1, num2);
            break;

        case 4:
            cout << "division of " << num1 << " and " << num2 << " is " << divison(num1, num2);
            break;
        case 5:
            cout << "moduler of " << num1 << " and " << num2 << " is " << moduler(num1, num2);
            break;
        }
    } while (ch != 0);
}
