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

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+= arr[j][i];
        }
        cout<<"sum of column-"<<i<<":"<<sum;
        cout<<"\n";
    }

    return 0;
}