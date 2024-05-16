// this is basic files where just play with oops concept 

#include<iostream>
using namespace std;

// create class command
class command{
    int num;  // data member by default private
    public:
        string name;

        // default Constructor funciton 
        command(){
            cout<<" \n default constructor calling";    
            name = "rahul";        
        }

        command(string name){
            cout<<" \nparametreized constructor calling";
            this -> name = name;
        }
        //seter function
        void setvalue(int num){  
            this->num = num;   //this pointer
        }

        //geter function
        void getvalue(){   
            cout<<num;
        }    
        // define outside class
        void hellomsg();

};


// function define outsude using scope resolution operater
void command::hellomsg(){
    cout<<"\nhello rahul gurjar";
}

int main(){
    command obj;
    cout<< "\n" <<obj.name<< "\n";
    obj.setvalue(10);  //setValue
    obj.getvalue();   //getValue
    obj.hellomsg();

    command obj2("rahulgurjar");

    cout<< "\n" <<obj2.name;
    
    return 0;
}