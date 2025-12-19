// Last updated: 12/19/2025, 3:26:02 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>check;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(check.find(rem)!=check.end()){
                return {i,check[rem]};
            }
            check[nums[i]]=i;
        }
        return {};
        
    }
};