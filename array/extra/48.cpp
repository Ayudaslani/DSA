// Check if an array contains only distinct elements.
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;
    int a[size];
    cout << "Input array :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    cout << endl;
    if (count == 0)
    {
        cout << "array contains only distinct elements." << endl;
    }
    else
    {
        cout << "array can not  contains only distinct elements." << endl;
    }
}