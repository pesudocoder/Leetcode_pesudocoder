// Last updated: 6/14/2026, 1:44:36 PM
class Solution {
public:
    bool f(int i , int target , vector<vector<int>>& dp , vector<int> & a){
        if(target==0) return true;
        if(i==0) return(a[0]==target);
        if(dp[i][target]!=-1) return  dp[i][target];
        bool nottake = f(i-1,target,dp,a);
        bool take = false;
        if(target>=a[i]){
            take = f(i-1,target-a[i],dp,a);
        }
        return dp[i][target]= take || nottake;

    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto it : nums){
            sum+=it;
        }
        if(sum%2!=0) return false;
        int target = sum/2;
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return f(n-1,target,dp,nums);
        
    }
};