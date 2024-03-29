#include<iostream>
using namespace std;

int update(int a){
    
    a-=4;
    return a;
}

int main(){
    int a= 12;
    a = update(a);
    cout<<a<< endl;
}
