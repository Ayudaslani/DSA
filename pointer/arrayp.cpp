#include <iostream>
using namespace std;

main()
{
    int a = 10, b = 5, c = 20;
    int *arr[3];

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for (int i = 0; i < 3; i++)
    {
        cout << *arr[i] << " ";
    }
}