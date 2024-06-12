#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;


    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert(Node*& head, Node *newNode) {
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
}

void print(Node*& head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void deleteAt(Node*& head, int pos) {
    if (head == NULL) {
        cout << "empty linked list\n";
        return;
    }

    if (pos == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;
    Node *previous = NULL;
    int count = 1;

    while (current != NULL && count < pos) {
        previous = current;
        current = current->next;
        count++;
    }

    if (current == NULL) {
        cout << "position out of range\n";
        return;
    }

    previous->next = current->next;
    delete current;
}

void cleanup(Node*& head) {
    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node *head = NULL;
    Node *f = new Node(10);
    Node *s = new Node(20);
    Node *t = new Node(30);
    Node *fo = new Node(40);
    Node *fi = new Node(50);

    // insert
    insert(head, f);
    insert(head, s);
    insert(head, t);
    insert(head, fo);
    insert(head, fi);

    print(head);

    deleteAt(head, 2);

    print(head);

    // Cleanup
    cleanup(head);

    return 0;
}
