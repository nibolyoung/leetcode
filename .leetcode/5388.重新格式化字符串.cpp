/*
 * @lc app=leetcode.cn id=5388 lang=cpp
 *
 * [5388] 重新格式化字符串
 */

// @lc code=start
class Solution {
public:
    string reformat(string s) {
        string sa="",sb="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9')  sa+=s[i];
            else sb+=s[i];
        }
        if(abs((int)(sa.length()-sb.length()))>1)  return "";
        string tmp=(sa.length()>sb.length()?sa:sb);
        sb=(sa.length()>sb.length()?sb:sa);
        sa=tmp;
        s="";
        for(int i=0;i<sb.length();i++){
            s+=sa[i];
            s+=sb[i];
        }
        if(sa.length()>sb.length())  s+=sa[sa.length()-1];
        return s;
    }
};
// @lc code=end

