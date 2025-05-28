// Check if an array contains only even numbers.
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
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    if (count == size)
    {
        cout << "The array contains only even numbers." << endl;
    }
    else
    {
        cout << "The array does not contain only even numbers." << endl;
    }
}