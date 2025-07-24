#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int a[10] = {4, 8, 10, 15, 16, 18};
    int n = 6, target = 177;

    int index = binarySearch(a, n, target);

    if (index != -1)
    {
        cout << "Element is present at index " << index << endl;
    }
    else
    {
        cout << "Eleemnt is not present in array" << endl;
    }
    return 0;
}