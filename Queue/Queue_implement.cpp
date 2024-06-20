#include<iostream>
using namespace std;

class queue{
    private:
    int size,front,rear,capacity;
    int *arr;

    public:
    queue(int val){
        arr = new int[val];
        capacity = val;
        front = 0;
        rear = -1;
        size = 0;
    }
    ~queue(){
        delete[] arr;
    }
    void push(int val){
        if(isfull()){
            cout << "bro queue is full ";
        }else{
            rear = (rear + 1) % capacity;
            arr[rear] = val;
            size++;
        }
    }
    void pop(){
        if (isempty()){
            cout << "\nbro empty queue can't delete ";
        }else{
            cout << "\npop element:" << arr[front];
            front = (front + 1) % capacity;
            size--;
        }
        
    }

    bool isfull(){
        return size == capacity;
    }

    bool isempty(){
        return (size == 0);
    }

    void Size(){
        cout << "\nsize:"<<this->size;
    }

    void peek(){
        if(isempty()){
            cout << "empty queue";
            return;
        }
        cout << "\npeek element is :" << arr[front];
    }
    void display(){
        cout << "\n";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i]<<" ";
        }
        
    }
    
};

int main(){
    queue delta(10);
    delta.push(1);
    delta.push(2);
    delta.push(3);
    delta.push(4);
    delta.push(5);
    delta.display();
    delta.pop();
    delta.display();

    cout << "\n"<<delta.isempty();

    delta.peek();

    cout << "\n"<<delta.isfull();
    delta.Size();

    // cout << "hello";
    return 0;
}