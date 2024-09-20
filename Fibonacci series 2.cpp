/* Write a c++ program to print fibonacci seriesw using recursion
                 intput= 10
				output= 0 1 1 2 3 5 8 13 21 34*/
#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
int main()
{
	int n,i;
	cout<<"Enter the number of elemnets:-";
	cin>>n;
	cout<<"Your fibonacci series is"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<fib(i)<<" ";
	}
	return 0;
}
