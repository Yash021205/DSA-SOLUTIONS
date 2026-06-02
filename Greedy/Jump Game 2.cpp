//Jump Game II
//TC: O(N) for iterating through the nums array once
//SC: O(1) for using constant space to keep track of the count of jumps, maximum index that can be reached at any point in time and the current end of the jump
//LC 45

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jmp=0,maxindex=0,n=nums.size(),currentEnd=0;
        for(int i=0;i<n-1;i++){
            int j= maxindex;
            maxindex=max(maxindex,i+nums[i]);
            if (i == currentEnd) {
                jmp++;
                currentEnd = maxindex;
            }
        }
        return jmp;
    }
};