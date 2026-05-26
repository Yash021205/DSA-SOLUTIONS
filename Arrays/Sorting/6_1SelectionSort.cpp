//pushes mininum to front
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
    for(int i=0;i<n-1;i++){
        indexofmin=i;
        for(int j=i;j<=n-1;j++){
            if(arr[i]>arr[j]){
               indexofmin= j;
               int temp=arr[i];
               arr[i]=arr[indexofmin];
               arr[indexofmin]=temp;

            }
        }
    }
    for(int h=0;h<n;h++){
        cout<<arr[h]<<"  ";
    }
    return 0;
    //time complexity=O(N^2)..worst or average or best case.
    //complete array is analysed in each step
}