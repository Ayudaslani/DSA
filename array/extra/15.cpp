#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 3;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i * size + i];
    }

    cout << "Sum of diagonal elements:- " << sum;
}