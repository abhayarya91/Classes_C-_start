/*#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    cout << "Total number of arguments: " << argc <<endl;
    cout << "Arguments:" << endl;
    for (int i = 0; i < argc; ++i)
	{
        cout << "Argument " << i << ": " << argv[i] <<endl;
    }
    return 0;
}*/

/*#include<iostream>

int main()
{
	int a=6;
	cout<<a;
	return 0;
}*/



/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream onfile;
	onfile.open("C:\\Users\\asus\\Desktop\\text.txt");
	cout<<"file create successfully"<<endl;
	onfile.close();
	return 0;
}*/




/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream onfile;
	onfile.open("C:\\Users\\asus\\Desktop\\text.txt");
	onfile<<"hello bhai";
	cout<<"data entered in file";
	onfile.close();
}*/




/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile;
	string str;
	infile.open("C:\\Users\\asus\\Desktop\\text.txt");
	while(getline(infile,str))
	{
		cout<<str;
	}
	infile.close();
	return 0;
}*/



/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile;
	ofstream onfile;
	char str;
	infile.open("C:\\Users\\asus\\Desktop\\text.txt");
	onfile.open("C:\\Users\\asus\\Desktop\\text2.txt");
	while(infile.get(str))
	{
		onfile.put(str);
		 
	}
	infile.close();
	onfile.close();
	cout<<"data copied in file";
	return 0;
}*/




/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int value= remove("C:\\Users\\asus\\Desktop\\text.txt");
	if(value==0)
	{
		cout<<"File deleted";
	}
	else
	{
		cout<<"File not deleted";
	}
	return 0;
}*/


/*#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	double bal=1000.0;
	try
	{
		//Deposite
		double amt;
		cout<<"enter diposite amount: "<<endl;
		cin>>amt;
			if(amt<=0)
			{
				throw invalid_argument("invalid deposite amount");
			}
		bal=bal+amt;
		cout<<"available amount: "<<bal<<endl;
		// withdraw
		cout<<" enter withdraw amount: "<<endl;
		cin>>amt;
			if(amt<=0)
			{
				throw invalid_argument("invalid withdram amount");
			}
		if(amt>bal)
		{
			throw runtime_error("insufficient amount");
		}
		bal=bal-amt;
		cout<<"available amout: "<<bal<<endl;
	}
	catch(exception e)
	{
		cout<<e.what();
	}
}*/




/*#include<iostream>
using namespace std;
void value(int num)
{
	num=num+20;
	cout<<num;
}
int main()
{
	int num=100;
	cout<<num<<endl;
	value(num);
	return 0;
}*/




/*#include<iostream>
using namespace std;
void value(int *ptr)
{
	*ptr = *ptr+10;
	cout<<"pointer value: "<<*ptr<<endl;
}
int main()
{
	int num;
	cout<<"enter the value: ";
	cin>>num;
	cout<<"original value: "<<num<<endl;
	value(&num);
	return 0;
}*/









/*#include<iostream>
using namespace std;
int  main()
{
	int n=123; 
	cout<<n<<endl;
	int &rf=n;
	cout<<rf<<endl;
	cout<<++rf<<endl;
	cout<<n;
}








#include<iostream>
using namespace std;
class A
{
	public:
		void fun()
		{
			int a=10,b=20,sum;
			sum=a+b;
			cout<<"addition: "<<sum<<endl;
		}
		void fun(int x,int y)
		{
			int sub;
			sub=x-y;
			cout<<"subtraction: "<<sub<<endl;
		}
};
int main()
{
	A obj;
	obj.fun();
	obj.fun(20,15);
	return 0;
}*/


/*#include<iostream>
using namespace std;
class A
{
	public:
		void fun()
		{
			cout<<"Abhay";
		}		
};
class B: public A
{
	public:
		void fun()
		{
			cout<<"Arya";
		}
};
int main()
{
	B obj;
	obj.A::fun();
	return 0;
}*/





/*#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n,item;
	cout<<"how many elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"what value to be searched?"<<endl;
	cin>>item;
	for(int i=0;i<n;i++)
	{
		cout<<"Elements are present at loaction:"<<endl;
		break;
		
	}
	return 0;
}*/


//***********************************************************************************************************************************************


// WAP for linear search in C++
/*#include<iostream>
using namespace std;
int main()
{
	int arry[50],n,val;
	cout<<"please enter size of array"<<endl;
	cin>>n;
	cout<<"Pleasae enter elements in aaray:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arry[i];
	}
	cout<<"this is elements of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arry[i];
	}
	cin>>val;
	int pos =-1;
	for(int i=0;i<n;i++)
	{
		if(arry[i]==val)
		{
			pos=i;
			cout<<"Element found at postion:"<<pos;
			break;
		}
	}
	if(pos==-1)
	{
		cout<<"Element not found"<<endl;
	}
	return 0;
}*/


//*************************************************************************************************************************************************

//#include<iostream>
//using namespace std;
//int main()
//{
//	int ary[50],n;
//	cout<<"Enter the size of array:"<<endl;
//	cin>>n;
//	cout<<"Enter the elements of array:"<<endl;
//	for(int i=0; i<n; i++)
//	{
//		cin>>ary[i];
//		break;
//	}
//	cout<<"elements of array:"<<endl;
//	for(int i=0; i<n; i++)
//	{
//		cout<<ary[i];
//		break;
//	}
//	
//
//}
//
//
//
//
//



//**********************************************LINK LIST***************************************************
//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	node *next;
//};
//main()
//{
//	node *head = NULL;
//	cout<<"\nHow many node you want to create:";
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		if(head == NULL)
//		{
//			head = new node;
//			cout<<"\nEnter value in node:";
//			int data;
//			cin>>data;
//			head -> data = data;
//			head -> next = NULL;
//		}
//		else
//		{
//			node *ptr =head;
//			node *ptr1;
//			ptr1 = new node;
//			while (ptr -> next != NULL)
//			{
////				ptr -> ptr = next;
//                ptr = ptr -> next;
//			}
//			ptr -> next =ptr1;
//			cout<<"\nEnter the data for next node:";
//			int data;
//			cin>>data;
//			ptr1 -> data = data;
//			ptr1 -> next = NULL;
//		}
//	}
//}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtStart(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = newNode;
}

void insertAfter(Node* prevNode, int newData) {
    if (prevNode == nullptr) {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void traverseList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(&head, 6);
    insertAtStart(&head, 7);
    insertAtStart(&head, 1);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 8);

    cout << "Created Linked list is: ";
    traverseList(head);

    return 0;
}

