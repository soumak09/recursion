// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
    // Code Here
    vector<vector<int>>mat(m, vector<int>(n,1));
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            mat[i][j] = mat[i-1][j] + mat[i][j-1];
        }
    }
    return mat[m-1][n-1];
}

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends