#include<iostream>
using namespace std;

int top = -1;
void push(int stack[], int size); // Function prototype

int main()
{
    int stack[100];
    int size;
    cout << "Enter the size of stack: ";
    cin >> size;

    push(stack, size); // Call the push function

    return 0;
}

void push(int stack[], int size)
{
    int val;
    if (top == size - 1)
    {
        cout << "\nStack is full: Overflow" << endl;
    }
    else
    {
        top++;
        cout << "\nEnter value to push: ";
        cin >> val;
        stack[top] = val;
    }
}

