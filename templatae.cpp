/*#include<iostream>      // function template
using namespace std;
template <class T>
int show (T a, T b)
{
	//template <class A>
	cout<<"A= "<<a<<endl<<"B= "<<b<<endl;
	
}
int main()
{
	int p=10,q=20;
		show(p,q);
	char m='A',n='B';
	    show(m,n);
	float x=1.22,y=11.52;
	    show(x,y);
	return 0;
}
*/

#include<iostream>
using namespace std;
template<class T>
class show
{
	T a,b;
	public:
		show(T p,T q)
		{
			q=p;b=q;
		}
};

int main()
{
	//int ab;
    show <float> ob(11.10,21.20);
	ob.show();
	return 0;
}
