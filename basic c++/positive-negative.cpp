#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "enterany number to check positive negetive:";
    cin>>num;
    if(num>0){
        cout<< "numner is positive";
    }
    else if (num<0){
        cout<< "number is negetive";        
    }
    else{
        cout << " number is 0";
    }    
}