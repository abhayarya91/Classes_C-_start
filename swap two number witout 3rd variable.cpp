// C++ Program to swap two numbers without third variable
#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
    cout<<"Enter first number a:-"<<endl;
    cin>>  n1;
    cout<<"Enter second number b:-"<<endl;
    cin>>  n2;
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout <<"After Swapping:-"<<endl;
	cout<<"Number a= " << n1 << endl<<"Number b= " << n2;
    return 0;
}


