#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :- ";
    cin >> size;

    int a[size];
    cout << "Input array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 1)
        {
            count++;
        }
    }
    cout << "Total Even Number :- " << count;
}