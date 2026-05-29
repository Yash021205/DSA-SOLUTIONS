// C++ program to find the smallest divisor given a threshold
//TC: O(n * log(max - min)) 
//SC: O(1)
//LC 1283

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& nums, int threshold, int divisor){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+= ceil(double(nums[i])/double(divisor));
        }
        if(sum<=threshold) return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*(max_element(nums.begin(),nums.end()));
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(nums,threshold, mid)) 
                high=mid-1;
            else{
                low=mid+1;
            }
        }
        return low;
    }
};