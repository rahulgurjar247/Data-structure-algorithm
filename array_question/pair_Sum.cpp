#include<iostream>

using namespace std;

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    int search=7;

    for(int i=0;i<10;i++){
        int value=arr[i];
        for(int j=i+1;j<10;j++){
            if(search == value+arr[j]){
                cout << "pair is ["<<arr[i]<<","<<arr[j]<<"]";
            }

        }
    }
}    