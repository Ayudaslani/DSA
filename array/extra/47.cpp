// Check if an array is a palindrome.
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int b[size];
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    cout << endl;
    int n = size - 1;
    for (int i = 0; i < size / 2; i++, n--)
    {
        int c = a[i];
        a[i] = a[n];
        a[n] = c;
    }

    int palindrome = 1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == b[i])
        {
            palindrome = 1;
        }
        else
        {
            palindrome = 0;
        }
    }
    if (palindrome == 1)
    {
        cout << "array is a palindrome." << endl;
    }
    else
    {
        cout << "array is not palindrome." << endl;
    }
}