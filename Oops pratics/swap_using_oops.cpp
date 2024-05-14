#include<iostream>
using namespace std;

class hydra{
    public:
    swapCallByValue(int a,int b){
        int temp = a;
        a = b;
        b=temp;
        cout<<"a=" << a <<", b=" <<b<< endl;
    }
    swapCallByRef(int *a ,int *b){
        int temp = *a;
        *a = *b;
        *b =temp;
        cout<<"a="<< *a<<", b="<< *b <<endl;
    }

    print(int a ,int b){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};

int main(){
    int a=10,b=20;
    hydra obj;
    obj.swapCallByValue(a,b);   //output->20,10 
    obj.print(a,b);             //output->10,20
    obj.swapCallByRef(&a,&b);   //output->20,10
    obj.print(a,b);             //output->20,10
}