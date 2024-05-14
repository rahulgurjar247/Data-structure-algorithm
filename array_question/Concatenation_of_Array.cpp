#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    int n = nums.size();
    vector<int> ans(n*2);
    for(int i=0;i<n*2;i++){
        if(i>=n){
            ans[i] = nums[i-n];
        }else{
            ans[i] = nums[i];
        }
    }

    for(int j=0;j<n*2;j++){
        cout<< ans[j]<<" ";
    }

    return 0;
}