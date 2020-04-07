/*
 * @lc app=leetcode.cn id=1262 lang=cpp
 *
 * [1262] 可被三整除的最大和
 */

// @lc code=start
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        if(nums.size()==1)  return nums[0]%3!=0?0:nums[0];  
        int sum=0;
        for(int i=0;i<nums.size();i++)  sum+=nums[i];
    }
};
// @lc code=end

