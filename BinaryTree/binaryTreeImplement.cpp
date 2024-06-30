#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node * binary(node *root){
    cout << "enter the data :" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for insert in left of "<<data<<endl;
    root->left = binary(root->left);
    cout << "Enter data for insert in right of " << data << endl;
    root->right = binary(root->right);

    return root;
}
int main() {
    node *root = NULL;
    root = binary(root);
    return 0;
}