#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input Array :-";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :-";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = '\0';
                count++;
            }
        }
        if (a[i] != 0)
        {
            cout << a[i] << " => " << count << endl;
        }
    }
}