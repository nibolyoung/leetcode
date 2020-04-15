/*
 * @lc app=leetcode.cn id=840 lang=cpp
 *
 * [840] 矩阵中的幻方
 */

// @lc code=start
class Solution {
    bool legel(int m,int n,int i,int j){
        return i-1>=0&&i+1<m&&j-1>=0&&j+1<n;
    }
    bool isMagicSquare(vector<vector<int> > &s,int i,int j){
        int m=s.size(),n=s[0].size();
        if(legel(m,n,i,j)){
            int sum=s[i][j-1]+s[i][j]+s[i][j+1];
            map<int,bool> p;
            for(int a=i-1;a<=i+1;a++){
                int tmp=0;
                for(int b=j-1;b<=j+1;b++){
                    tmp+=s[a][b];
                    p[s[a][b]]=true;
                }
                if(tmp!=sum)  return false;
            }
            for(int i=1;i<=9;i++)
                if(!p[i])  return false;
            for(int a=j-1;a<=j+1;a++){
                int tmp=0;
                for(int b=i-1;b<=i+1;b++)  tmp+=s[b][a];
                if(tmp!=sum)  return false;
            }
            if(sum!=s[i-1][j-1]+s[i][j]+s[i+1][j+1])  return false;
            if(sum!=s[i-1][j+1]+s[i][j]+s[i+1][j-1])  return false;
            return true;
        }
        return false;
    }
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size()<3||grid[0].size()<3)  return 0;
        int m=grid.size(),n=grid[0].size(),res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isMagicSquare(grid,i,j))  res++;
            }
        }
        return res;
    }
};
// @lc code=end

