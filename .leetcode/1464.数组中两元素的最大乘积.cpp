/*
 * @lc app=leetcode.cn id=1464 lang=cpp
 *
 * [1464] 数组中两元素的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return max((nums[0]-1)*(nums[1]-1),(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
    }
};
// @lc code=end

