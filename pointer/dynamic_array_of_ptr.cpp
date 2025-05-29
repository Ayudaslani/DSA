#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int *ptr = a;
    cout << endl;

    for (int i = 0; i < size; i++, ptr++)
    {
        cout << *ptr << " ";
    }
}