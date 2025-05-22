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
    for (int i = 0; i < size; i++)
    {

        if (a[i] > a[i + 1])
        {
            isarray = false;
            break;
        }
    }
    if (isarray)
    {
        cout << "\nThe array is already sorted in ascending order.\n";
    }
    else
    {
        cout << "\nThe array is NOT sorted in ascending order.\n";
    }
}