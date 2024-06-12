#include <iostream>
using namespace std;

class Node{
    public:
        Node *prew;
        int data;
        Node *next;
    Node(int data){
        prew = NULL;
        this->data = data;
        next = NULL;
    }    
};

void insertAtFirst(Node * &head,Node *newnode){
    if(head== NULL){
        head = newnode;
        return;
    }else{
    newnode->next = head;
    head->prew = newnode;
    head = newnode;
    }
}

void print(Node * &head){
    Node *curr =  head;
    while(curr != NULL){
        cout << curr->data <<" ";
        curr = curr->next;
    }

}

void insertByValue(Node * &head , Node *newnode , int data){
    if(head == NULL){
        cout<<"value not exit empty link list";
        return;
    }
    Node *temp = head;
    while(temp->data != data  && temp != NULL){
        temp = temp->next;
    }
    if(temp == NULL ){
        cout << "value not exit \n";
    }
    else{
        newnode->next = temp->next;
        newnode->prew = temp;
        if (temp->next != NULL) { 
            temp->next->prew = newnode;
        }
        temp->next = newnode; 
    }
}
int main() {
    Node *head = NULL;

    Node *first = new Node(12);
    Node *second = new Node(22);
    Node *third = new Node(32);
    Node *fourth = new Node(42);
    Node *five = new Node(52);
    Node *six = new Node(62);
    Node *seven = new Node(100);

    insertAtFirst(head, first);
    insertAtFirst(head, second);
    insertAtFirst(head, third);
    insertAtFirst(head, fourth);
    insertAtFirst(head, five);
    insertAtFirst(head, six);

    insertByValue(head, seven, 32);

    print(head);

    return 0;
}