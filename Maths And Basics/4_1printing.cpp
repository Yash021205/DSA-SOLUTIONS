#include<iostream>
using namespace std;
//RECURSION
//when a function calls itself until a specified condition is met
//it can cause stack overflow if base condition is not specified
 void printingntimes(int i,int n){
if(i>n) return;
cout<<1<<endl;
   printingntimes(i+1,n) ;
 }
int main(){
    int n;
    cout<<"enter number of times 1 is to be printed"<<endl;
    cin>>n;
    printingntimes(1,n);
    return 0;
}