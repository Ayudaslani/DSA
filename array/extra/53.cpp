// Find the majority element (appears more than N/2 times).
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];
    cout << "Input Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        
        if (count > size / 2)
        {
            cout << "majority element :-  " << a[i] << " ";
        }
        else
        {
            count = 0;
        }
    }
    if (count == 0)
    {
        cout << " no majority element";
    }
}

