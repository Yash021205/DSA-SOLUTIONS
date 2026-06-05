//Pow(x, n) - Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
//Time Complexity: O(log n) for the exponentiation by squaring method, where n is the exponent.
//Space Complexity: O(1) for using a constant amount of space to store intermediate results.
//LC 50

#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) return 1;
        long long N=n; 
        if (N<0) { 
            x=1/x;
            N=-N; 
        }
        double result=1;
        while(N>0){
            if(N%2==1){
                result*=x;
            }
            x*=x; 
            N/=2;
        }
        return result;
    }
};

