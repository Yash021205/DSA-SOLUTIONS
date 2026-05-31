//Find Peak Element 2
//Time Complexity: O(n*log(m)) where n is the number of rows and m is the number of columns in the matrix.
//Space Complexity: O(1) as we are not using any extra space.   
//LC 1901

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxElement(vector<vector<int>>& mat,int n,int m,int mid){
        int maxValue=INT_MIN,index=-1;
        for(int i=0;i<n;i++){
            if(mat[i][mid] > maxValue){ maxValue=mat[i][mid];
            index=i;
        }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low <= high){
            int mid =(low + high)/2;
            int row = maxElement(mat,n,m,mid);
            int left= mid-1 >=0 ? mat[row][mid-1] : -1;
            int right= mid +1 <m ? mat[row][mid +1] : -1;
            if(mat[row][mid] > left && mat[row][mid] > right){
                return {row,mid};
            }
            else if(mat[row][mid] < left) high=mid-1;
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};