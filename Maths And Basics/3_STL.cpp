//STL is Standard Template Library
#include<bits/stdc++.h>  //contains all libraries of c++
using namespace std;
//It contains 
/*   Algorithmsl
     Containers
     Functions
     Iterators
*/
void explainpairs(){
    //Paies are part of utility library
    pair<int,int> p={1,3};
cout<<p.first<<p.second<<endl;
// we can store many variables due to nested properties of pairs
// there can be various datatypes used in a pair
// we can declare pair array so it can be terated as a datatype

}
void explainvectors(){
    //1st container is vector   #include<vector> is required
    //it is container which is dynamic in nature and contiguous memory location occurs
    vector<int>v;  //this line creates empty space
    cout<<v.size()<<endl;
    v.resize(3);  //this resizes the vector     //Capacity >= size   because capacity increases in powers of 2 
    //but for resize capacity change is compiler dependant
    cout<<v.size()<<endl;
    v.push_back(4);//add element at last
    v.emplace_back(6);//add quickly last element
    cout<<v.size()<<endl;
    //v.begin();tells starting position of vector  it is iterator
    //v.end();tells 1 position after an end position of vector   it is iterator
    v.insert(v.begin() +2,6);
   cout<<v.size()<<endl;
    v.pop_back();
    cout<<v.size()<<endl;
    v.erase(v.begin()+3);
    cout<<v.size()<<endl;
    vector<int>v_(5,100); //length is 5 and entries are 100
    vector<int>v__(v_);  // copies the vector or creates copy of vector
    //Pair in vectors
    vector<pair<int,int>>v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);
    //if size is defined while declaring we can still change the size   
}
void explainiteratorsandfunctions(){
    //Iterator points to the memory location where the element is located
    //syntax:  datastructure<datatype>::iterator iterator_name = element whom we want to point
    vector<int>v;
    for(int i=0;i<10;i++){
        int element;
        cin>>element;
        v.emplace_back(element);
    }
    vector<int>::iterator it= v.begin();
    //it++;cout<<*(it)<<" ";// it will now print second element
    //v.begin() and v.end() are also iterators
    //v.rbegin() and v.rend() are also iterators ,act opposite to their counterparts
    //Looping in vectors basic
    vector<int>v1;
    for(int i=0;i<10;i++){
        int element;
        cin>>element;
        v1.emplace_back(element);
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //foreach loop
    for(int i:v1){
        cout<<i;
    }
    //Using iterator to print whole vector
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //v.erase(start,end) will erase all elements from start excluding end 
    //v.insert(position,no. of times element to be inserted,element)
    //v1.swap(v2) swaps the vectors
    //v.clear() clears complete vector
}
void explainlistsanddeque(){
    list<int> l;
    l.push_back(2);
    l.emplace_back(4);
    l.push_front(6);//faster than insert
    l.emplace_front(8);//faster than insert
    //rest all functions are same as vectors
    //for deques also all functions and declaration are same
}
void explainstacks(){
    stack<int>st;
    st.push(3);        //we can also use emplace
    st.push(8);
    st.push(6);
    st.push(0);        //store elements like stairs, follows LAST IN FIRST OUT
    cout<<st.top();    //will print the last entered element/topmost element
}
void explainqueues(){
    queue<int>q;
    q.push(3);
    q.emplace(4);
    q.push(5);
    //in queues entries are queued as per entry just opposite to stacks, FIRST IN FIRST OUT
    //q.back() and q.front() print last and first element of que/deque/stack
    //all functions same as stack and time complexity is O(1).
    //priorityque
    priority_queue<int>pq;//here largest value will be first.........max heap
    //we can use pq.top() etc all functions
    //pq.pop eliminates the first element
    //Min heap declaration
    priority_queue<int,vector<int>,greater<int>>pq1;   //.........min heap ,minimum element will be stored
    //push and pop occur in log n and top in O(1).

    }
void explainset(){
   //SORTED and UNIQUE
   //elements are sorted from big to small,i.e. big number will be always at top and only once a entry can exist (unique) 
   set<int>st;
   auto it =st.find(3);  //it will return the iterator pointing that entry
   //if the element does not exist then it will act as st.end and point to 1 position after the end of set
   st.erase(5);  // deletes 5
   int cnt= st.count(5);  // it can either be 1 or 0
   //in brackets of erase we can write both element and iterator and also can write st.erase(it1,it2);it to be declared by it=st.find(element);
   //time complexity = logN
   //MULTISET--> SORTED BUT NOT UNIQUE    // preferred to use iterators in  erase rather than elements
   //UNORDER SET--> UNIQUE ELEMENTS BUT RANDOM ORDER   //O(1) time complexity
   //only upperbound and lowerbound do not work
   //if unable to find worse case time complexity becomes O(N);
}
void explainmap(){
     //the key is linked with value
     //key is unique but value is variable
     //both can have any datatype, declaration:
    map<pair<int,int>,int>mpp;
     //assigning in it-->
    // mpp[{1,2}]=3;//it stores unique keys in sorted order    {1,2},{2,4},{3,6}  like this
     //we can also use mpp.emplace({1,2},3); or mpp.insert({1,2},3);
    // mpp.emplace(2,3,2);
    map<int,int>mp1;
    mp1[1]=2;
    mp1[3]=4;
    for(auto it: mp1){
         cout<<it.first<<" "<<it.second<<endl;
    }
    auto it =mp1.find(3);
    cout<<(*it).second;
    //lower bound and upper bound functions afterwards
    //rest all functions are same and time complexity is log(N)
    //MULTIMAP -->similar to map ie sorted but not unique keys , can have duplicate keys
    //UNORDERED MAP
    // randomised and unique keys
    //O(1) ie constant but in worst case sometimes it is O(N).
    
}
bool comp( pair<int,int>p1, pair<int,int>p2){
if(p1.second<p2.second) return true;
if(p1.second>p2.second) return false;
if(p1.first>p2.first) return true;
return false;

}
void explainsort(){
    //except of using various sorts we can use sort in stl in arrays and vectors
    // int a[]={2,8,1,6,4,0};
    // sort(a,a+6);  //this will sort entire array
    //for vector we can write sort(v.begin(),v.end());
    //we can also sort only some portion of array or vector like sort(a+2,a+4);
    //if we have to sort in descending order then declaration is
    //  sort(a,a+6);
    //  for(int i=0;i<6;i++){
    //     cout<< a[i] << endl;
    // }
    //sorting in our way
    //sort according to second element
    //if same 2nd element soet acc to 1st element in descending order
    pair<int,int> arr[]={{1,2},{2,1},{4,1}};
    sort(arr,arr+6,comp);
}
void explainextra(){
    int num=7;
    int cnt= __builtin_popcount(num);//return number of setbits or number of 1 in binary
    //for long long num we use __builtin_popcountll();
    string s= "123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
   // int maxi=*max_element(a,a+n);  give max element

//Basic Maths
//Euclidean Algorithm
//gcd(a,b) == gcd(a-b,b)  if a>b
//gcd(a,b) == gcd(a%b,b)  if a>b   
// doing succesively if one of them is 0 other is gcd
//time complexity--> whwnever there is division TC is in terms of log
//like here TC= O(logbasephai(min(a,b))).
}
int main(){
explainpairs();
explainvectors();
explainiteratorsandfunctions();
explainlistsanddeque();
explainstacks();
explainqueues();
explainset();
explainmap();
explainsort();
explainextra();
return 0;
}