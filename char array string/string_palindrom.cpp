#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void palindrom(char str[]){
    int first=0;
    int size = sizeArray(str);
    int last = size-1;

    while(first<last){
        swap(str[first++],str[last--]);
    }
    

}

int sizeArray(char str[]){
    int i=0;
    int count=0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    char str[6] = {'r','a','h','u','l'};
    int count=0;

    palindrom(str);

    char copy[10] ;
    for(int i=0;str[i] != '\0';i++){
        copy[i] = str[i];
    }

    for(int j=0;str[j]!= '\0';j++){
        if(str[j] == copy[j]){
            count++;
        }else{
            break;            
        }
    }
    int size =  sizeArray(str);

    if(count==size){
        cout<<"true";
    }
    else{
        cout<<"false";
    }



    return 0;
}