#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < size; i++)
    {
        int curr = a[i];
        int prev = i - 1;
        while (prev >= 0 && a[prev] < curr)
        {
            a[prev + 1] = a[prev];
            prev--;
        }
        a[prev + 1] = curr;
    }

    cout << " \n  descending order using insertion sort :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}