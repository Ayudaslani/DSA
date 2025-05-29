// Find the longest decreasing subarray.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 8, 7, 6, 5, 6, 4, 3, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxLength = 1;
    int maxStartIndex = 0;

    int currentLength = 1;
    int currentStartIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
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

    // Final check after loop
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = currentStartIndex;
    }

    cout << "Longest decreasing subarray:" << endl;
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nLength: " << maxLength << endl;

    return 0;
}
