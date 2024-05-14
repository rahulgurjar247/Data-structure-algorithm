#include<iostream>
using namespace std;

class hydra{

    public:
        int fact(int n){
            if(n==1){
                return 1;
            }

            return n * fact(n-1); 

    }
};

int main(){
   hydra check;
   double res = check.fact(20);
   cout<< res ;
}

