// om namah shivaya 
// om namo narayanaya 
// om shri matre namaha 
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   ios::sync_with_stdio(0); 
   cin.tie(0);
  // DNF algorithm  (dutch national flag 3 colours ,separeate them)
   // seperate 0s 1s and 2s in the arrays sort them without using any sorting algorithms or extra space 
   vector<int>v{1,2,2,0,1,1};
   // recollect the algorithm 
   // the algorithm is that we have to initialize theree pointers (high,low and mid) with 0 and high with sizze()-1
   // and then do this as shown below 
    int high=v.size()-1;
    int low=0,mid=0;
    while(mid<=high)
    {
        if(v[mid]==0)
            swap(v[low++],v[mid++]);
        else if(v[mid]==1)
            mid++;
        else swap(v[mid],v[high--]);
    } 
    for(auto &it:v)
        cout<<it<<" ";
  // if v[mid]==0 swap(v[mid] and v[low]) and increment both of them 
  // if v[mid]==1 increment mid
  // if v[mid]==2 swap(v[mid],v[high]) and decrement high value 
}
