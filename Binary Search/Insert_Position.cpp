//Search Insert Position
//Time Complexity: O(log n)
//Space Complexity: O(1) because we are using iterative approach
//Note: The array must be sorted before calling the binary search function.
//LC 35
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int> arr, int target, int low, int high) {
        int ans =high+1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return mid;
            }else if (arr[mid]<=target) {
                low=mid+1;
            }else{
                high=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};