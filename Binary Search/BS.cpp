// C++ program for recursive binary search
//Time Complexity: O(log n)
//Space Complexity: O(log n) because of recursive stack space
//Note: The array must be sorted before calling the binary search function.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int BinarySearch(vector<int> nums,int left,int right, int target){
        int mid = left + (right - left) / 2;
         if(left > right) return -1;
        if(nums[mid]==target) return mid;
        else if(target> nums[mid]){
            return BinarySearch(nums,mid+1,right,target);
        }
        else{
            return BinarySearch(nums,left,mid-1,target);
        }
      
    }
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums,0,nums.size()-1,target);
    }
};