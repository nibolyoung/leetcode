/*
 * @lc app=leetcode.cn id=1323 lang=cpp
 *
 * [1323] 6 和 9 组成的最大数字
 */

// @lc code=start
class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(int i=0;i<s.length();i++){
            if(s[i]=='6')  return num+3*pow(10,s.length()-1-i);
        }
        return num;
    }
};
// @lc code=end

