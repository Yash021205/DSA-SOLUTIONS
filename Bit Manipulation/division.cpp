// C++ program to divide two integers without using multiplication, division and mod operator
//TC: O(logN) for finding the quotient using bit manipulation
//SC: O(1) for using constant space to keep track of the quotient and the sign of the result
//LC 29

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        bool sign=(dividend>0)==(divisor>0);
        long long n=labs(dividend);
        long long d=labs(divisor);
        long long quotient=0;
        while(n>=d){
            int cnt=0;
            while(n>=(d<<(cnt+1))) cnt++;
            quotient+=1LL<<cnt;
            n-=(d<<cnt);
        }
        if(quotient==(1LL<<31))
            return sign ? INT_MAX : INT_MIN;
        return sign ? (int)quotient : -(int)quotient;
    } 
};