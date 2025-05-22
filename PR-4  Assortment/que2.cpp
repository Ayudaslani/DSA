// Develop program  that finds all the lagest elements  from a given 2D array.

#include <iostream>
using namespace std;

main()
{
    int row, col;
    cout << "Enter the size of row :- ";
    cin >> row;
    cout << "Enter the size of col :- ";
    cin >> col;

    int a[row][col];

    cout << "Input array :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "]" << "[" << j << "] :- ";
            cin >> a[i][j];
        }
    }

    int max = a[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    cout << endl;
    cout << "The largest element in array :- " << max;
}