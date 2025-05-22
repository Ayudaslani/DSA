// Develop program  that finds all the negative elements  from a given 1D array.

#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of the array :-  ";
    cin >> size;

    int a[size];
    cout << "Input Array :- " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] :- ";
        cin >> a[i];
    }

    cout << "Negative Element from  Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
}