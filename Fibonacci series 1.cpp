// Write a c++ program to print fibonacci series without using recursion
#include<iostream>
using namespace std;
int main()
{
	// input = 10
	// output = 0 1 1 2 3 5 8 13 21 34
	int n1=0,n2=1,n3,i,number;
	cout<<"Enter your number of elements:-"<<endl;
	cin>>number;
	cout<<"Your Fibonacci series is"<<endl;
	cout<<n1<<" ";
	cout<<n2<<" ";
	for(i=2;i<number;++i)
	{
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
	return 0;	
}
