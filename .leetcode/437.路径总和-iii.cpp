/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    void levelView(TreeNode* root){
        vector<int> s;
        queue<TreeNode*> p,q;
        q.push(root);
        p=q;
        while(!p.empty()){
            p=queue<TreeNode*>();
            s.clear();
            while(!q.empty()){
                TreeNode* tmp=q.front();
                q.pop();
                if(tmp->left!=NULL)  p.push(tmp->left);
                if(tmp->right!=NULL)  p.push(tmp->right);
                s.push_back(tmp->val);
            }
            for(int i=0;i<s.size();i++)  cout<<s[i]<<" ";
            cout<<endl;
            q=p;
        }
    }
    void preView(TreeNode* root){
        if(root!=NULL){
            cout<<root->val<<endl;
            preView(root->left);
            preView(root->right);
        }
    }
public:
    int pathSum(TreeNode* root, int sum) {
        levelView(root);
        return 0;
    }
};
// @lc code=end

