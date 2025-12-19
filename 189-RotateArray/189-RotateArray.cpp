// Last updated: 12/19/2025, 3:25:34 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k = k%n;
         reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.begin()+n);
        
        
    }
};