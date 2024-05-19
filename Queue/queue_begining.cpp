#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> arr;
    arr.push(5);
    arr.push(6);
    arr.push(7);
    arr.push(8);
    arr.push(6);
    cout<<arr.empty()<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    arr.pop();
    cout<< arr.front() <<endl;

}