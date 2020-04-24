/*
 * @lc app=leetcode.cn id=1346 lang=cpp
 *
 * [1346] 检查整数及其两倍数是否存在
 */

// @lc code=start
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> p;
        for(auto a:arr){
            if(p[a*2]||(p[a/2]&&a%2==0)) return true;
            else p[a]++;
        }
        return false;
    }
};
// @lc code=end

