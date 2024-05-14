#include<iostream>
using namespace std;

class hydra{
    public:
    int power(int num,int pow){
        if(pow==0){
            return 1;
        }
        return num * power( num,pow-1);
    }
};

int main(){
    hydra checkmate;
    double res = checkmate.power(7,3);

    cout<< res;
}