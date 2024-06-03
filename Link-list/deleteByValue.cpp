#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
        Node(int val){
            this->data = val;
            this->next = nullptr;
           }
};

void insert(Node * &head,Node * newnode){
    if(head==nullptr){
        head= newnode;
        return;
    }

    Node *curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = newnode;
}

void print(Node * &head){
    Node *temp = head;
    while (temp!= nullptr){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    printf("\n");
}

void deleteByValue(Node * &head,int val){
    if(head->data == val){
        Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return;
    }
    {

        Node *curr = head;
        Node* prew = nullptr;        
        while (curr->data != val && curr != nullptr){
            prew = curr;
            curr = curr->next;            
        }

        if(curr == nullptr){
            cout << "empty list";
        }

        prew->next = curr->next;
        delete curr;
        }
}   

int main() {
    Node * head = nullptr;
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

    deleteByValue(head, 10);
    print(head);
    deleteByValue(head, 20);
    print(head);



    return 0;
}