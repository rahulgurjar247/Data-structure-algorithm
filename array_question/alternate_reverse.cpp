#include<iostream>
using namespace std;

int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,0};

    for(int i=0;i<10;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
}
