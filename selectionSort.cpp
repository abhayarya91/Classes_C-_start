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
	for(int i=0;i<n-1;i++)
	{
		int minIndex = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[minIndex])
			{
				minIndex = j;
			}
		}
		int temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]= temp;
	}
	cout<<"Sported Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
