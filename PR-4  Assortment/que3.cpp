// Develop program  to find the transpose matrix of a given 2D array.
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

    cout << "The transpose matrix of an array :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}
