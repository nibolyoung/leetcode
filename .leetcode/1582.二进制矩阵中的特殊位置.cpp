/*
 * @lc app=leetcode.cn id=1582 lang=cpp
 *
 * [1582] 二进制矩阵中的特殊位置
 */

// @lc code=start
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        map<int,int> p,q;
        vector<vector<int> > s;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    p[i]++;
                    q[j]++;
                    s.push_back({i,j});
                }
            }
        }
        int sum=0;
        for(auto v:s){
            if(p[v[0]]==1&&q[v[1]]==1)  sum++;
        }
        return sum;
    }
};
// @lc code=end

