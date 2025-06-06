
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size :-";
    cin >> size;
    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Bubble sort ascending order :-" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}