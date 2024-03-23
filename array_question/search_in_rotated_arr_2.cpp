#include<iostream>
using namespace std;
//7,8,9,1,  2   ,3,4,5,6
int findKey(int arr[],int size,int key){
    int first = 0;
    int last = size-1;
    int mid = (first+last)/2;
    while(first<last){
        if(arr[mid]== key){
            return mid;
        }
            }    
        if(arr[mid]>arr[first] && key<arr[mid]){
                last = mid;
        }
        else if(arr[mid]<arr[first] && key>arr[mid]){
                last = mid;
        }
        else if(arr[mid]<arr[last] && key > arr[mid]){
                first = mid;
        }
        else{
                first = mid;
        }
        
        mid = (first+last)/2;
}


int main(){
    int arr[9] ={7,8,9,1,2,3,4,5,6};
    int key = 1;
    int search = findKey(arr,9,key);
    cout<<"key is :"<<search;
}