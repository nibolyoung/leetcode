/*
 * @lc app=leetcode.cn id=1608 lang=cpp
 *
 * [1608] 特殊数组的特征值
 */

// @lc code=start
class Solution {
public:
    int specialArray(vector<int>& nums) {
        map<int,int> p;
        for(auto i:nums) p[i]++;
        for(int i=1;i<=nums.size();i++){
            int sum=0;
            for(auto itr=p.begin();itr!=p.end();++itr){
                if(itr->first>=i)  sum+=itr->second;
            }
            if(sum>0&&sum==i)  return sum;
        }
        return -1;
    }
};
// @lc code=end

