#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int size;
    cout << "Enter array size :- ";
    cin >> size;
    int a[size];

    cout << "Enter the element :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    quickSort(a, 0, size - 1);
    cout << "Sorted Array in Quick Sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}