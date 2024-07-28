#include <iostream>
using namespace std;
#include<algorithm>

int partition(int arr[],int first , int last){
    int pivot = arr[first];
    int cnt = 0 ;
    for(int i=first+1 ; i<=last ;i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }


    int pivotIndex = first + cnt ;
    swap(arr[pivotIndex],arr[first]);

    int i = first , j = last ;

    while(i<pivotIndex  && j > pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i < pivotIndex && j >pivotIndex){
            swap(arr[i++],arr[j--]);  
        }
    }
    return pivotIndex;    
}

void quickSort(int arr[],int first, int last){
    if(first>=last)
        return;
        
    int p = partition(arr,first,last);
    cout<<p<<endl ;
    
    quickSort(arr , first, p-1);
    quickSort(arr , p+1, last);


}
int main() {
    int arr[12] = {4,100,200,500,100,30,8,3,5,1,9,6};
    int n=12;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}