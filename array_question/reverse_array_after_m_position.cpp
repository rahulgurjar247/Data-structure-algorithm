#include<iostream>
#include<vector>
using namespace std;

void reverse(int arr[],int num ){
    int first=num+1;
    int last =6-1;
    while(first<=last){
        cout<<"arr first"<<arr[first]<<endl;
        cout<<"arr last"<<arr[last]<<endl;
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }

    // after change
    cout<<"after change"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }



}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int m=1;
    // for(int i=0;i<6;i++){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    reverse(arr,m);

}