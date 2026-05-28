//Peak element
//Time Complexity: O(log n) because of binary search    
//Space Complexity: O(1) because we are using constant extra space
//LC 162
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int k=nums.size();
        if(k==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[k-1] > nums[k-2]) return k-1;
        int low=1,high=k-2;
        while(low<=high){
            int mid= (low + high)/2;
            if(nums[mid+1]<nums[mid] && nums[mid-1]<nums[mid])  return mid;
            else if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }   
        }
        return -1;
    }
};