/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,bool> p;
        map<int,int> q;
        for(int i=0;i<nums.size();i++){
            if(p[target-nums[i]])
                return {q[target-nums[i]],i};
            p[nums[i]]=true;
            q[nums[i]]=i;
        }
        return {};
    }
};
// @lc code=end

