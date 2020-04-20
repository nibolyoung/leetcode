/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
    void help(vector<vector<char>>& s,int i,int j,int m,int n){
        s[i][j]='0';
        if(i>0&&s[i-1][j]=='1')  help(s,i-1,j,m,n);
        if(i<m-1&&s[i+1][j]=='1')  help(s,i+1,j,m,n);
        if(j>0&&s[i][j-1]=='1')  help(s,i,j-1,m,n);
        if(j<n-1&&s[i][j+1]=='1')  help(s,i,j+1,m,n);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)  return 0;
        int m=grid.size(),n=grid[0].size(),sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    help(grid,i,j,m,n);
                    sum++;
                }
            }
        }
        return sum;
    }
};
// @lc code=end

