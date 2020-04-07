/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)  return "";
        if(strs.size()==1)  return strs[0];
        int minLen=strs[0].length();
        for(auto str:strs){
            if(str.length()<minLen)  minLen=str.length();
        }
        string res="";
        for(int i=0;i<minLen;i++){
            char c=strs[0][i];
            bool is=true;
            for(auto s:strs){
                if(s[i]!=c){
                    is=false;
                    break;
                }
            }
            if(is)  res+=c;
            else  return res;
        }
        return res;
    }
};
// @lc code=end

