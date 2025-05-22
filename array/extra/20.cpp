#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input array Element :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int value;
    cout << "Enter the value :- ";
    cin >> value;

    for (int i = size; i > 0; i--)
    {
        if (a[i] == value)
        {
            cout << i;
            break;
        }
    }
}