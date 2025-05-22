#include <iostream>
using namespace std;
main()
{
    int row, col;
    cout << "enter the row :- ";
    cin >> row;
    cout << "enter the col :- ";
    cin >> col;

    int a[row][col];
    cout << "\n Input Array :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    cout << "\n Output Array :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
        cout << endl;
    }
    cout << "Sum :-" << sum;
}
