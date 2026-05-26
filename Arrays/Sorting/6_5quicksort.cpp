#include<bits/stdc++.h>                           
using namespace std;
int partition(vector<int>& arr, int low,int high){
    int pivot=arr[low];
    int i=low;
    int j= high;
    while(i<j){
        while( arr[i]<= pivot && i<=high-1){  
            i++;
        }
    
    while(arr[j]>pivot && j>= low+1){  
        j--;
    }
    if(i<j) swap(arr[i],arr[j]);  
}
 swap(arr[low],arr[j]);  
 return j; 
}
void qS(vector<int> &arr,int low,int high){
    if(low<high){
       int pIndex = partition(arr,low,high);
       qS(arr,low,pIndex-1);
       qS(arr,pIndex+1,high); 
       
    }
}
void quicksort(vector<int>& arr,int n){
    qS(arr,0,arr.size()-1);
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    } ;
}
int main(){
    int n;
    cout<<"Enter the number of elelments of array ";
    cin>>n;
    vector<int> arr;
    cout<<"Please enter the elements: ";
     for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    } 
    quicksort(arr,n);
    
}