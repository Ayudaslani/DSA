#include <iostream>
using namespace std;

main()
{
    int a, b, c, d;

    cout << "Enter of A :";
    cin >> a;
    cout << "Enter of B :";
    cin >> b;
    cout << "Enter of C :";
    cin >> c;
    cout << "Enter of D :";
    cin >> d;

    if (a == b && b == c && c == d)
    {
        cout << "All are equal";
    }
    else
    {

        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << "A is Max";
                }
            }
            else
            {
                if (c > d)
                {
                    cout << "c is Max";
                }
                else
                {
                    cout << "D is Max";
                }
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    cout << "B is Max";
                }
                else
                {
                    cout << "D is Max";
                }
            }
            else
            {
                if (c > d)
                {
                    cout << "C is Max";
                }
                else
                {
                    cout << "D is Max";
                }
            }
        }
    }
}