/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
            s.push_back(root->val);
            help(root->left,s);
            help(root->right,s);
        }
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> s;
        help(root,s);
        sort(s.begin(),s.end());
        if(k==1)  return s[0];
        int i=1,max=s[0];
        for(auto val:s){
            if(val>max){
                i++;
                max=val;
                if(i==k)  return val;
            }
        }
        return s[s.size()-1];
    }
};
// @lc code=end

