// Last updated: 6/15/2026, 2:59:40 PM
class Solution {
public:
    int f(int i , bool buy,vector<int>& prices,vector<vector<int>>& dp){
        if(i==prices.size()) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];

        if(buy){
            return dp[i][buy]=max((-prices[i]+f(i+1,0,prices,dp)),0+f(i+1,1,prices,dp));
        }
        return dp[i][buy]=max((prices[i]+f(i+1,1,prices,dp)),0+f(i+1,0,prices,dp));
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>  dp(n,vector<int>(2,-1));
        return f(0,1,prices,dp);
        
    }
};