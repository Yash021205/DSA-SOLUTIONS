#include<iostream>
using namespace std;
//factorial of n numbers by recursion
int fact(int n){
    if(n!=1) return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<fact(n);
    
}