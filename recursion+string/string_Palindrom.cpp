#include<iostream>
using namespace std;

bool isPalindrom(string str,int first,int last){
    if(first>last){
        return true;        
    }

    if(str[first] != str[last]){
        return false;
    }else{
        isPalindrom(str,++first,--last);
    }
}

int main(){
    string str = "okokoko" ; 
    bool check = isPalindrom(str,0,str.length()-1);
    
    if(check){
    cout<<"palindrom string"<<endl;    
    }else{
    cout<<"not palindrom "<<endl;
    }
    
    return 0;
}