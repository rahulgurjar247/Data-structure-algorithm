#include<iostream>

using namespace std;

int main(){
    int num,i=0 ;
    int sum=0;
    cout<< "Enter number you want sum of n even number" ;
    cin>>num;

    while(i<=num){
        if(i%2==0){
            sum+=i;
        }
        i++;

    }

    cout<<"sum of n even number:"<<sum<< endl;

}