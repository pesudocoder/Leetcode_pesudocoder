// Last updated: 6/18/2026, 12:43:54 PM
class Solution {
public:
    int f(vector<int> & nums , int goal){
        int n = nums.size();
        int r = 0,l=0,sum=0,cnt=0;
        if(goal<0) return 0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
        
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return f(nums,goal)-f(nums,goal-1);
        
    }
};