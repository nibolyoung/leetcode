/*
 * @lc app=leetcode.cn id=1480 lang=cpp
 *
 * [1480] 一维数组的动态和
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i>0)  nums[i]+=nums[i-1];
        }
        return nums;
    }
};
// @lc code=end

