#include<iostream>
using namespace std;
int findBit(int i, int j ){
    int count=0;
     while(i!=0){
        if(i&1==1){
            count+=1;
        }
        i= i>>1;
    }
    while(j!=0){
        if(j&1==1){
            count+=1;
        }
        j= j>>1;
    }
     return count;
}
int main(){
    int a,b;
    cout << "enter a&b:";
    cin>> a >>b;
    
    int count = findBit(a,b);
    cout<<"output is:"<<count;

}
