/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0,nowMin = INT_MAX;
        for(auto p:prices){
            nowMin=min(nowMin,p);
            res=max(res,p-nowMin);
        }
        return res;
    }
};
// @lc code=end

