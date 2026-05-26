#include<iostream>
using namespace std;
//printing n to 1 by recursion
int sumation(int i,int n,int sum){
    sum=sum+i;
    if(i<n)
    sumation(i+1,n,sum);
    else{
        return sum;
    }
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<sumation(1,n,0);
    
}