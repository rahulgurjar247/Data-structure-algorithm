#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
        Node(int val){
            this->data = val;
            this->next = NULL;
           }
};

void insert(Node * &head,Node * newnode){
    if(head==NULL){
        head= newnode;
        return;
    }

    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newnode;
}

void print(Node * &head){
    Node *temp = head;
    while (temp!= NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    printf("\n");
}

void deleteByValue(Node * &head,int val){
    if(head->data == val){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    {

        Node *curr = head;
        Node* prew = NULL;        
        while (curr->data != val && curr != NULL){
            prew = curr;
            curr = curr->next;            
        }

        if(curr == NULL){
            cout << "empty list";
        }

        prew->next = curr->next;
        delete curr;
        }
}   

void ReverseLL(Node * &head){
    Node* curr = head;
    Node* prew = NULL;
    Node *forward;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prew;
        prew = curr;
        curr = forward;
    }
    head = prew;
}
int main() {
    Node * head = NULL;
    Node * first = new Node(5);
    Node * second = new Node(10);
    Node * third = new Node(15);
    Node * four = new Node(20);
    Node * five = new Node(25);

    insert(head,first);
    insert(head,second);
    insert(head,third);
    insert(head,four);
    insert(head,five);

    print(head);

    ReverseLL(head);

    print(head);
    return 0;
}