#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input Array :-";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :-";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    cout << endl;
    cout << "Total Positive Number :- " << count;
}