//Maximum Points You Can Obtain from Cards
//Time Complexity: O(k) for calculating the sum of the first k elements and then iterating k times to find the maximum score.
//Space Complexity: O(1) for using constant space to keep track of the sums and indices.
//LC 1423

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxsum=0,rightindex=cardPoints.size();
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        maxsum=lsum;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[rightindex-1];
            rightindex--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};