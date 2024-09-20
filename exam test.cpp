/*

**********Array********

#include<iostream>  
using namespace std;
int main()
{
	int i,ary[5];
	cout<<"Enter your array elements"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>ary[i];
	}
	cout<<"your Array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<ary[2]<<endl;
	}
	return 0;
}

**********Reference Variable***********

#include<iostream>
using namespace std;
int main()
{
	int a=10;
	cout<<a<<endl;
	int &b=a;
	cout<<b<<endl;
	b++;
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}*/


/*******************type Caaasting*******************/


/*#include<iostream> 
using namespace std;
int main()
{
	int a=45;
	float b=55.5;
 	cout<<"the value of a "<<(float)a<<endl;
	cout<<"the value of a "<<float(a)<<endl;
	cout<<"the value of b "<<(int)b<<endl;
	cout<<"the value of b "<<int(b)<<endl;
	return 0;
}*/

/***********Storage class*******

#include<iostream>
using namespace std;
int main()
{
	int a;
	auto int b;
	return 0;
}


*********Asbtraction**********



#include<iostream>
using namespace std;
class car
{
	bool startEngine;
	public:
		void start()
		{
			startEngine=true;
			cout<<"Engine started"<<endl;
		}
		void drive()
		{
			if(startEngine)
			{
				cout<<"you can drive"<<endl;
			}
			else
			{
				cout<<"you can not drive"<<endl;
			}
		}
};

int main()
{
	car c;
	c.start();
	c.drive();
}
 
	
***********************ASbtraction*********************



#include<iostream>
using namespace std;
class car
{
	bool startEngine;
	public:
		void start()
		{
		//	startEngine=true;
			cout<<"Engine started"<<endl;
		}
		void drive()
		{
			if(startEngine)
			{
				cout<<"you can drive"<<endl;
			}
			else
			{
				cout<<"you can not drive"<<endl;
			}
		}
};

int main()
{
	car c;
	c.start();
	c.drive();
	return 0; 
}

***************Encapsulation*******************


#include<iostream>
using namespace std;
class Encap
{
	private:
		int age;
	public:
		string name;
		void set(int a)
		{
			age=a;
			cout<<age<<endl;
		}
};

int main()
{
	Encap e;
	
	e.name="Abhay";
	e.set(23);
	
	cout<<e.name <<endl;
	return 0;
}




***************Inheritance*****************

#include<iostream>
using namespace std;
class father
{
	  protected:
	  	string surname="Arya";
};
class son1:father
{
	public:
	string name="Abhay";
	void show()
	{
		cout<<name<<" "<<surname<<endl;
	}
};
class son2:father
{
	public:
	string name="Aryan";
	void disp()
	{
		cout<<name<<" "<<surname<<endl;
	}	
};
 int main()
{
	son1 s1;
	s1.show();
	son2 s2;
	s2.disp();
	
	return 0;
}*/


/***************Polymorphism***********
// compile-time Polymorphism


#include<iostream>
using namespace std;
void showinfo(int age)
{
	cout<<age<<endl;
}
void showinfo(string name)
{
	cout<<name<<endl;
}
void showifo(double salary)
{
	cout<<salary<<endl;
}
int main()
{
showinfo(23);
showinfo("Abhay");
showinfo(5800.56);
return 0;	
}*/




//run-time polymorphism



 #include<iostream>
using namespace std;
class A
{
	public:
		void disp()
		{
			cout<<"my class A"<<endl;
		}
};
class B:public A
{
	public:	
		void disp()
		{
			cout<<"my class B"<<endl;
		}
};
int main()
{
	B obj;
	obj.disp();
}
