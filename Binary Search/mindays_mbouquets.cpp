// C++ program to find minimum number of days to make m bouquets
//TC: O(n * log(max - min))
//SC: O(1)
//LC 1482


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool possible(vector<int>arr,int day,int m,int k){
        int count=0,bouque=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day) count++;
            else{
                bouque+=(count/k);
                count=0;
            }
        }
        bouque+=(count/k);
        if(bouque>=m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, double m, int k) {
        double a=bloomDay.size();
        double b=m*k;
        if(a < b) return -1;
        int low=*(min_element(bloomDay.begin(),bloomDay.end()));
        int high=*(max_element(bloomDay.begin(),bloomDay.end()));
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)) high=mid-1;
            else{
                low=mid+1;
            }
        }
        return low;
    }
};