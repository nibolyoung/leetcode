/*
 * @lc app=leetcode.cn id=1544 lang=cpp
 *
 * [1544] 整理字符串
 */

// @lc code=start
class Solution {
public:
    string makeGood(string s) {
        if(s.length()<2)  return s;
        bool willBreak=true;
        for(int i=0;i<s.length()-1;i++){
            if((s[i]>='a'&&s[i]<='z'&&s[i+1]==(char)(s[i]-32))||
                (s[i]>='A'&&s[i]<='Z'&&s[i+1]==(char)(s[i]+32))){
                s=s.substr(0,i)+s.substr(i+2,s.length()-i-2);
                willBreak=false;
                break;
            }
        }
        return willBreak?s:makeGood(s);
    }
};
// @lc code=end

