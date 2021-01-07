/*
 * @lc app=leetcode.cn id=1686 lang=cpp
 *
 * [1686] 石子游戏 VI
 */

// @lc code=start
class Solution {
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.first>b.first;
    }
public:
    int stoneGameVI(vector<int>& av, vector<int>& bv) {
        vector<pair<int,int>> vec;
        int n=av.size();
        for(int i=0;i<n;i++) vec.push_back({av[i]+bv[i],i});
        sort(vec.begin(),vec.end(),cmp);
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(i%2==0) a+=av[vec[i].second];
            else b+=bv[vec[i].second];
        }
        return a==b?0:a>b?1:-1;
    }
};
// @lc code=end

