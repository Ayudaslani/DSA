#include <iostream>
using namespace std;

main()
{
    int a, b, c, d, e, f;

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
    cout << "Enter Of F :";
    cin >> f;

    if (a == b && b == c && c == d && d == e && e == f)
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
                    if (a > e)
                    {
                        if (a > f)
                        {
                            cout << "A is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max ";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                }
                else
                {
                    if (d > e)
                    {
                        if (d > f)
                        {
                            cout << "D is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        if (c > f)
                        {
                            cout << "c is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                }
                else
                {
                    if (d > e)
                    {
                        if (d > f)
                        {
                            cout << "D is Max";
                        }
                        else
                        {
                            cout << "E is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
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
                        if (b > f)
                        {
                            cout << "B is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                }
                else
                {
                    if (d > e)
                    {
                        if (d > f)
                        {
                            cout << "D is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        if (c > f)
                        {
                            cout << "C is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                }
                else
                {
                    if (d > e)
                    {
                        if (d > f)
                        {
                            cout << "D is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "E is Max";
                        }
                        else
                        {
                            cout << "F is Max";
                        }
                    }
                }
            }
        }
    }
}