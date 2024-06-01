#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insert(Node* &head,Node *newNode){
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node * curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
}

void insertAt(Node * &head,Node * num,int data) {
    Node *temp = head;
    while(temp->data != data && temp->next != nullptr){
        temp = temp->next;
    }
    num->next = temp->next;
    temp->next = num;
}

int main() {
    Node *head = nullptr;

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
    while(current != nullptr){
        cout << current->data<<" ";
        current = current->next;
    }

    current = head;
    Node *temp;
    while (current != nullptr )
    {
        temp = current->next;
        delete current;
        current = temp;
    }
    head == nullptr;

    return 0 ;
}