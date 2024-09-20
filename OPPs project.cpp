
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Library
{
	public:
		int book_id;
		char book_name[1000];
		char book_author[1000];
		char student[1000];
		int book_price;
		int pages;
	
};

int main()
{
	Library lib[20];
	int input=0;
	int count=0;
	
	while(input!=3)
	{
		cout<<"Enter 1 detail like book_id,book_name,book_auther,student,book_price,pages"<<endl;
		cout<<"Enter 2 for display details"<<endl;
		cout<<"Enter 3 for quit"<<endl;
		cin>>input;
		
		switch(input)
		{
			case 1:
				start:
				cout<<"Enter book_id"<<endl;
				cin>>lib[count].book_id;
				cout<<"Enter book_name"<<endl;
				//  cin>>lib[count].book_name;
				cin.getline(lib[count].book_name,1000,'$');
				cout<<"Enter book_author"<<endl;
				// cin>>lib[count].book_author;
				cin.getline(lib[count].book_author,1000,'$');
				cout<<"Enter student name"<<endl;
				//cin>>lib[count].student;
				cin.getline(lib[count].student,1000,'$');
				cout<<"Enter book_price"<<endl;
				cin>>lib[count].book_price;
				cout<<"Enter book pages"<<endl;
				cin>>lib[count].pages;
				count++;
				break;
			case 2:
				for(int i=0;i<count;i++)
				{
					cout<<"Book_id: "<<lib[i].book_id<<endl;
					cout<<"Book_name: "<<lib[i].book_name<<endl; 
					cout<<"Book_auther: "<<lib[i].book_author<<endl;
					cout<<"student "<<lib[i].student<<endl;
					cout<<"Bool_price: "<<lib[i].book_price<<endl;
					cout<<"Book pages: "<<lib[i].pages<<endl;
				}
				break;
			case 3:
				exit (0);
				break;
			default:
				cout<<" your are entered worng value,please try again"<<endl;;
				goto start;
					
				
		}
	}
}
