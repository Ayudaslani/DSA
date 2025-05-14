#include <iostream>
using namespace std;

main()
{
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int s = 5; s > i; s--)
    //     {
    //         cout << "    ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }
    // for (int i = 2; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int s = 5; s > i; s--)
    //     {
    //         cout << "    ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}