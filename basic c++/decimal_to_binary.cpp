#include<iostream>

using namespace std;

int main(){
    int num =6;
    int arr[32] ;
    int i=0;

    while(num>0){
        arr[i] = num % 2;
        num/=2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        cout<< arr[j];
    }

    return 0;

}