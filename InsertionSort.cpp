#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enetr the size of array:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the element of array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout<<"Sorted array:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
