#include<iostream>
#include<vector>
using namespace std;
int findelem(vector<int> nums){
    int count=0;
    for(int i=0;i<nums.size();i++){
        count+= nums[i];
    }
    return count;
}
int sumdigit(vector<int>nums){
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>9){
            int temp =nums[i];
            while(temp!=0){
                int x = temp%10;
                count += x;
                temp = temp/10;
            }
        }
        else{
            count+=nums[i];
        }
    }
    return count;
}

int main() {
        vector<int> nums = {11,15,16,3};
        int sumelem = findelem(nums) ;
        cout<<"sumofelem:"<<sumelem<<endl;

        int sumdegit = sumdigit(nums);
        cout<<"sumofdigit:"<<sumdegit<<endl;

        int answer = sumelem-sumdegit;

        cout <<"answer is:"<<answer;
}
