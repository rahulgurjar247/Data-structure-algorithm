// check array is sorted or not using recursion

#include<iostream>
using namespace std;


class sorted{
    public:
    bool sortedArray(int *arr,int size){
        if(size==0 || size==1){
            return true;
        }

        if(arr[0]>arr[1]){
            return false;
        }else{
            bool ans = sortedArray(arr+1,size-1);
            return ans;
        }
    }
};

int main(){
    sorted obj;
    int arr[6] ={1,3,4,5,7,8};
    bool ans = obj.sortedArray(arr,6);
    if(ans){
        cout<<"sortedarray";        
    }else{
    cout<<"not sorted ";
    }

}