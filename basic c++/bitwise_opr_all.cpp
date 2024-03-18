#include<iostream>
using namespace std;

int main(){
    // int a=3, b=7;

    // cout<< (a&b)<<endl;
    // cout<< (a|b)<<endl;
    // cout<< (~b)<<endl;
    // cout<< (a^b)<<endl;

    // cout <<(4<<2)<<endl; //4*2*2 = 16
    // cout <<(20>>2)<<endl; //20/2*2 = 5

    int a=1,b=2;
    if(a-- >0 && ++b>2){
        cout<< "inside if"<<a;
    }else{
        cout<<"inside else";
    }
    int number=3;
    cout << (25*(++number));

}
