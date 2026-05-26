//takes an element and places it in its correct place
#include<iostream>
using namespace std;
int main(){
     int n,indexofmin; 
    cout<<"Enter numbner of elements in an array  ";
    cin>>n;
    int arr[n];
    for(int l=0;l<n;l++){
        cout<<"Enter "<<l<<" element of array"<<endl;
        cin>>arr[l];
    }
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
  }
    for(int h=0;h<n;h++){
    cout<<arr[h]<<"  ";
    }
    return 0;
}
//time complexity
//average and worst case - O(N^2)
//best case - O(N)
