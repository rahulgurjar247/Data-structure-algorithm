#include<iostream>
using namespace std;

int fact(int n){
    int res=1;
    while(n!=1){
        res = res*n;
        n--;
    }
    return res;
}


int nCr(int n, int r){
    int upper = fact(n);
    int lower = fact(r)*fact(n-r);

    return upper/lower;
    
}

int main(){
    int n,r;
    cout << "enter  n and r:";
    cin>> n >> r;

    int ans = nCr(n,r);
    cout<< "output:" << ans;

}