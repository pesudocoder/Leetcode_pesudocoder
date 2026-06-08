// Last updated: 6/8/2026, 2:43:51 PM
class Solution {
public:
    int f(int i , int j ,vector<vector<int>>& g,vector<vector<int>>& dp){
        if(i==0 && j==0) return g[i][j];
        if(i<0 || j < 0 ) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int leftsum = g[i][j] + f(i,j-1,g,dp);
        int upsum = g[i][j] + f(i-1,j,g,dp);
        return dp[i][j] = min(leftsum,upsum);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f (m-1,n-1,grid,dp);

        
    }
};