//Assign Cookies
//TC: O(NlogN) for sorting the arrays
//SC: O(1) for using constant space to keep track of the count of content children and cookies
//LC 455

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size(),m=s.size();
        int l=0,r=0;
        while(l<m  && r<n){
            if(g[r] <= s[l]){
                r++;
            }
            l++;
        }
        return r;
    }
};