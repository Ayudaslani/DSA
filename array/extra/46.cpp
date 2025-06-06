#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        int num = a[i];
        int isPerfect = 0;

        for (int j = 1; j * j <= num; j++)
        {
            if (j * j == num)
            {
                isPerfect = 1;
                break;
            }
        }

        if (isPerfect == 1)
        {
            count++;
        }
    }

    cout << "Count of perfect square numbers: " << count << endl;
    return 0;
}
