#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter the size :- " << endl;
    cin >> size;

    int a[size];
    cout << "Input array :- ";
    for (int &y : a)
    {
        cin >> y;
    }
    cout << "output array :- ";
    for (int x : a)
    {
        cout << x << " ";
    }
}