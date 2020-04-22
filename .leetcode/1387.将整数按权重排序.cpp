/*
 * @lc app=leetcode.cn id=1387 lang=cpp
 *
 * [1387] 将整数按权重排序
 */

// @lc code=start
class Solution {
    static bool cmp(vector<int> &s,vector<int> &t){
        if(s[1]<t[1])  return true;
        if(s[1]==t[1])  return s[0]<t[0];
        return false;
    }
    int getValue(int n){
        int res=0,x=n;
        if(x==1)  return 1;
        while(x>1){
            if(x%2==0)  x/=2;
            else x=3*x+1;
            res++;
        }
        return res;
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<vector<int> > s;
        for(int i=lo;i<=hi;i++)  s.push_back({i,getValue(i)});
        sort(s.begin(),s.end(),cmp);
        return s[k-1][0];
    }
};
// @lc code=end

