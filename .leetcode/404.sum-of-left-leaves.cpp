/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
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
    void help(TreeNode* root,int &sum){
        if(root!=NULL){
            if(root->left!=NULL
                &&root->left->left==NULL
                &&root->left->right==NULL)
                sum+=root->left->val;
            help(root->left,sum);
            help(root->right,sum);
        }
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        help(root,sum);
        return sum;
    }
};
// @lc code=end

