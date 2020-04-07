/*
 * @lc app=leetcode.cn id=1305 lang=cpp
 *
 * [1305] 两棵二叉搜索树中的所有元素
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
    void dfsHelper(TreeNode* root, vector<int>& s){
        if(!root)  return;
        dfsHelper(root->left, s);
        s.push_back(root->val);
        dfsHelper(root->right, s);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        auto s = vector<int>();
        auto t = vector<int>();
        dfsHelper(root1, s);
        dfsHelper(root2, t);
        vector<int> res;
        merge(s.begin(), s.end(), t.begin(), t.end(), back_inserter(res));
        return res;
    }
};
// @lc code=end

