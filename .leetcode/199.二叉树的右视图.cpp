/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] 二叉树的右视图
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
    void levelView(TreeNode* root,vector<int> &t){
        vector<int> s;
        queue<TreeNode*> p, q;
        p.push(root);
        q = p;
        while (!p.empty()){
            p = queue<TreeNode*>();
            s.clear();
            while (!q.empty()){
                TreeNode* tmp = q.front();
                q.pop();
                s.push_back(tmp->val);
                if (tmp->left != NULL)  p.push(tmp->left);
                if (tmp->right != NULL)  p.push(tmp->right);
            }
            t.push_back(s[s.size()-1]);
            q = p;
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> s;
        if(!root)  return s;
        levelView(root,s);
        return s;
    }
};
// @lc code=end

