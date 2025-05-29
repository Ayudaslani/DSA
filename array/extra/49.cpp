// Find the longest increasing subarray.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 4, 5, 3, 6, 7, 8, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxLength = 1;
    int maxStartIndex = 0;

    int currentLength = 1;
    int currentStartIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = currentStartIndex;
            }
            currentLength = 1;
            currentStartIndex = i;
        }
    }

    // Check last increasing part
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = currentStartIndex;
    }

    cout << "Longest increasing subarray:" << endl;
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nLength: " << maxLength << endl;

    return 0;
}
