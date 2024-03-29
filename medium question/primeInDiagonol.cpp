#include<iostream> 
#include<algorithm>
using namespace std;
#include<vector>
int main() {
        int nums[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        vector<int>arr;
        int y = 3;
        int x = 3;
        int i;
        for( i=0;i<y;i++){
            for(int j=0;j<x;j++){
                if( (i + j) % 2  ==0 ){
                    arr.push_back(nums[i][j]);
                }
            }
        }
        sort(arr.begin(),arr.end());

        for(i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }

        int lebhai=0;

        for(i=arr.size()-1;i>=0;i--){
            int num = arr[i];
            cout<<arr[i]<<endl;
            for(int j=2;j<=num/2;j++){
                if(num % j ==0){
                    break;
                }
            }

        }
        return 0;
    }
