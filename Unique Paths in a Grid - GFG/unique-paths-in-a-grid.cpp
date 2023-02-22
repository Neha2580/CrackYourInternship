//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

   class Solution {
    public:
    int solve(int n,int m,vector<vector<int>> &grid,vector<vector<int>> &dp,int i,int j)
    {
        if(i<0 or j<0) return 0;
        if(grid[i][j]==0) return 0;
        if(i==0 and j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int a = solve(n,m,grid,dp,i-1,j);
        int b = solve(n,m,grid,dp,i,j-1);
        return dp[i][j]=(a+b)%1000000007;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) 
    {
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(n,m,grid,dp,n-1,m-1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends