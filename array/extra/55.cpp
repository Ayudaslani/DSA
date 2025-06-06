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

    cout << "Output Array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    int count = 0;
    int k = 3;

    for (int i = 0; i < size; i++)
    {
        int sum = 0;

        for (int j = i; j < size; j++)
        {
            sum += a[j];

            if (sum == k)
            {
                count++;
            }
        }
    }

    cout << "Total :- " << count;
}