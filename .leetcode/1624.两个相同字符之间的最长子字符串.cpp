/*
 * @lc app=leetcode.cn id=1624 lang=cpp
 *
 * [1624] 两个相同字符之间的最长子字符串
 */

// @lc code=start
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int res=-1;
        map<char,int> p;
        for(int i=0;i<s.length();i++){
            if(p[s[i]]>0){
                if(res<i-p[s[i]])  res=i-p[s[i]];
            }else{
                p[s[i]]=i+1;
            }
        }
        return res;
    }
};
// @lc code=end

