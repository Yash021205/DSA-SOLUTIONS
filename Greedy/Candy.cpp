//Candy
//TC: O(N) for iterating through the ratings array
//SC: O(1) for using constant space to keep track of the count of candies needed
//LC 135

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int sum=1,i=1;
        while(i<n){
            if(ratings[i]==ratings[i-1]){
                sum+=1;
                i++;
                continue;
            }
            int peak=1;
            while(i<n && ratings[i]>ratings[i-1]){
                peak+=1;
                sum+=peak;
                i++;
            }
            int down=1;
            while(i<n && ratings[i]<ratings[i-1]){
                sum+=down;
                i++;
                down++;
            }
            if(down>peak) sum+=down-peak;
        }
        return sum;
    }
};