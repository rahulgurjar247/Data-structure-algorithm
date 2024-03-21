#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<< "enter a number";
    cin>>num;

    while(num!=0){
        int temp=100;
        switch(temp){                
            case (100) : cout << "100 rupee note:"<<num/100<<endl;
                    temp = 50;
                    num = num%100;
            case (50) : cout << "50 rupee note:"<<num/50 <<endl;
                    temp = 20 ;
                    num = num%50;
            case (20) : cout << "20 rupee note:"<<num/20<< endl;
                    temp = 1;
                    num = num%20;
            case (1) : cout << "1 rupee note:"<<num/1;
                    num = num%1;
                    break;               
        }          
        break;          
        
        
    }


}