//Binary Search in 2D Array--Optimized Approach
//Time Complexity: O(m+n) where m and n are the number of rows and columns in the matrix respectively.
//Space Complexity: O(1) as we are not using any extra space.
//LC 74

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        if(m==0) return false;
        int n= matrix[0].size();
        int row=0,col=n-1;
        while(row<m && col>=0){
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col] < target) row++;
            else{
                col--;
            }
        }
        return false;
    }
};