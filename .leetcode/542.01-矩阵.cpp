/*
 * @lc app=leetcode.cn id=542 lang=cpp
 *
 * [542] 01 矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        if(matrix.empty())return matrix;
        if(matrix[0].empty())return matrix;
        vector<pair<int, int>>direction = {{1,0},{-1,0},{0,1},{0,-1}};
        int m = int(matrix.size());
        int n = int(matrix[0].size());
        vector<vector<int>>dp(m,vector<int>(n,INT_MAX-1e4));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if(matrix[i][j]==0){
                    dp[i][j]=0;
                }else{
                    if(i>0)  dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
                    if(j>0)  dp[i][j] = min(dp[i][j],dp[i][j-1]+1);
                }
            }
        }
        for (int i=m-1; i>=0; i--) {
            for (int j=n-1; j>=0; j--) {
                if(matrix[i][j]==0)  dp[i][j]=0;
                else{
                    if(i<m-1)  dp[i][j] = min(dp[i][j],dp[i+1][j]+1);
                    if(j<n-1)  dp[i][j] = min(dp[i][j],dp[i][j+1]+1);
                }
            }
        }
        return dp;
    }
};
// @lc code=end

