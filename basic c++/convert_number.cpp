#include <iostream>
#include<math.h>

using namespace std;

int main(){

binary to number;

    int binary= 100100;
    int sum = 0;
    int i=0;
    while(binary!=0){
        int rev = binary%10;
        if(rev==1){
            sum = sum+pow(2,i) ;
        }
        binary= binary/10;
        i++;
    }
    cout<< sum ;
   

}