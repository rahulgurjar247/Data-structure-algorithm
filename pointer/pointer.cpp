// this code is only for learning puuropose  
// Learn pointer by dry and run
#include<iostream>

using namespace std;

int main(){
    int num = 78;
    int *ptr = &num;
    // *ptr = *ptr+15;
    int **ptr2 = &ptr;
    **ptr2 += 13;

    

    cout<<"address of num:"<< &num<<endl;
    cout<<"value of num:"<< num<<endl<<endl;

    cout<<"address store in ptr:"<< ptr<<endl;
    cout<<"value target by ptr:"<< *ptr<<endl;
    cout<<"address of ptr:"<< &ptr<<endl<<endl;


    cout<<"address store in ptr2:"<< ptr2<<endl;
    cout<<"value in ptr2:"<< *ptr2<<endl;
    cout<<"address of ptr2:"<< &ptr2<<endl<<endl;
    cout<<"value target by ptr2:"<< **ptr2<<endl;


    
}