#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Before roation " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    int k; 
    cout << "Enter the postion you want to left Rotate an array :-  ";
    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        int first = a[0];
        for (int j = 0; j < size; j++)
        {
            a[j] = a[j + 1];
        }
        a[size - 1] = first;
    }
    cout << endl;

    cout << "after roation " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}