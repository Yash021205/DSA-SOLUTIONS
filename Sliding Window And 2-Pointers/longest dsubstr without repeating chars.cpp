//Longest Substring Without Repeating Characters
//Time Complexity: O(n) for iterating through the string once and performing constant time operations for each character.
//Space Complexity: O(min(m,n)) for using a hash map to store the characters and their indices, where m is the size of the character set and n is the length of the string.
//LC 3

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen=0;
        unordered_map<char, int>mpp;
        int l=0;
        for(int r=0;r<n;r++){
            if(mpp.count(s[r])==0 || mpp[s[r]]<l) {
                mpp[s[r]]=r;
                maxlen=max(maxlen,r-l+1);
            }else{
                l=mpp[s[r]]+1;
                mpp[s[r]]=r;
            }
        }
        return maxlen;
    }
};