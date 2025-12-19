// Last updated: 12/19/2025, 3:25:53 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};
        int n=nums.size();
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lb==n|| nums[lb]!=target) return ans;
        int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        return {lb,ub-1};
    }
};