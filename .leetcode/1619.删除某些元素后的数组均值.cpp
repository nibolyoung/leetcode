/*
 * @lc app=leetcode.cn id=1619 lang=cpp
 *
 * [1619] 删除某些元素后的数组均值
 */

// @lc code=start
class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int start=arr.size()*0.05;
        int end=arr.size()-arr.size()*0.05;
        double sum=0;
        for(int i=start;i<=end-1;i++)  sum+=arr[i];
        return sum/(double)(end-start);
    }
};
// @lc code=end

