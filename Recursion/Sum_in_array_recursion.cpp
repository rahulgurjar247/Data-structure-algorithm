#include<iostream>
using namespace std;

class checkcount{
    public:
    int countsum(int *arr,int size){
        if(size==0){
            return 0;
        }
        else{
            int count = arr[0] + countsum(arr+1,size-1) ;
            return count;
        }
    }
};

int main(){
    checkcount obj;
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int result = obj.countsum(arr,10);

    cout<<result;
}