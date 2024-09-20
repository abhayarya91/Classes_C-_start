#include<iostream>
using namespace std;
int main()
{
	int ary[50],n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	cout<<"Enter then elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ary[i];
	}
	cout<<"Elements befire shorting:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<ary[i]<<endl;
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(ary[i]>ary[j+1])
			{
				int temp;
				temp = ary[j+1];
				ary[j+1] = ary[i];
				ary[i] = temp;
			}
		}
	}
	cout<<"Array after shorting:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<ary[i]<<endl;
	}
	return 0;
}
