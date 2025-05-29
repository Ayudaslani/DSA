#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- ";
    for (int i = 0; i < size - 1; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    int total = size * (size + 1) / 2;
    int missing = total - sum;

    cout << "\nMissing number :- " << missing << endl;
}