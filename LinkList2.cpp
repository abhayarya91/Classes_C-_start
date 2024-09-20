#include<isotream>
using namespace std;
sruct node
{
	int data;
	data*next;
};
main()
{
	node *head =NULL;
	if (head == NULL)
	{
		node *ptr = new node;
		int val;
		cout<<"Enter data for first node:";
		cin>>val;
		ptr -> data =val;
		ptr -> next =NULL;
		head = ptr;
	}
	else
	{
		node *ptr = new node;
		cout<<"Enter data for next node:";
		cin>>val;
		ptr -> data = val;
		ptr -> next = NULL;
		
		node *curr = head;
		while (curr != NULL)
		{
			curr = curr -> next;
			
		}
		curr -> next = ptr;
 	}
}
