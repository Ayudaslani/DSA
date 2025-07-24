#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array :- ";
    cin >> size;

    int a[size];
    cout << "inputed Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Sorted in bubble sort :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}