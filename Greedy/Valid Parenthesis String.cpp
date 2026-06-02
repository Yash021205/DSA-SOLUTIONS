//Valid Parenthesis String
//TC: O(N) for iterating through the string once
//SC: O(1) for using constant space to keep track of the count of open
//LC 678

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int mini=0,maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                mini--;
                maxi--;
            }
            else if(s[i] == '('){
                mini++;
                maxi++;
            }
            else{
                mini--;
                maxi++;
            }
            if(mini<0)  mini=0;
            if(maxi<0) return false;
        }
        return (mini==0);
    }
};