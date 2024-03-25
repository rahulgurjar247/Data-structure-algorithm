#include<iostream>
using namespace std;
int insertionSORT(int arr[]){
    for(int i=1;i<10;i++){
        int temp = arr[i];
        int j = i-1;               
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] =arr[j];                
            }else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }

}

int main(){
    int arr[10]  = {3,6,9,1,6,3,2,8,7,0};

    insertionSORT(arr);

    for(int i=0;i<10;i++){
        cout<<arr[i]<< " ";
    }
}