/*
 * @lc app=leetcode.cn id=1685 lang=cpp
 *
 * [1685] 有序数组中差绝对值之和
 */

// @lc code=start
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int leftsum = 0, n = nums.size(),rightsum =0;
        for(int i=0;i<n;i++) 
            rightsum+=nums[i];
        for (int i = 0; i < n; i++) {
            rightsum -= nums[i];
            leftsum += nums[i];
            nums[i] = rightsum - nums[i] * (n - i -1) - leftsum + nums[i] * (i + 1);
        }
        return nums;
    }
};
// @lc code=end

