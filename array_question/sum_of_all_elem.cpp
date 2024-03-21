#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<" enter array size:"<<endl;
    cin>> size;

    int arr[size];
    int sum=0;

    for(int i=0;i<size;i++){
        cout<<" enter array value: arr["<<i<<"]"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum+= arr[i];
    }

    cout<<"\n sum:"<<sum<<endl;

}