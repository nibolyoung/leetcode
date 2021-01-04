/*
 * @lc app=leetcode.cn id=1672 lang=cpp
 *
 * [1672] 最富有客户的资产总量
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0,tmp=0;
        for(auto i:accounts){
            tmp=0;
            for(auto j:i)  tmp+=j;
            if(tmp>max) max=tmp;
        }
        return max;
    }
};
// @lc code=end

