/*
 * @lc app=leetcode.cn id=1539 lang=cpp
 *
 * [1539] 第 k 个缺失的正整数
 */

// @lc code=start
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int,bool> p;
        for(auto a:arr) p[a]=true;
        int now=0,find=0;
        while(++now){
            if(!p[now])  find++;
            if(find==k)  break;
        }
        return now;
    }
};
// @lc code=end

