// binary search how it work

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int first=0;
    int end=size-1;
    int mid = (first+end)/2 ;

    while(first<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            first= mid+1;
        }else{
            end= mid-1;
        }
        mid= (first+end)/2;
    }
    return -1;

}

int main(){
    int arr1[10] = {1,3,4,5,7,9,12,13,14,15};
    int arr2[10] = {1,7,12,13,14,15,23,26,43,43};

    int index= binarySearch(arr1,10,3) ;    
    int index1= binarySearch(arr2,10,26) ;


    cout<< " 3 in array 1 at index is:" << index <<endl;
    cout<< "26 in array 2 at index is:" << index1 ;


}