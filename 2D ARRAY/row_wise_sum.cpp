#include<iostream>
using namespace std;
int main(){
    int arr[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<"enter element:arr["<<i<<"]"<<"["<<j<<"]";
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"Tolal sum of ROW-"<<i<<":"<<sum;
        cout<<"\n";
    }
}