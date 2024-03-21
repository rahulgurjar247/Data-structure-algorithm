#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int max(int arr[]){
    int max=0;
    for(int i=0;i<10;i++){ 
        if(arr[i]>max){
            max =arr[i];
        }             
    }  
    cout<<"max number is:"<<max;
}

int min(int arr[]){
    int min=arr[0];
    for(int i=0;i<10;i++){ 
        if(arr[i]<min){
            min =arr[i];
        }             
    }  
    cout<<"min number is:"<<min;
}

int main(){
    int arr[10]; 
    for(int i=0;i<10;i++){
        cout<<"array value arr["<<i<<"]:";
        cin>>arr[i];
    } 
    max(arr);
    min(arr);
}