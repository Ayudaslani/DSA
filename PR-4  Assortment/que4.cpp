// Develop program  to print and find the sum of all elements  of a given row & column from 2D array .
#include <iostream>
using namespace std;
main()
{
    int row, col, r, c;
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

    int sum = 0;
    cout << "Enter row number :- ";
    cin >> r;
    cout << "Element of row :- ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == r)
            {
                cout << a[i][j] << " ";
                sum = sum + a[i][j];
            }
        }
    }

    cout << endl;
    cout << "The sum of row :- " << sum << endl;

    int s = 0;
    cout << "Enter col number :- ";
    cin >> c;
    cout << "Element of col :- ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == c)
            {
                cout << a[i][j] << " ";
                s = s + a[i][j];
            }
        }
    }

    cout << endl;
    cout << "The sum of col :- " << s;
}