//Count number of subarrays with exactly k odd numbers
//Time Complexity: O(n) for iterating through the array once and performing constant time operations for each element.
//Space Complexity: O(n) for using a hash map to store the counts of prefix sums.
//LC 1248

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int oddCount = 0;
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;  
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1) {
                oddCount++;
            }
            if (prefixCount.find(oddCount - k) != prefixCount.end()) {
                count += prefixCount[oddCount - k];
            }
            prefixCount[oddCount]++;
        }
        return count;
    }
};