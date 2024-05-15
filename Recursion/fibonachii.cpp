// 0 1 1 2 3 5 8 13
#include<iostream>
using namespace std;

class commando{

    public:

    int fibo(int n){
        if(n==0){
            return 0;            
        }
        if(n==1){
            return 1;            
        }
        
        return fibo(n-1) +fibo(n-2);
    }
};

int main(){
    commando obj;
    int output = obj.fibo(7);    
    cout<<"output:"<<result;

    return 0;
}