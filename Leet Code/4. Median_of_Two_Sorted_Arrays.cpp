// input  [1,3],[2]
// input [1,2],[3,4]

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
       for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
       }
       sort(nums1.begin(), nums1.end());
       int size=nums1.size();
       double median ; 
       if(size%2==0){
            median = (nums1[(size/2)-1]+nums1[size/2])/2.0;
       }
       else{
        median = nums1[size/2];
       }
       return median ;
    }
};