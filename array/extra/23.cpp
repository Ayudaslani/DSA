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

    int smallestLarger;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > num && a[i] < smallestLarger)
        {
            smallestLarger = a[i];
        }
    }
    if (smallestLarger != 0)
    {
        cout << "The smallest number larger than" << " " << num << "is :- " << smallestLarger;
    }
    else
    {
        cout << "no number smaller than in array " << endl;
    }
    
}