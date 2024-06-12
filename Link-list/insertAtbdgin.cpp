#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
};

void insert(node *num,node * &head){
    num->next = head;
    head = num;
}
int main()
{
    node *head = NULL;
    node *first = new node(5);
    node *second = new node(10);
    node *third = new node(15);
    node *four = new node(25);


    insert(first, head);
    insert(second, head);
    insert(third, head);
    insert(four, head);


    node *current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }

    node* temp;
    while (current != NULL) {
        temp = current->next;
        delete current;
        current = temp;
    }
    head = NULL; 


}