// Find the product of all elements in an array.
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter the size of the array :- ";
    cin >> size;

    int a[size];
    cout << "\nInput Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\n Output Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * a[i];
    }
    cout << endl;
    cout << "product of all elements in an array :- " << product << endl;
}