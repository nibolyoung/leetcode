/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    void midView(TreeNode* p,vector<int> &s){
        if(p){
            midView(p->left,s);
            s.push_back(p->val);
            midView(p->right,s);
        }
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> s;
        midView(root,s);
        if(s.size()<2)  return true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]>=s[i+1])  return false;
        }
        return true;
    }
};
// @lc code=end

