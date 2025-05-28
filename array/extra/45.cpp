// Check if an array is a palindrome.
#include <iostream>
using namespace std;

main()
{
    int size, count = 0;
    cout << "enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "output Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        int num = a[i];
        if (num <= 1)
            continue;

        int isPrime = 1; 
        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            count++;
    }
    cout << "Total number of prime :- " << count;
}