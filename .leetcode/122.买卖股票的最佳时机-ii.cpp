/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)  return 0;
        int res=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]-prices[i-1]>0)
                res+=prices[i]-prices[i-1];
        }
        return res;
    }
};
// @lc code=end

