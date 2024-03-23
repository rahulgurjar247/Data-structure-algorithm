#include<iostream>

using namespace std;

int main() {
    int arr[9] ={1,2,3,4,5,6,7,8,9};
    int search=15;

    for(int i=0;i<9;i++){
        int value1=arr[i];
        for(int j=i+1;j<9;j++){
            int value2= arr[j];
            for(int k=j+1;k<9;k++){
                  if(search == value1+value2+arr[k]){
                    cout<<"pair is:["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<endl;
                  }
            }

        }
    }
}