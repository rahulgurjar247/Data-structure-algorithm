#include<iostream>
using namespace std;

int findpivot(int arr[],int size){
    int first = 0;
    int last =size-1;
    int mid  = first+(last-first)/2;

    while(first<last){
        if(arr[mid] >= arr[0]){
            first = mid+1;
        }
        else {
            last = mid;
        }


        mid = (first+last)/2;
    }
    return first;
}

int binarysearch(int arr[],int first,int last,int key){
    int mid = (first +last)/2;
    while(first<=last){
        if(key==arr[mid]){
            return mid;
        }
        if(key> arr[mid]){
            first = mid+1;
        }
        else{
            last =mid-1;
        }
        mid = (first+last)/2;        
    }


}

int main(){
    int arr[10] = {7,8,9,10,1,2,3,4,5,6};
    int key =3;
    int pivot = findpivot(arr,10);
    int search;

    if(key > pivot && key< arr[9]){
        search = binarysearch(arr,pivot,9,key) ;  
    }else{
        search = binarysearch(arr,0,pivot,key);
    }

    cout<<"key in index at:"<<search;
}