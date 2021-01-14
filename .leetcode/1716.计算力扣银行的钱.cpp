/*
 * @lc app=leetcode.cn id=1716 lang=cpp
 *
 * [1716] 计算力扣银行的钱
 */

// @lc code=start
class Solution {
public:
    int totalMoney(int n) {
        int a=n/7,b=n%7;
        return 21*a+(7*a*(a+1))/2+a*b+(b*(b+1))/2;
    }
};
// @lc code=end

