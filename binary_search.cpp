// om namah shivaya 
// om namo narayanaya 
// om sri matre namaha
#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<int>v,int i,int j,int target)
{
	while(i<=j)
	{
		int mid=(i+j)/2;
		if(v[mid]==target)return true;
		else if(v[mid]>target)i=mid+1;
		else j=mid-1;
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	//choose a mid index and comapare the array with that index with the target then increment and decrement the initial and final values accordingly
	vector<int>v{1,2,3,4,5}; // one of the way of initializing the vector
	int j=v.size()-1;
	if(binary_search(v,0,j,0))cout<<"PRESENT\n";
	else cout<<"NO\n";
}
