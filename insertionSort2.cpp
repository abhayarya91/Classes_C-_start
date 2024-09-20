#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j-1]>arr[j])
			{
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Sorted array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
