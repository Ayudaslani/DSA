#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "output Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << endl;
    cout << "Smallest Element :-" << min;
}