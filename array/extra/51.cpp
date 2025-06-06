
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter the size :-";
    cin >> size;

    int a[size - 1];
    cout << "Input Array :- ";
    for (int i = 0; i < size - 1; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    int total = size * (size + 1) / 2;
    for (int i = 0; i < size - 1; i++)
    {
        sum += a[i];
    }
    int missing = total - sum;
    cout << "the missing number is " << missing << endl;
}
