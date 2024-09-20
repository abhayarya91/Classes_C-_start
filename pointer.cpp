#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    int *ptr;
    ptr = &a;
    cout<<ptr<<"\n";
    cout << "Value of variable: " << *ptr << endl;
    return 0;
}


21

