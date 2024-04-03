#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr ={0,0,1,1,1,2,2,3,3,4,4,4};
    int first=0;
    
    while(first<arr.size()-1){
        if(arr[first] == arr[first+1]){
            arr.erase(arr.begin()+first+1);
        }
        else{
            first++;
        }

    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


}
