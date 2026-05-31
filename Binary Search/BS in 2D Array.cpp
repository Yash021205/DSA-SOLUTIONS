//Binary Search in 2D Array
//Time Complexity: O(log(m*n)) where m and n are the number of rows and columns in the matrix respectively.
//Space Complexity: O(1) as we are not using any extra space.
//LC 74

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n=matrix.size();
    int m=matrix[0].size();
    int low=0,high= n*m -1;
    while(low<=high){
        int mid= (low + high)/2;
        int row = mid/m;
        int col=mid%m;
        if(matrix[row][col] == target) return true;
        else if(matrix[row][col] < target) low=mid+1;
        else{
            high=mid-1;
        }
    }
    return false; 
    }
};