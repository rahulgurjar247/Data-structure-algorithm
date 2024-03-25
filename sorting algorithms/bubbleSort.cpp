#include<iostream>
using namespace std;
int bubbleSort(int arr[]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=  arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[10] = {4,3,8,1,6,6,3,2,1,10};
    int i;
    cout<<"before sort"<<endl;
    for( i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    bubbleSort(arr);

    cout<<"\n after sort"<<endl;
    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}