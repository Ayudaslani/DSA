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

    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {

            min = a[i];
        }
    }
    cout << endl;
    cout << "Minimum value :- " << min;
}