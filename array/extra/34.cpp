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
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
    }
    cout << endl;
    cout << "Sum of All Even Number :- " << sum;
}