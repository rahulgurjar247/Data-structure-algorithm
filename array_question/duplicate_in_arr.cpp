#include<iostream>
using namespace std;

int main(){
    int arr[10] = {12,23,34,45,4,23,87,12,5,4};
    int i,j;

    for( i=0;i<10;i++){
        int num= arr[i];
        for( j=i+1;j<10;j++){
                if(num==arr[j]){
                    cout<<"duplicate number is "<<arr[j]<<" at index arr["<<i<<"] and index arr["<<j+1<<"]" <<endl;
                } 
        }
    }
}