#include<iostream>
using namespace std;

void reverseArray(char name[],int size){
    for(int i=0;i<size/2;i++){
        char temp = name[i];
        name[i] = name[size-i-1];
        name[size-i-1] = temp;
    }
}

int findlength(char name[]){
    int i=0;
    int count=0;
    while(name[i] !=  '\0'){
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
    reverseArray(name,length);

    cout<< "after reverse" <<endl;
    cout<<name;

    return 0;

}