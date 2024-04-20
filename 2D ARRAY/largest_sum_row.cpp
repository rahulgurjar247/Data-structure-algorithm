#include<iostream>
using namespace std;

int main(){
    int arr[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"enter element:arr["<<i<<"]"<<"["<<j<<"]";
            cin>>arr[i][j];
        }
    }

    int index=0;
    int max=0;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+= arr[i][j];
        }
        if(sum>max){
            max=sum;
            index = i;
        }
    }
    cout<<"max sum in row-"<<index<<" &&max sum is:"<<max;
}