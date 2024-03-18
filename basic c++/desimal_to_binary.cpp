#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int binary = 11110;
    int sum=0,i=0;

    while(binary!=0){
        int digit = binary%10;
        if(digit==1){
            sum+= pow(2,i);
        }
        binary=binary/10;
        i++;
    } 
    // int  rev  = binary%10;
    //      sum = sum+rev*(2*i);
    //      i++;
    //      binary =binary/10;
    // }
    cout<< sum<<endl;
}