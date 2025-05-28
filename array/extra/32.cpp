#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;

    cout << "Input array :- ";
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "output array :- ";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int max = a[0];
    int smax;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)

        {
            smax = max;
            max = a[i];
        } 
    }
    cout << "The largest product of two elements in the array :- " << max * smax << endl;
}