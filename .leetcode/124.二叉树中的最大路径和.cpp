/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int dfs(TreeNode* root, int& maxsum) {
        if(!root) return 0;
        int l = max(0,dfs(root->left,maxsum));
        int r = max(0,dfs(root->right,maxsum));
        maxsum = max(l+r+root->val, maxsum);
        return root->val + max(l,r);
    }
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        dfs(root,res);
        return res;
    }
};
// @lc code=end

