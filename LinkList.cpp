#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
//void main()
main()
{
	node *head = NULL;
	cout<<"\nHow many nodes you want to create:";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(head == NULL)
		{
			head = new node;
			cout<<"\nEnter data for node:";
			int data;
			cin>>data;
			head -> data = data;
			head -> next = NULL;
		}
		else
		{
			node *ptr = head;
			node *ptr1;
			ptr1 = new node;
			while (ptr -> next != NULL)
			{
				ptr = ptr -> next;
			}
			ptr -> next = ptr1;
			cout<<"\nEnter data for next node:";
			int data;
			cin >>data;
			ptr1 ->data = data;
			ptr1 ->next =NULL;
		}
	}
	node *ptr;
	for(ptr = head; ptr!= NULL;ptr=ptr->next)
	{
		cout<<ptr->data<<" ";
	}
	return 0;
}


//ptr -> data =data;
//ptr -> next = hesd;
//head = ptr;
