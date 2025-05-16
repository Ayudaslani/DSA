#include <iostream>
using namespace std;

main()
{
    int size;

    cout << "enter the size of array :-" << endl;
    cin >> size;

    int a[size];
    cout << "Input Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << endl;
    cout << "Largest Element :- " << max;
}