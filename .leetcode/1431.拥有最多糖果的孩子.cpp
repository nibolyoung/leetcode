/*
 * @lc app=leetcode.cn id=1431 lang=cpp
 *
 * [1431] 拥有最多糖果的孩子
 */

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxNum = 0;
        vector<bool> rtn;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>maxNum)  maxNum = candies[i];
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= maxNum)  rtn.push_back(true);
            else  rtn.push_back(false); 
        }
        return rtn;
    }
};
// @lc code=end

