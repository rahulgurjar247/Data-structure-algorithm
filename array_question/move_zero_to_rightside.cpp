#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5] = {0,1,0,3,12};
    int first =0;
    int last = 4;

    int i=0;

    for(int j=0;j<5;j++){
        if(arr[j]!=0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
    }

    // while(first<last){
    //     if(arr[last]==0){
    //         last--;
    //     }
    //     if(arr[first]==0){
    //         int temp = arr[first];
    //         arr[first] = arr[last];
    //         arr[last] =temp;
    //         first++;
    //     }else{
    //         first++;
    //     }
    // }

    // for(int i=0;i<last;i++){
    //     int min=i;
    //     for(int j=i+1;j<last;j++){
    //         if(arr[j] < arr[min]){
    //             min=j;
    //         }
    //     }
    //     if(arr[i]>arr[min]){
    //         int temp = arr[i];
    //         arr[i] =arr[min];
    //         arr[min] = temp;
    //     }


    // }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}