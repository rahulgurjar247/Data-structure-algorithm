#include<iostream>
using namespace std;

int main(){
    int *arr = new int[5] ;
    for(int i=0;i<5;i++){
        cout<<"enter elem:";
        cin>>arr[i];
    }

    for(int j=0;j<5;j++){
        cout<<arr[j]<<" ";        
    }
    cout<<"\n";

    delete[] arr;

    cout<<sizeof(arr);
}