#include<iostream>
using namespace std;
// store student data to take from user create array
string arr1[200],arr2[200],arr3[200],arr4[200],arr5[200];
int total =0;
// function 
void enter()
{
	int choice;
	cout<<"how many students do you wants to enter:";
	cin>>choice;
	total = total+choice;
	for(int i=0;i<choice;i++)
	{
		cout<<"\nEnter data fo student:"<<i+1<<endl<<endl;
		cout<<"Enter name: ";
		cin>>arr1[i];
		cout<<"Enter Roll No:";
		cin>>arr2[i];
		cout<<"Enter class:";
		cin>>arr3[i];
		cout<<"Enter coure: ";
		cin>>arr4[i];
		cout<<"Enter contect: ";
		cin>>arr5[i];
	}
}
void show()
{
	for(int i=0;i<total;i++)
	{
		cout<<"Data of student: "<<i+1<<endl<<endl;
		cout<<"Name:"<<arr1[i]<<endl;
		cout<<"Roll No:"<<arr2[i]<<endl;
		cout<<"Class:"<<arr3[i]<<endl;
		cout<<"Cource:"<<arr4[i]<<endl;
		cout<<"Contect:"<<arr5[i]<<endl;
		
	}
}
void search()
{
	
}
void update()
{
	
}
void deleteRecord()
{
	
}

main()
{
	while(true)
	{
		cout<<"Press 1 to enter data"<<endl;
		cout<<"Press 2 to show your Data"<<endl;
		cout<<"Press 3 to search data"<<endl;
		cout<<"Press 4 to update data"<<endl;
		cout<<"Press 5 to delete data"<<endl;
		cout<<"Press 6 to Exit"<<endl;
		int value;
		cin>>value;
		switch(value)
		{
			case 1:
				 enter();
				 break;
			case 2:
				show();
				break;
			case 3:
				 search();
				 break;
			case 4:
			    update();
				break;
			case 5:
				 deleteRecord();
				 break;
			case 6:
				exit(0);
				break;
			default:
			cout<<"Invalid input...Please enter valid number"<<endl;			
		}
	}

	return 0;
}
