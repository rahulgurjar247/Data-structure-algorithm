#include<iostream>
using namespace std;

class person{
    public:
    whoami(){
        cout<<nickname<<endl;
        cout<<name;
    }

    private:
    string nickname = "commando";

    protected :
    string name = "rahul" ;
};

class superman:public person{
    public:
    sayname(){
        cout<<"name is:"<<name<<endl;
        cout<<"nickname is:" <<nickname <<endl;
    }

};

int main(){
    person r1;

    superman rahul;

    rahul.sayname();

    // r1.nickname;   private member not access

    r1.whoami();
    
}