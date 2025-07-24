#include <iostream>
using namespace std;

int linersearch(int a[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[10] = {1, 9, 44, 22, 77};
    int n = 5, target = 22;

    int index = linersearch(a, n, target);
    if (index != -1)
    {
        cout << "Element is present at index " << index << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}
