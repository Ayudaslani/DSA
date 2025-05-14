#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            // if ((j == 1 || j == 5) && (i >= 1 && i <= 7) || ((i == 2) && (j % 2 == 0)) || (i == 3 && j == 3))
            if ((j == 1 || j == 7) || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}