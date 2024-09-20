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
	if(total == 0)
	{
		total = total+choice;
		for(int i=0;i<choice;i++)
		{
			cout<<"\nEnter data fo student:"<<i+1<<endl;//<<endl;
			cout<<"Enter name: ";
			cin>>arr1[i];
			cout<<"Enter Roll No:";
			cin>>arr2[i];
			cout<<"Enter class:";
			cin>>arr3[i];
			cout<<"Enter course: ";
			cin>>arr4[i];
			cout<<"Enter contect: ";
			cin>>arr5[i];
		}
	}
	else
	{
	//	total = total+choice;
		for(int i=total;i<total+choice;i++)
		{
			cout<<"\nEnter data fo student:"<<i+1<<endl;//<<endl;
			cout<<"Enter name: ";
			cin>>arr1[i];
			cout<<"Enter Roll No: ";
			cin>>arr2[i];
			cout<<"Enter class: ";
			cin>>arr3[i];
			cout<<"Enter course: ";
			cin>>arr4[i];
			cout<<"Enter contect: ";
			cin>>arr5[i];
		}
		total = choice + total;
	}
}
void show()
{	
	if(total == 0)
	{
		cout<<"data not fonud"<<endl;
	}
	else
	{
		for(int i=0;i<total;i++)
		{
			cout<<"Data of student: "<<i+1<<endl<<endl;
			cout<<"Name:"<<arr1[i]<<endl;
			cout<<"Roll No:"<<arr2[i]<<endl;
			cout<<"Class:"<<arr3[i]<<endl;
			cout<<"Course:"<<arr4[i]<<endl;
			cout<<"Contect:"<<arr5[i]<<endl<<endl;
		
		}
	}
}
void search()
{
	string rollno;
	cout<<"enter Roll no:";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"Enter name: ";
			cin>>arr1[i];
			cout<<"Enter Roll No:";
			cin>>arr2[i];
			cout<<"Enter class:";
			cin>>arr3[i];
			cout<<"Enter course: ";
			cin>>arr4[i];
			cout<<"Enter contect: ";
			cin>>arr5[i];
		}
	}
}
void update()
{
	string rollno;
	cout<<"enter Roll no:";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"previous data....";
			cout<<"Enter name: ";
			cin>>arr1[i];
			cout<<"Enter Roll No:";
			cin>>arr2[i];
			cout<<"Enter class:";
			cin>>arr3[i];
			cout<<"Enter course: ";
			cin>>arr4[i];
			cout<<"Enter contect: ";
			cin>>arr5[i];
			cout<<"\nEnter new data of student......";
			cout<<"\nEnter name:";
			cin>>arr1[i];
			cout<<"\nEnter Roll No:";
			cin>>arr2[i];
			cout<<"\nEnter class:";
			cin>>arr3[i];
			cout<<"\nEnter course";
			cin>>arr4[i];
			cout<<"\nEnter contact:";
			cin>>arr5[i];
		}
	}
}
void deleteRecord()
{
	int d;
	cout<<"Press 0 to delete full record:";
	cout<<"press 9 to delete specific record:";
	cin>>d;
	if(d ==0)
	{
		total = 0;
		cout<<"All record are deleted.";
	}
	else if(d==9)
	{
		string rollno;
		cout<<"Enter Roll no to delete record:";
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				for(int j=i;j<total;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
				}
				total--;
				cout<<"your reqest done!";
			}
		}
	}
	else
	{
		cout<<"invalid input";
	}
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
