//Row with max 1s
//Time Complexity: O(n*log(m)) where n is the number of rows and m is the number of columns in the matrix.
//Space Complexity: O(1) as we are not using any extra space.
//GFG 213

#include<bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    int findFirstOne(vector<int>& arr) {
       int n = arr.size();
       int low = 0, high = n - 1;
       int ans = -1;
       while (low <= high) {
           int mid = (low + high) / 2;
           if (arr[mid] == 1) {
               ans = mid; // Update the answer to the current index
               high = mid - 1; // Search in the left half for the first occurrence
           } else {
               low = mid + 1; // Search in the right half
           }
       }
       return ans;
   }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int cnt_max=-1;
        int index=-1;
        for(int i=0;i<arr.size();i++){
           int lastOneIndex = findFirstOne(arr[i]);
           int cnt_ones = (lastOneIndex == -1) ? 0 : arr[i].size() - lastOneIndex;
            if (cnt_ones > cnt_max) {
                cnt_max = cnt_ones;
                index = i;
            }
        }
        return index;
    }
};