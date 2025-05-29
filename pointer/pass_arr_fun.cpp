#include <iostream>
using namespace std;

void arrFun(int a[], int size);
main()
{
    int a[5] = {1, 2, 3, 4, 5};
    arrFun(a, 5); // pass by reference
}

void arrFun(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}