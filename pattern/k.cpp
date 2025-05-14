#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            // if (j == 1 || ((i == 4) && (j == 2)) || ((i == 3 || i == 5) && (j == 3)) || ((i == 2 || i == 6) && (j == 4)) || ((i == 1 || i == 7) && (j == 5)))
            int k = 1;

            if (j == 1 || (i + j == 7 - k))
            {
                cout << "* ";
                k++;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}