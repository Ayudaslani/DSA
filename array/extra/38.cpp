// Check if the array is sorted in descending order.

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
    int isarray = true;
    for (int i = 0; i < size - 1; i++)
    {

        if (a[i] > a[i + 1])
        {
            isarray = true;
        }
        else
        {
            isarray = false;
            break;
        }
    }
    if (isarray == true)
    {
        cout << "\nThe array is already sorted in descending order.\n";
    }
    else
    {
        cout << "\nThe array is NOT sorted in descending order.\n";
    }
}