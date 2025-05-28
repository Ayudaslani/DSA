#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;

    int k;
    cout << "Enter the postion you want to right  Rotate an array :-  ";
    cin >> k;

    cout << "Before Rotation" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 1; i <= k; i++)
    {
        int temp = a[size - 1];
        for (int j = size - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }
    cout << endl;
    cout << "After Rotation" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}