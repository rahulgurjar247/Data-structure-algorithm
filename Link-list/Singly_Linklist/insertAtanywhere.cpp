#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insert(Node* &head,Node *newNode){
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newNode;
}

void insertAt(Node * &head,Node * num,int data) {
    Node *temp = head;
    while(temp->data != data && temp->next != NULL){
        temp = temp->next;
    }
    num->next = temp->next;
    temp->next = num;
}

int main() {
    Node *head = NULL;

    Node *first = new Node(5);
    Node *sec = new Node(6);
    Node *third = new Node(9);
    Node *four = new Node(15);
    Node *five = new Node(55);
    Node *six = new Node(33);
    Node *seven = new Node(233);

    insert(head, first);
    insert(head, sec);
    insert(head, third);
    insert(head, four);
    insert(head, five);


    insertAt(head,six,9);
    insertAt(head,seven,15);


    Node *current = head;
    while(current != NULL){
        cout << current->data<<" ";
        current = current->next;
    }

    current = head;
    Node *temp;
    while (current != NULL )
    {
        temp = current->next;
        delete current;
        current = temp;
    }
    head == NULL;

    return 0 ;
}