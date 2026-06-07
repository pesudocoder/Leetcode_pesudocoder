// Last updated: 6/7/2026, 1:17:26 PM
class Solution {
public:
    int solve(int ind, vector<int>& nums, vector<int>& dp) {
        if(ind == 0) return nums[0];
        if(ind < 0) return 0;

        if(dp[ind] != -1) return dp[ind];

        int pick = nums[ind] + solve(ind - 2, nums, dp);
        int notPick = solve(ind - 1, nums, dp);

        return dp[ind] = max(pick, notPick);
    }

    int calc(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(n - 1, nums, dp);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int> temp1, temp2;

        for(int i = 0; i < n; i++) {
            if(i != 0) temp1.push_back(nums[i]);      // exclude first
            if(i != n - 1) temp2.push_back(nums[i]);  // exclude last
        }

        return max(calc(temp1), calc(temp2));
    }
};