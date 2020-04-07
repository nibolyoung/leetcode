/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    vector<vector<int> > levelView(TreeNode* root){
        vector<vector<int> > s;
        vector<int> t;
        queue<TreeNode*> p,q;
        p.push(root);
        q=p;
        while(!p.empty()){
            p=queue<TreeNode*>();
            t.clear();
            while(!q.empty()){
                TreeNode* tmp=q.front();
                q.pop();
                t.push_back(tmp->val);
                if(tmp->left!=NULL)  p.push(tmp->left);
                if(tmp->right!=NULL)  p.push(tmp->right);
            }
            s.push(t);
            q=p;
        }
        return s;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==0)  return NULL;
        TreeNode* root=new TreeNode(preorder[0]);
        
    }
};
// @lc code=end

