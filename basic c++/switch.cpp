#include<iostream>
using namespace std;

int main(){
    int first ,second;
    char opr;

    cout<<"enter first value";
    cin>>first;

    cout<<"enter second value";
    cin>>second;

    cout<<"enter operator value";
    cin>>opr;

    switch(opr){
        case '+': cout<<"output:"<<first+second;
        break;

        case '-': cout<<"output:"<<first-second;
        break;

        case '*': cout<<"output:"<<first*second;
        break;

        case '/': cout<<"output:"<<first/second;
        break;


        default : cout<<"enter valid operator";
    }
}