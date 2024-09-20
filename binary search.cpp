#include <iostream>

using namespace std;

int main() {
    int a[50];
    int n, val, pos = -1, beg, end, mid;

    cout << "Enter elements in sorted order: ";
    cin >> n;

    cout << " Enter values for the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << " Enter the value to search: ";
    cin >> val;

    beg = 0;end = n - 1;

    while (beg <= end)
	{
        mid = (beg + end) / 2;

        if (a[mid] == val)
		{
            pos = mid;
            cout << " Element found at position " << pos + 1;
            break;
        }
		else if (val < a[mid])
		{
            end = mid - 1;
        }
		else
		{
            beg = mid + 1;
        }
    }

    if (pos == -1)
	{
        cout << " Element not found";
    }

    return 0;
}
