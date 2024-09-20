/*Write a c++ program to check prime number.
			Input: 17
			Output: not prime number
			Input: 57
			Output: prime number*/
#include <iostream>
using namespace std;
int main()
{
	int  num,i,check=0;
	cout<<"Please enter the a number:-";
	cin>>num;
	for(i=1;i<=num;i++)
	{
	//	cout<<"Please enter the a number:-";
	  //  cin>>num;
		if(num%i==0)
		{
			//return  check;
			check++;
		}
	}
	if(check==2)
	{
		cout<<"This number is prime number"<<endl;
	}
	else
	{
		cout<<"this number is not prime number"<<endl;
	}
	return 0;
}
