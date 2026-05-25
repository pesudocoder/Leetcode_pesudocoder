// Last updated: 5/25/2026, 8:28:41 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        calc(root,0,ans);
        return ans;
        
    }
    void calc(TreeNode* root , int level , vector<int>& ans){
        if(root==nullptr) return;
        if(level==ans.size()) ans.push_back(root->val);
        calc(root->right,level+1,ans);
        calc(root->left,level+1,ans);

    }
};