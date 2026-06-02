//Jump Game 1
//TC: O(N) for iterating through the nums array once
//SC: O(1) for using constant space to keep track of the maximum index that can be reached at any point in time
//LC 55

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(i>maxIndex) return false;
            maxIndex=max(maxIndex,i+nums[i]);
            if(maxIndex>n) return true;
        }
        return true;
    }
};