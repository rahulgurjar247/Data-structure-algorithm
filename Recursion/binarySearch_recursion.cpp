#include<iostream>
using namespace std;

int print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<"\n";
}

void binarysearch(int *arr,int first,int last,int search){

    print(arr,10);
    int mid = (first+last)/2;
    if(first >last){
        cout<<"not found bro"<<endl;
        return;
    }

    if(arr[mid] == search){
        cout<<"element found ho gaya bro at index:"<<mid+1<<endl;
        return;
    }

    if(search > arr[mid]){
        binarysearch(arr,mid+1,last,search);
    }
    else{
        binarysearch(arr,first,mid-1,search);
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int first = 0;
    int last =9;
    int search = 8;
    binarysearch(arr,first,last,search);
}