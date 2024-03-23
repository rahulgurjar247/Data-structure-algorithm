// find Peak element in mountain  Array

#include<iostream>
using namespace std;

int mountain(int arr[],int size){
    int first = 0;
    int last = size-1;
    int mid= (first+last)/2 ;

    while(first<last){
        if(arr[mid]<arr[mid+1]){
            first= mid+1;
        }
        else{
            last=mid;
        }
        mid = (first+last)/2;
    }
    return arr[first];

}
int main(){
    int arr[8] = {1,2,3,4,5,6,2,1};
    int peakEliment = mountain(arr,8);
    cout << "peak element is :"<< peakEliment;
}