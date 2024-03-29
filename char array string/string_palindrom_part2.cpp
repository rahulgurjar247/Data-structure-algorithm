#include<iostream>
using namespace std;
bool palindrom( char str[],int size){
    int first=0;int last = size-1;
    // int count=0;
    while(first<last){
        if(str[first] !=str[last]){
            return false;
        }
        else{
            first++;
            last--;
        }
    }

    return true;
    // if(count==(size/2)){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}

int findlength(char str[]){
    int i=0;
    int count=0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    char str[20];
    cout<<"enter your name:";
    cin>> str;

    int length = findlength(str);
    bool result = palindrom(str,length);

    cout<<result;

    return 0;
}