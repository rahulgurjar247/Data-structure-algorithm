#include<iostream>

using namespace std;

int main(){
    char val ;
    cout<< "enter anything:";
    cin>>val;
    if(val<= 'Z' && val>='A'){
        cout<<" value is upper case ";
    } 
    else if(val<='z' && val>='a'){
        cout<< "value is lowercase";
    }
    else{
        cout<< " value is number";
    }
}