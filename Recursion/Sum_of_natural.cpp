#include<iostream>
using namespace std;

class pre{

    public:
    int natural(int n){
        if(n==1){
            return 1;
        }

        return n + natural(n-1); 

    }
};

int main(){
    pre check;
   int res = check.natural(10);
   cout<< res ;
}

