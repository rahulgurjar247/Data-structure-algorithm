#include<iostream>
using namespace std;

int main(){
    int first=0;
    int second=1;
    // int num;
    // cout << "enter how many number you want";
    // cin>>num;
    // cout << first <<" " ;
    // cout << second<<" ";
    
    // for(int i=1;i<=num;i++){
    //     int temp = first;
    //     first = second;
    //     second = first+temp;
    //     cout<<second<<" ";

    // }

    for(int i=0;i<=5;i++){
      for(int j=i;j<=5;j++){
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j <<endl;
      }
    }

}