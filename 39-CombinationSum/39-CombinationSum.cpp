// Last updated: 12/19/2025, 5:14:37 PM
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        solve(0,ans,temp,candidates,target);
        return ans;
        
    }
    void solve(int i ,vector<vector<int>> &ans,vector<int> &temp, vector<int> &candidates,int target){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
             return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            solve(i,ans,temp,candidates,target-candidates[i]);
            temp.pop_back();
        }
        solve(i+1,ans,temp,candidates,target);

    }
};