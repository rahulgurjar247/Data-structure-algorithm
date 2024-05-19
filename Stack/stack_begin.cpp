// basic operation on stack

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> arr;
    arr.push("rahulgurjar");
    arr.push("raovikram");
    arr.push("sourabh");


    cout<<arr.top()<<endl;
    cout<<arr.size()<<endl;

    arr.pop();
    cout<<arr.empty()<<endl;

    return 0;  
}

