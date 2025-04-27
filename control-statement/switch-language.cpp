#include <iostream>
using namespace std;

main()
{
    int ch;

    cout << "Enter press 1 for English Language" << endl;
    cout << "Enter press 2 for gujarati Language" << endl;
    cout << "Enter press 3 for hindi Language" << endl;

    cout << "Enter Your Choice :-";
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "English Language";
        break;
    case 2:
        cout << "Gujarti Language";
        break;
    case 3:
        cout << "Hindi Language";
        break;
    default:
        cout << "Invalid Choice !!";
        break;
    }
}