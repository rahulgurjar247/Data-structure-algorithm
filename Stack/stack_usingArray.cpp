#include <iostream>
using namespace std;

class stack{
    private:
        int *arr;
        int data;
        int top;
        int capacity;

    public:
    stack(int val){
        arr = new int[val];
        capacity = val-1;
        top = -1;
    }
    ~stack(){
        delete[] arr;
    }
    void push(int val){
        if(isFull()){
            cout << "stack is full bro\n";
        }else{
            arr[++top] = val;
        }
    }
    void pop(){
        if(isEmpty()){
            cout << "stack is empty bro";
        }else{
            arr[top--] = 0;
        }
    }

    bool isEmpty() {
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if(top>=capacity){
            return true;
        }else{
            return false;
        }
    }

    void print(){
        int temp= top;
        while(temp>=0){
            cout << arr[temp--]<<" ";
        }
    }

    void peek(){
        cout << "peek is :" << arr[top];
    }   
};

int main(){
    stack stk(5);

    stk.push(12);
    stk.push(23);
    stk.push(32);
    stk.push(42);
    stk.push(622);
    stk.pop();
    stk.print();
}