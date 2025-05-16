#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "output array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    cout << "Average of element :-" << sum / size;
}