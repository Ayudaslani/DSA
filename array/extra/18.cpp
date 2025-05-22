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

    int value;
    cout << "Any Element Enter check if exits or not :- " << endl;
    cin >> value;

    int isexist = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == value)
        {
            isexist = 1;
        }
    }
    if (isexist == 1)
    {
        cout << "is exists in array .." << endl;
    }
    else
    {
        cout << "is not  exists in array .." << endl;
    }
}