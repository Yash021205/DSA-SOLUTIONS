//Power of 2
//TC: O(1) for checking if n is a power of 2 using bit manipulation
//SC: O(1) for using constant space to check if n is a power of
//LC 231

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
       return n > 0 && (n & (n - 1)) == 0;
    }
};