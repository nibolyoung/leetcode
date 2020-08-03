/*
 * @lc app=leetcode.cn id=1518 lang=cpp
 *
 * [1518] 换酒问题
 */

// @lc code=start
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        while(numBottles>=numExchange){
            sum+=(numBottles/numExchange);
            numBottles=numBottles/numExchange+numBottles%numExchange;
        }
        return sum;
    }
};
// @lc code=end

