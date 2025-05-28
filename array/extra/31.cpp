#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of the array :- ";
    cin >> size;
    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int num;
    cout << "\nEnter the any number :- ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % num == 0)
        {
            cout << a[i] << " ";
        }
    }
}