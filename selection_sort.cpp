#include <iostream>
using namespace std;
int main()
{
    int arr[50],n;
    cout << "Enter the size of elements: ";
    cin >> n;
    cout << "Enter the elements of array:"<<endl;
    for (int i = 0; i < n; ++i)
	{
        cin >> arr[i];
    }
    cout << "Original array: \n";
    for (int i = 0; i < n; ++i)
	{
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n - 1; ++i)
	{
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
		{
            if (arr[j] < arr[minIndex])
			{
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    cout << "Sorted array: \n";
    for (int i = 0; i < n; ++i)
	{
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

