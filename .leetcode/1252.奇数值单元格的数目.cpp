/*
 * @lc app=leetcode.cn id=1252 lang=cpp
 *
 * [1252] 奇数值单元格的数目
 */

// @lc code=start
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int sum=0;
        vector<vector<int> > s(n);
        for(auto i:s)  i.resize(m);
        for(int i=0;i<indices.size();i++){
             for(int j=0;j<n;j++)  s[j][indices[i][0]]++;
             for(int k=0;k<m;k++)  s[indices[i][1]][k]++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)  sum+=(s[i][j]%2==0?0:1);
        }
        return sum;
    }
};
// @lc code=end

