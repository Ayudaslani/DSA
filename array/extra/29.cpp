#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the size of the array :- ";
    cin >> size;

    int a[size];
    cout << "\nInput Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    int size2;
    cout << "enter the size of the array :- ";
    cin >> size2;

    int ar[size2];
    cout << "\nInput Array :- \n";
    for (int i = 0; i < size2; i++)
    {
        cin >> ar[i];
    }
    cout << endl;
    int marge[size + size2];
    for (int i = 0; i < size; i++)
    {
        marge[i] = a[i];
    }
    for (int i = 0; i < size2; i++)
    {
        marge[size + i] = ar[i];
    }
    int length = sizeof(marge) / sizeof(marge[0]);

    cout << "new array :-" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << marge[i] << " ";
    }
    cout << endl;
    cout << " difference of two arrays :- " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j =0; j < size2; j++)
        {
            if (a[i] == ar[j])
            {
                a[i] = '\0';
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << " ";
        }
    }
}