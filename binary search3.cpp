#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the value of array in sorted orded:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int item;
	cout<<"Enter item to search:"<<endl;
	cin>>item;
	int lower=0,uper=n-1,mid,f=0;
	while(lower<+uper)
	{
		mid=(lower+uper)/2;
		if(arr[mid]==item)
		{
			f=1;
			break;
		}
		if(arr[mid]<item)
		{
			lower = mid+1;
		}
		else
		{
			uper=mid-1;
		}
	}
	if(f==1)
	{
		cout<<"element found at:"<<mid;//<<enld;
	}
	else
	{
		cout<<"element not found...";
	}
	return 0;
	
}
