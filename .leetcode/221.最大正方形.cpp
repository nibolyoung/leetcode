/*
 * @lc app=leetcode.cn id=221 lang=cpp
 *
 * [221] 最大正方形
 */

// @lc code=start
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        if(m==0)  return 0;
        int n=matrix[0].size();
        vector<vector<int>>  s(2,vector<int>(n,0));
        int sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                s[i%2][j]=0;
                if(matrix[i][j]=='1'){
                    s[i%2][j]=1;
                    if(i>0&&j>0)  s[i%2][j]+=min(min(s[(i-1)%2][j],s[i%2][j-1]),s[(i-1)%2][j-1]);
                }
                sum=max(sum,s[i%2][j]);
            }
        }
        return sum*sum;
    }
};
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
// @lc code=end

