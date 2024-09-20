#include <iostream>
#include <conio.h>
using namespace std;

int front = -1, rear = -1;
const int MAX_SIZE = 100; // Maximum size of the queue

void enqueue(int Q[], int val) {
    if (rear == MAX_SIZE - 1) {
        cout << "Queue is full." << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        Q[rear] = val;
    }
}

void dequeue(int Q[]) {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Element dequeued is " << Q[front] << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
}

void display(int Q[]) {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Elements present in Queue are: ";
        for (int i = front; i <= rear; i++) {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int Q[MAX_SIZE];
    int num_elements, val;

    cout << "Enter the number of elements to enqueue: ";
    cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        enqueue(Q, val);
    }

    dequeue(Q);
    display(Q);

    return 0;
}

