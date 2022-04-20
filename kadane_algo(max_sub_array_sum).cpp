// om namah shivaya
// om namo narayanaya
// om shri matre namaha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // kadane algorithm (maximum subarray sum in an array)
    // given an array find contiguous subarray (containing aatleast one number) which has the largest sum and return its sum and print the subarray

    // initialize sum and max to 0 and num[0] respectively and traverse through the given array 
    // compare each element and it to the sum and if the element is greater than the max then make it max element 
    // if the sum tens to be zero then make the sum 0 and keep the max as the same 
     vector<int>v{-2,1,-3,4,-1,2,1,-5,4};
     // find the maximum subarray sum
     // kadane algorithm 
     int maxi=INT_MIN;
     int sum=0;
     for(auto &it:v)
     {
        sum+=it;
        maxi=max(sum,maxi);
        if(sum<0)sum=0;
     }
     cout<<maxi<<"\n"
}
