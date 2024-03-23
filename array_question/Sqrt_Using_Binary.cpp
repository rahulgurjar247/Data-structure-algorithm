#include<iostream>
using namespace std;
int findroot(int num){
    int f = 0;
    int last  = num;
    int mid   = f+(last-f)/2;
    int ans;
    while(f<=last){

        int check = mid*mid;
        if(check == num){
            return mid;
        }
        if(check>num){
            last= mid-1;
        }else{
            ans = mid;
            f = mid+1;
        }

        mid   = f+(last-f)/2;

    }
    return ans;
}

int main(){
    int num =100;

    int root = findroot(num);
    cout<<"root is:"<<root;
}