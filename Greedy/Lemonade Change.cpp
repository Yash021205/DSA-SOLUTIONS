//Lemonade Change
//TC: O(N) for iterating through the bills array
//SC: O(1) for using constant space to keep track of the count of $5 and $10 bills
//LC 860

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills){
        int curr_5=0,curr_10=0,i=0;
        while(i<bills.size()){
            if(bills[i] == 5) curr_5++;
            else if(bills[i] == 10){
                if(curr_5<=0)  return false;
                curr_5--;
                curr_10++;
            }
            else{
                if(curr_5 >0 && curr_10 >0){
                    curr_5--;
                    curr_10--;
                }
                else if(curr_5 >=3){
                    curr_5-=3;
                }
                else{
                    return false;
                }
            }
            i++;
        }
        return true;
    }
};