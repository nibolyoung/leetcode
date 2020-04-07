/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
    void help(TreeNode* root,vector<int> &s){
        if(root!=NULL){
            help(root->left,s);
            s.push_back(root->val);
            help(root->right,s);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> s;
        help(root,s);
        return s;
    }
};
// @lc code=end

