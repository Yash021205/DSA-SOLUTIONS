//Hashing  
//pre storing and fetching
#include<bits/stdc++.h>
using namespace std;
void integerhashing(){
 int arr[]={2,5,4,7,9,5,1,6,0,8,4,3,4,3,6,8,9,0};//max entry is 9 so size should be 10 of hash array
 int hash[10]={0};                   // maximum size of array can be 10^6 inside main and 10^7 globally
 //pre storing                       // maximum size of bool can be 10^7 inside main and 10^8 globally
 for(int i=0;i<18;i++){
    hash[arr[i]]+=1;
 }
 //fetching
 cout<<"please enter number of queries  ";
 int q;//number of queries
 cin>>q;
 while(q--){
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
 }
}
void charecterhashing(){
    string s="aBchagityOcTipR";
    //pre storing
    int hash[256]={0};
     for(int i=0;i<18;i++){
    hash[s[i]]+=1;
 }
cout<<"please enter number of queries  ";
int q;//number of queries
cin>>q;
while(q--){
    char ch;
    cin>>ch;
    cout<<hash[ch]<<endl;
 }
}
void hashingbymap(){
    int arr[]={2,5,4,7,9,5,1,6,0,8,4,3,4,3,6,8,9,0};
    //pre storing  
    map<int,int>mpp;
    for(int i=0;i<18;i++){
    mpp[arr[i]]++;
 }
 //fetching
 cout<<"please enter number of queries  ";
 int q;//number of queries
 cin>>q;
 while(q--){
    int number;
    cin>>number;
    cout<<mpp[number]<<endl;
 }
 // iterate in the map
 for(auto it: mpp){
    cout<<it.first<<"->"<<it.second<<endl;
 }
 //for charecter we can declare map<char,int>mpp and mpp[arr[i]]++ in array
 //we can also use unorderred map because time complexity of it is O(1) and sometime is O(N) (worst case).
 //worst case occurs due to internal collision
 //meathods of hashing are division,folding,midsquare but division is imp
 //%10 is implied and linear chain are formed in %10 and chain is sorted
 //but if %10 is same for whole array then collision occurs as all elements enter in same hash index
 //in map any data structure can be key but in unordered map it is limited to int,double,long long
}
int main(){
integerhashing();
charecterhashing();
hashingbymap();
return 0;
}
