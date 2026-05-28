//Single element in a sorted array
//Time Complexity: O(log n) because of binary search    
//Space Complexity: O(1) because we are using constant extra space
//LC 540
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int k=nums.size();
        if(k == 1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[k-1]!=nums[k-2]) return nums[k-1];
        int low=1,high=k-2;
        while(low<=high){
            int mid=(high +low)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];
            if((mid%2==1 && nums[mid-1] == nums[mid]) || (mid%2==0 && nums[mid+1]==nums[mid]))
            low=mid+1;
            else{
                high=mid-1;
            } 
        }
        return -1;
    }
};