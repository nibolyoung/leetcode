/*
 * @lc app=leetcode.cn id=1545 lang=cpp
 *
 * [1545] 找出第 N 个二进制字符串中的第 K 位
 */

// @lc code=start
class Solution {
public:
    char findKthBit(int n, int k) {
        if(k%8==1||k%8==5||k%8==6)  return '0';
        else if(k%8==2||k%8==3||k%8==7)  return '1';
        string s="1";
        while(s.length()*4<k){
            string t=s;
            reverse(t.begin(),t.end());
            s+="1";
            for(char c:t)  s+=(c=='1'?'0':'1');
        }
        return s[k/4-1];
    }
};
// @lc code=end

