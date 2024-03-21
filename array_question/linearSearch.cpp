#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,34,43,323,34,56,54,34,32,55};

    int value;
    cout<< "enter value you want to search:";
    cin>> value;

    for(int i=0;i<10;i++){
        if(arr[i]==value){
            cout<<"found on index :"<<i+1<<" ="<<arr[i];
        }
    }
}
