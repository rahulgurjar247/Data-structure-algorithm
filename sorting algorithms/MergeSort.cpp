#include <iostream>
using namespace std;

void merge(int *arr, int first,int last){

    int mid = (first+last)/2;

    int len1 = mid-first+1;
    int len2 = last-mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];


    int k=first;
    for(int i=0;i<len1;i++){ // array data copy to arr1
        arr1[i] = arr[k++];
    }
    k= mid+1;
    for(int i=0;i<len2;i++){ // array data copy to arr2
        arr2[i] = arr[k++];
    }
    
    int index1 =0;
    int index2 =0;
    k=first;

    while(index1 < len1 && index2 < len2 ){
        if(arr1[index1] < arr2[index2]){
            arr[k++] = arr1[index1++];
        }
        else{
            arr[k++] = arr2[index2++];
        }
    }

    while(index1<len1){
            arr[k++] = arr1[index1++];         
    }

    while(index2<len2){
            arr[k++] = arr2[index2++];         
    }

    delete []arr1;
    delete []arr2;
}

void mergeSort(int *arr, int first ,int last){
    if(first >= last){
        return ;
    }
    
    int mid = (first+last)/2;
    
    mergeSort(arr, first , mid); // left part sort
    mergeSort(arr, mid+1 , last); // Right part sort

    merge(arr,first,last);

}
int main() {
    int arr[10] = {1,6,3,10,4,7,3,400,8,2};
    int n=10;
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}