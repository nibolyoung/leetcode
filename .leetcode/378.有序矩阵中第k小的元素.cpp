/*
 * @lc app=leetcode.cn id=378 lang=cpp
 *
 * [378] 有序矩阵中第K小的元素
 */

// @lc code=start
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> s;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)  s.push_back(matrix[i][j]);
        }
        sort(s.begin(),s.end());
        return s[k-1];
    }
};
// @lc code=end

