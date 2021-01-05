/*
 * @lc app=leetcode.cn id=1576 lang=cpp
 *
 * [1576] 替换所有的问号
 */

// @lc code=start
class Solution {
    char nextChar(char c){
        if(c=='?') return 'a';
        return (c=='z')?'a':(char)((int)c+1);
    }
    char newChar(char a,char b){
        char next=nextChar(a);
        if(b=='?')  return next;
        if(next==b) return nextChar(b);
        return next;
    }
public:
    string modifyString(string s) {
        if(s.length()==0)  return s;
        if(s.length()==1)  return (s[0]=='?')?"a":s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
                if(i==0)  s[i]=nextChar(s[1]);
                else if(i==s.length()-1)  s[i]=nextChar(s[i-1]);
                else s[i]=newChar(s[i-1],s[i+1]);
            }
        }
        return s;
    }
};
// @lc code=end

