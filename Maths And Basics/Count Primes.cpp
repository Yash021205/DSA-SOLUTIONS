// Count Primes
//Time Complexity: O(n log log n) for the Sieve of Eratosthenes algorithm, where n is the input number.
//Space Complexity: O(n) for the boolean array used to mark prime numbers.
//LC 204

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void func(int n, vector<int> &prime){
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        } 
    } 
    int countPrimes(int n) {
        if(n<=2) return 0;
        int count=0;
        vector<int>prime(n,1);
        prime[0]=0;
        prime[1]=0;
        func(n-1,prime);
        for(int i=0;i<n;i++){
            if(prime[i]==1) count++;
        }
        return count;
    }
};