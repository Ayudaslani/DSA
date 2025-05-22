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
    cout << "\n Output Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
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
    cout << "\n Output Array :- \n";
    for (int i = 0; i < size2; i++)
    {
        cout << ar[i] << " ";
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

        cout << "new array :-" << endl;
    for (int i = 0; i < size + size2; i++)
    {
        cout << marge[i];
    }
}