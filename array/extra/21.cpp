#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :- ";
    cin >> size;

    int middle = size / 2;

    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Middle element of array :- ";

    if (size % 2 == 0)
    {
        cout << a[middle] << a[middle - 1] << " ";
    }
    else
    {
        cout << a[middle] << " ";
    }
}