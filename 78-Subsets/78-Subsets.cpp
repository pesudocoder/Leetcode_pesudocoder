// Last updated: 12/19/2025, 3:25:45 PM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    vector<vector<int>> ans;
    ans.push_back({});   // empty subset

    for (int num : nums) {
        int size = ans.size();
        for (int i = 0; i < size; i++) {
            vector<int> temp = ans[i];
            temp.push_back(num);
            ans.push_back(temp);
        }
    }
    return ans;
}

        
    
};