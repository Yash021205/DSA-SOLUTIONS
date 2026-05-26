#include<iostream>
using namespace std;
//printing sum of n numbers
void print1ton(int i,int n){
    cout<<i<<endl;
    if(i<n)
    print1ton(i+1,n);
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    print1ton(1,n);
}