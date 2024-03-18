#include<iostream>
using namespace std;

int main(){
    int n,i=2,sum=0;
    cout<<"enter any number:";
    cin >> n;
    while(i<n/2){
        if(n%i==0){
            sum+=1;
            break;
        }
        i++;
    }
    if(sum>0){
        cout<<"number is  not prime";
    }
    else{
        cout<<"number is prime";
    }
}