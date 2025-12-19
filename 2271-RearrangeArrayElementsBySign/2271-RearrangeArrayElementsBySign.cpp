// Last updated: 12/19/2025, 3:25:12 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> pint;
        queue<int> nint;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pint.push(nums[i]);
            else nint.push(nums[i]);

        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(pint.front());
                pint.pop();
            }
            else{
                ans.push_back(nint.front());
                nint.pop();
            }
        }

        return ans;
    }
};