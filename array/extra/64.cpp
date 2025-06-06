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

    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] > a[minindex])
            {
                minindex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
    }

    cout << " \n  descending  order using selection sort :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}