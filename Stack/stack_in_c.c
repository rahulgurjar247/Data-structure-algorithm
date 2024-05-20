#include<stdio.h>

int arr[10];
int top = -1;
int size =10;

void push(int X){
    if(top == size-1){
        printf("stack is full \n");
    }else{
        top++;
        arr[top] = X ;

    }
} 

void pop(){
    if(top == -1){
        printf("stack is empty \n");
    }else{
        arr[top--] = 0 ;
    }
}

int main(){
    push(5);
    push(6);
    push(2);
    push(1);
    push(25);
    push(35);

    pop();
    pop();

    for(int i=top;i>=0;i--){
        printf("%d \n",arr[i]);
    }
}