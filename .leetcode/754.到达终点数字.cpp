/*
 * @lc app=leetcode.cn id=754 lang=cpp
 *
 * [754] 到达终点数字
 */

// @lc code=start
class Solution {
public:
    int reachNumber(int target) {
        if(target == 0)  return 0;
        int t = abs(target),i = 0,s = 0;
        while(s % 2 != t % 2 || s < t){
            i++;
            s += i;
        }
        return i;
    }
};
// @lc code=end

