/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    void levelView(TreeNode* &root,vector<vector<int>> &s){
        queue<TreeNode*> p,q;
        p.push(root);
        vector<int> t;
        q=p;
        while(!p.empty()){
            p=queue<TreeNode*>();
            t.clear();
            while(!q.empty()){
                TreeNode* tmp=q.front();
                t.push_back(tmp->val);
                q.pop();
                if(tmp->left)  p.push(tmp->left);
                if(tmp->right)  p.push(tmp->right);
            }
            q=p;
            s.push_back(t);
            
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > s;
        if(root!=NULL)  levelView(root,s);
        return s;
    }
};
// @lc code=end

