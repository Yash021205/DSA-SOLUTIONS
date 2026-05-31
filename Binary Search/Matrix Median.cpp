//Matrix Median
//Time Complexity: O(32 * n * log(m)) where n is the number of rows and m is the number of columns in the matrix. The factor of 32 comes from the binary search on the range of possible values in the matrix (assuming 32-bit integers).
//Space Complexity: O(1) as we are not using any extra space.
//GFG 212

#include<bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
    int uB(vector<int>arr,int x){
        int n=arr.size();
        int low=0,high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low + high)/2;
            if(arr[mid] > x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    int blackbox(vector<vector<int>> &mat,int x){
        int cnt=0;
        for(int i=0;i<mat.size();i++){
            cnt+= uB(mat[i],x);
        }
        return cnt;
    }
    int median(vector<vector<int>> &mat) {
        // code here
        int n= mat.size();
        int m= mat[0].size();
        int low= INT_MAX,high=INT_MIN;
        for(int i=0;i<n;i++){
            low = min(mat[i][0],low);
            high= max(mat[i][m-1],high);
        }
        int req=(m*n)/2;
        while(low<=high){
            int mid=(low + high)/2;
            int smallerEquals = blackbox(mat,mid);
            if(smallerEquals <= req ) low=mid+1;
            else{
                high= mid-1;
            }
        }
        return low;
    }
};