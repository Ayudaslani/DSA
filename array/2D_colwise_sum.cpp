#include <iostream>
using namespace std;

main()
{
    int row, col;
    cout << "Enter the row size :- ";
    cin >> row;
    cout << "Enter the row size :- ";
    cin >> col;

    int a[row][col];

    cout << "Input Array :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "]" << "[" << j << "]:- ";
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
    cout << endl;
    cout << "Print Array Row Wise Sum :- " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[j][i];
        }
        cout << sum;
        cout << endl;
    }
}