#include<iostream>
using namespace std;
int selctionSort(int arr[]){
    for(int i=0;i<10;i++){
        int index=i; 
        // int min = arr[i+1];
            for(int j=i+1;j<10;j++){
                if(arr[j] < arr[index]){
                    // min = arr[j];
                    index = j;
                }
            }
            if(arr[i]>arr[index]){
                int temp = arr[i];
                arr[i]= arr[index];
                arr[index] = temp;
            }

    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"sorting done"<<endl;
}

int main(){
    int arr[10] = {3,16,29,1,777,33,2,8,9,0};
    selctionSort(arr);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}