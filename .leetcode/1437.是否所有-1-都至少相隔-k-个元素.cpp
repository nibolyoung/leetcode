/*
 * @lc app=leetcode.cn id=1437 lang=cpp
 *
 * [1437] 是否所有 1 都至少相隔 k 个元素
 */

// @lc code=start
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int start=-1,end=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(start==-1)  start=i;
                else{
                    if(end!=-1)  start=end;
                    end=i;
                }
                if(start>-1&&end>-1&&end-start<k+1)  return false;
            }
        }
        return true;
    }
};
// @lc code=end

