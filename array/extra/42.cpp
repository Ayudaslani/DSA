// Find the average of the elements in the array.
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
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    cout << endl;
    cout << "average of the elements in the array :- " << sum / size << endl;
}