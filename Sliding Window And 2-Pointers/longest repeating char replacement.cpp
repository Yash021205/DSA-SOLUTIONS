//Longest Repeating Character Replacement
//Time Complexity: O(n) for iterating through the string once and performing constant time operations for each character.
//Space Complexity: O(1) for using a fixed-size array to store the counts of characters.
//LC 424

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int left = 0;
        int max_freq = 0;
        int max_len = 0;
        for (int right = 0; right < s.length(); right++) {
            freq[s[right]]++;
            max_freq = max(max_freq, freq[s[right]]);
            while ((right - left + 1) - max_freq > k) {
                freq[s[left]]--;
                left++;
            }
            max_len = max(max_len, right - left + 1);
        }
    return max_len;
    }
};