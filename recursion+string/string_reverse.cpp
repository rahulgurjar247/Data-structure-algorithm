#include<iostream>
#include<string>
using namespace std;

string reverseString(string &str,int first,int last){

    if(first<last){
        char temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        reverseString(str, ++first,--last);  
    } 
    return str;
}

int main(){
    string str ;

    cout<<"enter string :" ;
    cin>>str;

    int size = str.length();
    int first = 0;
    int last = size-1;


    cout<< str << endl;

    string newstr = reverseString(str,first,last);

    cout<< newstr <<endl;



}