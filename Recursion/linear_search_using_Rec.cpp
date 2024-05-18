#include<iostream>
using namespace std;

int linear(int *arr,int size,int search){
    
    if(size==0){
        cout<<"not found bro";
        return 0;
    }
    if(arr[0]==search){
        cout<<"element find bro";
        return 0;
    }
    else{
        linear(arr+1,size-1,search);        
    }

}

int main(){
    int arr[10] = {1,2,3,7,8,4,5,6,9,10};
    int search = 5 ;
    linear(arr,10,search);

}