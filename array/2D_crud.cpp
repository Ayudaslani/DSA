#include <iostream>
using namespace std;
main()
{
    int row, col;
    cout << "Enter the row size :- ";
    cin >> row;
    cout << "Enter the col size :- ";
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
    cout << "Output Array :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int indexrow, indexcol, value;
    cout << "Enter the value You want to insert :- ";
    cin >> value;
    cout << "Enter the index row :- ";
    cin >> indexrow;
    cout << "Enter the index col :- ";
    cin >> indexcol;

    cout << "new Array :- " << endl;
    for (int i = row; i > indexrow; i--)
    {
        for (int j = col; j > indexcol; j--)
        {
            a[i][j] = a[i - 1][j - 1];
        }
    }

    a[indexrow][indexcol] = value;

    cout << "\nNew Array:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}