#include <iostream>
using namespace std;

main()
{
    int a, b, c;

    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    cout << "Enter C :";
    cin >> c;

    if (a == b && a == c && b == c)
    {
        cout << "All Are equal !" << endl;
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "A is Max";
            }
            else
            {
                cout << "C is Max";
            }
        }
        else
        {
            if (b > c)
            {
                cout << "B is Max";
            }
            else
            {
                cout << "C is Max";
            }
        }
    }
}