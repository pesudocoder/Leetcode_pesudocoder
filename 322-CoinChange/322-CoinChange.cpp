// Last updated: 6/14/2026, 1:44:40 PM
class Solution {
public:
    int f(int i , int amtleft , vector<int>& coins,vector<vector<int>>& dp){
        if(i==0){
            if(amtleft%coins[0]==0) return amtleft/coins[0];
            else return 1e9;
        }
        if(dp[i][amtleft]!=-1) return dp[i][amtleft];
        int nt = 0+f(i-1,amtleft,coins,dp);
        int take = 1e9 ;
        if(amtleft>=coins[i]) {
            take=1+f(i,amtleft-coins[i],coins,dp);
        }
        return dp[i][amtleft]=min(take,nt);
            
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans = f(n-1,amount,coins,dp);
        if(ans>=1e9) return -1;
        return ans;
        
    }
};