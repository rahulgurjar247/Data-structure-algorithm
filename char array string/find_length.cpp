#include<iostream>
#include<vector>
using namespace std;

int findlength(char name[]){
    int i=0;
    int count=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter name :";
    cin>>name;

    int length = findlength(name);

    cout<<"welcome-"<<name<<endl;
    cout<<"length of name is:"<<length;
}