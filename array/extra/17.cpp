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

    int index;
    cout << "Enter the index :- ";
    cin >> index;

    cout << endl;
    for (int i = index; i <= size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    size--;

    cout << "\n New  Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}