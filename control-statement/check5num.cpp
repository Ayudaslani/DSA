#include <iostream>
using namespace std;

main()
{
    int a, b, c, d, e;

    cout << "Enter Of A :";
    cin >> a;
    cout << "Enter Of B :";
    cin >> b;
    cout << "Enter Of C :";
    cin >> c;
    cout << "Enter Of D :";
    cin >> d;
    cout << "Enter Of E :";
    cin >> e;

    if (a == b && b == c && c == d && d == e)
    {
        cout << "All Are equal";
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    if (a > e)
                    {
                        cout << "A is Max";
                    }
                }
                else
                {
                    if (d > e)
                    {
                        cout << "D is Max";
                    }
                    else
                    {
                        cout << "E is Max";
                    }
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        cout << "C is Max";
                    }
                    else
                    {
                        cout << "E is Max";
                    }
                }
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    if (b > e)
                    {
                        cout << "B is Max";
                    }
                    else
                    {
                        cout << "E is MaX";
                    }
                }
                else
                {
                    if (d > e)
                    {
                        cout << "D is Max";
                    }
                    else
                    {
                        cout << "E is Max";
                    }
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        cout << "C is Max";
                    }
                    else
                    {
                        cout << "E is Max";
                    }
                }
                else
                {
                    if (d > e)
                    {
                        cout << "D is MAx";
                    }
                    else
                    {
                        cout << "E is MAx";
                    }
                }
            }
        }
    }
}