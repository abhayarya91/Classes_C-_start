#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter numbers separated by space: "<<endl;
    for (int i = 0; i < n; i++)
	{
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int foundIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
        cout << "Element found at index: " << foundIndex << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

