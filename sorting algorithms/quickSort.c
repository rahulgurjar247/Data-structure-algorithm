#include<stdio.h>
#include<conio.h>

int partition(int arr[],int first,int last){
    int pivot = arr[first] ;
    int cnt = 0;
    for(int i = first+1 ; i <= last;i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    int pivotIndex = first + cnt;

    int temp = arr[pivotIndex];
    arr[pivotIndex]  = arr[first] ;
    arr[first] = temp;

    int i = first , j = last ;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            int temp1 = arr[i];
            arr[i++] = arr[j];
            arr[j--] = temp1;
        }
    }
    for(int i=first;i<=last;i++){
        printf("%d  ",arr[i]);
    }
    return pivotIndex; 
}

void quickSort(int arr[],int first,int last){
    if(first >= last)
        return;

    int t = partition(arr,first,last);
    printf("%d\n",t);

    quickSort(arr,first,t-1);
    quickSort(arr,t+1,last);
}

void main(){
	// int arr[10] = {9,6,4,2,1,6,4,2,5,1};
    // int arr[12] = {4,100,200,500,100,30,8,3,5,1,9,6};
    int arr[5] = {7,15,3,12,1};
	int n= 5;
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
	
}
