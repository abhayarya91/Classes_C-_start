#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    Node* getHead() {
        return head;
    }

    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void deleteAtStart() {
        if (head == NULL) {
            cout << "List is empty. Deletion not possible.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteNode(int value) {
        Node* temp = head;
        Node* prev = NULL;
        if (temp != NULL && temp->data == value) {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp != NULL && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Node with value " << value << " not found in the list.\n";
            return;
        }
        prev->next = temp->next;
        delete temp;
    }

    void traverse() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtStart(3);
    list.insertAtStart(2);
    list.insertAtStart(1);
    list.insertAtStart(4);
    list.insertAtStart(5);

    cout << "Initial ";
    list.traverse();

    list.deleteAtStart();
    cout << "After deletion at start: ";
    list.traverse();

    int valueToDelete;
    cout << "Enter the value to delete: ";
    cin >> valueToDelete;
    list.deleteNode(valueToDelete);
    cout << "After deletion of node with value " << valueToDelete << ": ";
    list.traverse();

    return 0;
}

