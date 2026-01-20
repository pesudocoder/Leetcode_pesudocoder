// Last updated: 1/20/2026, 10:46:26 PM
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum =0;
        for(int i=0;i<nums.size();i++){
            int mn = nums[i];
            int mx=nums[i];
            for(int j=i;j<nums.size();j++){
                mn=min(mn,nums[j]);
                mx=max(mx,nums[j]);
                sum+=(mx-mn);
            }
            
        }
        return sum;
        
    }
};