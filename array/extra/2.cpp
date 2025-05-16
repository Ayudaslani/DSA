#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :-" << endl;
    cin >> size;

    int a[size];
    cout << "Input Array :-" << endl;
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
    cout << "Sum of All element :-" << sum;
}