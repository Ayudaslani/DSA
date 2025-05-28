#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Output array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    int num;
    cout << "Enter the number :- ";
    cin >> num;

    int largestsmaller = -1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < num)
        {
            if (largestsmaller == -1 || a[i] > largestsmaller)
            {
                largestsmaller = a[i];
            }
        }
    }
    if (largestsmaller == -1)
    {
        cout << "no number smaller than" << num << "in array " << endl;
    }
    else
    {
        cout << "The largest number smaller than" << " " << num << "is :- " << largestsmaller;
    }
}