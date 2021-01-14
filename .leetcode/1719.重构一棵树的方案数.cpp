/*
 * @lc app=leetcode.cn id=1719 lang=cpp
 *
 * [1719] 重构一棵树的方案数
 */

// @lc code=start
class Solution {
    bool m[501][501]={0};
    vector<int> v[501];
public:
    int checkWays(vector<vector<int>>& pairs) {
        for(auto&A:pairs){
            int i=A[0],j=A[1];
            v[i].push_back(j);
            v[j].push_back(i);
            m[i][j]=m[j][i]=true;
        }
        vector<int> idx;
        for(int i=1;i<=500;i++)if(v[i].size()){
            idx.push_back(i);
            m[i][i]=1;
        }
        sort(idx.begin(),idx.end(),[&](int x,int y)->bool{return v[x].size()<v[y].size();});
        bool equal=false;
        int root_count=0;
        for(int i=0;i<idx.size();i++){
            int j;
            for(j=i+1;j<idx.size()&&!m[idx[i]][idx[j]];j++);
            if(j<idx.size()){
                if(v[idx[i]].size()==v[idx[j]].size()){
                    equal=true;
                }
                for(int a:v[idx[i]]){
                    if(!m[a][idx[j]])return 0;
                }
            }
            else root_count++;
        }
        if(root_count>1)return 0;
        if(equal)return 2;
        else return 1;
    }
};
// @lc code=end

