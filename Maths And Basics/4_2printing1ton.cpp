#include<iostream>
using namespace std;
//printing 1 to n by recursion
void print1ton(int i,int n){
    cout<<i<<endl;
    if(i<n)
    print1ton(i+1,n);
}
int main(){
    int n;
    cout<<"enter the digit"<<endl;
    cin>>n;
    print1ton(1,n);
}