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

