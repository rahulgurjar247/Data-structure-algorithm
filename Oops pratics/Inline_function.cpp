#include<iostream>
using namespace std;

class hydra{
    public:

    inline void print(string name){
        cout<<"hello " << name << " Welcome \n";
    } 

};

inline int sum(int a,int b){
    return a+b; 
} 

int main(){    
    hydra obj;
    obj.print("vikram");
    int res = sum(5,110);

    cout<<res;
}
