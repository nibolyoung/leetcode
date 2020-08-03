/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
 */

// @lc code=start
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if(nums.size()<1)  return 0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
                sum+=(nums[i]==nums[j]?1:0);
        }
        return sum;
    }
};
// @lc code=end

