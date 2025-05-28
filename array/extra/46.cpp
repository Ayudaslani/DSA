// Find the count of perfect square numbers in an array.
#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "ente the size :- ";
    cin >> size;
    int a[size];
    cout << "Input Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 1; j < size; j++)
        {
            if (j * j == a[i])
            {
                count++;
            }
        }
        
    }
}