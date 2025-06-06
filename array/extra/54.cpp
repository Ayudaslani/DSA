// Find the minimum difference between any two elements in the array.
#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size :-";
    cin >> size;

    int a[size];
    cout << "Input Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    int min = a[1] - a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i + 1] - a[i] < min)
        {
            min = a[i + 1] - a[i];
        }
    }
    cout << "The minimum difference between any two elements in the array is " << min;
}