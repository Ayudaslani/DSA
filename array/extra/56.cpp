#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter the size of array :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Output Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    int k;
    cout << "enter the target sum :- " << endl;
    cin >> k;

    int maxlen = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = sum + a[j];
            if (sum == k)
            {
                int len = j - i + 1;
                if (len > maxlen)
                {
                    maxlen = len;
                }
            }
        }
    }
    cout << "Length of longest subarray with sum :- " << maxlen << endl;
}