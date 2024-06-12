#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    };

int main() {
    node *head = new node;
    head->data = 5;
    head->next = NULL;

    node *second = new node;
    second->data =10;
    second->next = NULL;
    head->next = second;

    node *third = new node;
    third->data =15;
    third->next = NULL;
    second->next = third;

    node *current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }

    delete third;
    delete second ;
    delete head;

    return 0;
}