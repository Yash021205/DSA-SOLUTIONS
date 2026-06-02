//Merge Interval
//TC: O(NlogN) for sorting the intervals array
//SC: O(N) for using extra space to store the result
//LC 56

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        int i=0, n=intervals.size();
        sort(intervals.begin(), intervals.end());
        for(auto interval : intervals){
            if(res.empty() || res.back()[1]<interval[0]) res.push_back(interval);
            else res.back()[1]=max(res.back()[1], interval[1]);
        }
        return res;
    }
};