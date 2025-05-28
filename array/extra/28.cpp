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
    cout << "Union of array :- " << endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (marge[i] == marge[j])
            {
                marge[j] = '\0';
            }
        }
        if (marge[i] != 0)
        {
            cout << marge[i] << " ";
        }
    }
}