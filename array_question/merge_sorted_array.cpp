#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int m, int arr2[],int n,int arr3[]){
    int i=0,j=0;
    int point=0;
    while(i<m && j<n){
        if(arr1[i]>arr2[j]){
            arr3[point] =  arr2[j];
            point++;
            j++;
        }else{
            arr3[point] = arr1[i];
            point++;
            i++;
        }
    }
    for(int k=i;k<m;k++){
        arr3[point] = arr1[k];
        point++;
    }

    
    for(int r=j;r<n;r++){
        arr3[point] = arr2[r];
        point++;
    }

}

int main(){
    int arr1[8] ={-1,1,4,6,7,9,11,20};
    int arr2[12] ={2,3,6,7,9,10,11,23,27,29,31,34};
    int arr3[20] ={0};

    merge(arr1,8,arr2,12,arr3);

    for(int i=0;i<20;i++){
        cout<<arr3[i]<<" ";
    }

}