#include<iostream>
using namespace std;

int main(){
    int arr[3][4] ={1,2,3,4,5,6,7,8,9,0,12,21};
    int key=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == key){
                cout<<"find key at position arr["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
            }
        }
    }
}