//#include <iostream>
//using namespace std;
//
//int top = -1;
//
//void push(int stack[], int size);
//void pop(int stack[]);
//void peek(int stack[]);
//void display(int stack[]);
//
//int main()
//{
//    int stack[100];
//    int size;
//    int choice;
//
//    cout << "\nEnter size of stack: ";
//    cin >> size;
//
//while (1) {
//        cout << "\n1. Push" << endl << "2. Pop" << endl << "3. Peek" << endl << "4. Display" << endl << "5. Exit";
//        cout << "\nEnter your choice: ";
//        cin >> choice;
//        switch (choice)
//        {
//            case 1:
//                push(stack, size);
//                break;
//            case 2:
//                pop(stack);
//                break;
//            case 3:
//                peek(stack);
//                break;
//            case 4:
//                display(stack);
//                break;
//            case 5:
//                cout << "\nExiting...";
//                break;
//            default:
//                cout << "\nInvalid choice";
//                break;
//        }
//        cout << "\nDo you want to continue (1 for Yes / 0 for No)? ";
//        cin >> choice;
//    }
////while (choice == 1);
//return 0;
//}
//
//void push(int stack[], int size)
//{
//    int val;
//    if (top == size - 1)
//    {
//        cout << "\nStack is full: Overflow";
//    }
//    else
//    {
//        top++;
//        cout << "\nEnter value to push: ";
//        cin >> val;
//        stack[top] = val;
//    }
//}
//
//void pop(int stack[])
//{
//    if (top == -1)
//    {
//        cout << "\nStack is empty: Underflow";
//    }
//    else
//    {
//        int val = stack[top];
//        cout << "\nPopped value is " << val;
//        top--;
//    }
//}
//
//void peek(int stack[])
//{
//    if (top == -1)
//    {
//        cout << "\nStack is empty";
//    }
//    else
//    {
//        cout << "\nPeeked value is " << stack[top];
//    }
//}
//
//void display(int stack[])
//{
//    if (top == -1)
//    {
//        cout << "\nStack is empty";
//    }
//    else
//    {
//        cout << "\nStack elements are:";
//        for (int i = top; i >= 0; i--)
//        {
//            cout << "\n" << stack[i];
//        }
//    }
//}















#include <iostream>
using namespace std;

int top = -1;

void push(int stack[], int size);
void pop(int stack[]);
void peek(int stack[]);
void display(int stack[]);

int main()
{
    int stack[100];
    int size;
    int choice = 1;

    cout << "\nEnter size of stack: ";
    cin >> size;

    while (choice == 1)
	{
        cout << "\n1. Push" << endl << "2. Pop" << endl << "3. Peek" << endl << "4. Display" << endl << "5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                push(stack, size);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                display(stack);
                break;
            default:
                cout << "\nInvalid choice";
                break;
        }
        if (choice> 4)
		{
            cout << "\nDo you want to continue (1 for Yes / 0 for No)? ";
            cin >> choice;
        }
    }

    return 0;
}

void push(int stack[], int size)
{
    int val;
    if (top == size - 1)
    {
        cout << "\nStack is full: Overflow";
    }
    else
    {
        top++;
        cout << "\nEnter value to push: ";
        cin >> val;
        stack[top] = val;
    }
}

void pop(int stack[])
{
    if (top == -1)
    {
        cout << "\nStack is empty: Underflow";
    }
    else
    {
        int val = stack[top];
        cout << "\nPopped value is " << val;
        top--;
    }
}

void peek(int stack[])
{
    if (top == -1)
    {
        cout << "\nStack is empty";
    }
    else
    {
        cout << "\nPeeked value is " << stack[top];
    }
}

void display(int stack[])
{
    if (top == -1)
    {
        cout << "\nStack is empty";
    }
    else
    {
        cout << "\nStack elements are:";
        for (int i = top; i >= 0; i--)
        {
            cout << "\n" << stack[i];
        }
    }
}

