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
 
// sorting binary array uusing two pointer approach 
vector<int>v{1,0,1,1,0,1};
int high=v.size()-1;
int low=0;
 while(low<high)
 {
    if(v[low]==0)low++;
    if(v[low]==1)swap(v[high--],v[low]);
 }
   for(auto &it:v)cout<<it<<" ";
}
