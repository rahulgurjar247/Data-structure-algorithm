#include <iostream>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node * next;
        Node(int val){
            this->prev = NULL;
            this->data = val;
            this->next = NULL;
           }
};

void insertAt(Node * &head,Node *newnode){
    if(head==NULL){
        head = newnode;
        return;
    }
    Node *curr = head;
    Node *temp = NULL;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newnode;
    newnode->prev = curr;
}

void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node * head = NULL;

    Node *first = new Node(1);
    Node *second = new Node(5);
    Node *third = new Node(10);
    Node *four = new Node(15);
    Node *five = new Node(25);

    insertAt(head, first);
    insertAt(head, second);
    insertAt(head, third);
    insertAt(head, four);
    insertAt(head, five);


    print(head);

    return 0;
}