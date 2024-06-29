#include <iostream>
using namespace std;

class CirculerQueue
{
private:
    int *arr;
    int size;
    int front, rear, count, val;

public:
    CirculerQueue(int val)
    {
        this->arr = new int[val];
        this->size = val;
        front = -1;
        rear = -1;
        count = 0;
    }
    ~CirculerQueue()
    {
        delete[] arr;
    }

    void insert()
    {
        if (isFull())
        {
            return;
        }
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        cout << "ENTER NUMBER YOU WANTA TO ADD:";
        cin >> val;
        arr[rear] = val;
        count++;
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "queue is empty\n";
            return;
        }
        int j = front;
        for (int i = 0; i < count; i++)
        {
            cout << arr[j] << " ";
            j = (j + 1) % size;
        }
        printf("\n");
    }
    bool isFull()
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "queue is full\n";
            return true;
        }
        else if (rear == (front - 1+size) % (size)) // negetive handle  so do + size
        {
            cout << "queue is full\n";
            return true;
        }
        return false;
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "bro queue is empty";
            return;
        }
        else if (front == rear)
        {
            cout << "delete element is :" << arr[front] << "\n";
            front = rear = -1;
            return;
        }
        cout << "delete element is :" << arr[front] << "\n";
        if (front == size - 1){
            front = 0;
        }else{
            front++;
        }
        count--;
    }
};
int main()
{
    int sizeOfQueue, option;
    printf("enter size of queue:");
    cin >> sizeOfQueue;
    CirculerQueue dell(sizeOfQueue);

    while (1)
    {
        cout << "1-EnQueue\n";
        cout << "2-deQueue\n";
        cout << "3-display\n";
        cout << "4-exit\n";

        cout << "select option:";
        cin >> option;

        switch (option)
        {
        case 1:
            dell.insert();
            break;
        case 2:
            dell.dequeue();
            break;
        case 3:
            dell.print();
            break;
        case 4:
            return 0;
        default:
            cout << "please select correct option <-- \n";
        }
    }

    return 0;
}