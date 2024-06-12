#include <iostream>
using namespace std;
class node
{
public:
    node *prew;
    int data;
    node *next;
    node(int value)
    {
        prew = NULL;
        data = value;
        next = NULL;
    }
};

void insertat(node* &head, node *newnode)
{
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newnode;
    newnode->prew = curr;
}

void print(node *&head){
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

void deleteAt(node* &head,int val){
    if(head== NULL){
        cout << "empty link list can't delete";
        return;
    }

    node *current = head;

    if(current->data == val){
        head = current->next;
        delete current;
        return;
    }
    while(current!=NULL && current->data != val){
        current = current->next;
    }

    if(current == NULL ){
        cout << "value not found";
    }else{
        current->prew->next = current->next;
        current->next->prew = current->prew;

        delete current;
    } 
}
int main()
{
    node *head = NULL;
    node *first = new node(15);
    node *three = new node(20);
    node *four = new node(25);
    node *five = new node(30);
    node *six = new node(35);

    insertat(head, first);
    insertat(head, three);
    insertat(head, four);
    insertat(head, five);
    insertat(head, six);

    print(head);

    deleteAt(head, 20);
    print(head);
    deleteAt(head, 15);
    print(head);
    return 0;
}