#include <iostream>
using namespace std;

main()
{
    int size1;
    cout << "Enter the size of array :- ";
    cin >> size1;

    int a[size1];
    cout << "Input of array 1 :- " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> a[i];
    }

    cout << "output of array 1 :- " << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    int size2;
    cout << "Enter the size of array :- ";
    cin >> size2;

    int aa[size2];
    cout << "Input of array 2 :- " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> aa[i];
    }

    cout << "output of array 2 :- " << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << aa[i] << " ";
    }

    cout << endl;
    cout << "Common elements in two array :- " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == aa[j])
            {
                cout << a[i] << " ";
            }
        }
    }
}
