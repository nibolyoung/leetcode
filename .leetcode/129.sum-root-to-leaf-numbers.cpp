/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
    int help(TreeNode* root, int sum){
        if(!root)  return 0;
        else if (!root->left && !root->right)
            return 10*sum + root->val;
        return help(root->left, 10*sum + root->val) + 
            help(root->right, 10*sum + root->val);
    }
public:
    int sumNumbers(TreeNode* root) {
        return help(root,0);
    }
};
// @lc code=end

