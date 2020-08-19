/*
 * @lc app=leetcode.cn id=1551 lang=cpp
 *
 * [1551] 使数组中所有元素相等的最小操作数
 */

// @lc code=start
class Solution {
public:
    int minOperations(int n) {
        int sum = 0;
        for(int i=0;i<n/2;i++)  sum+=(n-(2*i+1));
        return sum;
    }
};
// @lc code=end

