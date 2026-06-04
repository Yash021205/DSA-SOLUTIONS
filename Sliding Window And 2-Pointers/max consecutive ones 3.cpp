//Max Consecutive Ones with at most K flips
//Time Complexity: O(N) for iterating through the array once and performing constant time operations for each element.
//Space Complexity: O(1) for using constant space to keep track of the pointers and counts.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //similar to largest subarray with at most k zeroes
        int l=0,r=0,len=0,maxlen=0,zeroes=0,n=nums.size();
        while(r<n){
            if(nums[r] == 0)  zeroes++;
            if(zeroes>k){
                if(nums[l]==0) zeroes--;
                l++;
            }
            if(zeroes <=k){
                len= r-l+1;
                maxlen=max(len,maxlen);
            } 
            r++;
        }
        return maxlen;
    }
};