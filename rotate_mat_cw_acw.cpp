// om namah shivaya
// om namo venkateshaya
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
//  image rotation problems 
/* general trick for clockwise rotaiion 
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/

/*
 * anticlockwise rotate
 * first reverse left to right, then swap the symmetry
 * 1 2 3     3 2 1     3 6 9
 * 4 5 6  => 6 5 4  => 2 5 8
 * 7 8 9     9 8 7     1 4 7
*/

// for clockwise rotation reverse top and bottom and then swap the symmetry 
    // for anti clockwise  first  reverse left and right and then swap the symmetry 
 /// observe carefully while traversing ,on the inner loop traverse from i+1 so that you will not faae any double swaps 
 vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
 reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i) 
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
        cout<<"after rotating clockwise\n";
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
      

}
