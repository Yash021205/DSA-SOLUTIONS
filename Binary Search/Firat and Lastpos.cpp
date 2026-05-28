// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
//TC: O(log n) because of binary search
//SC: O(1) because we are using constant extra space
//LC 34
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans ={-1,-1};
        if(nums.empty()) return ans;
        auto lb =lower_bound(nums.begin(),nums.end(),target) ;
       if (lb == nums.end() || *lb != target) return ans;
        else{
            ans[0]= lb-nums.begin();
            auto ub= upper_bound(nums.begin(),nums.end(),target);
            ans[1] = ub-nums.begin()-1;
            return ans;
        }
    }
};