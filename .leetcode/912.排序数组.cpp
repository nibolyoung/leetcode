/*
 * @lc app=leetcode.cn id=912 lang=cpp
 *
 * [912] 排序数组
 */

// @lc code=start
class Solution {
    void quickSort(vector<int> &s,int low,int high){
        if(low>high)  return;
        int l=low,r=high,val=s[low];
        while(l<r){
            while(l<r&&s[r]>=val)  r--;
            if(l<r)  s[l++]=s[r];
            while(l<r&&s[l]<=val)  l++;
            if(l<r)  s[r--]=s[l];
        }
        s[l]=val;
        quickSort(s,low,l+1);
        quickSort(s,r-1,high);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
};
// @lc code=end

