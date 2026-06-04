//Number of Substrings Containing All Three Characters
//Time Complexity: O(n) for iterating through the string once.
//Space Complexity: O(1) for using constant space to keep track of the frequencies.
//LC 1358

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
 bool hasAllChars(vector<int>& freq) {
       if(freq[0] > 0 && freq[1] > 0 && freq[2] > 0) return true;
       else{
        return false;
       }
    }
    int numberOfSubstrings(string s) {
        int n = s.length();
        int left = 0, right = 0;
        vector<int> freq(3, 0);
        int total = 0;
        while(right<n){
            freq[s[right]-'a']++;
            while(hasAllChars(freq)){
                total += n-right;
                freq[s[left]-'a']--;
                left++;
            }
            right++;
        }
        return total;
    }
};