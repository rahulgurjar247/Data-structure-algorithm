// find pivot eliment in array
 
#include<iostream>
using namespace std;

int findpivot(int arr[],int size){
    int first= 0;
    int last = size-1;
    int mid = first+ (last-first)/2;

    while(first<last){
        if(arr[mid]>=arr[0]){
            first = mid+1;
        }else{
            last = mid;
        }
     mid = first+ (last-first)/2;

    }

    return first;

}

int main(){
    int arr[10] = {7,8,9,0,1,2,3,4,5,6};
    int pivot = findpivot(arr,10);
    cout<< "pivot is"<< pivot;
}

