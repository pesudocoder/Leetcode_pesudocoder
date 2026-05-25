// Last updated: 5/25/2026, 8:28:50 PM
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
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        calc(root,maxi);
        return maxi;
        
    }
    int calc(TreeNode* root , int &maxi){
        if(root==nullptr) return 0;
        int ls = max(0,calc(root->left,maxi));
        int rs = max(0,calc(root->right,maxi));
        maxi=max(maxi,ls+rs+root->val);
        return root->val+max(ls,rs);
    }
};