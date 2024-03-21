// program to reverse an array

#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
        int temp =arr[i];
        arr[i]=arr[size-i-1] ;
        arr[size-i-1]= temp;
    }
}

int main(){
    int arr[10];

    // taking input
    for(int i=0;i<10;i++){
        cout<<"enter array value arr["<<i<<"] : ";
        cin>>arr[i];
    }

    reverse(arr,10);

    // array after reverse
    cout<<"array after reverse"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

}