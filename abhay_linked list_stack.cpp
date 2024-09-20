#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val)
	{
        data = val;
        next = NULL;
    }
};

class Stack
{
private:
    Node* top;

public:
    Stack()
	{
        top = NULL;
    }

    void push(int val)
	{
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << "Pushed ";// << val << " onto the stack." << endl;
    }

    void pop()
	{
        if (isEmpty())
		{
            cout << "Stack Underflow." << endl;
            return;
        }
        else
        {
        	Node* temp = top;
  	      	top = top->next;
    	    cout << "Popped ";//9<< temp->data << " from the stack." << endl;
        	delete temp;
		}

    }

    bool isEmpty()
	{
        return top == NULL;
    }
};

int main()
{
    Stack stack;
    int size, choice;

    cout << "Enter the size of the stack: ";
    cin >> size;
    stack.push(10);
//    while (true)
//	{
//        cout << "\n1. Push" << endl << "2. Pop" << endl << "3. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//            case 1: {
//                int val;
//                cout << "Enter value to push: ";
//                cin >> val;
//                stack.push(val);
//                break;
//            }
//            case 2:
//                stack.pop();
//                break;
//            case 3:
//                cout << "Exiting...";
//                return 0;
//            default:
//                cout << "Invalid choice!" << endl;
//        }
//    }

    return 0;
}

