#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers in sorted order separated by space: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            foundIndex = mid;
            break;
        }

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (foundIndex != -1)
        cout << "Element found at index: " << foundIndex << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

