//Find the minimum element in a rotated sorted array
//Time Complexity: O(log n) because of binary search    
//Space Complexity: O(1) because we are using constant extra space
//LC 153
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty()) return 0;
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high){
        int mid= low + (high-low)/2;
        if(nums[low] <= nums[mid]){
            ans=min(ans,nums[low]);
            low=mid+1;
        }
        else{
            ans=min(ans,nums[mid]);
            high=mid-1;
        }
        }
        return ans;
    }
};