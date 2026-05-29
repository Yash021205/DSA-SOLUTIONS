// Koko Eating Bananas
//TC: O(nlogm) where n is the number of piles and m is the maximum number of bananas in a pile
//SC: O(1)
//Approach: We will use binary search to find the minimum eating speed. We will calculate the hours required to eat all the bananas at a given speed and compare it with h. If the hours required is greater than h, we need to increase the speed, otherwise we can decrease the speed.
//LC 875
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double hoursrequired(vector<int>arr,int hourly){
        double ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            ans+=ceil(double(arr[i])/double(hourly));
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high= *(max_element(piles.begin(),piles.end()));
        while(low<=high){
            int mid= (low+high)/2;
            if(hoursrequired(piles,mid)>h) low=mid+1;
            else{
               high=mid-1;
            }
        }
        return low;
    }
};