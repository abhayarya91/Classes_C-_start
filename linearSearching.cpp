#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter numbers separated by space: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int i;
    for (i = 0; i < n; i++)
	{
        if (arr[i] == key)
		{
            cout << "Element found at index: " << i << endl;
            break;
        }
    }

    if (i >= n)
	{
        cout << "Element not found" << endl;
        //break;
    }

    return 0;
}

