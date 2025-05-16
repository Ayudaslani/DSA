#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input Array :-";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :-";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int n = size - 1;

    for (int i = 0; i < size / 2; i++, n--)
    {
        int c = a[i];
        a[i] = a[n];
        a[n] = c;
    }
    cout << endl;
    cout << "Reverse Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}